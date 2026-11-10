/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e2c0c; name: FUN_001e2c0c
 */


long * FUN_001e2c0c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_001ec338(0x58,1);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 == 0) {
LAB_001e2c44:
    if (param_1[1] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[2] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[3] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[3] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[4] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[5] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[5] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[6] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[6] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[7] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[7] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    if (param_1[8] != 0) {
      lVar2 = FUN_001ec328();
      plVar1[8] = lVar2;
      if (lVar2 == 0) goto LAB_001e2cf0;
    }
    plVar1[10] = param_1[10];
  }
  else {
    lVar2 = FUN_001ec328();
    *plVar1 = lVar2;
    if (lVar2 != 0) goto LAB_001e2c44;
LAB_001e2cf0:
    FUN_001e2ba4(plVar1);
    FUN_001ec308(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


