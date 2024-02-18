#pragma once
#include <string>
#include "gamestate.h"

// GameObject class
class GameObject 
{
	// Static variable to hold the next ID for a new GameObject
	static int m_next_id;
	
	// Protected variables accessible by derived classes
	protected:
		// Pointer to the GameState instance
		class GameState* m_state;
		// Name of the GameObject
		std::string m_name;
		// Unique ID of the GameObject
		int m_id = 0;
		// Boolean to check if the GameObject is active
		bool m_active = true;
		// Boolean to check if the GameObject is alive
		bool m_alive = true;

	// Public methods and constructor/destructor
	public:
		// Constructor with an optional name parameter
		GameObject(const std::string& name = "");
		// Virtual update method to be overridden by derived classes
		virtual void update(float dt) {}
		// Virtual init method to be overridden by derived classes
		virtual void init() {}
		// Virtual draw method to be overridden by derived classes
		virtual void draw() {}
		// Virtual destructor
		virtual ~GameObject() {}
		// Method to check if the GameObject is active
		bool isActive() { return m_active; }
		// Method to check if the GameObject is alive
		bool isAlive() { return m_alive; }
		// Method to set the GameObject as active or inactive
		void setActive(bool a) { m_active = a; }
		// Method to set the GameObject as alive or dead
		void setAlive(bool b) { m_alive = b; }
};
