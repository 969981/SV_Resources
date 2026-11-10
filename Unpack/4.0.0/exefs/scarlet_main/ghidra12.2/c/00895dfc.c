/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00895dfc; name: FUN_00895dfc
 */


void FUN_00895dfc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_008a6438(param_1,0,0,param_2,param_4);
  *param_1 = (long)(PTR_DAT_047d2210 + 0x10);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd | *(char *)(param_4 + 0xde) << 1;
  return;
}


