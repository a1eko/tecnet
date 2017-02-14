#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _can_reg(void);
extern void _capool_reg(void);
extern void _kca_reg(void);
extern void _ks_reg(void);
extern void _kt_reg(void);
extern void _na_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," can.mod");
    fprintf(stderr," capool.mod");
    fprintf(stderr," kca.mod");
    fprintf(stderr," ks.mod");
    fprintf(stderr," kt.mod");
    fprintf(stderr," na.mod");
    fprintf(stderr, "\n");
  }
  _can_reg();
  _capool_reg();
  _kca_reg();
  _ks_reg();
  _kt_reg();
  _na_reg();
}
