#include "Player.h"

int Player::getLives() {
	return this->lives;
}

int Player::getScore() {
	return this->score;
}

void Player:: setScore(int i) {
	this->score += i;
}
void Player::subtractLife() {
	this->lives--;
	if (this->lives == 0) {
		cout << "GAME OVER" << endl;
	}
}