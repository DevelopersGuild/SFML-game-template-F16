// Simple Game Fall 2016.cpp : Defines the entry point for the console application.
//

// Day 1

#include <SFML/Graphics.hpp>
//#include "ResourcePath.h"
//#include "Overlap.h"


int main()
{
	//Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Works!");
	//limit the number of frames displayed to the refresh rate of the monitor (limite the framerate to good value)
	window.setVerticalSyncEnabled(true);

	// declare variables

	//start the game loop
	while (window.isOpen())
	{
		//process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			//close when the window is closed
			if (event.type == sf::Event::Closed)
				window.close();
		}

		//clear the screen
		window.clear();
		//draw
		//update the window
		window.display();

	}

	return 0;
}