/* taskFunc.h

Contains set of functions use threads to split up the work

Created: 1 Oct. 2017
Author: Michael G. Oranski ID: 0557701
Contact: moranski@mail.uoguelph.ca
*/

#ifndef _DATAFUNC_H_
#define _DATAFUNC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#define DEBUG 0
#define DEBUG2 0
#define DEBUG3 0
#define DEBUG4 0	// For Display Grid
#define TEST 0

extern int threadNum;		// number of threads in program
extern int gridSize;		// Size of the grid
extern int** gridOne;
extern int** gridTwo;
extern int curGrid;		// Which grid is being read from. 0 = gridOne, 1 = gridTwo

int validateArg (int argc, char * argv[]);

void createGrid ();

void fillGrid ();

void createStart ();

void createTest ();

void* checkCellLife (void* rank);

void displayGrid ();

void freeGrid ();

#endif
