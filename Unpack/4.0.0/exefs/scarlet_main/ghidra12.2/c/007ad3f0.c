/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ad3f0; name: FUN_007ad3f0
 */


void FUN_007ad3f0(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0d38;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


