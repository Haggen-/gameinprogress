//
// Created by haggen on 5/15/15.
//

#include "Renderer.h"

Naglfar::Renderer::Renderer(Naglfar::Window *window) {
    renderer = window->GetRenderer();
    glewInit();

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);

    /* Enable smooth shading */
    glShadeModel( GL_SMOOTH );

    /* Set the background black */
    glClearColor( 0.0f, 0.0f, 0.0f, 0.0f );

    /* Depth buffer setup */
    glClearDepth( 1.0f );

    /* Enables Depth Testing */
    glEnable( GL_DEPTH_TEST );

    /* The Type Of Depth Test To Do */
    glDepthFunc( GL_LEQUAL );

    /* Really Nice Perspective Calculations */
    glHint( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST );

    glContext = SDL_GL_CreateContext(window->GetWindow());

    /* Setup our viewport. */
    glViewport( 0, 0, ( GLsizei )800, ( GLsizei )600 );

    /* change to the projection matrix and set our viewing volume. */
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity( );

    /* Set our perspective */
    gluPerspective( 45.0f, (800/600), 0.1f, 100.0f );

    /* Make sure we're chaning the model view and not the projection */
    glMatrixMode( GL_MODELVIEW );

    /* Reset The View */
    glLoadIdentity( );

    if(GLEW_VERSION_3_0) {
        SDL_LogInfo(0, "Support for OpenGL 3.0 found!");
    }
}

Naglfar::Renderer::~Renderer() {
    SDL_GL_DeleteContext(glContext);
}

void Naglfar::Renderer::drawAll() {
    /* Set the background black */
    glClearColor( 0.0f, 0.0f, 0.0f, 0.0f );
    /* Clear The Screen And The Depth Buffer */
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    /* Move Left 1.5 Units And Into The Screen 6.0 */
    glLoadIdentity();
    glTranslatef( -1.5f, 0.0f, -12.0f );

    glBegin( GL_LINE_LOOP );            /* Drawing Using Triangles */
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINES);
    glVertex3f(  0.0f,  1.0f, 0.0f ); /* Top */
    glVertex3f( -1.0f, -1.0f, 0.0f ); /* Bottom Left */
    glVertex3f(  1.0f, -1.0f, 0.0f ); /* Bottom Right */
    glEnd( );                           /* Finished Drawing The Triangle */

    glLoadIdentity();
    /* Move back 2.5 Units */
    glTranslatef( 0.f, 0.0f, -2.5f );

    glBegin( GL_LINE_LOOP );                /* Draw A Quad */
    glVertex3f( -1.0f,  1.0f, 0.0f ); /* Top Left */
    glVertex3f(  1.0f,  1.0f, 0.0f ); /* Top Right */
    glVertex3f(  1.0f, -1.0f, 0.0f ); /* Bottom Right */
    glVertex3f( -1.0f, -1.0f, 0.0f ); /* Bottom Left */
    glEnd( );                           /* Done Drawing The Quad */

    glDisable(GL_TEXTURE_2D);
    SDL_RenderPresent(renderer);
}
