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
		float **x, **y, distance;
		int n_nodes = 3;
		
	};
	
	struct Sol
	{
		const int *index;
		int *h;
		float distance;
		double *&temperature; // = 1.0;
		double *cooling_rate; //= 0.98;
		double **current_solution;
		double **permuted_solution;
		double **min_temperature; //= 0.000001;

	};
	
	void retrieve_Nodes(Node *n, Sol *s, int value, int first_city, int detour_1, int detour_2, int detour_3, int last_city)
	{

		const int index = 5;
		int myarray[index];


		myarray[0] = first_city;
		myarray[1] = detour_1;
		myarray[2] = detour_2;
		myarray[3] = detour_3;
		myarray[4] = last_city;

		float create_Random_Nodes(Sol *s, float pos_x, float pos_y, float distance);
		{
			first_city = 3, 3;
			detour_1 = rand() % 8 + 33, rand() % 41 + 4;
			detour_2 = rand() % 23, rand() % 64;
			detour_3 = rand() % 74, rand() % 47;
			last_city = 105, 105;

		
			
		}

		void simulating_annealing(Simulation::Node *n, Simulation::Sol *s);
		{
			s -> distance;
			s->temperature;
			s->cooling_rate;
			s-> min_temperature;
			while (temperature > min_temperature)

			s->current_solution = s->permuted_solution;
			if (permuted_solution > current_solution)
			{
				permuted_solution != current_solution;
			}
			else
			{
				permuted_solution -> current_solution;
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