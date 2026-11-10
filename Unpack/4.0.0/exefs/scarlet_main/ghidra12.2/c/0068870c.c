/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068870c; name: FUN_0068870c
 */


void FUN_0068870c(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_047cf608 + 0x10);
  if (*(int *)((long)param_1 + 0x24) != 0) {
    if (*(int *)((long)param_1 + 0x24) == 2) {
      puVar1 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
      if ((param_1[1] & 1U) != 0) {
        puVar1 = (ulong *)*puVar1;
      }
      if ((puVar1 == (ulong *)0x0) && (lVar3 = param_1[3], lVar3 != 0)) {
        FUN_006896fc(lVar3);
        FUN_0049e790(PTR_LAB_047cba48,lVar3);
      }
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if (((param_1[1] & 1U) == 0) ||
     (plVar2 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar2 != 0 || plVar2 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar2 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar2[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  return;
}


