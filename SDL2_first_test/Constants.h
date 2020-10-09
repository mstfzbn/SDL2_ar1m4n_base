#pragma once

//main constants
constexpr unsigned int SCREEN_WIDTH = 1920;
constexpr unsigned int SCREEN_HEIGHT = 1080;
constexpr unsigned int FRAME_RATE = 1000 / 60;

constexpr unsigned int NUMBER_OF_OBJECTS = 50;

//Drawable constants
static const unsigned int PointDistance = 200;
static const unsigned int CoursorDistance = 450;
static const unsigned char MaxRad = 10; //raduis of dots
static const unsigned int MaxVelocity = 2;

constexpr bool CHANGE_SIZE_OF_DOTS = true;

/*
* Original value of constants

constexpr int SCREEN_WIDTH = 1920;
constexpr int SCREEN_HEIGHT = 1080;
constexpr int FRAME_RATE = 1000 / 60;

constexpr int NUMBER_OF_OBJECTS = 50;

//Drawable constants
static const int PointDistance = 200;
static const int CoursorDistance = 450;
static const char MaxRad = 10;
static const int MaxVelocity = 2;

constexpr bool CHANGE_SIZE_OF_DOTS = true;

*/