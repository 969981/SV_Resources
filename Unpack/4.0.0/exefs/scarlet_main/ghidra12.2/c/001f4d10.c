/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


