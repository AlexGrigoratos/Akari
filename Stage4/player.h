#pragma once

#include "gameobject.h"
#include <sgg/graphics.h>
#include "box.h"


class Player : public Box, public GameObject
{
	graphics::Brush debug_brush;
	// animated player
	std::vector<std::string> m_spritesidle;
	std::vector<std::string> m_spritesleft;
	std::vector<std::string> m_spritesright;
	std::vector<std::string> m_spritesjump;
	std::vector<std::string> m_spritesfall;
	std::vector<std::string> m_spritesfallleft;
	std::vector<std::string> m_spritesjumpleft;
	std::vector<std::string> m_spritesLightAttack;
	std::vector<std::string> m_spritesLightAttackleft;
	std::vector<std::string> m_spritesidleleft;
	std::vector<std::string> m_spritesHeavyAttack;
	std::vector<std::string> m_spritesHeavyAttackleft;
	std::vector<std::string> m_spritesDeath;
	std::vector<std::string> m_spritesDeathleft;
	std::vector<std::string> m_spriteshitleft;
	std::vector<std::string> m_spriteshit;
	graphics::Brush m_brush_player;

	Box attackBox;
	const float m_accel_horizontal = 20.0f;
	const float m_accel_vertical = 200.1f;
	const float m_max_velocity = 5.0f;
	const float m_gravity = 10.0f;
public:

	//AnimationState
	enum AnimationState
	{
		RUN,
		ATTACK,
		HEAVYATTACK,
		DEATH,
		IDLE,

	};

	// Player class properties
	float playerWidth = 1.8f; // Width of the player
	float playerHeight = 1.8f; // Height of the player
	float playerCollisionWidth = 0.20f; // Width of the player's collision box
	float playerCollisionHeight = 0.50f; // Height of the player's collision box
	bool isCollidingSideways = false; // Flag to check if the player is colliding sideways
	bool isTouchingWall = false; // Flag to check if the player is touching a wall
	bool isWall = false; // Flag to check if the player is a wall
	bool isTouchingWallRight = false; // Flag to check if the player is touching a wall on the right
	bool isTouchingWallLeft = false; // Flag to check if the player is touching a wall on the left
	bool isCollidingDown = false; // Flag to check if the player is colliding downwards
	float m_vx = 0.0f; // Player's velocity in the x direction
	float m_vy = 0.0f; // Player's velocity in the y direction
	float move = 0.0f; // Player's movement
	float animationtime = 0.0f; // Time for the player's animation
	int m_jump_count = 0; // Count of the player's jumps
	bool deathsound = false; // Flag to check if the death sound has been played
	const int m_max_jump_count = 2; // Maximum number of jumps the player can make
	bool m_w_key_down = false; // Flag to check if the 'w' key is down
	int forwardDir = 1; // Direction in which the player is moving forward
	bool m_isDeathAnimationPlayed; // Flag to check if the death animation has been played
	bool m_ishitanimationPlayed; // Flag to check if the hit animation has been played
	bool m_gameOver = false; // Flag to check if the game is over
	int bitmapHeight = 100; // Height of the bitmap
	float layerHeight = 0.5f; // Height of the layer
	float opacity = 0.0f; // Opacity of the player
	float opacity1 = 1.0f; // Opacity of the player (for fading in)
	float opacity2 = 0.0f; // Opacity of the player (for fading out)
	int lives = 3; // Number of lives the player has
	bool level2 = false; // Flag to check if the player is on level 2
	bool show_player; // Flag to check if the player should be shown
	bool gothit = false; // Flag to check if the player got hit
	float invincibilityTimer = 0.0f; // Timer for the player's invincibility
	AnimationState m_animation_state = IDLE; // Current animation state of the player

	Box getAttackBox() const { return attackBox; } // Method to get the player's attack box

public:
	void update(float dt) override; // Method to update the player's state
	void draw() override; // Method to draw the player
	void init() override; // Method to initialize the player
	void movePlayer(float dt); // Method to move the player
	bool isInvincible() { // Method to check if the player is invincible
		return invincibilityTimer > 0.0f;
	}
	void getHit() { // Method to handle the player getting hit
		if (!isInvincible()) {
			lives--;
			if (lives > 0) {
				graphics::playSound(m_state->getFullAssetPath("hit.mp3"), 0.5f);
			}
			else {
				if (!deathsound) {
					graphics::playSound(m_state->getFullAssetPath("hit.mp3"), 0.5f);
				}
				if (!deathsound) {
					graphics::playSound(m_state->getFullAssetPath("death.mp3"), 0.5f);
					deathsound = true;
				}
				m_animation_state = DEATH;
				m_gameOver = true;
			}
			invincibilityTimer = 2000.0f;
		}
	}
	float lerp(float a, float b, float t) { // Method to perform linear interpolation
		return a + t * (b - a);
	}

	Player(std::string name) : GameObject(name) {} // Constructor
protected:
	void debugDraw(); // Method to draw debug information

	// dynamic motion control

};
