#include <msp430.h>

#include <libTimer.h>

#include "lcdutils.h"

#include "lcddraw.h"

#include "switches.h"

#include "buzzer.h"

#include <stddef.h>

#include <time.h>

#include <stdio.h>

#include <stdlib.h>



void main() {

  unsigned int seed = TA0R;

  srand(seed);

  configureClocks();

  lcd_init();

  clearScreen(COLOR_WHITE);

  buzzer_init();
}



 
