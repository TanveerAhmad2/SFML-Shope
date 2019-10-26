#include<iostream>
#include<time.h>
#include<unistd.h>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main()
{
	RenderWindow window(VideoMode(600, 400), "Tanveer Motion");
	RectangleShape tk;
	tk.setSize(Vector2f(20, 20));
    int r=0;
    for(int i=1;i<=5;i++)
    {
        usleep(1);                // seconds
        r+=10;
        tk.setPosition(Vector2f(r,r));
    }
	while (window.isOpen())
	{
        Event k;
		while (window.pollEvent(k))
		{
			switch (k.type)
			{
			      window.close();
			}
		}

		window.clear();
		window.draw(tk);
		window.display();
	}

	return EXIT_SUCCESS;
}
