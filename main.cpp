#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

int main() 
{
    RenderWindow win(VideoMode(1400, 800), "test");
    bool deletesprite = false;
    ConvexShape convex;
    CircleShape shape;
    // resize it to 5 points
    convex.setPointCount(5);

    // define the points

    convex.setFillColor(Color::Green);

   
//hello motehrfucker

    while (win.isOpen())
    {
        Event ev;
        while (win.pollEvent(ev))
        {
            switch (ev.type)
            {
            case Event::Closed :
                win.close();
                break;
            case Event::KeyPressed :

                if(ev.key.code == Keyboard::B)
                {
                    deletesprite = true;
                }
                
                if(ev.key.code == Keyboard::A)
                {
                deletesprite = false;
                convex.setPoint(0, sf::Vector2f(100.f, 30.f));
                convex.setPoint(1, sf::Vector2f(150.f, 10.f));
                convex.setPoint(2, sf::Vector2f(120.f, 90.f));
                convex.setPoint(3, sf::Vector2f(30.f, 100.f));
                convex.setPoint(4, sf::Vector2f(0.f, 50.f));;

                }
                
                std::cout << "key:" << ev.key.code << std::endl;
                

            default:
                break;
            }
            
        }

        win.clear(Color::Cyan);
        if (!deletesprite)
        {
            win.draw(convex);
        }
        
        

        win.display();
        
    }
    

    return 0;

}