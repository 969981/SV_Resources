/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4d10; name: FUN_001f4d10
 */


void FUN_001f4d10(uint *param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_001ed564(param_2);
  *param_1 = uVar1 & 0xffff;
  uVar1 = FUN_001ed56c(param_2 + 2);
  param_1[1] = uVar1;
  return;
}


