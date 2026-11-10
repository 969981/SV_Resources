/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0162f274; name: FUN_0162f274
 */


void FUN_0162f274(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == *(long *)(param_1 + 0x38)) {
    FUN_0162f8f8(param_1 + 0x28,param_2);
    return;
  }
  FUN_0162f2d0(param_1 + 0x40,lVar1);
  *(long *)(param_1 + 0x30) = lVar1 + 0x2b0;
  return;
}


