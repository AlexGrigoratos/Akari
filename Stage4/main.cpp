#include <sgg/graphics.h>
#include "gamestate.h"
#include "player.h"

// Draw function
void draw()
{
    // Call the draw function of the GameState singleton instance
    GameState::getInstance()->draw();
}

// Update function
void update(float dt)
{
    // Call the update function of the GameState singleton instance with the delta time
    GameState::getInstance()->update(dt);
}

// Main function
int main(int argc, char** argv)
{
    // Create a window with the specified width, height, and title
    graphics::createWindow(960, 540, "Ninja Scoul");

    // Initialize the GameState singleton instance
    GameState::getInstance()->init();

    // Set the draw function to the draw function defined above
    graphics::setDrawFunction(draw);
    // Set the update function to the update function defined above
    graphics::setUpdateFunction(update);

    // Set the canvas size to the canvas size of the GameState singleton instance
    graphics::setCanvasSize(GameState::getInstance()->getCanvasWidth(), GameState::getInstance()->getCanvasHeight());
    // Set the canvas scale mode to fit
    graphics::setCanvasScaleMode(graphics::CANVAS_SCALE_FIT);

    // Start the message loop
    graphics::startMessageLoop();
    // Return 0 to indicate that the program has finished successfully
    return 0;
}

