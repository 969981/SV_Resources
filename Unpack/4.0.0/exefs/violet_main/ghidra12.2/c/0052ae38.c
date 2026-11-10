/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052ae38; name: FUN_0052ae38
 */


long * FUN_0052ae38(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar3 = param_1 + 1;
  if (plVar3 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar6 = (long *)param_2[1];
      if (plVar6 == (long *)0x0) {
        plVar6 = param_2 + 2;
        plVar4 = (long *)*plVar6;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar7 = *plVar6;
            plVar6 = (long *)(lVar7 + 0x10);
            plVar4 = (long *)*plVar6;
          } while (*plVar4 != lVar7);
        }
      }
      else {
        do {
          plVar4 = plVar6;
          plVar6 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 == plVar3) || (iVar1 < (int)plVar4[4])) {
        if (param_2[1] == 0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
LAB_0052af88:
        *param_3 = (long)plVar4;
        return plVar4;
      }
      if ((long *)*plVar3 != (long *)0x0) {
        plVar6 = param_1 + 1;
        plVar4 = (long *)*plVar3;
        do {
          if (iVar1 < (int)plVar4[4]) {
            plVar3 = (long *)*plVar4;
            if (plVar3 == (long *)0x0) goto LAB_0052af88;
            plVar6 = plVar4;
          }
          else {
            if (iVar1 <= (int)plVar4[4]) {
LAB_0052afd4:
              *param_3 = (long)plVar4;
              return plVar6;
            }
            plVar6 = plVar4 + 1;
            plVar3 = (long *)*plVar6;
            if (plVar3 == (long *)0x0) goto LAB_0052afd4;
          }
          plVar4 = plVar3;
        } while( true );
      }
      goto LAB_0052afe0;
    }
  }
  plVar4 = (long *)*param_2;
  plVar6 = param_2;
  if ((long *)*param_1 != param_2) {
    if (plVar4 == (long *)0x0) {
      plVar5 = param_2;
      do {
        plVar6 = (long *)plVar5[2];
        bVar2 = (long *)*plVar6 == plVar5;
        plVar5 = plVar6;
      } while (bVar2);
    }
    else {
      plVar5 = plVar4;
      do {
        plVar6 = plVar5;
        plVar5 = (long *)plVar6[1];
      } while ((long *)plVar6[1] != (long *)0x0);
    }
    iVar1 = *param_5;
    if (iVar1 <= (int)plVar6[4]) {
      if ((long *)*plVar3 != (long *)0x0) {
        plVar6 = param_1 + 1;
        plVar4 = (long *)*plVar3;
        do {
          if (iVar1 < (int)plVar4[4]) {
            plVar3 = (long *)*plVar4;
            if (plVar3 == (long *)0x0) goto LAB_0052af88;
            plVar6 = plVar4;
          }
          else {
            if (iVar1 <= (int)plVar4[4]) {
LAB_0052af18:
              *param_3 = (long)plVar4;
              return plVar6;
            }
            plVar6 = plVar4 + 1;
            plVar3 = (long *)*plVar6;
            if (plVar3 == (long *)0x0) goto LAB_0052af18;
          }
          plVar4 = plVar3;
        } while( true );
      }
LAB_0052afe0:
      *param_3 = (long)plVar3;
      return plVar3;
    }
  }
  if (plVar4 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar6;
  return plVar6 + 1;
}


