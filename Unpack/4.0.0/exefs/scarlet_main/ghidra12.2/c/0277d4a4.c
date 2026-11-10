/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277d4a4; name: FUN_0277d4a4
 */


long FUN_0277d4a4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar4 != plVar2) {
    uVar5 = *(undefined8 *)*param_1;
    do {
      uVar3 = FUN_0277d520(plVar4,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_0277d4ec;
      plVar4 = plVar4 + 1;
    } while (plVar2 != plVar4);
    plVar4 = plVar2;
LAB_0277d4ec:
    if (plVar4 != (long *)param_2[1]) {
      lVar1 = 0;
      if (*plVar4 != 0) {
        lVar1 = *plVar4 + -0x20;
      }
      return lVar1;
    }
  }
  return 0;
}


