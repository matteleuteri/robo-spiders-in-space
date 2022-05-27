#ifndef UNICODE
#define UNICODE
#endif 

#include <windows.h>
#include <stdint.h>
#include <profileapi.h>

#include "Scene.h"
// #include "Player.h"


static bool isRunning;
static Player* player;
static Scene* scene;
static HANDLE  m_hTimer;


enum SCREENSTATE
{
    MAINMENU,
    GAMING,
    PAUSEMENU,
    OTHER
};

struct window_dimension 
{
    int height;
    int width;
};

struct windowConfigs 
{
    int width; 
    int height;
    SCREENSTATE screenState;
    // refresh rate??? what else???
};


int xoff;
int yoff;