/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fdb0c; name: FUN_029fdb0c
 */


void FUN_029fdb0c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e4f10;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 4,0xff,0x104);
  return;
}


