#ifndef GAME_H
#define GAME_H

#include "../ECS/ECS.h"
#include "../AssetStore/AssetStore.h"
#include <SDL2/SDL.h>
#include <memory>

const int FPS = 60;
const int MILLISECONDS_PER_FRAME = 1000 / FPS; // 1 sec = 1000 msec

class Game {
    private: 
        bool isRunning;
        int millisecondsPreviousFrame = 0;
        SDL_Window* window;
        SDL_Renderer* renderer;

        std::unique_ptr<Registry> registry;
        std::unique_ptr<AssetStore> assetStore;

    public:
        Game();
        ~Game();
        void Initialize();
        void Run();
        void Setup();
        void ProcessInput();
        void Update();
        void Render();
        void Destroy();
        void LoadLevel(int level);

        int windowWidth;
        int windowHeight;
};

#endif // GAME_H