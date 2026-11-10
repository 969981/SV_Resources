/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00883698; name: FUN_00883698
 */


void FUN_00883698(long *param_1)

{
  undefined *puVar1;
  
  FUN_008840c8();
  puVar1 = PTR_DAT_047d1ea8;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


