#include "BitmapText.hpp"

namespace sfx {
	void BitmapText::setString(const sf::String & string) {
		this->string = string;
	}



	void BitmapText::setFont(const BitmapFont & font) {
		this->font = &font;
	}



	void BitmapText::setPosition(sf::Vector2f position) {
		this->position = position;
	}



	void BitmapText::setPosition(float x, float y) {
		this->setPosition({x,y});
	}



	void BitmapText::setCharacterSize(unsigned size) {
		this->char_size = size;
	}



	void BitmapText::draw(sf::RenderTarget & target, sf::RenderStates states) const {
		if(this->font) {
			sf::VertexArray vertecies;
			vertecies.setPrimitiveType(sf::Quads);
			for(std::size_t i = 0; i < this->string.getSize(); i++) {
				const auto chr = string[i];
				const auto x = chr % 16;
				const auto y = chr / 16;

				const auto glyph_size = this->font->getGlyphSize();

				const float aspect_ratio = static_cast<float>(glyph_size.x) / static_cast<float>(glyph_size.y); 
				const auto csize = sf::Vector2f{
					aspect_ratio * static_cast<float>(char_size),
					static_cast<float>(char_size)};

				// glyph
				const float glyph_x1 = x * glyph_size.x;
				const float glyph_y1 = y * glyph_size.y;
				const float glyph_x2 = glyph_x1 + glyph_size.x;
				const float glyph_y2 = glyph_y1 + glyph_size.y;

				// character
				const float char_x1 = i * csize.x + this->position.x;
				const float char_y1 = this->position.y;
				const float char_x2 = char_x1 + csize.x;
				const float char_y2 = char_y1 + csize.y;

				
				vertecies.append(sf::Vertex{
					{char_x1, char_y1},
					{glyph_x1, glyph_y1}});
				
				vertecies.append(sf::Vertex{
					{char_x2, char_y1},
					{glyph_x2, glyph_y1}});
				
				vertecies.append(sf::Vertex{
					{char_x2, char_y2},
					{glyph_x2, glyph_y2}});
				
				vertecies.append(sf::Vertex{
					{char_x1, char_y2},
					{glyph_x1, glyph_y2}});
			}
			states.texture = &this->font->getTexture();
			target.draw(vertecies, states);
		}
	}
}
