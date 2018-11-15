/* /opt/r8500/ap/gpl/samba4/samba-4.4.3/bin/default/source4/heimdal/lib/wind/combining_table.h */
/* Automatically generated at 2018-11-14T08:52:29.074146 */

#ifndef COMBINING_TABLE_H
#define COMBINING_TABLE_H 1

#include <krb5-types.h>

struct translation {
  uint32_t key;
  unsigned combining_class;	
};

extern const struct translation _wind_combining_table[];

extern const size_t _wind_combining_table_size;
#endif /* COMBINING_TABLE_H */
