/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0088689c; name: FUN_0088689c
 */


void FUN_0088689c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1f48 + 0x10;
  *param_1 = (long)(PTR_DAT_047d1f40 + 0x10);
  param_1[5] = (long)puVar1;
  FUN_008874d4(param_1 + 5,0,0xc,0,0,0,1);
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00887518(param_1);
  return;
}


