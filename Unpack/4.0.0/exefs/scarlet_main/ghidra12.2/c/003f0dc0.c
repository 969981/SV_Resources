/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f0dc0; name: FUN_003f0dc0
 */


undefined8 FUN_003f0dc0(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_003ed410(param_5);
  lVar3 = FUN_003ed5c0(param_5);
  if (lVar3 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_003f27e0(lVar3,param_2,param_5);
    }
    else {
      iVar2 = FUN_003f1d10(lVar3,param_2,param_3,param_5);
    }
    if ((iVar2 != 0) && (iVar2 = FUN_003ed910(0,param_1,lVar3,param_4,param_5), iVar2 != 0)) {
      if (*(int *)(param_1 + 0x10) != 0) {
        pcVar1 = (code *)PTR_FUN_047cd258;
        if (*(int *)(param_4 + 0x10) != 0) {
          pcVar1 = (code *)PTR_FUN_047cd250;
        }
        iVar2 = (*pcVar1)(param_1,param_1,param_4);
        if (iVar2 == 0) goto LAB_003f0e84;
      }
      uVar4 = 1;
      goto LAB_003f0e88;
    }
  }
LAB_003f0e84:
  uVar4 = 0;
LAB_003f0e88:
  FUN_003ed530(param_5);
  return uVar4;
}


