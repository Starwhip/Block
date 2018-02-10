#pragma once
class Block
{
	int health, position_x, position_y, type_id;
public:
	Block(int position_x, int position_y, int type_id);
	~Block();
};

