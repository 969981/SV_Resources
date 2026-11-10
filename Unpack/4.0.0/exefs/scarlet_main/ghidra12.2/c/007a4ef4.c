/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4ef4; name: FUN_007a4ef4
 */


void FUN_007a4ef4(long *param_1,long param_2,long param_3)

{
  FUN_00792e30();
  *param_1 = (long)(PTR_DAT_047d0b28 + 0x10);
  FUN_0078ca60(param_1 + 0xb);
  param_1[0x11] = param_3;
  param_1[0x12] = param_2;
  return;
}


