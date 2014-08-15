/***********************************************************************
     * File       : map.hpp
     * Created    : Aug 15, 2016
     * Copyright  : (C) 2014 Achpile
     * Author     : Fedosov Alexander
     * Email      : achpile@gmail.com

***********************************************************************/
#ifndef __MAP
#define __MAP


enum MapTile {
	mtAir,
	mtWall,
	mtSolid
};


struct Map {
	sf::Texture *bgTex;
	sf::Sprite  *bgSpr;

	sf::Texture *tileTex;
	sf::Sprite  *tileSpr;

	char tiles[MAP_SIZE_X][MAP_SIZE_Y];

	 Map();
	~Map();

	void update();
	void render();
};


#endif