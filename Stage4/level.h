#pragma once

#include "gameobject.h"
#include <vector>
#include <list>
#include <string>
#include <sgg/graphics.h>
#include "player.h"

class Level : public GameObject
{
	graphics::Brush m_brush_background; // Brush for the background
	graphics::Brush m_brush_background2; // Second brush for the background
	graphics::Brush m_brush_kunai; // Brush for the kunai

	std::vector<GameObject*> m_static_objects; // Vector of static objects
	std::list<GameObject*> m_dynamic_objects; // List of dynamic objects

	// Vectors of boxes for different game elements
	std::vector<Box> m_blocks; // Collidable blocks
	std::vector<Box> m_blocks_no_collide; // Non-collidable blocks
	std::vector<Box> m_blocks_no_items; // Blocks without items
	std::vector<Box> m_blocks_coin1; // Blocks with the first coin
	std::vector<Box> m_blocks_coin2; // Blocks with the second coin
	std::vector<Box> m_blocks_coin3; // Blocks with the third coin
	std::vector<Box> m_blocks_coin4; // Blocks with the fourth coin
	std::vector<Box> m_blocks_coin5; // Blocks with the fifth coin
	std::vector<Box> m_blocks_coin6; // Blocks with the sixth coin
	std::vector<Box> m_attack; // Attack boxes
	std::vector<Box> m_button; // Button boxes
	std::vector<Box> m_button_message; // Button message boxes
	std::vector<Box> m_door; // Door boxes
	std::vector<Box> m_triggerbox; // Trigger box boxes
	std::vector<Box> m_findbutton; // Find button boxes
	std::vector<Box> m_spikes; // Spike boxes
	std::vector<Box> m_triggerboxlvl2; // Level 2 trigger box boxes
	std::vector<Box> m_tempfloor; // Temporary floor boxes
	std::vector<Box> m_lakedamage; // Lake damage boxes
	std::vector<Box> m_blocks_enemy; // Enemy blocks
	std::vector<Box> m_lake; // Lake boxes
	std::vector<Box> m_lake1; // First set of lake boxes
	std::vector<Box> m_lake2; // Second set of lake boxes
	std::vector<Box> m_lake3; // Third set of lake boxes
	std::vector<Box> m_lake4; // Fourth set of lake boxes
	std::vector<std::string> m_block_names; // Names of blocks
	std::vector<std::string> m_block_no_names; // Names of non-collidable blocks
	std::vector<std::string> m_block_items; // Names of item blocks
	std::vector<std::string> m_findbutton_names; // Names of find button boxes
	std::vector<std::string> m_door_names; // Names of door boxes
	std::vector<std::string> m_door_open; // Names of open door boxes
	std::vector<Box> m_blocks_4x4; // 4x4 blocks

public:
	const float m_block_size = 0.5f; // Size of blocks
	graphics::Brush m_block_brush_no; // Brush for non-collidable blocks
	graphics::Brush m_block_brush; // Brush for collidable blocks
	graphics::Brush m_block_brush_debug; // Brush for debug blocks
	graphics::Brush m_block_lake; // Brush for lake blocks

	float m_center_x = 5.0f; // X position of the center
	float m_center_y = 5.0f; // Y position of the center

	float m_timer = 0.0f; // Timer
	float m_block_timer = 0.0f; // Block timer
	bool m_block_visible = false; // Flag to check if the block is visible
	bool m_gameOver = false; // Flag to check if the game is over


public:
	// Variables for Level 1
	float collectedcoins = 0; // Number of collected coins
	bool coincollected1; // Flag to check if the first coin has been collected
	bool coincollected2; // Flag to check if the second coin has been collected
	bool coincollected3; // Flag to check if the third coin has been collected
	bool coincollected4; // Flag to check if the fourth coin has been collected
	bool coincollected5; // Flag to check if the fifth coin has been collected
	bool coincollected6; // Flag to check if the sixth coin has been collected
	bool buttonmessage = false; // Flag to check if the button message is displayed
	bool triggerbox = false; // Flag to check if the trigger box is active
	bool triggerboxlvl2 = false; // Flag to check if the trigger box for level 2 is active
	bool buttonpressed = false; // Flag to check if the button has been pressed
	bool revealbutton = false; // Flag to check if the button is revealed
	bool spikesactive = false; // Flag to check if the spikes are active
	float m_lakeTargetY; // Target Y position of the lake
	float lakemoved = 0.0f; // Amount the lake has moved
	float m_lakeSpeed = 0.0005f; // Speed of the lake
	float m_lakeoriginal_y; // Original Y position of the lake
	float lakePosX; // X position of the lake
	float lakePosY; // Y position of the lake
	bool m_animation_played = false; // Flag to check if the animation has been played
	bool m_anim_played = true; // Flag to check if the animation has been played
	bool m_animation_playing = false; // Flag to check if the animation is playing
	bool musicstop = false; // Flag to check if the music has stopped
	bool start_menu = true; // Flag to check if the start menu is displayed
	bool sound_played = false; // Flag to check if the sound has been played
	bool info_menu = false; // Flag to check if the info menu is displayed
	bool m_space_pressed = false; // Flag to check if the space bar has been pressed
	bool enemyspawned = false; // Flag to check if the enemy has spawned
	bool m_next_lvl = false; // Flag to check if the next level is active
	float m_gameOverImageSize = 0.0f; // Size of the game over image
	float m_gameTime = 0.0f; // Game time
	bool pausegame = true; // Flag to check if the game is paused
	bool music_started = true; // Flag to check if the music has started

	// Methods to draw different elements of the level
	void drawBlock(int i);
	void drawNonCollidingBlock(int i);
	void drawItems(int i);
	void drawCoin1();
	void drawCoin2();
	void drawCoin3();
	void drawCoin4();
	void drawCoin5();
	void drawCoin6();
	void drawAttack();
	void drawButton();
	void drawButtonPressed();
	void drawButtonMessage();
	void drawTriggerBox();
	void drawTriggerBox2(int i);
	void drawTempfloor(int i);
	void drawLakedamage(int i);
	void drawFindButton(int i);
	void drawEnemy(int i);
	void drawDoor(int i);
	void drawDoorOpen(int i);
	void drawSpikes(int i);
	void drawSpikesActive(int i);
	void drawLake(int i);
	void checkCollisions(); // Method to check collisions

public:
	// Methods to update, draw, and initialize the level
	void update(float dt) override;
	void draw() override;
	void init() override;
	void onMouseDown(std::uint32_t button, float mx, float my); // Method to handle mouse down events

	// Constructor and destructor
	Level(const std::string& name = "Level0");
	~Level() override;

};