/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d020a0; name: FUN_01d020a0
 */


long * FUN_01d020a0(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    iVar2 = FUN_01d022f0(param_5,param_2 + 4);
    if (-1 < iVar2) {
      iVar2 = FUN_01d022f0(param_2 + 4,param_5);
      if (-1 < iVar2) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if (plVar3 == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar2 = FUN_01d022f0(param_5,plVar5 + 4), iVar2 < 0)) {
        if (param_2[1] == 0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
        *param_3 = (long)plVar5;
        return plVar5;
      }
      goto LAB_01d0219c;
    }
  }
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar5 = (long *)*param_2;
    if ((long *)*param_2 == (long *)0x0) {
      plVar5 = param_2;
      do {
        plVar3 = (long *)plVar5[2];
        bVar1 = (long *)*plVar3 == plVar5;
        plVar5 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar5;
        plVar5 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    iVar2 = FUN_01d022f0(plVar3 + 4,param_5);
    if (-1 < iVar2) {
LAB_01d0219c:
      plVar3 = (long *)FUN_01d0232c(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (*param_2 == 0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}


