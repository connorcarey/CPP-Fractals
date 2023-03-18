#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp> 

int main() {
	// Bulid the window
	sf::RenderWindow window(sf::VideoMode(960, 540), "Carey Fractal Viewer", sf::Style::Titlebar | sf::Style::Close);
	sf::Event e;

	while (window.isOpen()) {

		// Event polling
		while (window.pollEvent(e)) {
			switch (e.type) {
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::KeyPressed:
					if (e.key.code == sf::Keyboard::Escape)
						window.close();
					break;
			}
		}

		// Update the screen

		// Render
		window.clear(); // Clear old frame

		// Draw new frame

		window.display(); // Window is finished drawing
	}

	return 0;
}
