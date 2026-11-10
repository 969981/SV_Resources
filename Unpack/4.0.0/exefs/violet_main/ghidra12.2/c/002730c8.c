/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002730c8; name: FUN_002730c8
 */


void FUN_002730c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  FUN_00271250(lVar1);
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


