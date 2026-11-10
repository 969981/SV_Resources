/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051d510; name: FUN_0051d510
 */


void FUN_0051d510(ulong *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  
  if ((*param_1 & 1) == 0) {
    lVar2 = FUN_00514564();
  }
  else {
    lVar2 = (*param_1 & 0xfffffffffffffffe) + 8;
  }
  iVar1 = FUN_005167d0(lVar2);
  *param_3 = iVar1 + param_2;
  return;
}


