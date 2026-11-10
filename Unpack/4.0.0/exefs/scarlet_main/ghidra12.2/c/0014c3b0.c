/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014c3b0; name: FUN_0014c3b0
 */


void FUN_0014c3b0(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_18;
  
  iVar1 = FUN_00d34290(param_1,1);
  if (iVar1 == 3) {
    FUN_00d341e0(param_1,1);
  }
  else {
    lVar3 = FUN_00c646d0(param_1,1,&local_18);
    if ((lVar3 == 0) || (lVar3 = FUN_00122420(param_1,lVar3), lVar3 != local_18 + 1))
    goto LAB_0014c48c;
  }
  iVar1 = FUN_00d34290(param_1,2);
  if (iVar1 == 3) {
    FUN_00d341e0(param_1,2);
  }
  else {
    lVar3 = FUN_00c646d0(param_1,2,&local_18);
    if ((lVar3 == 0) || (lVar3 = FUN_00122420(param_1,lVar3), lVar3 != local_18 + 1)) {
LAB_0014c48c:
      FUN_00c5db00(param_1,2);
      iVar1 = FUN_00d34290(param_1,2);
      if ((iVar1 == 4) || (iVar1 = FUN_00123d80(param_1,2,param_3), iVar1 == 0)) {
        uVar2 = FUN_00d34290(param_1,0xfffffffe);
        uVar4 = FUN_01b2ccf0(param_1,uVar2);
        uVar2 = FUN_00d34290(param_1,0xffffffff);
        uVar5 = FUN_01b2ccf0(param_1,uVar2);
        FUN_00123a70(param_1,"attempt to %s a \'%s\' with a \'%s\'",param_3 + 2,uVar4,uVar5);
      }
      FUN_00c5dcd0(param_1,0xfffffffd,1);
      FUN_00123240(param_1,2,1,0,0);
      return;
    }
  }
  FUN_001221f0(param_1,param_2);
  return;
}


