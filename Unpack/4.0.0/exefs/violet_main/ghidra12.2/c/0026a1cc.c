/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026a1cc; name: FUN_0026a1cc
 */


void FUN_0026a1cc(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)(PTR_DAT_047cc2f8 + 0x10);
  if (((param_1[1] & 1U) == 0) ||
     (plVar1 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar1 != 0 || plVar1 == (long *)0x0)) {
    FUN_0026b8c8(param_1 + 2);
    return;
  }
  if ((*(byte *)(plVar1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar1[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  FUN_0026b8c8(param_1 + 2);
  return;
}


