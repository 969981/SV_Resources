/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270bb60; name: FUN_0270bb60
 */


void FUN_0270bb60(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
                 long param_6,long *param_7)

{
  size_t __n;
  long *plVar1;
  long *plVar2;
  long *plVar4;
  long *plVar3;
  long lVar5;
  long lVar6;
  
  if (param_6 < param_5) {
    plVar2 = param_7;
    if (param_2 != param_3) {
      plVar1 = param_7;
      plVar3 = param_2;
      do {
        plVar4 = plVar3 + 1;
        plVar2 = plVar1 + 1;
        *plVar1 = *plVar3;
        plVar1 = plVar2;
        plVar3 = plVar4;
      } while (param_3 != plVar4);
    }
    FUN_0270bd10(plVar2,plVar2,param_7,param_7,param_2,param_2,param_1,param_1,param_3,param_3);
  }
  else if (param_1 != param_2) {
    lVar5 = 0;
    do {
      *(undefined8 *)((long)param_7 + lVar5) = *(undefined8 *)((long)param_1 + lVar5);
      lVar5 = lVar5 + 8;
    } while ((long)param_2 - (long)param_1 != lVar5);
    if (lVar5 != 0) {
      plVar2 = param_7;
      do {
        if (param_2 == param_3) {
          __n = (long)param_7 + (lVar5 - (long)plVar2);
          if (__n == 0) {
            return;
          }
          memmove(param_1,plVar2,__n);
          return;
        }
        lVar6 = *plVar2;
        if (*(int *)(*param_2 + 0x1e4) < *(int *)(lVar6 + 0x1e4)) {
          *param_1 = *param_2;
          param_2 = param_2 + 1;
        }
        else {
          plVar2 = plVar2 + 1;
          *param_1 = lVar6;
        }
        param_1 = param_1 + 1;
      } while ((long)plVar2 - (long)param_7 != lVar5);
    }
  }
  return;
}


