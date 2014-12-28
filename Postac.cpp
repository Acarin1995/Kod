#include "Postac.hpp"

Postac::Postac(void)
{
	postac_X=0;
	postac_Y=0;
    sprite.setPosition(0,0);
}

Postac::~Postac(void)
{

}

bool Postac::wczytajObrazek()
{
	if(!texture.loadFromFile("postac.png"))
        return false;
        sprite.setTexture(texture);
        return true;
}

void Postac::sterowanie(sf::Event e)
{
	if(e.type == sf::Event::KeyPressed)
	{
		if( sf::Keyboard::isKeyPressed( sf::Keyboard::Up ) )
			{
				if(sprite.getGlobalBounds().top > 0)
				sprite.move( 0 , -16 );	
		    }
		else if( sf::Keyboard::isKeyPressed( sf::Keyboard::Down ) )
				{ 
					sprite.move( 0 , 16 );	
				}
        else if( sf::Keyboard::isKeyPressed( sf::Keyboard::Left ) )
			{
				sprite.move( -16 , 0 );	
			}
        else if( sf::Keyboard::isKeyPressed( sf::Keyboard::Right ) )
				{
					sprite.move( 16 , 0 );	
				}
	}
		px = sprite.getPosition().x / 16; // kafelek x
		py = sprite.getPosition().y / 16; // kafelek y
}

void Postac::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
        states.texture = &texture;
        target.draw(sprite,states);
        
}
