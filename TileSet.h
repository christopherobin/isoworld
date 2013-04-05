#pragma once

#include "common.h"
#include <vector>
#include "c_tile.h"
#include "s_map_block.h"
#include "DetailedTile.h"

class TileSet
{
public:
	TileSet(void);
	~TileSet(void);

	void load_ini(ALLEGRO_PATH * _path);

	void load_palette(ALLEGRO_BITMAP *);

	c_tile * get_tile(s_map_block block);
	c_tile * get_structure_tile(s_map_block block);
    DetailedMap * rendered_map;

	vector<vector<ALLEGRO_COLOR>> palette;
	ALLEGRO_COLOR get_palette_color(int x, int y);
	vector<c_tile> tile_set;
	c_tile grid_tile;
	int tile_width;
	int tile_height;
	int snap_height;
};