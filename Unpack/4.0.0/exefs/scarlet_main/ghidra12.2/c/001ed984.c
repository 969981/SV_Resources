/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed984; name: FUN_001ed984
 */


undefined8 FUN_001ed984(byte *param_1,long param_2)

{
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    if (*(int *)(&DAT_03cc1318 + (ulong)*param_1 * 4) == 0) break;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  return 0;
}


