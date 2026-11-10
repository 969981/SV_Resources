/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed93c; name: FUN_001ed93c
 */


undefined8 FUN_001ed93c(byte *param_1,long param_2)

{
  if (param_2 != 0) {
    if (*param_1 == 0x3a) {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
    while (*(int *)(&DAT_03cc1718 + (ulong)*param_1 * 4) != 0) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      if (param_2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


