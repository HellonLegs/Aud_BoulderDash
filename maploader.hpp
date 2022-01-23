#pragma once

#include <fstream>
#include <string>
#include "Object.hpp"
#include "Adress.hpp"



using namespace std;

void loadMap(int level, Adress *playerAdress, Adress *exitAdress, Object* map[40][22]) {
	string fileName[2] = { "levels/lvl1.txt", "levels/lvl2.txt" };
	ifstream file;
	int x = 0;
	int y = 0;
	string block;

	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 22; j++) {
			map[i][j] = nullptr;
		}
	}

	for (int j = 0; j < 22; j++) {
		map[0][j] = new Object(titan);
		map[39][j] = new Object(titan);
	}
	for (int j = 1; j < 39; j++) {
		map[j][0] = new Object(titan);
		map[j][21] = new Object(titan);
	}


	level -= 1;
	file.open(fileName[level]);

	while (!file.eof()) {
		file >> x >> y >> block;


		if (block == "titan") {
			map[x][y] = new Object(titan);
		}
		else if (block == "wall") {
			map[x][y] = new Object(wall);
		}
		else if (block == "rock") {
			map[x][y] = new Object(rock);
		}
		else if (block == "dirt") {
			map[x][y] = new Object(dirt);
		}
		else if (block == "diamant") {
			map[x][y] = new Object(diamant);
		}
		else if (block == "air") {
			map[x][y] = new Object(air);
		}
		else if (block == "player") {
			*playerAdress = Adress(x, y);
			map[x][y] = new Object(player);
		}
		else if (block == "enemy") {
			map[x][y] = new Object(enemy);
		}
		else if (block == "door"){
			*exitAdress = Adress(x, y);
			map[x][y] = new Object(door);
		}
		
	}

	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 22; j++) {
			if (map[i][j] == nullptr) {
				map[i][j] = new Object(dirt);
			}
		}
	}

	file.close();

}
