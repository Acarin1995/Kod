#include "Swiat.hpp"
#include <iostream>
#include <fstream>
using namespace std;
Swiat::Swiat(void)
{
	aktywnaMapa=0;

}

Swiat::~Swiat(void)
{

}
void Swiat::wczytajMapy()
{
	ifstream mapa;
			mapa.open("mapaGlowna.txt");
			for(int i=0;i<7;i++)
			{
    			for(int j=0;j<7;j++)
    			{
     			   mapa >> mapaGlowna[i][j];
     			}
     		}
}
void Swiat::wczytajLokacja()
{
	ifstream mapa;
	mapa.open("lokacjaMiasto.txt");
			for(int i=0;i<5;i++)
			{
    			for(int j=0;j<5;j++)
    			{
     			   mapa >> lokacjaMiasto[i][j];
     			}
     		}
}

bool Swiat::wczytajkafelki()
{
		if(!texture.loadFromFile("Mapa.png"))
        return false;
		for( int x = 0; x <= 6; x++ )
		{
			sprite[x].setTexture(texture);
			sprite[x].setTextureRect(sf::IntRect(x*16,0,16,16));
		}
        return true;
}
void Swiat::rysujMapeGlowna(sf::RenderWindow &Window)
{
	for( int x = 0; x < 7; x++ )
		{
		for( int y = 0; y < 7; y++ )
		{
			if (mapaGlowna[y][x]== 0)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[0].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[0]);
			}
			else if (mapaGlowna[y][x]== 1)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[1].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[1]);
			}
			else if (mapaGlowna[y][x]== 2)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[2].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[2]);
			}
			else if (mapaGlowna[y][x]== 3)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[3].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[3]);
			}
			else if (mapaGlowna[y][x]== 4)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[4].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[4]);
			}
			else if (mapaGlowna[y][x]== 5)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[5].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[5]);
			}
			else if (mapaGlowna[y][x]== 6)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[6].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[6]);
			}
		}
	}	
	
}
void Swiat::rysujlokacjaMiasto(sf::RenderWindow &Window)
{
	for( int x = 0; x < 5; x++ )
		{
		for( int y = 0; y < 5; y++ )
		{
			if (lokacjaMiasto[y][x]== 0)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[0].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[0]);
			}
			else if (lokacjaMiasto[y][x]== 1)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[1].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[1]);
			}
			else if (lokacjaMiasto[y][x]== 2)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[2].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[2]);
			}
			else if (lokacjaMiasto[y][x]== 3)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[3].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[3]);
			}
			else if (lokacjaMiasto[y][x]== 4)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[4].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[4]);
			}
			else if (lokacjaMiasto[y][x]== 5)
			{
				pozycjay= y*16;
				pozycjax= x*16;
				sprite[5].setPosition(pozycjax, pozycjay);
				Window.draw(sprite[5]);
			}
		}
	}	
	
}
