/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f91c04; name: FUN_01f91c04
 */


long FUN_01f91c04(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar4 != plVar2) {
    do {
      uVar3 = FUN_01f91c74(plVar4);
      if ((uVar3 & 1) != 0) goto LAB_01f91c40;
      plVar4 = plVar4 + 1;
    } while (plVar2 != plVar4);
    plVar4 = plVar2;
LAB_01f91c40:
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


