/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00124c20; name: FUN_00124c20
 */


void FUN_00124c20(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffff;
  iVar1 = FUN_01b2cc30(param_1,param_2,"__tostring");
  if (iVar1 != 0) {
    iVar1 = FUN_00121f90(param_1,0xffffffff);
    if (iVar1 == 0) {
      FUN_00123a70(param_1,"\'__tostring\' must return a string");
    }
    goto LAB_00124e2c;
  }
  uVar2 = FUN_00d34290(param_1,uVar6);
  switch(uVar2) {
  case 0:
    pcVar5 = "nil";
    goto LAB_00124cd4;
  case 1:
    iVar1 = FUN_00cc4dc0(param_1,uVar6);
    pcVar5 = "false";
    if (iVar1 != 0) {
      pcVar5 = "true";
    }
LAB_00124cd4:
    FUN_00c85bd0(param_1,pcVar5);
    break;
  default:
    iVar1 = FUN_00122c30(param_1,uVar6);
    if (iVar1 == 0) {
      iVar1 = 0;
LAB_00124dcc:
      uVar2 = FUN_00d34290(param_1,uVar6);
      uVar3 = FUN_01b2ccf0(param_1,uVar2);
    }
    else {
      FUN_00c85bd0(param_1,"__name");
      iVar1 = FUN_00122b20(param_1,0xfffffffe);
      if (iVar1 == 0) {
        FUN_00c5db00(param_1,0xfffffffd);
        goto LAB_00124dcc;
      }
      FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
      FUN_00c5db00(param_1,0xfffffffe);
      if (iVar1 != 4) goto LAB_00124dcc;
      uVar3 = FUN_00c646d0(param_1,0xffffffff,0);
    }
    uVar4 = FUN_00122620(param_1,uVar6);
    FUN_01b2cd10(param_1,"%s: %p",uVar3,uVar4);
    if (iVar1 != 0) {
      FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
      FUN_00c5db00(param_1,0xfffffffe);
    }
    break;
  case 3:
    iVar1 = FUN_00121dc0(param_1,uVar6);
    if (iVar1 == 0) {
      FUN_00c41790(param_1,uVar6,0);
      FUN_01b2cd10(param_1,&DAT_03c15fe7);
    }
    else {
      uVar3 = FUN_00c92df0(param_1,uVar6,0);
      FUN_01b2cd10(param_1,&DAT_03c00b9f,uVar3);
    }
    break;
  case 4:
    FUN_00d341e0(param_1,uVar6);
  }
LAB_00124e2c:
  FUN_00c646d0(param_1,0xffffffff,param_3);
  return;
}


