# sfx::BitmapFont

## Description
BitmapFont is a monospace bitmap font class.
The class holds the texture of the bitmap font as well as additional properties of the font.

<br>

---

<br>

## Member functions

<br>

### BitmapFont()
Default constructor. No texture is loaded and the size of glyphs is (0,0).

<br>

### BitmapFont(const BitmapFont & font)
Copy constructor.

<br>

### bool loadFromFile(const std::string & filename);
Forwards to sf::Texture.

<br>

### bool loadFromMemory(const void * data, std::size_t sizeInBytes);
Forwards to sf::Texture.

<br>

### bool loadFromStream (sf::InputStream & stream);
Forwards to sf::Texture.

<br>

### const sf::Texture & getTexture() const;
Retrieves the teexture held by the font.

<br>

### void setGlyphSize(unsigned width, unsigned height);
Sets the size of the Glyph in the texture. 

<br>

### void setGlyphSize(sf::Vector2u size);
Sets the size of the Glyph in the texture. 

<br>

### sf::Vector2u getGlyphSize() const;
Returns the current glyph size.

<br>

---

<br>
