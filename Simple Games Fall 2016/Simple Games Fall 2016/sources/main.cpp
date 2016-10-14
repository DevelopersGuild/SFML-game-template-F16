// Simple Game Fall 2016.cpp

#include <SFML/Graphics.hpp>
#include "ResourcePath.h"
#include "Overlap.h"


int main()
{
	//Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Works!");

	// declare variables
	sf::RectangleShape rect;
	rect.setSize(sf::Vector2f(100.f, 200.f));
	rect.setFillColor(sf::Color::Green);
	
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
		window.draw(rect);
		//update the window
		window.display();

	}

	return 0;
}
