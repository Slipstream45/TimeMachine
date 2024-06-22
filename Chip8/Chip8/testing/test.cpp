#include<SDL2/SDL.h>

int main(int args, char **argv){
	
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *win = SDL_CreateWindow("title", 30, 30, 
