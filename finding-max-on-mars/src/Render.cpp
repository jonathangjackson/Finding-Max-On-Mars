#include "Render.h"



Render::Render()
{
}


Render::~Render()
{
}

void Render::drawBG() {
	l->getBg().draw(0, 0);
}

void Render::drawFG(Enemy e) {
	e.animateSprite(0);
}

void Render::loadLevel(Level l) {
	this->l = new Level(l);
}