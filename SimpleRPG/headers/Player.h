/*
 * Player.h
 *
 *  Created on: May 19, 2014
 *      Author: Anthony
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "ImageLoader.h"
#include "SFML/Graphics.hpp"

class Player :sf::Sprite{

public:
	Player();
	virtual ~Player();

	void setLocation(double, double);

	sf::Sprite& getImage();
	void moveRight(float);
	void moveLeft(float);
	void moveUp(float);
	void moveDown(float);
	void draw(sf::RenderWindow*);
	void moveTo(float x, float y);

private:

	//member variables
	sf::Texture texture;
	ImageLoader player_image_manager;

	//functions
	void switchDirection(int index);
	bool loadImage();

};

#endif /* PLAYER_H_ */
