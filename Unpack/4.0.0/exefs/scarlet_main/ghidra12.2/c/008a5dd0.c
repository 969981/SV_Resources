/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a5dd0; name: FUN_008a5dd0
 */


void FUN_008a5dd0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d21c0 + 0x10;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  FUN_008a5e04(param_1,0,0,param_2,param_3);
  return;
}


