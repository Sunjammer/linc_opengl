#pragma once

#include "../lib/glew/include/GL/glew.h"


namespace linc {
    namespace glew {
        static int glewStatus = -1;
        inline int init() {
            if(glewStatus!=-1)
                return glewStatus;
            glewExperimental = GL_TRUE;
            return glewStatus = glewInit();
        }

    } //glew namespace
} //linc namespace
