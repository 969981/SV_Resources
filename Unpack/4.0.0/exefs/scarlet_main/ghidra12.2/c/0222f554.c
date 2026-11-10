/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222f554; name: FUN_0222f554
 */


long FUN_0222f554(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar4 != plVar2) {
    do {
      uVar3 = FUN_0222f5c4(plVar4);
      if ((uVar3 & 1) != 0) goto LAB_0222f590;
      plVar4 = plVar4 + 1;
    } while (plVar2 != plVar4);
    plVar4 = plVar2;
LAB_0222f590:
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


