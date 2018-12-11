//Programer: Marco Bermudez
//Project: travelling salesman problem with simulated annealing
//Collaborator" leventalbayrak

#include <iostream>
#include <assert.h>
#include "Queue_Example.h"
using namespace std;

//include SDL header
#include "SDL2-2.0.8\include\SDL.h"

//load libraries
#pragma comment(lib,"SDL2-2.0.8\\lib\\x86\\SDL2.lib")
#pragma comment(lib,"SDL2-2.0.8\\lib\\x86\\SDL2main.lib")

#pragma comment(linker,"/subsystem:console")


namespace Simulation
{
	SDL_Renderer *renderer = NULL;
	int screen_width = 800;
	int screen_height = 600;

	unsigned char prev_key_state[256];
	unsigned char *keys = NULL;

	struct Node
	{
		float *x, *y;
		int n_nodes;
	};
	
	/*struct Sol
	{
		int *index;
		int h;
	};
	*/
	void retrieve_Nodes(Node *n, int value)
	{

		const int index = 5;

		int myarray[index];
		myarray[0] = 0;
		myarray[1] = 8;
		myarray[2] = 23;
		myarray[3] = 74;
		myarray[4] = 1;

		int tmp;
	

	};

	void create_Random_Nodes(Node *n, int value)
	{
		

	}

	void init(Node *n, int size)
	{
		SDL_Init(SDL_INIT_VIDEO);

		prev_key_state[256];
		keys = (unsigned char*)SDL_GetKeyboardState(NULL);

		SDL_Window *window = SDL_CreateWindow(
			"Fortnite",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			screen_width, screen_height, SDL_WINDOW_SHOWN);

		renderer = SDL_CreateRenderer(window,
			-1, SDL_RENDERER_ACCELERATED);

		/*
		YOUR INIT CODE
		*/


	}

	void update(unsigned int current_time)
	{
		//copy previous key state
		memcpy(prev_key_state, keys, 256);

		//consume all window events, key state gets updated here automatically
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				exit(0);
			}
		}

		/*
		YOUR UPDATE CODE
		*/
		


	}

	void draw()
	{
		//set color to white
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		//clear screen with white
		SDL_RenderClear(renderer);

		/*

		YOUR DRAW CODE

		*/
		

		//flip buffers
		SDL_RenderPresent(renderer);
	}

}
int main(int argc, char **argv)
{
	
	Simulation::init();


	for(;;)
	{
		Simulation::update();
		
		Simulation::draw();
	}


	return 0;
}