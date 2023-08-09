#ifndef __S10M_H_
#define __S10M_H_

/* configurations */
#define MQTT_HOST "mosquitto"
#define MQTT_PORT 1883
#define MQTT_QOS 0
#define MQTT_RETAIN false
#define ROOT_TOPIC "s10"
#define MODBUS_HOST "e3dc"
#define MODBUS_PORT "502"
#define POLL_INTERVAL 1

/* constants */
#define MODBUS_NR_REGS 120
#define BUFFER_SIZE 32
#define TOPIC_SIZE 128

static void publish(char *topic, char *payload);
static void publish_if_changed(int16_t *reg, int16_t *old, int r, char *topic);

#endif
