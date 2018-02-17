#ifndef _HELPERS_H
#define _HELPERS_H

#include <fontconfig/fontconfig.h>
#include <Imlib2.h>
#include <X11/Xlib.h>

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

char *get_font_file(FcConfig*, const char*, FcPattern**);

Imlib_Image *get_lock(const char*, const bool);

int get_monitor_count(Display*, const Window);

void die(const char*, uint8_t);
void get_monitor_centers(Display*, const Window, const int, int*, int*);
void warn_if_errno(const char*);

#endif
