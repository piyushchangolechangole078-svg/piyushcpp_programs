#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>

int main()
{
    sf::RenderWindow window(
        sf::VideoMode(800, 700),
        "Realistic Heart"
    );

    window.setFramerateLimit(60);

    // Heart points
    std::vector<sf::Vector2f> points;

    const float scale = 15.0f;
    const float centerX = 400.0f;
    const float centerY = 330.0f;

    // Parametric heart equation
    for (float t = 0; t <= 2 * 3.14159265f; t += 0.005f)
    {
        float x = 16 * pow(sin(t), 3);

        float y = 13 * cos(t)
                - 5 * cos(2 * t)
                - 2 * cos(3 * t)
                - cos(4 * t);

        points.push_back(
            sf::Vector2f(
                centerX + x * scale,
                centerY - y * scale
            )
        );
    }

    // Create heart shape
    sf::ConvexShape heart;
    heart.setPointCount(points.size());

    for (size_t i = 0; i < points.size(); i++)
    {
        heart.setPoint(i, points[i]);
    }

    heart.setFillColor(sf::Color(220, 20, 60));
    heart.setOutlineColor(sf::Color(120, 0, 20));
    heart.setOutlineThickness(3);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(20, 20, 25));

        window.draw(heart);

        window.display();
    }

    return 0;
}