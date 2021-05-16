#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

int main() 
{
    RenderWindow win(VideoMode(1400, 800), "test");
    
    ConvexShape convex;
    CircleShape shape;
    // resize it to 5 points
    convex.setPointCount(5);

    // define the points

    convex.setFillColor(Color::Green);

   


    while (win.isOpen())
    {
        Event ev;
        while (win.pollEvent(ev))
        {
            switch (ev.type)
            {
            case Event::Closed:
                win.close();
                break;
            case Event::KeyPressed:
                convex.setPoint(0, sf::Vector2f(100.f, 30.f));
                convex.setPoint(1, sf::Vector2f(150.f, 10.f));
                convex.setPoint(2, sf::Vector2f(120.f, 90.f));
                convex.setPoint(3, sf::Vector2f(30.f, 100.f));
                convex.setPoint(4, sf::Vector2f(0.f, 50.f));


            default:
                break;
            }
            
        }

        win.clear(Color::Cyan);
        
        win.draw(convex);

        win.display();
        
    }
    

    return 0;

}