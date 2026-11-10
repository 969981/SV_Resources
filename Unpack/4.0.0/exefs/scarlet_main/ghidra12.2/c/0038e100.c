/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e100; name: FUN_0038e100
 */


int FUN_0038e100(long param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x20c49b) {
    if (param_1 < -0x20c49a) {
      return -0x7fffffff;
    }
    iVar1 = param_2 / 1000000 + (int)param_1 * 1000;
  }
  else {
    iVar1 = 0x7fffffff;
    if (param_1 == 0x20c49b) {
      iVar1 = 0x7fffffff;
      if (param_2 < 648000000) {
        iVar1 = param_2 / 1000000 + 0x7ffffd78;
      }
      return iVar1;
    }
  }
  return iVar1;
}


