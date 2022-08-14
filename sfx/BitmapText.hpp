#pragma once
#include "sfx/BitmapFont.hpp"

namespace sfx {
	class BitmapText : public sf::Drawable, public sf::Transformable {
	public:
		BitmapText() = default;
		BitmapText(const BitmapText & text) = default;

		void setString(const sf::String & string);
		const sf::String & getString() const; 
		
		void setFont(const BitmapFont & font);
		const BitmapFont & getFont() const;
	
		void setCharacterSize(unsigned size);
		unsigned getCharacterSize() const;

		void setTabSize(unsigned indent);
		unsigned getTabSize() const;
		
		void setFillColor(sf::Color color);
		sf::Color getFillColor() const;

	protected:
    	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
	
	private:
		sf::String string;
		sf::Color color = sf::Color::White;
		const BitmapFont * font = nullptr;
		unsigned char_size = 0;
		unsigned tab_indent = 4;
	};
}