/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d0a18; name: FUN_007d0a18
 */


void FUN_007d0a18(long *param_1)

{
  undefined *puVar1;
  
  FUN_007ce5c8();
  puVar1 = PTR_DAT_047d12d0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


