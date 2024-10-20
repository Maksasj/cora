#ifndef CORA_H
#define CORA_H

#ifdef _WIN32
    #include <windows.h>
#else
    #include <X11/Xlib.h>
#endif

typedef struct {

} cora_window_t;

typedef enum {
    CORA_QUIT
} cora_event_type_t;

typedef struct {
    cora_event_type_t type;
} cora_event_t;

int cora_pool_event(cora_event_t* event);

typedef struct {

} cora_image_t;

cora_window_t* cora_create_window(const char* title, unsigned int width, unsigned int height);
void cora_destroy_window(cora_window_t* window);

#ifdef CORA_IMPLEMENTATION

int cora_pool_event(cora_event_t* event) {
    return 0;
}

cora_window_t* cora_create_window(const char* title, unsigned int width, unsigned int height) {
    return 0;
}

void cora_destroy_window(cora_window_t* window) {

}

#endif

#endif