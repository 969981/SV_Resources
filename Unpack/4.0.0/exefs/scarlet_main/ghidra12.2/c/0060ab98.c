/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0060ab98; name: FUN_0060ab98
 */


void FUN_0060ab98(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cee10;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_047cee18;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(int *)puVar1 != 0) {
    FUN_0052b230(PTR_DAT_047cee18);
  }
  puVar1 = PTR_DAT_047cba80;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = (long)puVar1;
  param_1[9] = (long)puVar1;
  return;
}


