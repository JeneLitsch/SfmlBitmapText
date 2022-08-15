#pragma once
#include <SFML/Graphics.hpp>

namespace sfx {
	class BitmapFont {
	public:
		BitmapFont() = default;
		BitmapFont(const BitmapFont & font) = default;
		BitmapFont & operator=(const BitmapFont & right) = default;

		bool loadFromFile(const std::string & filename);
		bool loadFromMemory(const void * data, std::size_t sizeInBytes);
		bool loadFromStream (sf::InputStream & stream);

		const sf::Texture & getTexture() const;

		void setGlyphSize(unsigned width, unsigned height);
		void setGlyphSize(sf::Vector2u size);

		sf::Vector2u getGlyphSize() const;

	private:
		sf::Texture texture;
		sf::Vector2u size = {0,0};
	};
}