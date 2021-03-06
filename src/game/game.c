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

#include "game.h"

void initGame(void)
{
	memset(&game, 0, sizeof(Game));
	
	game.starSystemTail = &game.starSystemHead;
	
	STRNCPY(game.selectedStarSystem, "Sol", MAX_NAME_LENGTH);
}

void resetGame(void)
{
	StarSystem *starSystem;
	Mission *mission;
	Challenge *challenge;
	
	memset(&game.stats, 0, sizeof(int) * STAT_MAX);
	
	for (starSystem = game.starSystemHead.next ; starSystem != NULL ; starSystem = starSystem->next)
	{
		for (mission = starSystem->missionHead.next ; mission != NULL ; mission = mission->next)
		{
			mission->completed = 0;
			
			for (challenge = mission->challengeHead.next ; challenge != NULL ; challenge = challenge->next)
			{
				challenge->passed = 0;
			}
		}
	}
	
	STRNCPY(game.selectedStarSystem, "Sol", MAX_NAME_LENGTH);
}

void destroyGame(void)
{
}
