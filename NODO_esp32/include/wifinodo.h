#ifndef wifinodo_h
#define wifinodo_h
#include "esp_wifi.h"

/* Parámestros de configuración (Nombre de red y clave) 
  correspondientes con la red a la que nos conectaremos.*/
#define WIFI_SSID      "HITRON-A610"
#define WIFI_PASS      "GKK65PZUS8Z3"
/* Cantidad de veces que se intentará realizar la conexión */
#define MAXIMUM_RETRY  5

/* The event group allows multiple bits for each event, but we only care about two events:
 * - we are connected to the AP with an IP
 * - we failed to connect after the maximum amount of retries */
#define WIFI_CONNECTED_BIT BIT0
#define WIFI_FAIL_BIT      BIT1

void event_handler(void*, esp_event_base_t, int32_t, void*);
void wifi_init_sta(void);

#endif