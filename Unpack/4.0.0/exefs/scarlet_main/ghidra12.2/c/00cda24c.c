/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cda24c; name: FUN_00cda24c
 */


void FUN_00cda24c(long *param_1)

{
  undefined *puVar1;
  
  FUN_0129a6e4();
  puVar1 = PTR_DAT_047e13c0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = (long)(puVar1 + 0xd8);
  param_1[5] = (long)(puVar1 + 0x128);
  FUN_00cda2bc(param_1 + 0x73);
  param_1[0x7a] = 0x40000000001;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0x40a00000;
  return;
}


