/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ba400; name: FUN_007ba400
 */


void FUN_007ba400(long *param_1)

{
  undefined *puVar1;
  
  FUN_007a537c();
  puVar1 = PTR_DAT_047d0f18 + 0x48;
  *param_1 = (long)(PTR_DAT_047d0f18 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_0284e338(param_1 + 0x11);
  FUN_0284e338(param_1 + 0x15);
  FUN_0284e338(param_1 + 0x19);
  FUN_0284e338(param_1 + 0x1d);
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}


