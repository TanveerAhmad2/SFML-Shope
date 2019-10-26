#include<iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main()
{
	RenderWindow window(VideoMode(600, 400), "Tanveer Motion");
	RectangleShape tk;
	tk.setSize(Vector2f(80, 80));
	cout<<"Enter X Axis Position"<<endl;
	    int x,y;
	    cin>>x;
    cout<<"Enter Y Axis Position"<<endl;
	    cin>>y;
	    tk.setPosition(Vector2f(x,y));
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
