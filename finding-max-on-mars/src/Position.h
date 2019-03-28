#pragma once
class Position
{
private:
	float x;
	float y;
public:
	Position();
	~Position();
	void setPostion(float, float);
	float getX();
	float getY();
	bool inFrame();
};

