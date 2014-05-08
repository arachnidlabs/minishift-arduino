#ifndef MINISHIFT_H
#define MINISHIFT_H

#include <Arduino.h>

class Minishift
{
  private:
  	int data_pin;
  	int clock_pin;
  	int latch_pin;
  	int latch_state;

  	void startTransaction();
  public:
  	Minishift(int data_pin, int clock_pin, int latch_pin);
  	void writeColumns(const uint8_t *buf, int len);
  	void writeColumns(const uint8_t *buf, int len, int ms);
  	void writeString(const char *str);
  	void writeString(const char *str, int ms);
  	void update();
};

#endif