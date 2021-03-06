#ifndef UNICODE
#define UNICODE
#endif 

#include <windows.h>
#include <stdint.h>
#include <profileapi.h>
#include <filesystem>
#include <array>
#include <dwrite.h>

#include "Scene.h"
#include "Menu.h"

// is there a better way to do this
#include "input/headers/ButtonAction.h"
#include "input/headers/FireButton.h"
#include "input/headers/PauseButton.h"

enum SCREENSTATE
{
    MAINMENU,
    SCENE,
    PAUSEMENU
};

static bool isRunning;
std::filesystem::path p;
std::unique_ptr<Scene> scene;
std::unique_ptr<Menu> menu;
ID2D1HwndRenderTarget* renderTarget;
ID2D1SolidColorBrush* brushes[3];
SCREENSTATE screenState;

ID2D1Bitmap *playerBitmap;
ID2D1Bitmap *enemyBitmap;
ID2D1Bitmap *button1Bitmap;// use a better name
ID2D1Bitmap *projectile1Bitmap;
ID2D1Bitmap *targetBitmap;
ID2D1Bitmap *explosion1Bitmap;
ID2D1Bitmap *explosion2Bitmap;
ID2D1Bitmap *explosion3Bitmap;
ID2D1Bitmap *one_01;
ID2D1Bitmap *one_02;
ID2D1Bitmap *one_03;
ID2D1Bitmap *one_04;

ID2D1Bitmap *mountain1;
ID2D1Bitmap *mountain2;

// button 
ButtonAction *q_Button;
ButtonAction *w_Button;
ButtonAction *e_Button;
ButtonAction *r_Button;
ButtonAction *p_Button;
ButtonAction *m_Button;

IDWriteFactory* pDWriteFactory_;
IDWriteTextFormat* pTextFormat_;
