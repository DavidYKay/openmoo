/* $Id$
 * OpenMoo Planet Definition
 * Copyright goes here
 */

#include "moo_const.h"

class moo_Race {
private:
char race_name[NAMLEN_MAX];
char leader_name[NAMLEN_MAX];

int tax_rate; //Measured in halfs of a percent, max is 10; 
