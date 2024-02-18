#include "player.h"
#include "level.h"
#include "util.h"
#include <cmath>
#include <iostream>

void Player::update(float dt)
{

	float delta_time = dt / 1000.0f;

	movePlayer(dt);
	
	
	float lerp_speed = 0.8f; 
	m_state->m_global_offset_x = lerp(m_state->m_global_offset_x, m_state->getCanvasWidth() / 2.0f - m_pos_x, lerp_speed);
	m_state->m_global_offset_y = lerp(m_state->m_global_offset_y, m_state->getCanvasHeight() / 2.0f - m_pos_y, lerp_speed);

	if (m_state->getLevel()->collectedcoins == 3 && m_state->getLevel()->m_animation_playing && !level2) {
		

		float playerPosX = -8.7f;
		float playerPosY =  -8.7f;

		
		m_state->m_global_offset_x = playerPosX;
		m_state->m_global_offset_y = playerPosY;
		if (!level2)
			show_player = false;
	}
	else 
		show_player = true;
	

	if (m_animation_state == ATTACK)
	{
		
		attackBox.m_pos_x = 4.3f;
		attackBox.m_pos_y = 2.2f;
		attackBox.m_width = 0.87f;
		attackBox.m_height = 0.6f;
	}
	else
	{
		
		attackBox.m_pos_x = 0;
		attackBox.m_pos_y = 0;
		attackBox.m_width = 0; 
		attackBox.m_height = 0; 
	}
	if (graphics::getKeyState(graphics::SCANCODE_R) && m_gameOver)
	{

		graphics::stopMusic();
		
		if (!level2)
		{
			m_pos_x = 8.5f;
			m_pos_y = static_cast<float>(bitmapHeight - 84) * layerHeight - m_height / 2.0f;;
		}
		else 
		{
			m_pos_x = 18.5f;
			m_pos_y = static_cast<float>(bitmapHeight - 39) * layerHeight - m_height / 2.0f;;
		}
		
		
		
		m_animation_state = IDLE;
		opacity = 0.0f;
		m_vx = 0.0f;
		m_vy = 0.0f;
		m_jump_count = 0;
		m_w_key_down = false;
		forwardDir = 1;
		m_state->getLevel()->collectedcoins = 0;
		m_state->getLevel()->coincollected1 = false;
		m_state->getLevel()->coincollected2 = false;
		m_state->getLevel()->coincollected3 = false;
		m_state->getLevel()->coincollected4 = false;
		m_state->getLevel()->coincollected5 = false;
		m_state->getLevel()->coincollected6 = false;
		m_isDeathAnimationPlayed = false;
		m_state->getLevel()->m_gameTime = 0.0f;
		m_gameOver = false;
		lives = 3;
		
	}
	if (invincibilityTimer > 0.0f) {
		invincibilityTimer -= dt;
	}

	GameObject::update(dt);

	
}

