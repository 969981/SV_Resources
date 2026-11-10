/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6e90c; name: FUN_00f6e90c
 */


void FUN_00f6e90c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_00f6eadc(param_1,param_2);
    return;
  }
  FUN_00f6e960(param_1 + 0x18,lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}


