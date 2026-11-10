/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc1b60; name: FUN_01dc1b60
 */


int FUN_01dc1b60(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 * 6;
  if (1 < param_1 - 1U) {
    param_3 = 0;
  }
  if (param_1 == 0) {
    param_3 = param_2 + iVar1;
  }
  return param_3;
}


