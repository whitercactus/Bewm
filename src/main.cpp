#include <iostream>
#include <string>
#include <stdexcept>
#include "game.h"
#include "options.h"
#include <memory>

int main(int argc, const char **argv)
{
    Uint32 newTime, currentTime;
    Uint32 frameTime = 0.0;
    try
    {
        std::unique_ptr<Game> game(new Game("Bewm", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                            SCREEN_WIDTH, SCREEN_HEIGHT, false));
        std::string fileName = "res/map1.txt";
        game->readMap(fileName);
        currentTime = SDL_GetTicks();
        while (game->running())
        {
            game->handleEvents(frameTime);
            game->update(frameTime);

            newTime = SDL_GetTicks();
            frameTime = newTime - currentTime;
            currentTime = newTime;
            game->render();
        }
        game->quit();
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}