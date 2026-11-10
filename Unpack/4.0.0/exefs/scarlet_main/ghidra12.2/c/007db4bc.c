/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007db4bc; name: FUN_007db4bc
 */


void FUN_007db4bc(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1340;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  return;
}


