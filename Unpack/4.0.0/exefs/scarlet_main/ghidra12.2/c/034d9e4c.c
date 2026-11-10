/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d9e4c; name: FUN_034d9e4c
 */


void FUN_034d9e4c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_FUN_047c5570;
  if (param_1[3] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
  }
  puVar1 = PTR_DAT_047e70a0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


