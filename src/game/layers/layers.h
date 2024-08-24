#ifndef BTCB_LAYERS_H
#define BTCB_LAYERS_H

#include <lunarengine.h>

void hud_update(LE_Entity* entity);
void show_hud_element(int id);
void layer_hud(LE_DrawList* drawlist, float camx, float camy, float scx, float scy);

#endif