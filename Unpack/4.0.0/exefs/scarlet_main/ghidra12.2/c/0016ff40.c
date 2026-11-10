/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0016ff40; name: FUN_0016ff40
 */


void FUN_0016ff40(long param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  *(byte **)(param_1 + 0x38) = pbVar2 + 1;
  *pbVar2 = 0xfU - (char)LZCOUNT(param_2 + -0x7eff00) | 0xf0;
  piVar1 = *(int **)(param_1 + 0x48);
  *(int **)(param_1 + 0x48) = piVar1 + 1;
  *piVar1 = param_2;
  return;
}


