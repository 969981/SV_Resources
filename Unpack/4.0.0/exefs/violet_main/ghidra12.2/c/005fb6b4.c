/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005fb6b4; name: FUN_005fb6b4
 */


void FUN_005fb6b4(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_047ceca0 + 0x10);
  FUN_005fb594();
  if (((param_1[1] & 1U) != 0) &&
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 == 0 && plVar1 != (long *)0x0)) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  FUN_005322a4(param_1 + 2);
  operator_delete(param_1);
  return;
}


