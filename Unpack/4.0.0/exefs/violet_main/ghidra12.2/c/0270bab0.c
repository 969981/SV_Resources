/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270bab0; name: FUN_0270bab0
 */


void FUN_0270bab0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 != param_2) {
    plVar1 = param_1 + 1;
    *param_3 = *param_1;
    if (plVar1 != param_2) {
      lVar2 = 0;
      plVar3 = param_3;
      do {
        if (*(int *)(*plVar1 + 0x1e4) < *(int *)(*plVar3 + 0x1e4)) {
          plVar3[1] = *plVar3;
          if (plVar3 != param_3) {
            lVar4 = 0;
            do {
              lVar6 = ((long *)((long)plVar3 + lVar4))[-1];
              plVar5 = (long *)((long)plVar3 + lVar4);
              if (*(int *)(lVar6 + 0x1e4) <= *(int *)(*plVar1 + 0x1e4)) goto LAB_0270bb2c;
              *(long *)((long)plVar3 + lVar4) = lVar6;
              lVar4 = lVar4 + -8;
            } while (lVar2 != lVar4);
          }
          plVar5 = param_3;
LAB_0270bb2c:
          *plVar5 = *plVar1;
        }
        else {
          plVar3[1] = *plVar1;
        }
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -8;
        plVar3 = plVar3 + 1;
      } while (plVar1 != param_2);
    }
  }
  return;
}


