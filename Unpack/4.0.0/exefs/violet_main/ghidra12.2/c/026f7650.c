/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f7650; name: FUN_026f7650
 */


long FUN_026f7650(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 == param_2) {
    return 0;
  }
  lVar2 = 0;
  do {
    plVar3 = (long *)param_1[2];
    lVar2 = lVar2 + 1;
    if (plVar3 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      if (param_1 == (long *)plVar4[2]) {
        plVar3 = (long *)*plVar4;
        bVar1 = plVar4 == (long *)plVar3[2];
        param_1 = plVar4;
        plVar4 = plVar3;
        if (bVar1) {
          do {
            param_1 = plVar3;
            plVar4 = (long *)*param_1;
            plVar3 = plVar4;
          } while (param_1 == (long *)plVar4[2]);
        }
      }
      plVar3 = param_1;
      if ((long *)param_1[2] != plVar4) {
        plVar3 = plVar4;
      }
    }
    else {
      plVar4 = (long *)plVar3[1];
      if (plVar4 != (long *)0x0) {
        plVar3 = plVar4;
        for (plVar4 = (long *)plVar4[1]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
          plVar3 = plVar4;
        }
      }
    }
    param_1 = plVar3;
  } while (plVar3 != param_2);
  return lVar2;
}


