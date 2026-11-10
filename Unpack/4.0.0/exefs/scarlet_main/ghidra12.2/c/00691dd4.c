/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00691dd4; name: FUN_00691dd4
 */


void FUN_00691dd4(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_047cf740 + 0x10);
  pbVar3 = (byte *)param_1[2];
  if (pbVar3 != PTR_DAT_047cba80 && pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    if (*(int *)((long)param_1 + 0x24) == 2) {
      puVar1 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
      if ((param_1[1] & 1U) != 0) {
        puVar1 = (ulong *)*puVar1;
      }
      if ((puVar1 == (ulong *)0x0) && (lVar4 = param_1[3], lVar4 != 0)) {
        FUN_0068a49c(lVar4);
        FUN_0049e790(PTR_LAB_047cba48,lVar4);
      }
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if ((((param_1[1] & 1U) == 0) ||
      (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0)) || (plVar2 == (long *)0x0)
     ) {
    return;
  }
  if ((*(byte *)(plVar2 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  return;
}


