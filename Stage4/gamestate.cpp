#include "gamestate.h"
#include "level.h"
#include "player.h"
#include "newenemy.h"
#include "coin.h"
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

GameState::GameState()// constructor
{
	//m_asset_path = ASSET_PATH;
}


// Destructor for GameState
GameState::~GameState()
{
	// If there is a current level, delete it
	if (m_current_level)
		delete m_current_level;
}

// Function to get the unique instance of GameState
GameState* GameState::getInstance()
{
	// If there is no unique instance, create one
	if (!m_unique_instance)
	{
		m_unique_instance = new GameState();
	}
	// Return the unique instance
	return m_unique_instance;
}

// Function to initialize GameState
bool GameState::init()
{
	// Create a new level and initialize it
	m_current_level = new Level("1.lvl");
	m_current_level->init();

	// Create a new player and initialize it
	m_player = new Player("Player");
	m_player->init();

	// Create a new coin and initialize it
	m_coin = new Coin("Coin");
	m_coin->init();

	// Create a new enemy and initialize it
	m_enemy = new Enemy("Enemy");
	m_enemy->init();

	// Preload bitmaps and set the font
	graphics::preloadBitmaps(getAssetDir());
	graphics::setFont(m_asset_path + "OpenSans-Regular.ttf");

	// Initialize the current level again
	m_current_level->init();

	// Return true to indicate successful initialization
	return true;
}

// Function to draw the current level
void GameState::draw()
{
	// If there is no current level, return
	if (!m_current_level)
		return;

	// Draw the current level
	m_current_level->draw();
}

// Function to update the current level
void GameState::update(float dt)
{
	// Skip an update if a long delay is detected 
	// to avoid messing up the collision simulation
	if (dt > 500) // ms
		return;

	// Avoid too quick updates
	float sleep_time = std::max(17.0f - dt, 0.0f);
	if (sleep_time > 0.0f)
	{
		std::this_thread::sleep_for(std::chrono::duration<float, std::milli>(sleep_time));
	}

	// If there is no current level, return
	if (!m_current_level)
		return;

	// Update the current level
	m_current_level->update(dt);

	// Check if the debug key is pressed
	m_debugging = graphics::getKeyState(graphics::SCANCODE_0);
}

// Function to get the full asset path
std::string GameState::getFullAssetPath(const std::string& asset)
{
	return m_asset_path + asset;
}

// Function to get the asset directory
std::string GameState::getAssetDir()
{
	return m_asset_path;
}

// Initialize the unique instance to nullptr
GameState* GameState::m_unique_instance = nullptr;