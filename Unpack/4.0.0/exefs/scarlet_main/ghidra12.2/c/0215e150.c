/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215e150; name: FUN_0215e150
 */


void FUN_0215e150(long param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = *(int *)(*(long *)(param_1 + 0x930) + 0x28) != 0;
  piVar1 = param_2 + 1;
  if (bVar3) {
    piVar1 = param_2;
  }
  lVar2 = 0x7c0;
  if (bVar3) {
    lVar2 = 0x7bc;
  }
  FUN_0155e4ac(*(float *)(*(long *)(param_1 + 0x880) + 0x1d4) +
               (float)*piVar1 / (*(float *)(param_1 + lVar2) * 0.6666667));
  return;
}


