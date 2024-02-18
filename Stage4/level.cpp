#include "level.h"
#include <sgg/graphics.h>
#include "player.h"
#include "box.h"
#include "coin.h"
#include "gamestate.h"
#include "newenemy.h"
#include "util.h"
#include <iostream>
#include "Coin.h"



// Function to draw a block at a specific index
void Level::drawBlock(int i)
{
	// Get the block and its name at the given index
	Box& box = m_blocks[i];
	std::string& name = m_block_names[i];

	// Calculate the x and y position of the block
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush
	m_block_brush.texture = m_state->getFullAssetPath(name);

	// Draw the block
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw the block with the debug brush
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw a non-colliding block at a specific index
void Level::drawNonCollidingBlock(int i)
{
	// Get the non-colliding block and its name at the given index
	Box& box = m_blocks_no_collide[i];
	std::string& name = m_block_no_names[i];

	// Calculate the x and y position of the non-colliding block
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush
	m_block_brush.texture = m_state->getFullAssetPath(name);

	// Draw the non-colliding block
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw the non-colliding block with the debug brush
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw an item at a specific index
void Level::drawItems(int i)
{
	// Get the item and its name at the given index
	Box& box = m_blocks_no_items[i];
	std::string& name = m_block_items[i];

	// Calculate the x and y position of the item
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush
	m_block_brush.texture = m_state->getFullAssetPath(name);

	// Draw the item
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw the item with the debug brush
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the first coin
void Level::drawCoin1()
{
	// Get the first coin from the blocks
	Box& box = m_blocks_coin1[0];

	// Calculate the x and y position of the coin
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Draw the coin at the calculated position with a specific scale
	m_state->getCoin()->draw(x, y, 0.6f, 0.6f);

	// If debugging is enabled, draw a rectangle at the coin's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw the second coin
void Level::drawCoin2()
{
	// Get the second coin from the blocks
	Box& box = m_blocks_coin2[0];

	// Calculate the x and y position of the coin
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Draw the coin at the calculated position with a specific scale
	m_state->getCoin()->draw(x, y, 0.6f, 0.6f);

	// If debugging is enabled, draw a rectangle at the coin's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the third coin
void Level::drawCoin3()
{
	// Get the third coin from the blocks
	Box& box = m_blocks_coin3[0];

	// Calculate the x and y position of the coin
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Draw the coin at the calculated position with a specific scale
	m_state->getCoin()->draw(x, y, 0.6f, 0.6f);

	// If debugging is enabled, draw a rectangle at the coin's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw the fourth coin
void Level::drawCoin4()
{
	// Get the fourth coin from the blocks
	Box& box = m_blocks_coin4[0];

	// Calculate the x and y position of the coin
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Draw the coin at the calculated position with a specific scale
	m_state->getCoin()->draw(x, y, 0.6f, 0.6f);

	// If debugging is enabled, draw a rectangle at the coin's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the fifth coin
void Level::drawCoin5()
{
	// Get the fifth coin from the blocks
	Box& box = m_blocks_coin5[0];

	// Calculate the x and y position of the coin
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Draw the coin at the calculated position with a specific scale
	m_state->getCoin()->draw(x, y, 0.6f, 0.6f);

	// If debugging is enabled, draw a rectangle at the coin's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw the sixth coin
void Level::drawCoin6()
{
	// Get the sixth coin from the blocks
	Box& box = m_blocks_coin6[0];

	// Calculate the x and y position of the coin
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Draw the coin at the calculated position with a specific scale
	m_state->getCoin()->draw(x, y, 0.6f, 0.6f);

	// If debugging is enabled, draw a rectangle at the coin's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the attack
void Level::drawAttack()
{
	// Get the attack from the blocks
	Box& box = m_attack[0];

	// Set the x and y position of the attack
	float x = (4.3f);
	float y = (2.2f);

	// Set the fill opacity of the block brush to 0
	m_block_brush_no.fill_opacity = 0.0f;

	// Draw the attack at the specified position with a specific size
	graphics::drawRect(x, y, 0.87f, 0.6, m_block_brush_no);

	// If debugging is enabled, draw a rectangle at the attack's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, 0.87f, 0.6, m_block_brush_debug);
}

// Function to draw the button
void Level::drawButton()
{
	// Get the button from the blocks
	Box& box = m_button[0];

	// Calculate the x and y position of the button
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the button image
	m_block_brush.texture = m_state->getFullAssetPath("item_66.png");

	// Draw the button at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the button's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the pressed button
void Level::drawButtonPressed()
{
	// Get the button from the blocks
	Box& box = m_button[0];

	// Calculate the x and y position of the button
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the pressed button image
	m_block_brush.texture = m_state->getFullAssetPath("item_67.png");

	// Draw the pressed button at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the button's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw the button message
void Level::drawButtonMessage()
{
	// Get the button message from the blocks
	Box& box = m_button_message[0];

	// Calculate the x and y position of the button message
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the button message image
	m_block_brush.texture = m_state->getFullAssetPath("item_43.png");

	// Draw the button message at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the button message's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the trigger box
void Level::drawTriggerBox()
{
	// Get the trigger box from the blocks
	Box& box = m_triggerbox[0];

	// Calculate the x and y position of the trigger box
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the trigger box image
	m_block_brush.texture = m_state->getFullAssetPath("item_42.png");

	// Draw the trigger box at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the trigger box's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw the find button
void Level::drawFindButton(int i)
{
	// Get the find button from the blocks
	Box& box = m_findbutton[i];
	// Get the name of the find button
	std::string& name = m_findbutton_names[i];

	// Calculate the x and y position of the find button
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the find button image
	m_block_brush.texture = m_state->getFullAssetPath(name);

	// Draw the find button at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the find button's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
// Function to draw the door
void Level::drawDoor(int i)
{
	// Get the door from the blocks
	Box& box = m_door[i];
	// Get the name of the door
	std::string& name = m_door_names[i];

	// Calculate the x and y position of the door
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the door image
	m_block_brush.texture = m_state->getFullAssetPath(name);

	// Draw the door at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the door's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}

// Function to draw the open door
void Level::drawDoorOpen(int i)
{
	// Get the door from the blocks
	Box& box = m_door[i];
	// Get the name of the open door
	std::string& name = m_door_open[i];

	// Calculate the x and y position of the open door
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	// Set the texture of the block brush to the open door image
	m_block_brush.texture = m_state->getFullAssetPath(name);

	// Draw the open door at the calculated position with a specific size
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	// If debugging is enabled, draw a rectangle at the open door's position for visual debugging
	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);
}
void Level::drawSpikes(int i)
{
	Box& box = m_spikes[i];


	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	m_block_brush.texture = m_state->getFullAssetPath("item_58.png");

	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);

}
void Level::drawSpikesActive(int i)
{
	Box& box = m_spikes[i];


	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);


	m_block_brush.texture = m_state->getFullAssetPath("item_59.png");

	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);

}
void Level::drawLake(int i)//draw the lake	
{
	Box& box = m_lake[i];
	Box& box1 = m_lake1[i];
	Box& box2 = m_lake2[i];
	Box& box3 = m_lake3[i];
	Box& box4 = m_lake4[i];

	// Calculate the x and y position of the lake
	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	float x1 = (box1.m_pos_x + m_state->m_global_offset_x);
	float y1 = (box1.m_pos_y + m_state->m_global_offset_y);

	float x2 = (box2.m_pos_x + m_state->m_global_offset_x);
	float y2 = (box2.m_pos_y + m_state->m_global_offset_y);

	float x3 = (box3.m_pos_x + m_state->m_global_offset_x);
	float y3 = (box3.m_pos_y + m_state->m_global_offset_y);

	float x4 = (box4.m_pos_x + m_state->m_global_offset_x);
	float y4 = (box4.m_pos_y + m_state->m_global_offset_y);

	lakePosX = m_lake[0].m_pos_x;
	lakePosY = m_lake[0].m_pos_y;
	m_block_lake.outline_opacity = 0.0f;
	m_block_lake.texture = m_state->getFullAssetPath("item_45.png");
	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_lake);
	m_block_lake.texture = m_state->getFullAssetPath("item_46.png");
	graphics::drawRect(x1, y1, m_block_size, m_block_size, m_block_lake);
	m_block_lake.texture = m_state->getFullAssetPath("item_46.png");
	graphics::drawRect(x2, y2, m_block_size, m_block_size, m_block_lake);
	m_block_lake.texture = m_state->getFullAssetPath("item_46.png");
	graphics::drawRect(x3, y3, m_block_size, m_block_size, m_block_lake);
	m_block_lake.texture = m_state->getFullAssetPath("item_46.png");
	graphics::drawRect(x4, y4, m_block_size, m_block_size, m_block_lake);

	if (m_state->m_debugging)//	// If debugging is enabled, draw a rectangle at the lake's position for visual debugging
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);

}
void Level::drawEnemy(int i)//draw the enemy 
{
	if (m_state->getEnemy()->isAlive())

	{

		Box& box = m_blocks_enemy[i];

		float x = (box.m_pos_x + m_state->m_global_offset_x);
		float y = (box.m_pos_y + m_state->m_global_offset_y);

		box.m_pos_x += m_state->getEnemy()->m_Epos_x;





		m_state->getEnemy()->draw(x, y);


	}
}
void Level::drawTriggerBox2(int i)// triggerBox
{
	Box& box = m_triggerboxlvl2[i];


	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	m_block_brush.texture = m_state->getFullAssetPath("item_42.png");

	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);

}
void Level::drawTempfloor(int i)//draw the tempfloor
{
	Box& box = m_tempfloor[i];

	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	m_block_brush.texture = m_state->getFullAssetPath("item_42.png");

	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);

}
void Level::drawLakedamage(int i)//draw the Lakedamage
{
	Box& box = m_lakedamage[i];

	float x = (box.m_pos_x + m_state->m_global_offset_x);
	float y = (box.m_pos_y + m_state->m_global_offset_y);

	m_block_brush.texture = m_state->getFullAssetPath("item_42.png");

	graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush);

	if (m_state->m_debugging)
		graphics::drawRect(x, y, m_block_size, m_block_size, m_block_brush_debug);

}








void Level::checkCollisions() // Check for collisions
{
	/*
	for (auto& box : m_blocks)
	{
		if (m_state->getPlayer()->intersect(box))
			printf("*");
	}
	*/
	for (auto& block : m_blocks)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->intersectDown(block))
		{
			// Add a small threshold to the collision detection
			if (offset < -0.0001f) {
				m_state->getPlayer()->m_pos_y += offset - 0.001f;
				m_state->getPlayer()->m_vy = 0.0f;
				m_state->getPlayer()->m_jump_count = 0;
				break;
			}
		}
	}
	for (auto& block : m_blocks) {
		if (float offset = m_state->getPlayer()->intersectUp(block)) { // check for upwords collisions
			m_state->getPlayer()->m_pos_y += offset;

			m_state->getPlayer()->m_vy -= (graphics::getKeyState(graphics::SCANCODE_W) ? 300.0f : 0.0f) * -0.005f;





			break;
		}
	}

	for (auto& block : m_blocks)// check for left and right collisions
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->intersectLeft(block))
		{
			m_state->getPlayer()->isCollidingSideways = true;
			m_state->getPlayer()->m_pos_x += offset;
			m_state->getPlayer()->m_vx += 0.0f;
			break;
		}
		else if (offset = m_state->getPlayer()->intersectRight(block))
		{
			m_state->getPlayer()->isCollidingSideways = true;
			m_state->getPlayer()->m_pos_x += offset;
			m_state->getPlayer()->m_vx += 0.0f;
			break;
		}
		else
		{
			m_state->getPlayer()->isCollidingSideways = false;
		}
	}
	for (auto& block : m_blocks_coin1)//
	{
		for (auto& attackBox : m_attack)
		{
			if (block.isIntersecting(attackBox))
			{
				// Intersection detected, handle it here
				std::cout << "Coin1 is intersecting with attack" << std::endl;
			}
		}
	}

	for (auto& block : m_blocks_coin1)// check for coin1 collisions
	{
		float offset = 0.0f;


		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!coincollected1) {
				graphics::playSound(m_state->getFullAssetPath("coin.mp3"), 0.5f);
				collectedcoins++;

			}
			coincollected1 = true;
		}





	}
	for (auto& block : m_blocks_coin2)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!coincollected2) {
				graphics::playSound(m_state->getFullAssetPath("coin.mp3"), 0.5f);
				collectedcoins++;
			}
			coincollected2 = true;
		}


	}
	for (auto& block : m_blocks_coin3)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!coincollected3) {
				graphics::playSound(m_state->getFullAssetPath("coin.mp3"), 0.5f);
				collectedcoins++;
			}
			coincollected3 = true;
		}


	}
	for (auto& block : m_blocks_coin4)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!coincollected4) {
				graphics::playSound(m_state->getFullAssetPath("coin.mp3"), 0.5f);
				collectedcoins++;
			}
			coincollected4 = true;
		}


	}
	for (auto& block : m_blocks_coin5)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!coincollected5) {
				graphics::playSound(m_state->getFullAssetPath("coin.mp3"), 0.5f);
				collectedcoins++;
			}
			coincollected5 = true;
		}


	}
	for (auto& block : m_blocks_coin6)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!coincollected6) {
				graphics::playSound(m_state->getFullAssetPath("coin.mp3"), 0.5f);
				collectedcoins++;
			}
			coincollected6 = true;
		}


	}
	for (auto& block : m_button) // check for button collisions
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (graphics::getKeyState(graphics::SCANCODE_E) && !buttonpressed)
			{
				graphics::playSound(m_state->getFullAssetPath("MetalDoor.mp3"), 0.8f);
				buttonpressed = true;
			}
			else if (buttonpressed)
				buttonpressed = true;
			else
				buttonpressed = false;
			buttonmessage = true;
		}
		else
			buttonmessage = false;

	}
	for (auto& block : m_triggerbox)// check  for triggerbox collisions
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			if (!triggerbox)
			{
				revealbutton = true;

			}
			triggerbox = true;
		}
		else
			triggerbox = false;

	}
	for (auto& block : m_blocks_enemy)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			std::cout << "box is intersecting with player" << std::endl;
		}


	}
	for (auto& block : m_door)//check for door collisions
	{
		if (!buttonpressed)// this
		{
			float offset = 0.0f;
			if (offset = m_state->getPlayer()->intersectLeft(block))
			{
				m_state->getPlayer()->isCollidingSideways = true;
				m_state->getPlayer()->m_pos_x += offset;
				m_state->getPlayer()->m_vx += 0.0f;
				break;
			}
			else if (offset = m_state->getPlayer()->intersectRight(block))
			{
				m_state->getPlayer()->isCollidingSideways = true;
				m_state->getPlayer()->m_pos_x += offset;
				m_state->getPlayer()->m_vx += 0.0f;
				break;
			}
		}


	}
	for (auto& spike : m_spikes)
	{
		if (m_state->getPlayer()->isIntersecting(spike) && spikesactive)
		{
			m_state->getPlayer()->getHit();

		}
	}
	for (auto& block : m_triggerboxlvl2)
	{
		float offset = 0.0f;
		if (offset = m_state->getPlayer()->isIntersecting(block))
		{
			m_next_lvl = true;
			std::cout << "box is intersecting with player" << std::endl;
		}



	}
	for (auto& block : m_tempfloor)
	{
		float offset = 0.0f;
		if (!m_animation_played)
		{
			if (offset = m_state->getPlayer()->intersectDown(block))
			{
				m_state->getPlayer()->m_pos_y += offset - 0.001f;
				m_state->getPlayer()->m_vy = 0.0f;
				m_state->getPlayer()->m_jump_count = 0;
				break;
			}
		}

	}
	for (auto& block : m_lakedamage)
	{
		if (m_state->getPlayer()->isIntersecting(block) && !m_animation_played)
		{
			m_state->getPlayer()->getHit();

		}
	}



}

