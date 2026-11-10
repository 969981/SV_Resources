/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f2e60; name: FUN_011f2e60
 */


long FUN_011f2e60(long param_1,long param_2,long param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_00c96b7c(param_3,param_1);
      FUN_011f2dc0(param_3 + 0x10,param_1 + 0x10);
      param_1 = param_1 + 0x90;
      param_3 = param_3 + 0x90;
    } while (param_1 != param_2);
  }
  return param_3;
}


