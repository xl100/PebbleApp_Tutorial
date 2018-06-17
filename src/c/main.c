#include <pebble.h>

static Window *s_main_window;

static void main_window_load(Window *window) {
    
}

static void main_window_unload(Window *window) {
    
}

static void init() {
    // Create main window element and assign to pointer
    s_main_window = window_create();
    
    // Set handlers to manage the elements inside the Window
    window_set_window_handlers(s_main_window, (WindowHandlers) {
        .load = main_window_load,
        .unload = main_window_unload
    });
    
    // Show the window on the watch, with animated=true
    window_stack_push(s_main_window, true);
}

static void deinit() {
    window_destroy(s_main_window);
}

int main() {
    init();
    app_event_loop();
    deinit();
}