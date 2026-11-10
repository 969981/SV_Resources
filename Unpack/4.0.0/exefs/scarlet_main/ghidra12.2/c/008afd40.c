/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afd40; name: FUN_008afd40
 */


void FUN_008afd40(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = param_2 & 3 | (param_3 & 3) << 2 | *param_1 & 0xfff0;
  return;
}


