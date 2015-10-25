//
// Created by root on 5/16/15.
//

#ifndef PILLAGE_DRAWMEGRAPHICS_H
#define PILLAGE_DRAWMEGRAPHICS_H

#include "GraphicsEntity.h"
#include <SDL2/SDL_image.h>

namespace Engine {
    class DrawMeGraphics : public GraphicsEntity {
    public:
        DrawMeGraphics(std::string spriteMapURI);
        virtual ~DrawMeGraphics() {};
        void update(Entity &entity, Renderer &renderer) override;
    private:
        int drawCount;
        SDL_Rect srcRect;
        SDL_Rect destRect;
        SDL_Surface *spriteSurface;
    };
}


#endif //PILLAGE_DRAWMEGRAPHICS_H
