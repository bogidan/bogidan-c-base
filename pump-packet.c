#include "bob.h"

struct packet {
	U08 *ptr;
	U32 size;
};
struct input_config {
	U08 *ptr;                  // Buffer Location
	U32 buff_size;             // Size of buffer in bytes
	U32 chunk_size;            // Recieving chunk size
	U32 data_size;             // Data size in bytes
};
struct output_config {
	struct packet *ptr;        // Buffer Location
	U32           buff_size;   // Buffer length in packets
	U32           chunk_size;  // Sending chunk size
	U32           data_size;   // Data size in bytes
};
struct packet_pump_config {
	struct input_config  in;
	U32                  in_idx_head;
	U32                  in_idx_tail;
	struct output_config out;
	U32                  out_idx_head;
	U32                  out_idx_tail;
};


void reset_packet_pump( input_config ) 

