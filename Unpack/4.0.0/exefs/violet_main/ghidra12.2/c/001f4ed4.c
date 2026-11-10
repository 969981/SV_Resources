/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4ed4; name: FUN_001f4ed4
 */


undefined8 FUN_001f4ed4(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_001ed56c(param_2);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x28) = uVar1 & 0x7fffffff;
  return 0;
}


