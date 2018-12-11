//Programer: Marco Bermudez
//Project: travelling salesman problem with simulated annealing
//Collaborator" leventalbayrak

#include <iostream>
#include <assert.h>
#include <iterator>
#include <cmath>

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
		float *pos_x, *pos_y;
		int n_nodes;
	};
	
	struct Sol
	{
		int *index;
		int *h;
		
	};
	
	int n_nodes = 5;
	int myarray;
	void retrieve_Nodes(Node *n, Sol *s, int value)
	{

		myarray[0];
		myarray[1] = detour_1;
		myarray[2] = detour_2;
		myarray[3] = detour_3;
		myarray[4] = last_city;
	}

	void create_Random_Nodes(Sol *s, float pos_x, float pos_y, float distance)
	{
		myarray[0].pos_x = rand() % screen_width;
		myarray[0].pos_y = rand() % screen_height;

		myarray[1].pos_x = rand() % screen_width;
		myarray[1].pos_y = rand() % screen_height;

		myarray[2].pos_x = rand() % screen_width;
		myarray[2].pos_y = rand() % screen_height;
	
		myarray[3].pos_x = rand() % screen_width;
		myarray[3].pos_y = rand() % screen_height;

		myarray[4].pos_x = rand() % screen_width;
		myarray[4].pos_y = rand() % screen_height;
		

	}

	double simulating_annealing(Simulation::Node *n, Simulation::Sol *s, double cost, int p)
	{
		float distance;
		double RAND_MIN = 0.0;
		double RAND_MAX = 1.0;
		double temperature = 1.0;
		double cooling_rate = 0.98;
		double *current_solution;
		double *permuted_solution;
		double min_temperature= 0.000001;
		double p = (double)rand() / RAND_MAX;

		current_solution = 0;

		if (permuted_solution < current_solution)
		{
				current_solution <- permuted_solution;
		}
		else if (permuted_solution > current_solution)
		{

		}

		temperature = (temperature * cooling_rate);

		if (temperature > min_temperature)
		{
			current_solution <-permuted_solution;
		}

	}
	
	};

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
		
		Simulation::simulating_annealing;

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