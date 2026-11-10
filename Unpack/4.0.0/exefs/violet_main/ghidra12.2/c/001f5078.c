/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f5078; name: FUN_001f5078
 */


void FUN_001f5078(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_001ed56c(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  return;
}


