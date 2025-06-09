#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main(){

	al_init(); // Initialize Allegro and its components
	al_init_image_addon();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_DISPLAY* display = al_create_display(800, 600);
	ALLEGRO_TIMER* timer = al_create_timer(1.0 / 60.0); 

	// Create an event queue to handle events for each component
	ALLEGRO_EVENT_QUEUE* event_queue = al_create_event_queue();
	al_install_keyboard();
	al_install_mouse();
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_mouse_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));

	// Set up game asset references
	ALLEGRO_BITMAP* cannon = NULL;
	ALLEGRO_BITMAP* background = NULL;
	ALLEGRO_FONT* font = NULL;
	ALLEGRO_BITMAP* snowball = NULL;
	ALLEGRO_BITMAP* iceberg = NULL;

	// Game loop to redraw and display obkects on screen
	bool done = false;
	bool redraw = false;

	while (!done) {
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			// Movement and spawn logic
		}

		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			done = true;
		}
	}


	al_destroy_event_queue(event_queue);
	al_destroy_display(display);
	al_destroy_timer(timer);


	return 0;
}