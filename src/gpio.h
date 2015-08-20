/*
 * gpio.h
 *
 *  Created on: Jun 7, 2015
 *      Author: gijs
 */

#ifndef GPIO_H_
#define GPIO_H_

#define SYSFS_GPIO_DIR "/sys/class/gpio"
#define MAX_BUF 64

typedef enum {
	INPUT_PIN=0,
	OUTPUT_PIN=1
} PIN_DIRECTION;

typedef struct {
	int nr;
	PIN_DIRECTION direction;
} gpio_properties;

int gpio_open(gpio_properties *gpio);
int gpio_close(gpio_properties *gpio);
int gpio_set_value(gpio_properties *gpio, int value);
int gpio_get_value(gpio_properties *gpio);
int gpio_set_edge(gpio_properties *gpio, char *edge);
#endif /* GPIO_H_ */
