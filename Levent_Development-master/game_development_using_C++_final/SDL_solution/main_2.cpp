#include <iostream>
#include <assert.h>
#include <iterator>
#include <stdlib.h>
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
		float pos_x, pos_y;
		float w, h;
		int n_nodes = 5;
	};

	struct Sol
	{
		int myarray;
		int index;
		int h;
	};

	double simulating_annealing()
	{
		float total_distance;
		float distance;
		const int max_num = rand() % 1;
		double temperature = 1.0;
		double cooling_rate = 0.98;
		double *current_solution;
		double *permuted_solution;
		double min_temperature = 0.000001;
		double p = (double)rand() / RAND_MAX;
		double tmp;

		current_solution = 0;


		if (permuted_solution < current_solution)
		{
			
		}
		else if (permuted_solution > current_solution)
		{

		}

		temperature *= cooling_rate;

		if (temperature > min_temperature)
		{

		}

	}

	void create_Random_Nodes(Simulation::Node *n, Simulation::Sol *s)
	{
		
		for (int i =0; i < 5; i++)
		{
			n[0].pos_x = rand() % screen_width;
			n[0].pos_y = rand() % screen_height;
		}


		double simulating_annealing();
	}
	

	void retrieve_Nodes(Node *n, Sol *s, int n_nodes = 5)
	{
		n->n_nodes;
		

		for (int i = 0; i < n_nodes - 1; i++)
		{
			s -> myarray[n];
		}

		create_Random_Nodes(n,s);
		
	}


	void init()
	{
		SDL_Init(SDL_INIT_VIDEO);

		prev_key_state[256];
		keys = (unsigned char*)SDL_GetKeyboardState(NULL);

		SDL_Window *window = SDL_CreateWindow(
			"null",
			SDL_WINDOWPOS_CENTERED, 
			SDL_WINDOWPOS_CENTERED,
			screen_width, 
			screen_height, 
			SDL_WINDOW_SHOWN);

		renderer = SDL_CreateRenderer(window,
			-1, 
			SDL_RENDERER_ACCELERATED);

		/*
		YOUR INIT CODE
		*/



	}

	void update()
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
		//set color to black
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		//clear screen with white
		SDL_RenderClear(renderer);

		/*
		YOUR DRAW CODE
		*/

		//Points and Rectangles 
		SDL_Rect r;
		r.x = n[0].pos_x;
		r.y = n[0].pos_y;
		r.w = 50;
		r.h = 50;
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 250);
		SDL_RenderFillRect(renderer, &r);
		/* 
		SDL_Rect r1;
		r1.x = 133;
		r1.y = 247;
		r1.w = 50;
		r1.h = 50;
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 250);
		SDL_RenderDrawRect(renderer, &r1);

		SDL_Rect r2;
		r2.x = 222;
		r2.y = 76;
		r2.w = 50;
		r2.h = 50;
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 250);
		SDL_RenderDrawRect(renderer, &r2);
		
		SDL_Rect r3;
		r3.x = 42;
		r3.y = 55;
		r3.w = 50;
		r3.h = 50;
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 250);
		SDL_RenderDrawRect(renderer, &r3);


		SDL_Rect r4;
		r4.x = 346;
		r4.y = 549;
		r4.w = 50;
		r4.h = 50;
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 250);
		SDL_RenderDrawRect(renderer, &r4);
		*/
		

		//lines between nodes

		SDL_RenderDrawLine(renderer, 333,333, 346, 549);
		SDL_RenderDrawLine(renderer, 42, 55, 222, 76);
		SDL_RenderDrawLine(renderer, 42, 55, 133, 247);
		SDL_RenderDrawLine(renderer, 133, 247, 333, 333);

		//flip buffers
		SDL_RenderPresent(renderer);
	}

}
int main(int argc, char **argv)
{


	Simulation::init();


	for (;;)
	{
		Simulation::update();

		Simulation::draw();
	}


	return 0;
}