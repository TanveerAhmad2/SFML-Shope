#include <SFML/Graphics.hpp>

using namespace sf;
int main(){
    RenderWindow tk(VideoMode(300, 200),"Title Of Window");
    tk.setFramerateLimit(50);
    while(tk.isOpen()){
        Event k;
        while(tk.pollEvent(k)){
            switch(k.type){
                case Event::Closed:
                    tk.clear();
                    tk.close();
                    break;
            }
        }
    }
    return EXIT_SUCCESS;
}
