/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf daap_query.gperf  */
/* Computed positions: -k'10-11' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

/* maximum key range = 51, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
daap_query_field_hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 25, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62,  5,  0, 10,
       0,  5,  5, 10, 62,  0, 62, 62, 20, 62,
      20, 10, 62, 62,  0,  0, 15, 62, 62, 62,
      62, 15, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62
    };
  return len + asso_values[(unsigned char)str[10]] + asso_values[(unsigned char)str[9]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct dmap_query_field_map *
daap_query_field_lookup (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 29,
      MIN_WORD_LENGTH = 11,
      MAX_WORD_LENGTH = 36,
      MIN_HASH_VALUE = 11,
      MAX_HASH_VALUE = 61
    };

  static const struct dmap_query_field_map wordlist[] =
    {
#line 14 "daap_query.gperf"
      {"dmap.itemid",                "f.id",               1},
#line 33 "daap_query.gperf"
      {"daap.songsize",              "f.file_size",        1},
#line 19 "daap_query.gperf"
      {"daap.songbitrate",           "f.bitrate",          1},
#line 28 "daap_query.gperf"
      {"daap.songdisccount",         "f.total_discs",      1},
#line 29 "daap_query.gperf"
      {"daap.songdiscnumber",        "f.disc",             1},
#line 17 "daap_query.gperf"
      {"daap.songartist",            "f.artist",           0},
#line 24 "daap_query.gperf"
      {"daap.songdataurl",           "f.url",              0},
#line 23 "daap_query.gperf"
      {"daap.songdatakind",          "f.data_kind",        1},
#line 25 "daap_query.gperf"
      {"daap.songdateadded",         "f.time_added",       1},
#line 32 "daap_query.gperf"
      {"daap.songsamplerate",        "f.samplerate",       1},
#line 27 "daap_query.gperf"
      {"daap.songdescription",       "f.description",      0},
#line 26 "daap_query.gperf"
      {"daap.songdatemodified",      "f.time_modified",    1},
#line 35 "daap_query.gperf"
      {"daap.songtime",              "f.song_length",      1},
#line 31 "daap_query.gperf"
      {"daap.songgenre",             "f.genre",            0},
#line 30 "daap_query.gperf"
      {"daap.songformat",            "f.type",             0},
#line 34 "daap_query.gperf"
      {"daap.songstoptime",          "f.song_length",      1},
#line 38 "daap_query.gperf"
      {"daap.songyear",              "f.year",             1},
#line 36 "daap_query.gperf"
      {"daap.songtrackcount",        "f.total_tracks",     1},
#line 37 "daap_query.gperf"
      {"daap.songtracknumber",       "f.track",            1},
#line 20 "daap_query.gperf"
      {"daap.songcomment",           "f.comment",          0},
#line 22 "daap_query.gperf"
      {"daap.songcomposer",          "f.composer",         0},
#line 13 "daap_query.gperf"
      {"dmap.itemname",              "f.title",            0},
#line 15 "daap_query.gperf"
      {"daap.songalbum",             "f.album",            0},
#line 21 "daap_query.gperf"
      {"daap.songcompilation",       "f.compilation",      1},
#line 16 "daap_query.gperf"
      {"daap.songalbumid",           "f.songalbumid",      1},
#line 18 "daap_query.gperf"
      {"daap.songalbumartist",       "f.album_artist",     0},
#line 41 "daap_query.gperf"
      {"com.apple.itunes.extended", "f.media_kind",       1},
#line 39 "daap_query.gperf"
      {"com.apple.itunes.mediakind", "f.media_kind",       1},
#line 40 "daap_query.gperf"
      {"com.apple.itunes.extended-media-kind", "f.media_kind",       1}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = daap_query_field_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct dmap_query_field_map *resword;

          switch (key - 11)
            {
              case 0:
                if (len == 11)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 2:
                if (len == 13)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 5:
                if (len == 16)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 18)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 8:
                if (len == 19)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 9:
                if (len == 15)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 10:
                if (len == 16)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 11:
                if (len == 17)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 12:
                if (len == 18)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 13:
                if (len == 19)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 20)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 21)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 17:
                if (len == 13)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 18:
                if (len == 14)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 15)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 17)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 22:
                if (len == 13)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 23:
                if (len == 19)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 20)
                  {
                    resword = &wordlist[18];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 16)
                  {
                    resword = &wordlist[19];
                    goto compare;
                  }
                break;
              case 26:
                if (len == 17)
                  {
                    resword = &wordlist[20];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 13)
                  {
                    resword = &wordlist[21];
                    goto compare;
                  }
                break;
              case 28:
                if (len == 14)
                  {
                    resword = &wordlist[22];
                    goto compare;
                  }
                break;
              case 29:
                if (len == 20)
                  {
                    resword = &wordlist[23];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 16)
                  {
                    resword = &wordlist[24];
                    goto compare;
                  }
                break;
              case 34:
                if (len == 20)
                  {
                    resword = &wordlist[25];
                    goto compare;
                  }
                break;
              case 39:
                if (len == 25)
                  {
                    resword = &wordlist[26];
                    goto compare;
                  }
                break;
              case 40:
                if (len == 26)
                  {
                    resword = &wordlist[27];
                    goto compare;
                  }
                break;
              case 50:
                if (len == 36)
                  {
                    resword = &wordlist[28];
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          {
            register const char *s = resword->dmap_field;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return resword;
          }
        }
    }
  return 0;
}
