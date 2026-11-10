/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018fe7c4; name: FUN_018fe7c4
 */


void FUN_018fe7c4(long *param_1)

{
  undefined *puVar1;
  
  FUN_007ae8d8();
  puVar1 = PTR_DAT_047d0e78;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_007b61c4(param_1 + 2);
  return;
}


