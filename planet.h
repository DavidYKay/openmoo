/* $Id$
 * OpenMoo Planet Definition
 * Copyright goes here
 */

#include "moo_const.h"

class moo_Planet {
private:

//Production Variables
int ship_slide; //The percentage of planetary resources going towards ship production
int ship_stored; //The number of BC's stored/leftover for ship production from last turn.
int ship_producing; //The type of ship that is being produced. 
int def_slide;
int def_stored;
int ind_slide;
int ind_stored;
int eco_slide;
int eco_stored;
int tech_slide;
//Tech BC goes straight to production pool.
int reserve_added; //Amount of BC to draw from the racial reserve.

//Planet Attibutes
char system_name[NAMLEN_MAX];
int basepop;
int planettype;
int planetatt;
int locX; locY; //Where the planet is located on the map

//State Variables
int planetpop;
int polution;
int maxpop; // Unmodified by the above polution.
char colony_name[NAMLEN_MAX];
int missilebases;
int planetevent;
int rebels;
int relocX, relocY; // 
int 


//Linked list?
moo_Planet* next;

}


