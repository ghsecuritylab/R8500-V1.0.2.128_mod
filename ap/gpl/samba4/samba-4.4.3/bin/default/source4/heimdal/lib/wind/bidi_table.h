/* /opt/r8500/ap/gpl/samba4/samba-4.4.3/bin/default/source4/heimdal/lib/wind/bidi_table.h */
/* Automatically generated at 2018-11-14T08:52:29.121959 */

#ifndef BIDI_TABLE_H
#define BIDI_TABLE_H 1

#include <krb5-types.h>

struct range_entry {
  uint32_t start;
  unsigned len;
};

extern const struct range_entry _wind_ral_table[];
extern const struct range_entry _wind_l_table[];

extern const size_t _wind_ral_table_size;
extern const size_t _wind_l_table_size;

#endif /* BIDI_TABLE_H */
