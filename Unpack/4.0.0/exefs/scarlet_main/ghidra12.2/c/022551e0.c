/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022551e0; name: FUN_022551e0
 */


short FUN_022551e0(short *param_1,uint param_2)

{
  if (((*param_1 == 0x10) && ((ushort)param_1[1] != 0)) && (param_2 < (ushort)param_1[1] - 1)) {
    return param_1[param_2 + 3];
  }
  return 0;
}


