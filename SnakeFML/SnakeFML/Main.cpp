#include "Snake.hpp"
#include "Mouse.hpp"

int main()
{
	//hardcode size for now...
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

	//limit to 60 for now. Coil whine is annoying
	window.setFramerateLimit(60);

	//our snake and mouse
	Snake snake;
	Mouse mouse;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Green); // green because... grass?
		window.draw(snake);
		window.draw(mouse);
		window.display();
	}

	return 0;
};