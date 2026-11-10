/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01808c9c; name: FUN_01808c9c
 */


long * FUN_01808c9c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  plVar2 = param_2 + 1;
  plVar3 = param_2;
  if (plVar2 != plVar5) {
    plVar2 = (long *)*param_2;
    *param_2 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x60))();
    }
    plVar3 = param_2 + 1;
    lVar4 = *plVar3;
    *plVar3 = 0;
    *param_2 = lVar4;
    plVar2 = plVar3;
    if (param_2 + 2 != plVar5) {
      do {
        plVar3 = (long *)*plVar2;
        *plVar2 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x60))();
        }
        plVar3 = plVar2 + 1;
        lVar4 = *plVar3;
        *plVar3 = 0;
        *plVar2 = lVar4;
        plVar1 = plVar2 + 2;
        plVar2 = plVar3;
      } while (plVar1 != plVar5);
    }
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == plVar3) goto LAB_01808cec;
  }
  plVar5 = (long *)plVar2[-1];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))();
  }
  if (plVar2 + -1 != plVar3) {
    plVar5 = (long *)plVar2[-2];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))();
    }
    if (plVar2 + -2 != plVar3) {
      do {
        if ((long *)plVar2[-3] != (long *)0x0) {
          (**(code **)(*(long *)plVar2[-3] + 0x60))();
        }
        plVar2 = plVar2 + -1;
      } while (plVar3 + 2 != plVar2);
    }
  }
LAB_01808cec:
  *(long **)(param_1 + 8) = plVar3;
  return param_2;
}


