// Lesson 1
// Open a SDL window and fill the background with red

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

static const int width = 640;
static const int height = 480;

int main(int argc, char **argv)
{
    // inicia SDL2
    SDL_Init(SDL_INIT_VIDEO);

    // Crea la ventana
    SDL_Window *window = SDL_CreateWindow("Break Out", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

    // Crea el renderizado (accelerated and in sync with the display refresh rate)
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    SDL_SetRenderDrawColor(renderer, 12, 255, 179, 251);
    bool running = true;
    SDL_Event event;
    while(running)
    {
        // Procesa los eventos
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                running = false;
            }
        }

        // Limpia la pantalla
        SDL_RenderClear(renderer);

        // Dibuja

        // Muestra que fue dibujado
        SDL_RenderPresent(renderer);
    }

    // Para cerrar y terminar la ventana
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
