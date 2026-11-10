/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0222a7a8; name: FUN_0222a7a8
 */


long FUN_0222a7a8(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar4 != plVar2) {
    do {
      uVar3 = FUN_0222a818(plVar4);
      if ((uVar3 & 1) != 0) goto LAB_0222a7e4;
      plVar4 = plVar4 + 1;
    } while (plVar2 != plVar4);
    plVar4 = plVar2;
LAB_0222a7e4:
    if (plVar4 != (long *)param_1[1]) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = *plVar4 + -0x20;
      }
      return lVar1;
    }
  }
  return 0;
}


