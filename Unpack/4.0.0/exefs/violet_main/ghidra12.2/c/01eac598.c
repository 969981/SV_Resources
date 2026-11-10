/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eac598; name: FUN_01eac598
 */


void FUN_01eac598(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == *(long *)(param_1 + 0x10)) {
    FUN_01eac6c8(param_1,param_2);
    return;
  }
  FUN_01eac5ec(param_1 + 0x18,lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x10;
  return;
}


