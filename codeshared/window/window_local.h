#pragma once

#include "SDL.h"

/**
	\brief Initializes the r_mode values for a given display.
**/
void Window_VideoMode_Init( int displayIndex );

void Window_VideoMode_Shutdown( void );

/**
	\brief Retrieves the DisplayMode associated with the current r_mode value, or the next-best thing.

	Call Window_VideoMode_Init() first!
**/
SDL_DisplayMode Window_VideoMode_GetDisplayMode();