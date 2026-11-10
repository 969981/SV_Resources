/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ba4a8; name: FUN_007ba4a8
 */


void FUN_007ba4a8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d0f18 + 0x48;
  param_1[-1] = (long)(PTR_DAT_047d0f18 + 0x10);
  *param_1 = (long)puVar1;
  param_1[0x20] = 0;
  FUN_0284e3d4(param_1 + 0x1c);
  FUN_0284e3d4(param_1 + 0x18);
  FUN_0284e3d4(param_1 + 0x14);
  FUN_0284e3d4(param_1 + 0x10);
  FUN_007a53c8(param_1 + -1);
  return;
}


