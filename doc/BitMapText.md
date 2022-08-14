# sfx::BitmapText

## Description
Monospace Bitmap text that can be drawn to a render target.

<br>

---

<br>


## Inheritance

sfx::BitmapText inherits from sf::Drawable and sf::Transformable.


<br>

---

<br>

## Member functions

Note: For transform functions consult documentation of sf::Transformable

<br>

### BitmapText();
Default constructor.

<br>

### BitmapText(const BitmapText & text)
Copy constructor

<br>

### void setString(const sf::String & string)
Set the string which should be rendered.

<br>

### const sf::String & getString() const
Retrieve the current string.

<br>

### void setFont(const BitmapFont & font)
Set the font which should be used. THe font is no copied must be held be alive.

<br>

### const BitmapFont & getFont() const
Retrieve the current font.

<br>

### void setPosition(sf::Vector2f position)
Set position of the sfx::BitmapText.


<br>

### void setCharacterSize(unsigned size)
Sets the height of the characters.

<br>

### unsigned getCharacterSize() const
Retrieves the current character size. 

<br>

### void setTabSize(unsigned indent)
Sets width of a tab in character widths. The default is 4.

<br>

### unsigned getTabSize() const
Retrieves the current tab size. 

<br>

### void setFillColor(sf::Color color)
Sets the text color.

<br>

### sf::Color getFillColor() const
Gets the current text color.

<br>
