//Programer: Marco Bermudez
//Project: travelling salesman problem with simulated annealing
//Collaborator" leventalbayrak

#include <iostream>
#include <assert.h>
#include <iterator>
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
		float *x1, *x2, *y1, *y2, distance;
		int n_nodes = 3;
		
	};
	
	struct Sol
	{
		const int *index;
		int *h;
		double temperature = 1.0;
		double cooling_rate = 0.98;
		double *current_solution;
		double *permuted_solution;
		double min_temperature = 0.000001;

	};
	
	void retrieve_Nodes(Node *n, Sol *s, int value, int first_city, int last_city)
	{

		const int index = 5;
		int myarray[index];


		myarray[0] = first_city;
		myarray[1] = rand() % 8 + 33, rand() % 41 + 4;
		myarray[2] = rand() % 23, rand() % 64;
		myarray[3] = rand() % 74, rand() % 47;
		myarray[4] = last_city;

		float create_Random_Nodes(Sol *s, float pos_x, float pos_y, float distance);
		{
			myarray[0] = 3, 3;
			myarray[1] = rand() % 8 + 33, rand() % 41 + 4;
			myarray[2] = rand() % 23, rand() % 64;
			myarray[3] = rand() % 74, rand() % 47;
			myarray[4] = 105, 105;

			
		}

	};
/*
	void create_Random_Nodes(Node *n, Sol *s, int value)
	{
		retrieve_Nodes;
		n->x;
		n->y;
		
		myarray[0] = 3, 3;
		myarray[1] = rand() % 8 + 33, rand() % 41 + 4;
		myarray[2] = rand() % 23, rand() % 64;
		myarray[3] = rand() % 74, rand() % 47;
		myarray[4] = 105, 105;
		
	}
	*/
	void init(Simulation::Node *n, Simulation::Sol *s, int size)
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

		s->current_solution = permuted_solution;
		

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