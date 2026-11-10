/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a537c; name: FUN_007a537c
 */


void FUN_007a537c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_047d0b60 + 0x10);
  FUN_00796bfc(param_1 + 1);
  puVar1 = PTR_DAT_047d0b68;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x48);
  FUN_0078cfe4(param_1 + 0xc,0x10);
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}


