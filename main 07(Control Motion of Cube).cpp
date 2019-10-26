#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
	RenderWindow window(sf::VideoMode(600, 400), "Tanveer Motion");
	RectangleShape tk;
	tk.setSize(Vector2f(80, 80));
	tk.setPosition(Vector2f(tk.getPosition().x, window.getSize().y - tk.getSize().y));
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::KeyReleased:

				if (Keyboard::Key::Left == event.key.code)
				{
					tk.move(-80, 0);
				}
				else if (Keyboard::Key::Right == event.key.code)
				{
					tk.move(80, 0);
				}
				else if (Keyboard::Key::Up == event.key.code)
				{
					tk.move(0, -80);
				}
				else if (Keyboard::Key::Down == event.key.code)
				{
					tk.move(0, 80);
				}
			}
		}

		window.clear();
		window.draw(tk);
		window.display();
	}

	return EXIT_SUCCESS;
}
