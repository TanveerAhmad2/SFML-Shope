#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>
using namespace sf;
int main(){
    RenderWindow window(VideoMode(512, 512),"SFML Tutorials");
    RectangleShape player(Vector2f(100.0f, 100.0f));
    player.setFillColor(Color::Red);
    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case Event::Closed:
                    window.clear();
                    window.close();
                    break;
                case Event::TextEntered:
                    if(event.text.unicode < 128){
                        printf("%c", event.text.unicode);
                    }
                    break;
            }
        }
        window.clear();
        window.draw(player);
        window.display();
    }
    return EXIT_SUCCESS;
}
