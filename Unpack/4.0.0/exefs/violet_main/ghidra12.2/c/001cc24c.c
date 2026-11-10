/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cc24c; name: FUN_001cc24c
 */


undefined8 FUN_001cc24c(long *param_1,long *param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 == (long *)0x0) {
    return 0x2b;
  }
  if (((int)param_1[3] != 4) || ((long *)param_1[8] != param_2)) {
    if ((code *)param_1[7] != (code *)0x0) {
      (*(code *)param_1[7])(param_1[8]);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0xf] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = (long)param_1;
    param_1[9] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    if (param_2 != (long *)0x0) {
      lVar2 = *param_1;
      if ((((lVar2 != 0) && (*param_2 != 0)) && (lVar2 != *param_2)) || (param_2[1] != 0)) {
        return 0x2b;
      }
      plVar5 = (long *)param_1[1];
      if ((long *)param_1[1] != (long *)0x0) {
        do {
          plVar3 = plVar5;
          lVar4 = plVar3[1];
          if (lVar4 == 0) break;
          plVar5 = *(long **)(lVar4 + 8);
        } while (plVar5 != (long *)0x0);
        if (plVar3 == param_2) {
          if (lVar2 == 0) {
            return 0x2b;
          }
          FUN_001db9c8(lVar2,"Can\'t add itself as a subpart!");
          return 0x2b;
        }
      }
      param_2[1] = (long)param_1;
      param_1[5] = (long)&LAB_001cc374;
      param_1[6] = (long)FUN_001cc578;
      pcVar1 = FUN_001cb8ac;
      if (param_3 != 0) {
        pcVar1 = FUN_001cc5f0;
      }
      param_1[7] = (long)pcVar1;
      param_1[8] = (long)param_2;
      param_1[0xf] = -1;
      *(undefined4 *)(param_1 + 3) = 4;
      return 0;
    }
  }
  return 0;
}


