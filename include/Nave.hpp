#include <SFML/Graphics.hpp>
class Nave
{
public:
    Nave (sf::Vector2f position, sf::Color color)
    {       
        if (!texture.loadFromFile("assets/Images/spritesheet.png"))
        {
        }
        this->sprite = sf::Sprite(texture);
        this->sprite.setPosition(position); // Posición inicial sprite
    }

    void move(float offsetX, float offsetY)
    {
        sprite.move(offsetX, offsetY);
    }

    void draw(sf::RenderWindow &window)
    {
        window.draw(this->sprite);
    }

    void update(){
        if (clock.getElapsedTime().asSeconds() >= frameTime)
        {
            currentFrame = (currentFrame + 1) % numFrames;
            sprite.setTextureRect(sf::IntRect((currentFrame * 48)+2, 90, 48, 22));
            clock.restart();
        }
    }

private:
    // sf::RectangleShape shape;
    sf::Sprite sprite;
    sf::Texture texture;
    sf::Clock clock;
    float frameTime = 0.1f; // Tiempo entre cada frame en segundos
    int currentFrame = 0;
    int numFrames = 1; // Número total de frames en la animación
    int frameWidth = 48;
    int frameHeight = 22;
};