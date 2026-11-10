/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01659454; name: FUN_01659454
 */


void FUN_01659454(long *param_1)

{
  undefined *puVar1;
  
  FUN_01659680();
  puVar1 = PTR_DAT_047dcda8;
  *param_1 = (long)(PTR_DAT_047dcda8 + 0x10);
  param_1[4] = (long)(puVar1 + 0x100);
  param_1[6] = (long)(puVar1 + 0x130);
  FUN_016594a0(param_1 + 7);
  FUN_016594e0(param_1 + 0x14);
  return;
}


