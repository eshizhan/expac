#ifndef _EXPAC_H
#define _EXPAC_H

#include <alpm.h>

typedef enum PackageCorpus {
  CORPUS_LOCAL,
  CORPUS_SYNC,
  CORPUS_FILE,
} PackageCorpus;

typedef enum SearchWhat {
  SEARCH_EXACT,
  SEARCH_GROUPS,
  SEARCH_REGEX,
} SearchWhat;

typedef struct Expac {
  alpm_handle_t *alpm;
} Expac;

int expac_new(Expac **expac, const char *config_file);

#endif  /* _EXPAC_H */

/* vim: set et ts=2 sw=2: */