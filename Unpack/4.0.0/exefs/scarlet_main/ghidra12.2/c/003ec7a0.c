/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec7a0; name: FUN_003ec7a0
 */


bool FUN_003ec7a0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_4 + 0x28) * 2 < *(int *)(param_3 + 8) + *(int *)(param_2 + 8)) {
    return false;
  }
  FUN_003ed410(param_5);
  lVar3 = FUN_003ed5c0(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_003f2810(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_003f1d40(lVar3,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      iVar2 = FUN_003ec870(param_1,lVar3,param_4);
      bVar1 = iVar2 != 0;
      goto LAB_003ec844;
    }
  }
  bVar1 = false;
LAB_003ec844:
  FUN_003ed530(param_5);
  return bVar1;
}


