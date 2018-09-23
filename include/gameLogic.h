#ifndef GAMELOGIC_H
#define GAMELOGIC_H  

#include <SFML/Graphics.hpp>
#include "../include/userView.h"
#include "../include/computerView.h"
#include "../include/ballView.h"

class GameLogic{
    
    private:
        sf::RenderWindow *App;
        sf::Clock clock;
        int userScore, computerScore;
        int pageState;//0 if not playing, 1 if playing, 2 if home page
        
        //View classes
        UserView *userView;
        ComputerView *computerView;
        BallView *ballView;
        
        int detectCollision();
        void findBallAngle(sf::Vector2f ballLocation, sf::Vector2f paddleLocation);
        void updateScore();
        
    public:
        GameLogic(sf::RenderWindow *App);
        ~GameLogic();
        
        int gameLoop();        
};

#endif 
