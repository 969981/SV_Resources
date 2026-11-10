/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b5bc4; name: FUN_007b5bc4
 */


void FUN_007b5bc4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0e68 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  *param_1 = (long)puVar1;
  return;
}


