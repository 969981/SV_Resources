/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fae1c; name: FUN_005fae1c
 */


void FUN_005fae1c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_047cebd0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (*(int *)PTR_DAT_047cebd8 != 0) {
    FUN_0052b230(PTR_DAT_047cebd8);
  }
  param_1[2] = (long)PTR_DAT_047cba80;
  return;
}


