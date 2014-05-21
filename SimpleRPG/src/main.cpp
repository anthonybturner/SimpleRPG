/*
 * main.cpp
 *
 *  Created on: May 21, 2014
 *      Author: Anthony
 */

#include <windows.h>
#include "Game.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR pCmdLine, int nCmdShow){

	Game* game;
	try{

		game = new Game();
		game->start();

	}catch (const char* e){

		MessageBoxA(NULL, e, "Exception Occured", MB_OK | 0);

	}

	delete game;
	return 0;

}

