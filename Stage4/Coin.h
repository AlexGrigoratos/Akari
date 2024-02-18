#pragma once

#include <sgg/graphics.h>
#include "box.h"
#include "gameobject.h"
#include "gamestate.h"

class Coin : public Box, public GameObject
{
	std::vector<std::string> m_sprites;

	graphics::Brush m_brush_coin;

public:

	Coin(std::string name, float x, float y);
	void update(float dt) override;
	void draw(float x, float y, float w, float h);
	void init();
public:
	
	float animationtime = 0.0f;
	std::vector<std::string> m_allCoinSprites;
	Coin(std::string name) : GameObject(name) {}

private:
	float size;// size of the coin
	
};
