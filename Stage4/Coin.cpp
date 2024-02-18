#include "Coin.h"
#include "util.h"
#include "gamestate.h"
#include "gameobject.h"


// Update function for Coin
void Coin::update(float dt)
{
	// Convert the delta time from milliseconds to seconds
	float delta_time = dt / 1000.0f;
	// Call the update function of the base class (GameObject)
	GameObject::update(dt);
}

// Draw function for Coin
void Coin::draw(float x, float y , float w , float h) {
	// Increment the animation time
	animationtime += 0.04f;

	// Calculate the current sprite index based on the animation time
	int sprite = (int)fmod(animationtime, m_allCoinSprites.size());
	// Set the coin's texture to the current sprite in the coin animation
	m_brush_coin.texture = m_allCoinSprites[sprite];
	// Set the outline opacity of the coin to 0
	m_brush_coin.outline_opacity = 0.0f;
	// Draw the coin at the specified position with the specified width and height
	graphics::drawRect(x, y, w, h, m_brush_coin); // Set outline parameter to false
}
void Coin::init() {

	m_allCoinSprites.push_back(m_state->getFullAssetPath("kunai1.png"));
	m_allCoinSprites.push_back(m_state->getFullAssetPath("kunai2.png"));
	m_allCoinSprites.push_back(m_state->getFullAssetPath("kunai3.png"));
	m_allCoinSprites.push_back(m_state->getFullAssetPath("kunai4.png"));
	m_allCoinSprites.push_back(m_state->getFullAssetPath("kunai5.png"));
}