void Level::update(float dt)
{
	if (music_started)
	{
		graphics::playSound(m_state->getFullAssetPath("MUSIC.mp3"), 0.05f , true);
		music_started = false;
	}

	if (!pausegame) m_gameTime += dt / 1000.0f;

	std::cout << m_gameTime << std::endl;

	if (m_state->getPlayer()->isActive())
		m_state->getPlayer()->update(dt);



	m_state->getEnemy()->update(dt);




	checkCollisions();

	m_timer += dt;
	if (m_timer > 1000.0f)
	{
		m_block_visible = !m_block_visible;
		m_timer = 0.0f;

	}
	

	if (collectedcoins == 3)
	{
		if (lakemoved <= 3.2)
		{
			// Move the lake 4 blocks down
			for (auto& box : m_lake)
			{
				box.m_pos_y += m_lakeSpeed * dt;
			}
			for (auto& box : m_lake1)
			{
				box.m_pos_y += m_lakeSpeed * dt;
			}
			for (auto& box : m_lake2)
			{
				box.m_pos_y += m_lakeSpeed * dt;
			}
			for (auto& box : m_lake3)
			{
				box.m_pos_y += m_lakeSpeed * dt;
			}
			for (auto& box : m_lake4)
			{
				box.m_pos_y += m_lakeSpeed * dt;
			}
			m_animation_playing = true;
			lakemoved += 0.016;
		}
		else {
			m_animation_played = true;
			m_animation_playing = false;
		}
		
		

	}
	if (!m_anim_played)
	{
		if (lakemoved <= 3.15)
		{
			// Move the lake back to its original position
			for (auto& box : m_lake)
			{
				box.m_pos_y -= m_lakeSpeed * dt;
			}
			for (auto& box : m_lake1)
			{
				box.m_pos_y -= m_lakeSpeed * dt;
			}
			for (auto& box : m_lake2)
			{
				box.m_pos_y -= m_lakeSpeed * dt;
			}
			for (auto& box : m_lake3)
			{
				box.m_pos_y -= m_lakeSpeed * dt;
			}
			for (auto& box : m_lake4)
			{
				box.m_pos_y -= m_lakeSpeed * dt;
			}
			m_animation_playing = false;
			lakemoved += 0.016;
			
		}
		else {
			m_animation_played = false;
			lakemoved = 0.0f;
			m_anim_played = true;
			m_animation_playing = false;
		}
	}
	if (m_animation_playing && !musicstop)
	{
		graphics::playSound(m_state->getFullAssetPath("drain.mp3"), 0.5f);
		musicstop = true;

	}


	GameObject::update(dt);

}

