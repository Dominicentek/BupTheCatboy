#ifndef BTCB_ASSETS_H
#define BTCB_ASSETS_H

#include <GL/gl.h>

#define GET_ASSET(type, name) ((typeof(type)*)get_asset(name))

struct Binary {
    unsigned char* ptr;
    unsigned int length;
};

struct Texture {
    GLuint gl_texture;
    int width;
    int height;
};

void load_assets();
void* get_asset(const char* name);
const char* get_asset_name(void* asset);
void extract_assets();

#endif