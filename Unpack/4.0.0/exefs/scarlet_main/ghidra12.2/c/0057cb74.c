/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057cb74; name: FUN_0057cb74
 */


void FUN_0057cb74(undefined *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != PTR_DAT_047ce360) {
    plVar1 = *(long **)(param_1 + 0x10);
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)(PTR_DAT_047ce280 + 0x10);
      FUN_005771d4(plVar1);
      if (((plVar1[1] & 1U) != 0) &&
         (plVar3 = (long *)(plVar1[1] & 0xfffffffffffffffe), *plVar3 == 0 && plVar3 != (long *)0x0))
      {
        if ((*(byte *)(plVar3 + 1) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
      FUN_0049e790(PTR_LAB_047cba48,plVar1);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      FUN_00534a90(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      FUN_0057f010(lVar2);
      FUN_0049e790(PTR_LAB_047cba48,lVar2);
      return;
    }
  }
  return;
}


