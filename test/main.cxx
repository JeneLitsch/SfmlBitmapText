#include "sfx/BitmapFont.hpp"
#include "sfx/BitmapText.hpp"

int main() {
	sf::RenderWindow window;
	window.create(sf::VideoMode{256,256}, "Bitmap Font");
	window.setFramerateLimit(60);
	
	sfx::BitmapFont font;
	font.loadFromFile("font/ref_font.png");
	font.setGlyphSize(8,8);

	sfx::BitmapText text;
	text.setPosition(500,500);
	text.setOrigin(64,16);
	text.setFont(font);
	text.setString("Hello\n\tWorld\t!");
	text.setCharacterSize(32);
	text.setTabSize(2);
	text.setFillColor(sf::Color::Red);

	while(window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if(event.type == sf::Event::Closed) {
				window.close();
			}
		}

		text.rotate(1);

		window.clear(sf::Color::Black);
		window.draw(text);
		window.display();
	}
	return 0;
}

