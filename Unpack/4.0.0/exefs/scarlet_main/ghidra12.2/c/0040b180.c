/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040b180; name: FUN_0040b180
 */


ulong FUN_0040b180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = FUN_003eb480(param_3);
  if (iVar1 != 0) {
    uVar3 = FUN_003eb9f0(param_1,1);
    return uVar3;
  }
  iVar1 = FUN_003ec570(param_3,1);
  if (iVar1 == 0) {
    FUN_003ed410(param_5);
    lVar4 = FUN_003ed5c0(param_5);
    if ((lVar4 == 0) || (iVar1 = FUN_00409c50(lVar4,param_2,param_4), iVar1 == 0)) {
LAB_0040b284:
      uVar3 = 0;
    }
    else {
      iVar1 = FUN_003eb2b0(param_3);
      if (1 < iVar1) {
        iVar1 = iVar1 + -1;
        do {
          iVar2 = FUN_0040a3a0(lVar4,lVar4,param_4,param_5);
          if (iVar2 == 0) goto LAB_0040b284;
          iVar1 = iVar1 + -1;
          iVar2 = FUN_003ec150(param_3,iVar1);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_0040a120(lVar4,lVar4,param_2,param_4,param_5), iVar2 == 0))
          goto LAB_0040b284;
        } while (0 < iVar1);
      }
      lVar4 = FUN_003eb8f0(param_1,lVar4);
      uVar3 = (ulong)(lVar4 != 0);
    }
    FUN_003ed530(param_5);
  }
  else {
    lVar4 = FUN_003eb8f0(param_1,param_2);
    uVar3 = (ulong)(lVar4 != 0);
  }
  return uVar3;
}


