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
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_mixer.h"
#include "SDL2/SDL_ttf.h"

#include "../defs.h"
#include "../structs.h"
#include "../json/cJSON.h"

#if UNIX
	#include <sys/stat.h>
	#include <pwd.h>
	#include <unistd.h>
	#include <errno.h>
#endif

extern int fileExists(char *filename);
extern char *readFile(char *filename);
extern int writeFile(char *filename, char *data);
extern char *getSaveFilePath(char *filename);
extern void initSounds(void);
extern void loadFighterDefs(void);
extern void loadItemDefs(void);
extern void initFonts(void);
extern void initBulletDefs(void);
extern void initLookups(void);
extern void initBattle(void);
extern void initGame(void);
extern void initStarSystems(void);
extern void initWidgets(void);
extern void destroyLookups(void);
extern void destroyFonts(void);
extern void destroySounds(void);
extern void destroyGame(void);
extern void destroyFighterDefs(void);
extern void destroyBulletDefs(void);
extern void destroyItemDefs(void);
extern void destroyStarSystems(void);
extern void destroyBattle(void);
extern void destroyTextures(void);
extern void destroyGalacticMap(void);
extern void destroyWidgets(void);
extern void expireTexts(void);

extern App app;
extern Colors colors;
