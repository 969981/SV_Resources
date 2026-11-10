/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c40c8; name: FUN_006c40c8
 */


long FUN_006c40c8(long *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x20))();
  *(byte *)(param_1 + 0x18) = bVar1 & 1;
  return param_1[0x13];
}


