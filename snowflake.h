#ifndef _SNOWFLAKE_H
#define _SNOWFLAKE_H

#include<sys/time.h>
#include<stdlib.h>

typedef long long int_64;

// IdWorker Struct
struct IdWorker {
  int_64 worker_id;
  int_64 last_time_stamp;
  unsigned int sequence;
};

typedef struct IdWorker id_worker;

//2^12 -1 = 4095
#define MASK_SEQUENCE 4095

// Epoch is set to the twitter snowflake epoch of Nov 04 2010 01:42:54 UTC in milliseconds
#define EPOCH 1288834974657

// NodeBits holds the number of bits to use for Node
#define NODEBITS 10

// StepBits holds the number of bits to use for Step
#define STEPBITS 12

int_64 time_re_gen(int_64); 
int_64 time_gen();
int_64 next_id();


#endif