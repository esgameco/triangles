#define GL_GLEXT_PROTOTYPES
#include <SDL.h>
#include <SDL_opengl.h>

int main()
{
    /*
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("OpenGL Test",
      SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, SDL_WINDOW_OPENGL);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    SDL_GLContext context = SDL_GL_CreateContext(window);

    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    bool is_running = true;
    SDL_Event event;
    while (is_running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                is_running = false;
            }
        }
        SDL_Delay(16);
    }

    SDL_DestroyWindow(window);

    SDL_Quit();
    */

    int numberOfDrivers = SDL_GetNumVideoDrivers();
    printf("Number of drivers: %d\n", numberOfDrivers);

    for (int i = 0; i < numberOfDrivers; i++)
        printf("Driver name: %s\n", SDL_GetVideoDriver(i));

    int numberOfDisplays = SDL_GetNumVideoDisplays();
    printf("Number of displays: %d\n", numberOfDisplays);

    printf("Display 0 mode: %d\n", SDL_GetNumDisplayModes(0));

    if (SDL_InitSubSystem(SDL_INIT_VIDEO) < 0)
        SDL_Log("SDL fails to initialize video subsystem!\n%s", SDL_GetError());
}
