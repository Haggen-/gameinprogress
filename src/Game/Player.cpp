//
// Created by root on 5/6/15.
//

#include <SDL_log.h>
#include "Player.h"

void Player::draw() {
    SDL_LogInfo(0, "Hello, I'm drawn at X '%d' and Y '%d'", this->posX, this->posY);
}

void Player::move(int x, int y) {
    this->posX = x;
    this->posY = y;
}

Player::Player() {
    this->velocity = 5;
    this->posX = 0;
    this->posY = 0;
}
