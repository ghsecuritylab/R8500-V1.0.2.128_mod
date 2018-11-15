/* /opt/r8500/ap/gpl/samba4/samba-4.4.3/bin/default/source4/heimdal/lib/wind/map_table.h */
/* Automatically generated at 2018-11-14T08:52:29.167570 */

#ifndef MAP_TABLE_H
#define MAP_TABLE_H 1

#include "windlocl.h"

struct translation {
  uint32_t key;
  unsigned short val_len;
  unsigned short val_offset;
  wind_profile_flags flags;
};

extern const struct translation _wind_map_table[];

extern const size_t _wind_map_table_size;

extern const uint32_t _wind_map_table_val[];

#endif /* MAP_TABLE_H */