void Level::draw()
{
	float w = m_state->getCanvasWidth();
	float h = m_state->getCanvasHeight();

	const float offset_x = m_state->m_global_offset_x / 2.0f + w / 2.0f;
	const float offset_y = m_state->m_global_offset_y / 2.0f + h / 2.0f;

	//draw background
	graphics::drawRect(offset_x + 4, offset_y + 1, w * 2.0f, h * 2.0f, m_brush_background);
	graphics::drawRect(offset_x + 4, offset_y + 17, w * 2.0f, h * 2.0f, m_brush_background2);



	for (int i = 0; i < m_blocks_no_collide.size(); i++)
	{

		drawNonCollidingBlock(i);
	}
	//Draw Items
	for (int i = 0; i < m_blocks_no_items.size(); i++)
	{

		drawItems(i);
	}
	//Draw Button Pressed
	if (!buttonpressed)
	{
		for (int i = 0; i < m_door.size(); i++)
		{
			m_door_names.emplace_back("Tile_29.png");
			m_door_names.emplace_back("Tile_30.png");
			drawDoor(i);
		}
	}
	//Draw Button
	if (buttonpressed)
	{
		for (int i = 0; i < m_door.size(); i++)
		{
			m_door_open.emplace_back("Tile_52.png");
			m_door_open.emplace_back("Tile_53.png");
			drawDoorOpen(i);
		}
	}

	



	if (graphics::getKeyState(graphics::SCANCODE_K))
	{
		drawAttack();
	}


	if (!coincollected1)
		drawCoin1();
	if (!coincollected2)
		drawCoin2();
	if (!coincollected3)
		drawCoin3();
	if (!coincollected4)
		drawCoin4();
	if (!coincollected5)
		drawCoin5();
	if (!coincollected6)
		drawCoin6();
	//draw coins










	// draw blocks

	for (int i = 0; i < m_blocks.size(); i++)
	{
		drawBlock(i);
	}
	for (int i = 0; i < m_blocks_no_items.size(); i++)
	{

		drawItems(i);
	}
	if (m_block_visible)
	{
		for (int i = 0; i < m_spikes.size(); i++)
		{
			drawSpikesActive(i);
			spikesactive = true;
		}
	}
	else
	{
		for (int i = 0; i < m_spikes.size(); i++)
		{
			drawSpikes(i);
			spikesactive = false;
		}
	}

	if (m_state->getPlayer()->isActive())
		m_state->getPlayer()->draw();

	for (int i = 0; i < m_triggerboxlvl2.size(); i++)
	{
		drawTriggerBox2(i);
	}
	if (!m_animation_played)
	{
		for (int i = 0; i < m_tempfloor.size(); i++)
		{
			drawTempfloor(i);
		}
	}
	if (!m_animation_played)
	{
		for (int i = 0; i < m_lake.size(); i++)
		{

			drawLake(i);
		}
		for (int i = 0; i < m_lake1.size(); i++)
		{

			drawLake(i);
		}
		for (int i = 0; i < m_lake2.size(); i++)
		{

			drawLake(i);
		}
		for (int i = 0; i < m_lake3.size(); i++)
		{

			drawLake(i);
		}
		for (int i = 0; i < m_lake4.size(); i++)
		{

			drawLake(i);
		}
	}








	//draw button


	if (revealbutton) {
		if (!buttonmessage && !buttonpressed)
		{
			drawButton();
		}
		else
		{


			if (buttonpressed)
				drawButtonPressed();
			else if (buttonmessage)
			{
				drawButton();
				drawButtonMessage();
			}

		}
	}

	if (!buttonpressed)
	{
		if (triggerbox)
		{
			for (int i = 0; i < m_findbutton.size(); i++)
			{
				drawFindButton(i);
			}
		}
	}


	m_brush_kunai.outline_opacity = 0.0f;
	if (collectedcoins == 0 && collectedcoins != 1 && collectedcoins != 2 && collectedcoins != 3)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("hud0.png");
		graphics::drawRect(0.9, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);
	}
	if (collectedcoins == 1 && collectedcoins != 0 && collectedcoins != 2 && collectedcoins != 3)
	{

		m_brush_kunai.texture = m_state->getFullAssetPath("hud1.png");
		graphics::drawRect(0.9, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);

	}
	if (collectedcoins == 2 && collectedcoins != 1 && collectedcoins != 0 && collectedcoins != 3)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("hud2.png");
		graphics::drawRect(0.9, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);
	}
	if (collectedcoins == 3 && collectedcoins != 0 && collectedcoins != 2 && collectedcoins != 1)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("hud3.png");
		graphics::drawRect(0.9, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);


	}

	if (m_state->getPlayer()->lives == 3 && m_state->getPlayer()->lives != 2 && m_state->getPlayer()->lives != 1)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("lives3.png");
		graphics::drawRect(7.1, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);


	}
	if (m_state->getPlayer()->lives == 2 && m_state->getPlayer()->lives != 1 && m_state->getPlayer()->lives != 3)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("lives2.png");
		graphics::drawRect(7.1, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);


	}
	if (m_state->getPlayer()->lives == 1 && m_state->getPlayer()->lives != 2 && m_state->getPlayer()->lives != 3)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("lives1.png");
		graphics::drawRect(7.1, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);


	}
	if (m_state->getPlayer()->lives == 0 && m_state->getPlayer()->lives != 2 && m_state->getPlayer()->lives != 1 && m_state->getPlayer()->lives != 3)
	{
		m_brush_kunai.texture = m_state->getFullAssetPath("lives0.png");
		graphics::drawRect(7.1, 0.5, w * 0.2f, h * 0.2f, m_brush_kunai);
	}
	if (m_state->getPlayer()->m_gameOver == true && m_state->getPlayer()->m_animation_state == Player::DEATH)
	{

		m_state->getPlayer()->opacity += 0.01f;
		if (m_state->getPlayer()->opacity > 1.0f) m_state->getPlayer()->opacity = 1.0f;

		graphics::Brush br;
		br.outline_opacity = 0.0f;
		br.texture = m_state->getFullAssetPath("gameover.png");
		br.fill_opacity = m_state->getPlayer()->opacity;
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2, m_state->getCanvasWidth(), m_state->getCanvasHeight(), br);

	}
	if (start_menu)
	{


		graphics::Brush br;
		br.outline_opacity = 0.0f;
		br.texture = m_state->getFullAssetPath("startmenu2.png");
		br.fill_opacity = m_state->getPlayer()->opacity1;
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2, m_state->getCanvasWidth(), m_state->getCanvasHeight(), br);
		if (graphics::getKeyState(graphics::SCANCODE_I)){
			info_menu= true;
			start_menu = false;
		}



		if (graphics::getKeyState(graphics::SCANCODE_SPACE)) {
			m_space_pressed = true;

		}
		if (m_space_pressed)
		{
			m_state->getPlayer()->opacity1 -= 0.03f;
			if (m_state->getPlayer()->opacity1 < 0.0f) m_state->getPlayer()->opacity1 = 0.0f;
			if (m_state->getPlayer()->opacity1 == 0.0f)
			{
				pausegame = false;
				m_space_pressed = false;
				start_menu = false;
			}
		}



	}
	if (info_menu) 
	{
		graphics::Brush br;
		br.outline_opacity = 0.0f;
		br.texture = m_state->getFullAssetPath("info.png");
		br.fill_opacity = m_state->getPlayer()->opacity1;
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2, m_state->getCanvasWidth(), m_state->getCanvasHeight(), br);
		if (graphics::getKeyState(graphics::SCANCODE_E)) {
			start_menu = true;
			info_menu = false;
		}


	}
	for (int i = 0; i < m_blocks_enemy.size(); i++)
	{
		drawEnemy(i);

	}
	if (m_next_lvl && !m_state->getPlayer()->level2 == true)
	{

		if (!sound_played && !m_state->getPlayer()->level2 == true)
		{
			graphics::playSound(m_state->getFullAssetPath("finish level.mp3"), 0.4f);
			sound_played = true;
		}
		pausegame = true;
		m_state->getPlayer()->opacity2 += 0.05f;
		if (m_state->getPlayer()->opacity2 > 1.0f) m_state->getPlayer()->opacity2 = 1.0f;
		graphics::Brush br;
		br.outline_opacity = 0.0f;
		br.texture = m_state->getFullAssetPath("nextlvl.png");
		br.fill_opacity = m_state->getPlayer()->opacity2;
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2, 8.0f, 5.0f, br);

		graphics::Brush br2;
		br2.outline_opacity = 0.0f;

		if (m_gameTime <= 60.0f)
			br2.texture = m_state->getFullAssetPath("3stars.png");
		else if (m_gameTime <= 90.0f)
			br2.texture = m_state->getFullAssetPath("2stars.png");
		else if (m_gameTime <= 120.0f)
			br2.texture = m_state->getFullAssetPath("1stars.png");
		else 
			br2.texture = m_state->getFullAssetPath("0stars.png");
		br2.fill_opacity = m_state->getPlayer()->opacity2;
		if (m_gameOverImageSize < 3.0f)
		{
			m_gameOverImageSize += 0.2f;
		}
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2 - 0.3f, m_gameOverImageSize, m_gameOverImageSize, br2);



		if (graphics::getKeyState(graphics::SCANCODE_SPACE)) {
			m_state->getPlayer()->m_pos_x = 18.5f;
			m_state->getPlayer()->m_pos_y = static_cast<float>(100 - 40) * 0.5f - 1.0 / 2.0f;
			m_state->getPlayer()->m_animation_state = Player::IDLE;
			m_state->getPlayer()->opacity = 0.0f;
			m_state->getPlayer()->m_vx = 0.0f;
			m_state->getPlayer()->m_vy = 0.0f;
			m_state->getPlayer()->m_jump_count = 0;
			m_state->getPlayer()->m_w_key_down = false;
			m_state->getPlayer()->forwardDir = -1;
			m_state->getLevel()->collectedcoins = 0;
			m_state->getLevel()->coincollected1 = false;
			m_state->getLevel()->coincollected2 = false;
			m_state->getLevel()->coincollected3 = false;
			m_state->getLevel()->coincollected4 = false;
			m_state->getLevel()->coincollected5 = false;
			m_state->getLevel()->coincollected6 = false;
			m_state->getPlayer()->m_isDeathAnimationPlayed = false;
			m_state->getPlayer()->lives = 3;
			m_gameTime = 0.0f;
			lakemoved = 0.0f;
			musicstop == false;
			m_anim_played = false;
			m_space_pressed = true;
			m_animation_played = false;
			
			
		}
		if (m_space_pressed)
		{
			m_state->getPlayer()->opacity2 -= 0.1f;
			if (m_state->getPlayer()->opacity2 < 0.0f) m_state->getPlayer()->opacity2 = 0.0f;
			if (m_state->getPlayer()->opacity2 == 0.0f)
			{
				sound_played = false;
				start_menu= false;
				pausegame = false;
				m_state->getPlayer()->level2 = true;
				m_space_pressed = false;
				m_next_lvl = false;

			}
		}
	}
	if (m_next_lvl && m_state->getPlayer()->level2 == true)
	{
		pausegame = true;
		m_state->getPlayer()->opacity2 += 0.05f;
		if (m_state->getPlayer()->opacity2 > 1.0f) m_state->getPlayer()->opacity2 = 1.0f;
		graphics::Brush br;
		br.outline_opacity = 0.0f;
		br.texture = m_state->getFullAssetPath("nextlvl2.png");
		br.fill_opacity = m_state->getPlayer()->opacity2;
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2, 8.0f, 5.0f, br);

		graphics::Brush br2;
		br2.outline_opacity = 0.0f;

		if (m_gameTime <= 60.0f)
			br2.texture = m_state->getFullAssetPath("3stars.png");
		else if (m_gameTime <= 90.0f)
			br2.texture = m_state->getFullAssetPath("2stars.png");
		else if (m_gameTime <= 120.0f)
			br2.texture = m_state->getFullAssetPath("1stars.png");
		else
			br2.texture = m_state->getFullAssetPath("0stars.png");
		br2.fill_opacity = m_state->getPlayer()->opacity2;
		if (m_gameOverImageSize < 3.0f)
		{
			m_gameOverImageSize += 0.2f;
		}
		graphics::drawRect(m_state->getCanvasWidth() / 2, m_state->getCanvasHeight() / 2 - 0.3f, m_gameOverImageSize, m_gameOverImageSize, br2);



		if (graphics::getKeyState(graphics::SCANCODE_R)) {
			m_state->getPlayer()->m_pos_x = 8.5f;
			m_state->getPlayer()->m_pos_y = static_cast<float>(100 - 83) * 0.5f - 1.0 / 2.0f;
			m_state->getPlayer()->m_animation_state = Player::IDLE;
			m_state->getPlayer()->opacity = 0.0f;
			m_state->getPlayer()->m_vx = 0.0f;
			m_state->getPlayer()->m_vy = 0.0f;
			m_state->getPlayer()->m_jump_count = 0;
			m_state->getPlayer()->m_w_key_down = false;
			m_state->getPlayer()->forwardDir = -1;
			m_state->getLevel()->collectedcoins = 0;
			m_state->getLevel()->coincollected1 = false;
			m_state->getLevel()->coincollected2 = false;
			m_state->getLevel()->coincollected3 = false;
			m_state->getLevel()->coincollected4 = false;
			m_state->getLevel()->coincollected5 = false;
			m_state->getLevel()->coincollected6 = false;
			m_state->getPlayer()->m_isDeathAnimationPlayed = false;
			m_state->getPlayer()->lives = 3;
			m_anim_played = false;
			revealbutton = false;
			buttonpressed = false;
			m_gameTime = 0.0f;
			lakemoved = 0.0f;
			m_space_pressed = true;
			m_animation_played = false;
			musicstop == false;

		}
		if (m_space_pressed)
		{
			m_state->getPlayer()->opacity2 -= 0.1f;
			if (m_state->getPlayer()->opacity2 < 0.0f) m_state->getPlayer()->opacity2 = 0.0f;
			if (m_state->getPlayer()->opacity2 == 0.0f)
			{

				m_state->getPlayer()->level2 = false;
				m_space_pressed = false;
				m_next_lvl = false;
				pausegame = false;
			}
		}
	}
}









	




