#pragma once
#include "sfx/BitmapFont.hpp"

namespace sfx {
	class BitmapText : public sf::Drawable {
	public:
		BitmapText() = default;
		BitmapText(const BitmapText & text) = default;

		void setString(const sf::String & string);
		
		void setFont(const BitmapFont & font);
		
		void setPosition(sf::Vector2f position);
		void setPosition(float x, float y);
		
		void setCharacterSize(unsigned size);
	protected:
    	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
	private:
		sf::String string;
		sf::Vector2f position;
		const BitmapFont * font = nullptr;
		unsigned char_size = 0;
	};
}