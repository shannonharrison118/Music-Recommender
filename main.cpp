#include <iostream>
#include <stack>
#include "Artists.h"
#include "Graph.h"
#include <SFML/Graphics.hpp>
using namespace std;

void visual(){
    string userChoice = "someone\nsomeone\nsomeone\nsomeone\nsomeone";

    sf::RenderWindow window(sf::VideoMode(1800, 1400), "sound geeks");
    sf::Color boxes(232, 232, 207);
    sf::Color title(102, 102, 150);
    sf::Color text(102, 43, 50);
    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(1500, 150));
    rectangle.setFillColor(boxes);
    rectangle.setPosition(150, 70);
    sf::RectangleShape rectangle2;
    rectangle2.setSize(sf::Vector2f(800, 800));
    rectangle2.setFillColor(boxes);
    rectangle2.setPosition(50, 575);
    sf::RectangleShape rectangle3;
    rectangle3.setSize(sf::Vector2f(800, 800));
    rectangle3.setFillColor(boxes);
    rectangle3.setPosition(950, 575);

    sf::Font font;
    if (!font.loadFromFile("Facetype - Moki-Mono copy.otf")){
        cout << "file not loaded";
    }

    sf::Text head("SOUND GEEKS", font);
    head.setCharacterSize(80);
    head.setStyle(sf::Text::Bold);
    head.setFillColor(title);
    head.setPosition(420, 95);

    sf::Text artist("input", font);
    artist.setCharacterSize(80);
    artist.setStyle(sf::Text::Bold);
    artist.setFillColor(boxes);
    artist.setPosition(680, 300);

    sf::Text sub1("artists other people love:", font);
    sub1.setCharacterSize(30);
    sub1.setStyle(sf::Text::Bold);
    sub1.setFillColor(boxes);
    sub1.setPosition(50, 500);

    sf::Text sub2("recommended artists:", font);
    sub2.setCharacterSize(30);
    sub2.setStyle(sf::Text::Bold);
    sub2.setFillColor(boxes);
    sub2.setPosition(950, 500);

    sf::Text recommendations1(userChoice, font);
    recommendations1.setCharacterSize(50);
    recommendations1.setStyle(sf::Text::Bold);
    recommendations1.setLineSpacing(3.4);
    recommendations1.setFillColor(text);
    recommendations1.setPosition(75, 615);

    sf::Text recommendations2(userChoice, font);
    recommendations2.setCharacterSize(50);
    recommendations2.setStyle(sf::Text::Bold);
    recommendations2.setLineSpacing(3.4);
    recommendations2.setFillColor(text);
    recommendations2.setPosition(975, 615);

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
        window.draw(rectangle2);
        window.draw(rectangle3);
        window.draw(head);
        window.draw(artist);
        window.draw(sub1);
        window.draw(sub2);
        window.draw(recommendations1);
        window.draw(recommendations2);
        window.display();
    }
}

int main() {
    cout << "Hi! Welcome to the Rhythm Recommender!" << endl;
    cout << "What’s an artist that you enjoy listening to?" << endl;
    string input;
    getline(cin, input);

    //can pass in input, and strings from bfs and dfs
    visual();

    return 0;
}
