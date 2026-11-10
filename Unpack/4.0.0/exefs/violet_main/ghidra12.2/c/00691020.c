/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00691020; name: FUN_00691020
 */


void FUN_00691020(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047cf680 + 0x10);
  if ((param_1 != (long *)PTR_DAT_047cf678) && (lVar2 = param_1[2], lVar2 != 0)) {
    FUN_00513c68(lVar2);
    FUN_0049e790(PTR_LAB_047cba48,lVar2);
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_00690efc(param_1);
  }
  if ((((param_1[1] & 1U) == 0) ||
      (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0)) || (plVar1 == (long *)0x0)
     ) {
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return;
}


