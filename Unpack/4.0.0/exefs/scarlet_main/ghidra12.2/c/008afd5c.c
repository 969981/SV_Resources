/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afd5c; name: FUN_008afd5c
 */


void FUN_008afd5c(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = (param_2 & 7) << 4 | (param_3 & 1) << 7 | *param_1 & 0xff0f;
  return;
}


