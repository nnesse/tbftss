/*
Copyright (C) 2015 Parallel Realities

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#include "SDL2/SDL.h"

#include "../defs.h"
#include "../structs.h"
#include "../json/cJSON.h"

extern void drawText(int x, int y, int size, int align, SDL_Color c, const char *format, ...);
extern char *readFile(char *filename);
extern long lookup(char *name);
extern int getDistance(int x1, int y1, int x2, int y2);
extern int mod(int n, int x);
extern void blit(SDL_Texture *texture, int x, int y, int centered);
extern SDL_Texture *getTexture(char *filename);
extern void playSound(int id);

extern App app;
extern Colors colors;
