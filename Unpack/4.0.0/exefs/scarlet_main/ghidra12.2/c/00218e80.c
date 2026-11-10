/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00218e80; name: FUN_00218e80
 */


void FUN_00218e80(undefined *param_1)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 != PTR_DAT_047cba80 && pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar2);
  }
  if ((param_1 == PTR_DAT_047cbd48) || (plVar1 = *(long **)(param_1 + 0x18), plVar1 == (long *)0x0))
  {
    return;
  }
  *plVar1 = (long)(PTR_DAT_047cbd38 + 0x10);
  if (*(int *)((long)plVar1 + 0x1c) != 0) {
    FUN_0021c298(plVar1);
  }
  if ((((plVar1[1] & 1U) != 0) && (plVar3 = (long *)(plVar1[1] & 0xfffffffffffffffe), *plVar3 == 0))
     && (plVar3 != (long *)0x0)) {
    if ((*(byte *)(plVar3 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar3);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


