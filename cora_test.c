#define CORA_IMPLEMENTATION
#include "cora.h"

int main() {
    cora_window_t* window = cora_create_window("Hello window", 800, 600);

    int window_open = 1;
    while (window_open) {
        cora_event_t event;
        
        while(cora_pool_event(&event) > 0) {
            if(event.type == CORA_QUIT) {
                window_open = 0;
                break;
            }
        }
    }

    cora_destroy_window(window);

    return 0;
}