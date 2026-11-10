/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811d4c; name: FUN_00811d4c
 */


void FUN_00811d4c(long *param_1)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1880;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}


