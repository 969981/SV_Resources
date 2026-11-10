/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02255b24; name: FUN_02255b24
 */


undefined8 FUN_02255b24(short *param_1)

{
  while( true ) {
    if (*param_1 == 0) {
      return 0;
    }
    if (*param_1 == 0x10) break;
    param_1 = param_1 + 1;
  }
  return 1;
}


