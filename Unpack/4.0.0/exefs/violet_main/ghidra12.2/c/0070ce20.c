/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0070ce20; name: FUN_0070ce20
 */


void FUN_0070ce20(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_047d0200 + 0x10);
  FUN_0070ceb4();
  if (((param_1[1] & 1U) != 0) &&
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 == 0 && plVar1 != (long *)0x0)) {
    if ((*(byte *)(plVar1 + 1) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
    }
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  FUN_00531260(param_1 + 0xe);
  FUN_00531260(param_1 + 0xb);
  FUN_00531260(param_1 + 8);
  FUN_0071e2e8(param_1 + 5);
  FUN_0071e2e8(param_1 + 2);
  return;
}


