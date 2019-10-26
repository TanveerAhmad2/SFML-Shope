#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(600, 400), "Tanveer Motion");
	RectangleShape tk;
	tk.setSize(Vector2f(80, 80));
	tk.setPosition(Vector2f(56,56));
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
