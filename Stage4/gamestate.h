#pragma once
#include <iostream>
#include <string>




// GameState class
class GameState
{
private:
	// Singleton instance of GameState
	static GameState* m_unique_instance;

	// Path to the assets directory
	const std::string m_asset_path = "assets\\";

	// Canvas dimensions
	const float m_canvas_width = 8.0f;
	const float m_canvas_height = 4.5f;

	// Current level and player
	class Level* m_current_level = 0;
	class Player* m_player = 0;

public:
	// Enemy, coin, and light attack objects
	class Enemy* m_enemy = 0;
	class Coin* m_coin = 0;
	class Player* m_lightattack = 0;

	// Constructor
	GameState();

public:
	// Global offsets and camera settings
	float m_global_offset_x = 0.0f;
	float m_global_offset_y = 0.0f;
	float cameraDelay = 0;
	float targetCameraX = 0;
	float targetCameraY = 0;
	float cameraMoveTime = 0;
	bool cameraFollowsPlayer = true;

	// Debugging flag
	bool m_debugging = false;

public:
	// Destructor
	~GameState();
	// Singleton instance getter
	static GameState* getInstance();

	// Initialization, drawing, and updating methods
	bool init();
	void draw();
	void update(float dt);

	// Asset path getters
	std::string getFullAssetPath(const std::string& asset);
	std::string getAssetDir();

	// Canvas dimension getters
	float getCanvasWidth() { return m_canvas_width; }
	float getCanvasHeight() { return m_canvas_height; }

	// Game object getters
	class Player* getPlayer() { return m_player; }
	class Level* getLevel() { return m_current_level; }
	class Enemy* getEnemy() { return m_enemy; }
	class Coin* getCoin() { return m_coin; }
};