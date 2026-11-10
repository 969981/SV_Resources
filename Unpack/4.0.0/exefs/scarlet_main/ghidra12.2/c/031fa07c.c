/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fa07c; name: FUN_031fa07c
 */


void FUN_031fa07c(ulong *param_1,ulong param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (ulong)DAT_04884df8 & 0xfffffffffffffffc;
  param_1[1] = param_2;
  DAT_04884df8 = param_1;
  return;
}


