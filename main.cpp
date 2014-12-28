#include <SFML/Graphics.hpp>
#include "Postac.hpp"
#include "Swiat.hpp"
#include <iostream>
int main()
{
    sf::RenderWindow oknoAplikacji(sf::VideoMode(800, 600), "Kod");
	Postac postac;
	Swiat swiat;
	postac.wczytajObrazek();
	swiat.wczytajkafelki();
	swiat.wczytajMapy();
	swiat.wczytajLokacja();
    while(oknoAplikacji.isOpen())
    {

            sf::Event zdarzenie;
            while(oknoAplikacji.pollEvent(zdarzenie))
            {
				postac.sterowanie(zdarzenie);
                if( zdarzenie.type == sf::Event::Closed )
                     oknoAplikacji.close();
            }
		oknoAplikacji.clear( sf::Color::White);
		if( swiat.aktywnaMapa==0)
		{
			swiat.rysujMapeGlowna(oknoAplikacji);
			if (swiat.mapaGlowna[ postac.py ][ postac.px ] == 6 )
			{
				swiat.aktywnaMapa=1;
			}
		}
		else if (swiat.aktywnaMapa==1)
		{
			swiat.rysujlokacjaMiasto(oknoAplikacji);
		}
		oknoAplikacji.draw(postac);
        oknoAplikacji.display();
 
    }
    return 0;
}
