
/*
PURPOSE:
    (Create the ODE world)
LIBRARY DEPENDENCY:
    ((DrawStuff.cpp))
*/

#ifndef DRAWSTUFF_HH
#define DRAWSTUFF_HH

#include <vector>
#include <drawstuff/drawstuff.h>
#include "DrawStuffObject.hh"

class DrawStuff {
    public:
        dsFunctions fn;

        int window_width ;
        int window_height ;

        DrawStuff() ;
        static void start() ;
        static void step(int) ;

        int draw() ;
        int shutdown() ;

        static void add_object(DrawStuffObject * dso) ;
        static std::vector<DrawStuffObject *> objects ;
} ;

#endif
