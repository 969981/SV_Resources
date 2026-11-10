/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f5078; name: FUN_001f5078
 */


void FUN_001f5078(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_001ed56c(param_2);
  *(uint *)(param_1 + 0x10) = uVar1 & 0x7fffffff;
  return;
}


