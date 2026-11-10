/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fa180; name: FUN_005fa180
 */


void FUN_005fa180(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cecd0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047cecd8;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(int *)puVar1 != 0) {
    FUN_0052b230(PTR_DAT_047cecd8);
  }
  param_1[8] = (long)PTR_DAT_047cba80;
  return;
}