void Level::init()
{


	const char* lvl1[100][50] = {                   //. <- to kedro tou bitmap
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "66", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18","18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "18", "67", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "28", "00", "00", "05", "06", "07", "00", "00","00", "00", "05", "06", "06", "06", "06", "06", "07", "00", "00", "00", "28", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "68", "69", "00", "55", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "70", "71", "00", "55", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "72", "73", "00", "55", "00", "00", "00", "44", "01", "45", "55","55", "44", "01", "45", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "74", "75", "00", "55", "00", "00", "44", "93", "18", "19", "55","55", "17", "18", "94", "45", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "76", "77", "00", "55", "00", "44", "14", "08", "55", "55", "55","55", "61", "55", "11", "03", "45", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "78", "79", "00", "85", "44", "14", "46", "08", "55", "55", "05","07", "55", "55", "11", "46", "03", "45", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "03", "01", "01", "01", "01", "01", "01", "14", "46", "46", "08", "55", "51", "55","61", "51", "55", "11", "46", "46", "03", "01", "01", "01", "01", "01", "01", "14", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "66", "18", "18", "18", "32", "18", "18", "18", "18", "18", "23", "07", "55", "49","49", "49", "05", "24", "18", "18", "18", "32", "18", "18", "67", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "61", "61", "61", "20", "91", "51", "85", "51", "51", "20", "55", "55", "49","55", "55", "55", "20", "80", "51", "80", "20", "49", "84", "17", "18", "18", "67", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "61", "55", "61", "55", "92", "83", "84", "51", "51", "29", "61", "55", "05","07", "49", "55", "51", "51", "82", "51", "49", "83", "49", "49", "49", "49", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "55", "61", "61", "92", "84", "81", "51", "51", "30", "86", "55", "55","61", "61", "55", "51", "81", "82", "51", "04", "49", "86", "44", "01", "01", "14", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "03", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "45", "61", "55","49", "49", "44", "01", "01", "01", "01", "09", "01", "01", "14", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "55","61", "49", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "61", "55","55", "55", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "61", "55","55", "55", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "61", "55","55", "55", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00","00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "55", "49","55", "61", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "61", "55","55", "55", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00","00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "44", "01", "45", "00","00", "44", "01", "45", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "44", "00", "00", "19", "00","00", "17", "00", "00", "45", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "44", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "45", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "44", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "45", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "03", "01", "01", "01", "01", "01", "01", "14", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "03", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "05", "06", "06", "07", "00", "00", "00","00", "00", "02", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "04", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "44", "09", "45", "00", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "08", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","44", "14", "46", "03", "45", "00", "00", "00", "00", "00", "00", "00", "00", "11", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "03", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01", "01","14", "46", "46", "46", "46", "01", "01", "01", "01", "01", "01", "01", "01", "14", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46","46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		//center
	};


	for (auto p_gob : m_static_objects)
		if (p_gob) p_gob->init();

	for (auto p_gob : m_dynamic_objects)
		if (p_gob) p_gob->init();

	for (int x = 0; x < 100; x++) {
		for (int y = 0; y < 50; y++) {
			if (lvl1[x][y] != "00") {

				for (int i = 68; i < 93; i++)
				{
					if (lvl1[x][y] == std::to_string(i))
					{
						m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
						m_block_no_names.push_back("Tile_" + std::string(lvl1[x][y]) + ".png");
					}
				}
				if (lvl1[x][y] == "02")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile_02.png");
				}
				if (lvl1[x][y] == "55")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile_55.png");
				}
				if (lvl1[x][y] == "61")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile_61.png");
				}
				if (lvl1[x][y] == "49")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile_49.png");
				}
				if (lvl1[x][y] == "51")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile_51.png");
				}
				if (lvl1[x][y] == "29")
				{
					m_door.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions

				}
				if (lvl1[x][y] == "30")
				{
					m_door.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions

				}

				else if (lvl1[x][y] != "02" && lvl1[x][y] != "55" && lvl1[x][y] != "61" && lvl1[x][y] != "49" && lvl1[x][y] != "51" && lvl1[x][y] != "99"
					&& lvl1[x][y] != "98" && lvl1[x][y] != "97" && lvl1[x][y] != "68" && lvl1[x][y] != "69" && lvl1[x][y] != "70" && lvl1[x][y] != "71" && lvl1[x][y] != "72"
					&& lvl1[x][y] != "73" && lvl1[x][y] != "74" && lvl1[x][y] != "75" && lvl1[x][y] != "76" && lvl1[x][y] != "77" && lvl1[x][y] != "78" && lvl1[x][y] != "79"
					&& lvl1[x][y] != "80" && lvl1[x][y] != "81" && lvl1[x][y] != "82" && lvl1[x][y] != "83" && lvl1[x][y] != "84" && lvl1[x][y] != "85" && lvl1[x][y] != "86"
					&& lvl1[x][y] != "87" && lvl1[x][y] != "88" && lvl1[x][y] != "89" && lvl1[x][y] != "90" && lvl1[x][y] != "91" && lvl1[x][y] != "92" && lvl1[x][y] != "29" && lvl1[x][y] != "30"
					)
				{

					m_blocks.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_names.push_back("Tile_" + std::string(lvl1[x][y]) + ".png");
				}



			}



		}
	}
	const char* lvl1Items[100][50] = {
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "50", "51", "52", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "53", "54", "55", "00", "00", "00", "00", "44", "99", "00", "99", "00", "98", "00", "92", "93", "70", "67", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "71", "72", "73", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "74", "75", "76", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "77", "78", "79", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "80", "81", "82", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "83", "84", "85", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "58", "58", "00", "00", "00", "00", "00", "00", "00", "00", "86", "87", "88", "43", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "17", "18", "19", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "89", "90", "91", "66", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "39", "40", "41", "00", "58", "58", "00", "00", "00", "20", "21", "22", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "68", "32", "33", "34", "01", "02", "00", "05", "06", "00", "00", "00", "00", "00", "00", "00", "29", "23", "24", "25", "00", "00", "00", "00", "00", "69", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "38", "35", "36", "37", "03", "04", "00", "07", "08", "00", "42", "00", "00", "00", "00", "00", "30", "26", "27", "28", "00", "58", "58", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "45", "45", "45", "45", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "46", "46", "46", "46", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "47", "47", "47", "47", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "48", "48", "48", "48", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "60", "60", "60", "60", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"}





	};

	for (int x = 0; x < 100; x++) {
		for (int y = 0; y < 50; y++) {
			if (lvl1Items[x][y] != "00") {

				if (lvl1Items[x][y] == "69")
				{
					m_blocks_coin1.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "68")
				{
					m_blocks_coin2.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "67")
				{
					m_blocks_coin3.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "66")
				{
					m_button.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "43")
				{
					m_button_message.emplace_back(y * m_block_size, x * m_block_size, 0.2f, 0.2f);//collisions
				}
				if (lvl1Items[x][y] == "42")
				{
					m_triggerbox.emplace_back(y * m_block_size, x * m_block_size, 0.2f, 0.2f);//collisions
				}
				if (lvl1Items[x][y] == "39" || lvl1Items[x][y] == "40" || lvl1Items[x][y] == "41")
				{
					m_findbutton.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_findbutton_names.push_back("item_" + std::string(lvl1Items[x][y]) + ".png");
				}
				if (lvl1Items[x][y] == "58")
				{
					m_spikes.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "45")
				{
					m_lake.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "46")
				{
					m_lake1.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "47")
				{
					m_lake2.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "48")
				{
					m_lake3.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "60")
				{
					m_lake4.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl1Items[x][y] == "96")
				{
					m_blocks_enemy.emplace_back(y * m_block_size, x * m_block_size, 0.4f, 0.4f);//collisions


				}
				else if (lvl1Items[x][y] != "69" && lvl1Items[x][y] != "68" && lvl1Items[x][y] != "67" && lvl1Items[x][y] != "66" && lvl1Items[x][y]
					!= "43" && lvl1Items[x][y] != "42" && lvl1Items[x][y] != "39" && lvl1Items[x][y] != "40" && lvl1Items[x][y] != "41" && lvl1Items[x][y] != "96" && lvl1Items[x][y] != "58" && lvl1Items[x][y] != "45"
					&& lvl1Items[x][y] != "46" && lvl1Items[x][y] != "47" && lvl1Items[x][y] != "48" && lvl1Items[x][y] != "60")
				{
					m_blocks_no_items.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_items.push_back("item_" + std::string(lvl1Items[x][y]) + ".png");
				}



			}



			m_block_brush.outline_opacity = 0.0f;
			m_block_brush_debug.fill_opacity = 0.0f;
			SETCOLOR(m_block_brush_debug.fill_color, 0.1f, 1.0f, 0.1f);
			SETCOLOR(m_block_brush_debug.outline_color, 0.3f, 1.0f, 0.2f);
		}
	}
	const char* lvl2[100][50] = {
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "12", "12", "12", "12", "18", "12", "53", "20", "50", "20", "60", "60", "40","20", "40", "12", "60", "46", "40","20", "40","20", "40", "12", "60", "46", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "12", "12", "12", "12", "18", "12", "53", "20", "50", "20", "60", "60", "40","20", "40", "12", "60", "46", "40","20", "40","20", "40", "12", "60", "46", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "12", "12", "12", "12", "18", "12", "53", "20", "50", "20", "60", "60", "40","20", "40", "12", "60", "46", "40","20", "40","20", "40", "12", "60", "46", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "30", "40", "50", "60", "20", "60", "50", "46", "20", "40", "46", "20", "30","60", "46", "30", "46", "30", "40","20", "40","20", "40", "12", "60", "46", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "34", "36", "46", "30", "20", "12", "56", "15", "52", "52", "15", "52", "52","56", "56", "53", "52", "12", "46", "20", "20", "16", "15", "37", "37", "37", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "34", "20", "46", "30", "30", "18", "00", "71", "71", "00", "12", "00", "00","00", "00", "00", "00", "12", "30", "20", "46", "60", "13", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "40", "30", "46", "40", "46", "18", "00", "71", "18", "28", "12", "00", "66","67", "67", "67", "67", "60", "40", "46", "30", "20", "13", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "24", "25", "16", "35", "34", "15", "00", "71", "15", "30", "15", "52", "56","56", "25", "00", "00", "18", "60", "40", "20", "46", "13", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "00", "00", "71", "15", "40", "22", "56", "00","00", "00", "00", "00", "22", "46", "30", "12", "46", "15", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "00", "00", "71", "25", "30", "15", "00", "00","00", "00", "00", "00", "15", "20", "60", "20", "13", "15", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "18", "22", "15", "25", "24", "24", "22", "28", "25", "00", "00","00", "58", "52", "52", "15", "60", "13", "20", "18", "13", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "67", "67", "18", "30", "15", "77", "67", "67", "67", "67", "67", "67", "67","54", "58", "62", "63", "25", "22", "22", "24", "24", "28", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "15", "40", "18", "76", "00", "00", "00", "00", "00", "00", "00","00", "81", "63", "81", "64", "82", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "15", "30", "18", "76", "00", "00", "00", "00", "00", "00", "00","00", "00", "81", "63", "71", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "25", "24", "22", "76", "00", "00", "00", "00", "00", "00", "08","00", "00", "00", "71", "71", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "76", "00", "00", "00", "00", "00", "08", "31","35", "00", "00", "95", "95", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "76", "00", "00", "00", "00", "38", "37", "37","38", "38", "62", "94", "94", "00", "00", "00", "00", "02", "05", "05", "06", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "76", "00", "00", "00", "08", "04", "04", "02","02", "02", "08", "04", "02", "08", "00", "00", "00", "23", "28", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "76", "00", "00", "08", "12", "18", "15", "35","18", "61", "65", "63", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "00", "00", "76", "00", "00", "76", "00", "39", "35", "12", "20", "18", "40","16", "95", "00", "95", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "08", "08", "08", "08", "08", "08", "08", "08", "08", "12", "60", "46", "12","12", "94", "00", "94", "00", "00", "00", "00", "00", "00", "00", "00", "00", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "12", "08", "12", "20", "40", "50", "50", "40", "60", "46", "40", "46", "30","08", "08", "08", "08", "08", "08", "96", "96", "96", "96", "08", "08", "08", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "30", "40", "50", "60", "20", "60", "50", "46", "20", "40", "46", "20", "30","60", "46", "30", "46", "30", "12", "97", "97", "97", "97", "15", "30", "60", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "60", "46", "46", "20", "60", "46", "53", "60", "46", "50", "46", "46", "40","40", "60", "60", "20", "30", "18", "98", "98", "98", "98", "18", "18", "46", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46", "26", "12", "12", "12", "12", "18", "12", "53", "20", "50", "20", "60", "60", "40","20", "40", "12", "60", "46", "12", "99", "99", "99", "99", "12", "30", "40", "29", "46", "46", "46", "46", "46", "46", "46", "46", "46", "46"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "30", "46", "30", "12", "73", "73", "73", "73", "15", "30", "60", "29", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "60", "20", "30", "18", "00", "00", "00", "00", "18", "18", "46", "29", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "12", "60", "46", "12", "00", "00", "00", "00", "12", "30", "40", "29", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00","00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"}





	};

	for (int x = 0; x < 100; x++) {
		for (int y = 0; y < 50; y++) {
			if (lvl2[x][y] != "00") {

				if (lvl2[x][y] == "66")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_66.png");
				}
				if (lvl2[x][y] == "67")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_67.png");
				}
				if (lvl2[x][y] == "68")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_68.png");
				}
				if (lvl2[x][y] == "71")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_71.png");
				}
				if (lvl2[x][y] == "94")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_94.png");
				}
				if (lvl2[x][y] == "95")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_95.png");
				}
				if (lvl2[x][y] == "81")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_81.png");
				}
				if (lvl2[x][y] == "68")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_82.png");
				}
				if (lvl2[x][y] == "61")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_61.png");
				}
				if (lvl2[x][y] == "82")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_82.png");
				}
				if (lvl2[x][y] == "63")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_63.png");
				}
				if (lvl2[x][y] == "62")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_62.png");
				}
				if (lvl2[x][y] == "65")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_65.png");
				}
				if (lvl2[x][y] == "77")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_77.png");
				}
				if (lvl2[x][y] == "76")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_76.png");
				}
				if (lvl2[x][y] == "63")
				{
					m_blocks_no_collide.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_no_names.push_back("Tile2_63.png");
				}
				if (lvl2[x][y] == "96")
				{
					m_lake.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl2[x][y] == "97")
				{
					m_lake1.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl2[x][y] == "98")
				{
					m_lake2.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl2[x][y] == "99")
				{
					m_lake3.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl2[x][y] == "73")
				{
					m_lake4.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}

				else if (lvl2[x][y] != "66" && lvl2[x][y] != "67" && lvl2[x][y] != "68" && lvl2[x][y] != "71" && lvl2[x][y] != "81" && lvl2[x][y] != "94"
					&& lvl2[x][y] != "95" && lvl2[x][y] != "63" && lvl2[x][y] != "71" && lvl2[x][y] != "67" && lvl2[x][y] != "65" && lvl2[x][y] != "76"
					&& lvl2[x][y] != "77" && lvl2[x][y] != "62" && lvl2[x][y] != "96" && lvl2[x][y] != "97" && lvl2[x][y] != "98" && lvl2[x][y] != "99" 
					&& lvl2[x][y] != "61" && lvl2[x][y] != "73") {


					m_blocks.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_names.push_back("Tile2_" + std::string(lvl2[x][y]) + ".png");
				}

			}


		}
	}
	const char* lvl2Items[100][50] = {
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "40", "40", "40", "40", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "42", "42", "42", "42", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "41", "41", "41", "41", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "68", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "69", "58", "58", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "58", "58", "00", "00", "58", "58", "00", "00", "00", "00", "00", "00", "00", "58", "58", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "01", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "58", "58", "58", "58", "58", "58", "58", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "67", "58", "58", "58", "58", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "40", "40", "40", "40", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "42", "42", "42", "42", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "41", "41", "41", "41", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "41", "41", "41", "41", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"},
		{"00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00", "00"}





	};

	for (int x = 0; x < 100; x++) {
		for (int y = 0; y < 50; y++) {
			if (lvl2Items[x][y] != "00") {

				if (lvl2Items[x][y] == "69")
				{
					m_blocks_coin4.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl2Items[x][y] == "68")
				{
					m_blocks_coin5.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl2Items[x][y] == "67")
				{
					m_blocks_coin6.emplace_back(y * m_block_size, x * m_block_size, 0.3f, 0.3f);//collisions
				}
				if (lvl2Items[x][y] == "58")
				{
					m_spikes.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.3f);//collisions
				}
				if (lvl2Items[x][y] == "41")
				{
					m_triggerboxlvl2.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
				}
				if (lvl2Items[x][y] == "42")
				{
					m_tempfloor.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
				}
				if (lvl2Items[x][y] == "40")
				{
					m_lakedamage.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
				}
				
				

				else if (lvl2Items[x][y] != "69" && lvl2Items[x][y] != "68" && lvl2Items[x][y] != "67" && lvl2Items[x][y] != "66" && lvl2Items[x][y]
					!= "43" && lvl2Items[x][y] != "42" && lvl2Items[x][y] != "39" && lvl2Items[x][y] != "40" && lvl2Items[x][y] != "41" && lvl2Items[x][y] != "96" && lvl2Items[x][y] != "58" && lvl2Items[x][y] != "45"
					&& lvl2Items[x][y] != "46" && lvl2Items[x][y] != "47" && lvl2Items[x][y] != "48")
				{
					m_blocks_no_items.emplace_back(y * m_block_size, x * m_block_size, 0.5f, 0.5f);//collisions
					m_block_items.push_back("item2_" + std::string(lvl2Items[x][y]) + ".png");
				}
			}
		}
	}
}

Level::Level(const std::string& name)
	: GameObject(name)
{
	m_brush_background.outline_opacity = 0.0f;
	m_brush_background.texture = m_state->getFullAssetPath("Power-Station-Free-Tileset-Pixel-Art4.png");
	m_brush_background2.texture = m_state->getFullAssetPath("lab.png");


}

Level::~Level()
{
	for (auto p_go : m_static_objects)
		delete p_go;
	for (auto p_go : m_dynamic_objects)
		delete p_go;
}