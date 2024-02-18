#include "NewEnemy.h"
#include "util.h"
#include <cmath>
#include <iostream>       
#include "level.h"

#include "box.h"







// Function to update the enemy's state
void Enemy::update(float dt)
{
    // Convert the time elapsed since the last frame from milliseconds to seconds
    float delta_time = dt / 1000.0f;

    // Increment the state timer by the time elapsed since the last frame
    m_state_timer += dt;

    // Switch statement based on the enemy's current animation state
    switch (m_animation_state_of_enemy)
    {
    case PATROL_RIGHT:
        // If the enemy has been patrolling to the right for 2 seconds or more
        if (m_state_timer >= 2000.0f)
        {
            // Change the enemy's animation state to idle to the right
            m_animation_state_of_enemy = IDLE_RIGHT;
            // Reset the state timer
            m_state_timer = 0.0f;
        }
        break;
    case IDLE_RIGHT:
        // If the enemy has been idling to the right for 2 seconds or more
        if (m_state_timer >= 2000.0f)
        {
            // Change the enemy's animation state to patrol to the left
            m_animation_state_of_enemy = PATROL_LEFT;
            // Reset the state timer
            m_state_timer = 0.0f;
        }
        break;
    case PATROL_LEFT:
        // If the enemy has been patrolling to the left for 2 seconds or more
        if (m_state_timer >= 2000.0f)
        {
            // Change the enemy's animation state to idle to the left
            m_animation_state_of_enemy = IDLE_LEFT;
            // Reset the state timer
            m_state_timer = 0.0f;
        }
        break;
    case IDLE_LEFT:
        // If the enemy has been idling to the left for 2 seconds or more
        if (m_state_timer >= 2000.0f)
        {
            // Change the enemy's animation state to patrol to the right
            m_animation_state_of_enemy = PATROL_RIGHT;
            // Reset the state timer
            m_state_timer = 0.0f;
        }
        break;
    }

    // Move the enemy based on the time elapsed since the last frame
    moveEnemy(dt);
    // Call the base class's update function
    GameObject::update(dt);
}




void Enemy::draw(float x, float y)
{

    float w = 0.8f;
    float h = 0.8f;
    animationtimeEnemy += 0.07f;
    float offsetX = m_state->m_global_offset_x;
    float offsetY = m_state->m_global_offset_y;


    




    if (m_animation_state_of_enemy == IDLE_LEFT || m_animation_state_of_enemy == IDLE_RIGHT) {
        if (IDLE_RIGHT) {
            int sprite = (int)fmod(animationtimeEnemy, m_spritesidleRightEnemy.size());
            m_brush_enemy.texture = m_spritesidleleftEnemy[sprite];

        }
        else {
            int sprite = (int)fmod(animationtimeEnemy, m_spritesidleleftEnemy.size());
            m_brush_enemy.texture = m_spritesidleRightEnemy[sprite];

        }
    }
    else if (m_animation_state_of_enemy == PATROL_RIGHT || m_animation_state_of_enemy == PATROL_LEFT) {
        if (PATROL_RIGHT) {
            int sprite = (int)fmod(animationtimeEnemy, m_spritesrightEnemy.size());
            m_brush_enemy.texture = m_spritesrightEnemy[sprite];

        }
        else {
            int sprite = (int)fmod(animationtimeEnemy, m_spritesleftEnemy.size());
            m_brush_enemy.texture = m_spritesleftEnemy[sprite];

        }
    }
    

    graphics::drawRect(x, y, w, h, m_brush_enemy);


}






void Enemy::init() {
    m_brush_enemy.fill_opacity = 1.0f;
    m_brush_enemy.outline_opacity = 0.0f;

    m_spritesidleRightEnemy.push_back(m_state->getFullAssetPath("enemyidle1.png"));
    m_spritesidleRightEnemy.push_back(m_state->getFullAssetPath("enemyidle2.png"));
    m_spritesidleRightEnemy.push_back(m_state->getFullAssetPath("enemyidle3.png"));
    m_spritesidleRightEnemy.push_back(m_state->getFullAssetPath("enemyidle4.png"));
    m_spritesidleleftEnemy.push_back(m_state->getFullAssetPath("enemyidleleft1.png"));
    m_spritesidleleftEnemy.push_back(m_state->getFullAssetPath("enemyidleleft2.png"));
    m_spritesidleleftEnemy.push_back(m_state->getFullAssetPath("enemyidleleft3.png"));
    m_spritesidleleftEnemy.push_back(m_state->getFullAssetPath("enemyidleleft4.png"));

    m_spritesleftEnemy.push_back(m_state->getFullAssetPath("enemyleft1.png"));
    m_spritesleftEnemy.push_back(m_state->getFullAssetPath("enemyleft2.png"));
    m_spritesleftEnemy.push_back(m_state->getFullAssetPath("enemyleft3.png"));
    m_spritesleftEnemy.push_back(m_state->getFullAssetPath("enemyleft4.png"));
    m_spritesleftEnemy.push_back(m_state->getFullAssetPath("enemyleft5.png"));
    m_spritesleftEnemy.push_back(m_state->getFullAssetPath("enemyleft6.png"));

    m_spritesrightEnemy.push_back(m_state->getFullAssetPath("enemy1.png"));
    m_spritesrightEnemy.push_back(m_state->getFullAssetPath("enemy2.png"));
    m_spritesrightEnemy.push_back(m_state->getFullAssetPath("enemy3.png"));
    m_spritesrightEnemy.push_back(m_state->getFullAssetPath("enemy4.png"));
    m_spritesrightEnemy.push_back(m_state->getFullAssetPath("enemy5.png"));
    m_spritesrightEnemy.push_back(m_state->getFullAssetPath("enemy6.png"));


    m_spritesLightAttackRightEnemy.push_back(m_state->getFullAssetPath("attack1.png"));
    m_spritesLightAttackRightEnemy.push_back(m_state->getFullAssetPath("attack2.png"));
    m_spritesLightAttackRightEnemy.push_back(m_state->getFullAssetPath("attack3.png"));
    m_spritesLightAttackRightEnemy.push_back(m_state->getFullAssetPath("attack4.png"));

    m_spritesLightAttackLeftEnemy.push_back(m_state->getFullAssetPath("attackleft1.png"));
    m_spritesLightAttackLeftEnemy.push_back(m_state->getFullAssetPath("attackleft2.png"));
    m_spritesLightAttackLeftEnemy.push_back(m_state->getFullAssetPath("attackleft3.png"));
    m_spritesLightAttackLeftEnemy.push_back(m_state->getFullAssetPath("attackleft4.png"));




}
void Enemy::moveEnemy(float dt) {
    float speed = 0.000001f; // Adjust speed as needed
    float leftPoint = 0.0f; // Left point
    float rightPoint = 0.5f * m_state->getLevel()->m_block_size; // Right point

    if (movingRight) {
        m_Epos_x += speed * dt;
        if (m_Epos_x >= rightPoint) { // Reached right point
            movingRight = false;
        }
    }
    else {
        m_Epos_x -= speed * dt;
        if (m_Epos_x <= leftPoint) { // Reached left point
            movingRight = true;
        }
    }
}
float Enemy::getPosX()  {
    return m_Epos_x;
}

