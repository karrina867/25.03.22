#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"
#include"const.h"
#include"river.h"
#include"barier.h"
#include"splash.h"
class Game {
public:
	enum GameState { INTRO, PLAY, GAME_OVER };
	Game();
	void play();
	void check_events();
	void update();
	void draw();
	void check_collisions();
	int fg = 0;
private:
	sf::RenderWindow window;
	GameState game_state = PLAY;
	Player player;
	std::vector<Barier*> bariers;
	River river1, river2;
	SplashScreen  /*intro_screen,*/ game_over_screen;
};