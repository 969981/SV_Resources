/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f2f1c; name: FUN_007f2f1c
 */


void FUN_007f2f1c(long *param_1)

{
  undefined *puVar1;
  
  FUN_007e87cc();
  puVar1 = PTR_DAT_047d1518;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xd] = **(long **)PTR_DAT_047d0860;
  return;
}


