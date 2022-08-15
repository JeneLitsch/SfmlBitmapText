#pragma once
#include "sfx/BitmapFont.hpp"

namespace sfx {
	class BitmapText : public sf::Drawable, public sf::Transformable {
	public:
		BitmapText() = default;
		BitmapText(const BitmapText & text) = default;

		void setString(const sf::String & string);
		const sf::String & getString() const; 

		void setUtf8String(const std::string & string);
		
		void setFont(const BitmapFont & font);
		const BitmapFont & getFont() const;
	
		void setCharacterScale(unsigned size);
		unsigned getCharacterScale() const;

		void setTabSize(unsigned indent);
		unsigned getTabSize() const;
		
		void setFillColor(sf::Color color);
		sf::Color getFillColor() const;

		sf::FloatRect getGlobalBounds() const;
		sf::FloatRect getLocalBounds() const;

	protected:
    	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
		
	private:
		void cacheGeometrie();
		sf::String string;
		sf::Color color = sf::Color::White;
		sf::VertexArray vertecies;
		const BitmapFont * font = nullptr;
		unsigned char_scale = 0;
		unsigned tab_indent = 4;
	};
}