/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01105554; name: FUN_01105554
 */


void FUN_01105554(undefined8 param_1,int param_2)

{
  if ((param_2 != 0) && (FUN_008ca5a8(0x3f800000,param_1,0,1,0), 1 < param_2)) {
    param_2 = param_2 + -1;
    do {
      FUN_008ca5a8(0x3f800000,param_1,0,1,0);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


