#include<SDL2/SDL.h>

int main(int args, char **argv){
	SDL_Window *window = nullptr;

	if(SDL_Init(SDL_INIT_VIDEO)<0){
		printf("SDL Cannot be Initialized\n");
		SDL_GetError();
	}else{
		printf("SDL is ready to go\n");
	}

	window = SDL_CreateWindow("SDL2 Window", 0, 2500, 640, 480, SDL_WINDOW_SHOWN);
	SDL_Delay(3000);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
