#ifndef Swiat_hpp
#define Swiat_hpp

#include <SFML\Graphics.hpp>
class Swiat
{
	private:
        sf::Sprite sprite[7];
        sf::Texture texture;
		int pozycjax;
		int pozycjay;
		int kafelek;
public:
        Swiat();
        ~Swiat();
		int aktywnaMapa;
		int mapaGlowna[7][7];
		int lokacjaMiasto[5][5];
        bool wczytajkafelki();
		void wczytajMapy();
		void wczytajLokacja();
		void rysujMapeGlowna(sf::RenderWindow &Window);
		void rysujlokacjaMiasto(sf::RenderWindow &Window);
};

#endif