void Player::draw()
{
	//Player Diraction
	if (graphics::getKeyState(graphics::SCANCODE_A)) {
		forwardDir = -1;
	}

	if (graphics::getKeyState(graphics::SCANCODE_D)) {
		forwardDir = 1;
	}
	
	
	
	animationtime += 0.07f;

	// Fall Trigger
	if (m_vy > 0.0f && !graphics::getKeyState(graphics::SCANCODE_K) && !graphics::getKeyState(graphics::SCANCODE_L) && m_animation_state != DEATH && show_player && !m_gameOver )
	{
		// If the player is moving to the left
		if (forwardDir == -1)
		{
			// Calculate the current sprite index based on the animation time
			int sprite = (int)fmod(animationtime, m_spritesfallleft.size());
			// Set the player's texture to the current sprite in the falling left animation
			m_brush_player.texture = m_spritesfallleft[sprite];
			// Draw the player at the center of the canvas
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
		// If the player is moving to the right
		else if (forwardDir == 1)
		{
			// Calculate the current sprite index based on the animation time
			int sprite = (int)fmod(animationtime, m_spritesfall.size());
			// Set the player's texture to the current sprite in the falling right animation
			m_brush_player.texture = m_spritesfall[sprite];
			// Draw the player at the center of the canvas
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
	}
	

// Idle Trigger
// Check if the player is not moving horizontally or vertically, is not pressing the 'K' or 'L' keys, is not in the death animation state, is visible, and the game is not over
if (!graphics::getKeyState(graphics::SCANCODE_A) && !graphics::getKeyState(graphics::SCANCODE_D) 
	 && m_vy == 0.0f && !graphics::getKeyState(graphics::SCANCODE_K) && !graphics::getKeyState(graphics::SCANCODE_L) && m_animation_state != DEATH && show_player && !m_gameOver )
{
	// If the player's current animation state is not idle
	if (m_animation_state != IDLE)
	{
		// Set the player's animation state to idle and reset the animation time
		m_animation_state = IDLE;
		animationtime = 0;
	}
	// If the player is facing to the left
	if (forwardDir == -1)
	{
		// Calculate the current sprite index based on the animation time
		int sprite = (int)fmod(animationtime, m_spritesidleleft.size());
		// Set the player's texture to the current sprite in the idle left animation
		m_brush_player.texture = m_spritesidleleft[sprite];
		// Draw the player at the center of the canvas
		graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
	}
	// If the player is facing to the right
	else if (forwardDir == 1)
	{
		// Calculate the current sprite index based on the animation time
		int sprite = (int)fmod(animationtime, m_spritesidle.size());
		// Set the player's texture to the current sprite in the idle right animation
		m_brush_player.texture = m_spritesidle[sprite];
		// Draw the player at the center of the canvas
		graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
	}
}

// Jump Trigger
// Check if the player is moving upwards, is not pressing the 'K' or 'L' keys, is not in the death animation state, is visible, and the game is not over
if (m_vy < 0.0f && !graphics::getKeyState(graphics::SCANCODE_K) && !graphics::getKeyState(graphics::SCANCODE_L) && m_animation_state != DEATH && show_player && !m_gameOver)
{
	// If the player is facing to the left
	if (forwardDir == -1)
	{
		// Calculate the current sprite index based on the animation time
		int sprite = (int)fmod(animationtime, m_spritesjumpleft.size());
		// Set the player's texture to the current sprite in the jump left animation
		m_brush_player.texture = m_spritesjumpleft[sprite];
		// Draw the player at the center of the canvas
		graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
	}
	// If the player is facing to the right
	else if (forwardDir == 1)
	{
		// Calculate the current sprite index based on the animation time
		int sprite = (int)fmod(animationtime, m_spritesjump.size());
		// Set the player's texture to the current sprite in the jump right animation
		m_brush_player.texture = m_spritesjump[sprite];
		// Draw the player at the center of the canvas
		graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
	}
}

	//Run Trigger
	if (graphics::getKeyState(graphics::SCANCODE_A) && (m_vy == 0.0f) && !graphics::getKeyState(graphics::SCANCODE_K) && !graphics::getKeyState(graphics::SCANCODE_L) && show_player && !m_gameOver 
		|| graphics::getKeyState(graphics::SCANCODE_D) && (m_vy == 0.0f) && !graphics::getKeyState(graphics::SCANCODE_K) && !graphics::getKeyState(graphics::SCANCODE_L) && show_player && !m_gameOver)
	{
		if (m_animation_state != RUN)
		{
			m_animation_state = RUN;
			animationtime = 0;
		}
		if (forwardDir == -1)
		{
			int sprite = (int)fmod(100.0f - m_pos_x * 2.0f, m_spritesleft.size());
			m_brush_player.texture = m_spritesleft[sprite];
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
		else if (forwardDir == 1)
		{
			int sprite = (int)fmod(100.0f - m_pos_x * 2.0f, m_spritesright.size());
			m_brush_player.texture = m_spritesright[sprite];
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}

	}


	//LightAttack Trigger
	if (graphics::getKeyState(graphics::SCANCODE_K) && !graphics::getKeyState(graphics::SCANCODE_L) && m_animation_state != DEATH && show_player && !m_gameOver)
	{
		if (m_animation_state != ATTACK)
		{
			m_animation_state = ATTACK;
			animationtime = 0;
		}
		if (forwardDir == -1)
		{
			int sprite = (int)fmod(animationtime * 2, m_spritesLightAttackleft.size());
			m_brush_player.texture = m_spritesLightAttackleft[sprite];
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
			return;
		}
		else if (forwardDir == 1)
		{
			int sprite = (int)fmod(animationtime * 2, m_spritesLightAttack.size());
			m_brush_player.texture = m_spritesLightAttack[sprite];
			if (m_state->m_debugging)
			{
				graphics::Brush br;
				br.fill_color[0] = 1.0f;
				br.fill_color[1] = 0.0f;
				br.fill_color[2] = 0.0f;
				br.fill_opacity = 0.3f;
				graphics::drawRect(attackBox.m_pos_x, attackBox.m_pos_y, attackBox.m_width, attackBox.m_height, br);
			}
			
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
	}

	//HeavyAttack Trigger
	// HeavyAttack Trigger
	// Check if the player is pressing the 'L' key, is not pressing the 'K' key, is not in the death animation state, is visible, and the game is not over
	if (graphics::getKeyState(graphics::SCANCODE_L) && !graphics::getKeyState(graphics::SCANCODE_K) && m_animation_state != DEATH && show_player && !m_gameOver)
	{
		// If the player's current animation state is not heavy attack
		if (m_animation_state != HEAVYATTACK)
		{
			// Set the player's animation state to heavy attack and reset the animation time
			m_animation_state = HEAVYATTACK;
			animationtime = 0;
		}
		// If the player is facing to the left
		if (forwardDir == -1)
		{
			// Calculate the current sprite index based on the animation time
			int sprite = (int)fmod(animationtime * 2, m_spritesHeavyAttackleft.size());
			// Set the player's texture to the current sprite in the heavy attack left animation
			m_brush_player.texture = m_spritesHeavyAttackleft[sprite];
			// Draw the player at the center of the canvas
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
			return;
		}
		// If the player is facing to the right
		else if (forwardDir == 1)
		{
			// Calculate the current sprite index based on the animation time
			int sprite = (int)fmod(animationtime * 2, m_spritesHeavyAttack.size());
			// Set the player's texture to the current sprite in the heavy attack right animation
			m_brush_player.texture = m_spritesHeavyAttack[sprite];
			// Draw the player at the center of the canvas
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
	}

	// Hit Trigger
	// Check if the player got hit and is not in the death animation state
	if (gothit && !m_animation_state == DEATH)
	{
		// If the player is facing to the left
		if (forwardDir == -1)
		{
			// Calculate the current sprite index based on the animation time
			int sprite = (int)fmod(animationtime, m_spriteshitleft.size());
			// Set the player's texture to the current sprite in the hit left animation
			m_brush_player.texture = m_spriteshitleft[sprite];
			// Draw the player at the center of the canvas
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
		// If the player is facing to the right
		else if (forwardDir == 1)
		{
			// Calculate the current sprite index based on the animation time
			int sprite = (int)fmod(animationtime, m_spriteshit.size());
			// Set the player's texture to the current sprite in the hit right animation
			m_brush_player.texture = m_spriteshit[sprite];
			// Draw the player at the center of the canvas
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
	}
	if (m_animation_state == DEATH)
	{
		if (forwardDir == -1)
		{
			int sprite = (int)fmod(animationtime, m_spritesDeath.size());
			m_brush_player.texture = m_spritesDeathleft[sprite];
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
		else if (forwardDir == 1)
		{
			int sprite = (int)fmod(animationtime, m_spritesDeath.size());
			m_brush_player.texture = m_spritesDeath[sprite];
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
		}
		else if (forwardDir == 1)
		{
			m_brush_player.texture = m_spritesDeath.back();
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
			
		}
		else
		{
			m_brush_player.texture = m_spritesDeathleft.back();
			graphics::drawRect(m_state->getCanvasWidth() * 0.5f, m_state->getCanvasHeight() * 0.5f, playerWidth, playerHeight, m_brush_player);
			
		}
		if (m_isDeathAnimationPlayed)
		{
			m_gameOver = true;
		}
	}
	
	
	if (m_state->m_debugging)
		debugDraw();
}


void Player::init()
{
	
		
		m_pos_x = 8.5f;
		m_pos_y = m_pos_y = static_cast<float>(100 - 86) * 0.5f - 1.0 / 2.0f;


		m_state->m_global_offset_x = m_state->getCanvasWidth() / 2.0f - m_pos_x;
		m_state->m_global_offset_y = m_state->getCanvasHeight() / 2.0f - m_pos_y;

		m_brush_player.fill_opacity = 1.0f;
		m_brush_player.outline_opacity = 0.0f;
	
	m_spritesDeath.push_back(m_state->getFullAssetPath("death1.png"));
	m_spritesDeath.push_back(m_state->getFullAssetPath("death2.png"));
	m_spritesDeath.push_back(m_state->getFullAssetPath("death3.png"));
	m_spritesDeath.push_back(m_state->getFullAssetPath("death4.png"));
	m_spritesDeath.push_back(m_state->getFullAssetPath("death5.png"));
	m_spritesDeath.push_back(m_state->getFullAssetPath("death6.png"));
	m_spritesDeath.push_back(m_state->getFullAssetPath("death7.png"));

	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft1.png"));
	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft2.png"));
	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft3.png"));
	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft4.png"));
	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft5.png"));
	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft6.png"));
	m_spritesDeathleft.push_back(m_state->getFullAssetPath("deathleft7.png"));

	//Idle Animation
	m_spritesidle.push_back(m_state->getFullAssetPath("idle1.png"));
	m_spritesidle.push_back(m_state->getFullAssetPath("idle2.png"));
	m_spritesidle.push_back(m_state->getFullAssetPath("idle3.png"));
	m_spritesidle.push_back(m_state->getFullAssetPath("idle4.png"));
	m_spritesidleleft.push_back(m_state->getFullAssetPath("idleleft1.png"));
	m_spritesidleleft.push_back(m_state->getFullAssetPath("idleleft2.png"));
	m_spritesidleleft.push_back(m_state->getFullAssetPath("idleleft3.png"));
	m_spritesidleleft.push_back(m_state->getFullAssetPath("idleleft4.png"));

	//Run Animation
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft1.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft2.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft3.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft4.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft5.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft6.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft7.png"));
	m_spritesleft.push_back(m_state->getFullAssetPath("runleft8.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile00.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile01.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile02.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile03.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile04.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile05.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile06.png"));
	m_spritesright.push_back(m_state->getFullAssetPath("tile07.png"));

	//Jump Animation
	m_spritesjump.push_back(m_state->getFullAssetPath("jump0.png"));
	m_spritesjump.push_back(m_state->getFullAssetPath("jump1.png"));
	m_spritesjumpleft.push_back(m_state->getFullAssetPath("jumpleft0.png"));
	m_spritesjumpleft.push_back(m_state->getFullAssetPath("jumpleft1.png"));

	//Fall Animation
	m_spritesfall.push_back(m_state->getFullAssetPath("fall1.png"));
	m_spritesfall.push_back(m_state->getFullAssetPath("fall2.png"));	
	m_spritesfallleft.push_back(m_state->getFullAssetPath("fallleft0.png"));
	m_spritesfallleft.push_back(m_state->getFullAssetPath("fallleft1.png"));

	//LightAttack Animation
	m_spritesLightAttack.push_back(m_state->getFullAssetPath("attack1.png"));
	m_spritesLightAttack.push_back(m_state->getFullAssetPath("attack2.png"));
	m_spritesLightAttack.push_back(m_state->getFullAssetPath("attack3.png"));
	m_spritesLightAttack.push_back(m_state->getFullAssetPath("attack4.png"));
	m_spritesLightAttackleft.push_back(m_state->getFullAssetPath("attackleft1.png"));
	m_spritesLightAttackleft.push_back(m_state->getFullAssetPath("attackleft2.png"));
	m_spritesLightAttackleft.push_back(m_state->getFullAssetPath("attackleft3.png"));
	m_spritesLightAttackleft.push_back(m_state->getFullAssetPath("attackleft4.png"));

	//HeavyAttack Animation
	m_spritesHeavyAttack.push_back(m_state->getFullAssetPath("HeavyAttack1.png"));
	m_spritesHeavyAttack.push_back(m_state->getFullAssetPath("HeavyAttack2.png"));
	m_spritesHeavyAttack.push_back(m_state->getFullAssetPath("HeavyAttack3.png"));
	m_spritesHeavyAttack.push_back(m_state->getFullAssetPath("HeavyAttack4.png"));
	m_spritesHeavyAttackleft.push_back(m_state->getFullAssetPath("HeavyAttackleft1.png"));
	m_spritesHeavyAttackleft.push_back(m_state->getFullAssetPath("HeavyAttackleft2.png"));
	m_spritesHeavyAttackleft.push_back(m_state->getFullAssetPath("HeavyAttackleft3.png"));
	m_spritesHeavyAttackleft.push_back(m_state->getFullAssetPath("HeavyAttackleft4.png"));
	
	m_spriteshit.push_back(m_state->getFullAssetPath("hit1.png"));
	m_spriteshit.push_back(m_state->getFullAssetPath("hit2.png"));
	m_spriteshit.push_back(m_state->getFullAssetPath("hit3.png"));
	m_spriteshitleft.push_back(m_state->getFullAssetPath("hitleft1.png"));
	m_spriteshitleft.push_back(m_state->getFullAssetPath("hitleft2.png"));
	m_spriteshitleft.push_back(m_state->getFullAssetPath("hitleft3.png"));
	


	

	


	
		
	

	// Adjust width for finer collision detection
	m_width = playerCollisionWidth;
	m_height = playerCollisionHeight;
}

void Player::debugDraw()
{
	
	SETCOLOR(debug_brush.fill_color, 1, 0.3f, 0);
	SETCOLOR(debug_brush.outline_color, 1, 0.1f, 0);
	debug_brush.fill_opacity = 0.1f;
	debug_brush.outline_opacity = 1.0f;
	graphics::drawRect(m_state->getCanvasWidth()*0.5f, m_state->getCanvasHeight() * 0.5f, m_width, m_height, debug_brush);
	
	char s[20];
	sprintf_s(s,"(%5.2f, %5.2f)", m_pos_x, m_pos_y);
	SETCOLOR(debug_brush.fill_color, 1, 0, 0);
	debug_brush.fill_opacity = 1.0f;
	graphics::drawText(m_state->getCanvasWidth() * 0.5f - 0.4f, m_state->getCanvasHeight() * 0.5f - 0.6f, 0.15f, s, debug_brush);
}


void Player::movePlayer(float dt)
{
	float delta_time = dt / 1000.0f;

	isTouchingWall = isCollidingSideways;
	// jump only when not in flight:



	if (isTouchingWall == true)
	{
		// if player is touching left wall, push to the right
		if (m_vx <= 0) {
			m_vx = m_accel_horizontal * 0.02f;
			isTouchingWallLeft = true;

		}
		// if player is touching right wall, push to the left
		else if (m_pos_x + m_width >= m_state->getCanvasWidth()) {
			m_vx = -m_accel_horizontal * 0.02f;
			isTouchingWallRight = true;
		}
		else
		{
			isTouchingWallLeft = false;
			isTouchingWallRight = false;

		}
	}
	else
	{
		isTouchingWallLeft = false;
		isTouchingWallRight = false;
	}

	// jump only when not in flight or touching a wall:
	if (graphics::getKeyState(graphics::SCANCODE_W) && m_animation_state != DEATH)
	{
		if (!m_w_key_down && m_jump_count < m_max_jump_count)
		{
			if (m_jump_count == 0)
			{
				m_vy = -m_accel_vertical * 0.02f; // full jump velocity for the first jump
			}
			else
			{
				m_vy = -m_accel_vertical * 0.02f; // half jump velocity for the second jump
			}
			m_jump_count++;
			m_w_key_down = true;
		}
	}
	else
	{
		m_w_key_down = false;
		m_vy -= (graphics::getKeyState(graphics::SCANCODE_S) ? m_accel_vertical : 0.0f) * -0.005f; // not delta_time!! Burst 
	}
	

	// Stage 2 code: Acceleration-based velocity
	move = 0.0f;
	if (graphics::getKeyState(graphics::SCANCODE_A) && m_animation_state != DEATH && !m_gameOver && !m_state->getLevel()->m_animation_playing)
	{
		if (!isTouchingWallLeft)
		{
			move -= 1.0f;

		}
	}
	if (graphics::getKeyState(graphics::SCANCODE_D) && m_animation_state != DEATH && !m_gameOver && !m_state->getLevel()->m_animation_playing)
	{
		if (!isTouchingWallRight)
		{

			move += 1.0f;
		}

	}

	m_vx = std::min<float>(m_max_velocity, m_vx + delta_time * move * m_accel_horizontal);
	m_vx = std::max<float>(-m_max_velocity, m_vx);


	// friction
	m_vx -= 0.2f * m_vx / (0.1f + fabs(m_vx));

	// apply static friction threshold
	if (fabs(m_vx) < 0.01f)
		m_vx = 0.0f;

	// adjust horizontal position
	m_pos_x += m_vx * delta_time;


	// add gravity
	m_vy += delta_time * m_gravity;

	// adjust vertical position
	m_pos_y += m_vy * delta_time;

}


