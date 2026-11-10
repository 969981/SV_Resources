/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c394a0; name: FUN_01c394a0
 */


short * FUN_01c394a0(short *param_1)

{
  if (*param_1 == 0x10) {
    param_1 = param_1 + (ulong)(ushort)param_1[1] + 2;
  }
  return param_1;
}


