/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270dc08; name: FUN_0270dc08
 */


void FUN_0270dc08(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047e0d78 + 0x10;
  puVar2 = PTR_DAT_047e3268 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  return;
}


