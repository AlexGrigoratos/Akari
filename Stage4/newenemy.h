#pragma once

#include <sgg/graphics.h>
#include "box.h"
#include "gameobject.h"


// Enemy class, inheriting from Box and GameObject
class Enemy : public Box, public GameObject
{
    // Vectors to hold the paths to the enemy's sprite images
    std::vector<std::string> m_spritesidleRightEnemy;
    std::vector<std::string> m_spritesidleleftEnemy;
    std::vector<std::string> m_spritesleftEnemy;
    std::vector<std::string> m_spritesrightEnemy;
    std::vector<std::string> m_spritesLightAttackRightEnemy;
    std::vector<std::string> m_spritesLightAttackLeftEnemy;

    // Brush to draw the enemy
    graphics::Brush m_brush_enemy;

    // Brush for debugging
    graphics::Brush debug_brush;

public:
    // Enemy's position
    float m_Epos_x = 0.0f; 
    float m_Epos_y = 0.0f;
    float i = 0.5f;
    float getPosX();

public:
    // Enumeration for the enemy's animation state
    enum AnimationState
    {
        PATROL_RIGHT,
        PATROL_LEFT,
        IDLE_RIGHT,
        IDLE_LEFT
    };

    // Current animation state of the enemy
    AnimationState m_animation_state_of_enemy = PATROL_RIGHT;

    // Timer for the enemy's state
    float m_state_timer = 0.0f;

    // Enemy's velocity
    float m_vx_enemy = 0.0f;
    float m_vy_enemy = 0.0f;
    // Time for the enemy's animation
    float animationtimeEnemy = 0.0f;
    // Direction of the enemy
    const float direction = 1.0f;
    // Maximum velocity of the enemy
    const float m_max_velocity_enemy = 1.0f;
    // Horizontal acceleration of the enemy
    const float m_accel_horizontal_enemy = 0.001f;
    // Duration of the idle state
    const float idleDuration = 2000.0f;

public:
    // Constructor
    Enemy(std::string name) : GameObject(name) {}
    // Update, draw, and initialization methods
    void update(float dt) override;
    void draw(float x, float y);
    void init();
    // Method to move the enemy
    void moveEnemy(float dt);
    // Method to get the enemy's position
    float getPosition();

private:
    // Flag for the enemy's direction
    bool Flag = true;
    // Timer for the idle state
    float idleTimer = 2000.0f;
    // Flag for the enemy's moving direction
    bool movingRight = false;
};