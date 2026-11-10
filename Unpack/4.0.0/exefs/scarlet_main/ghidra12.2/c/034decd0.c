/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034decd0; name: FUN_034decd0
 */


void FUN_034decd0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)&PTR_FUN_047c55f8;
  param_1[1] = (long)&PTR_FUN_047c5888;
  param_1[4] = (long)&PTR_FUN_047c58c8;
  param_1[7] = (long)&PTR_FUN_047c5960;
  param_1[0x24] = (long)&PTR_FUN_047c5988;
  param_1[0x25] = (long)&PTR_FUN_047c59b0;
  FUN_034ded44();
  puVar2 = PTR_DAT_047e71f8;
  puVar1 = PTR_DAT_047e71f8 + 0x290;
  *param_1 = (long)(PTR_DAT_047e71f8 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[4] = (long)(puVar2 + 0x2d0);
  param_1[7] = (long)(puVar2 + 0x368);
  FUN_03489800(param_1);
  return;
}


