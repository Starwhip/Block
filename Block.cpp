#include "Block.h"



Block::Block(int position_x, int position_y, int type_id)
{
	this->position_x = position_x;
	this->position_y = position_y;
	this->type_id = type_id;
	this->health = 100;
}


Block::~Block()
{
}
