/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0e84; name: FUN_001e0e84
 */


int FUN_001e0e84(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 - param_3;
  iVar1 = -0x80000000;
  if (-0x863 < param_1) {
    iVar1 = (param_2 - param_4) + param_1 * 1000000;
  }
  iVar2 = 0x7fffffff;
  if (param_1 < 0x863) {
    iVar2 = iVar1;
  }
  return iVar2;
}


