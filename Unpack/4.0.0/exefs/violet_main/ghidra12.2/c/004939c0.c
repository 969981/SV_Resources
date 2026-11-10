/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004939c0; name: FUN_004939c0
 */


void FUN_004939c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  FUN_003e6880(param_1,"%*s%s:\n%*s",param_4,&DAT_03c886bc,param_2,param_4 + 2);
  iVar1 = FUN_003e37d0(param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_003e37d0(param_3,1);
    if (iVar1 != 0) goto LAB_00493a48;
    iVar1 = FUN_003e37d0(param_3,2);
    if (iVar1 != 0) goto LAB_00493a78;
    iVar1 = FUN_003e37d0(param_3,3);
    if (iVar1 != 0) goto LAB_00493aa8;
    iVar1 = FUN_003e37d0(param_3,4);
    if (iVar1 != 0) goto LAB_00493ad8;
    iVar1 = FUN_003e37d0(param_3,5);
    if (iVar1 != 0) goto LAB_00493b08;
    iVar1 = FUN_003e37d0(param_3,6);
    if (iVar1 != 0) goto LAB_00493b38;
    iVar1 = FUN_003e37d0(param_3,7);
    if (iVar1 != 0) goto LAB_00493b68;
    iVar1 = FUN_003e37d0(param_3,8);
    if (iVar1 == 0) {
      FUN_003e9110(param_1,"<EMPTY>\n");
      return;
    }
  }
  else {
    FUN_003e9110(param_1,"Unused");
    iVar1 = FUN_003e37d0(param_3,1);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493a48:
      FUN_003e9110(param_1,"Key Compromise");
    }
    iVar1 = FUN_003e37d0(param_3,2);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493a78:
      FUN_003e9110(param_1,"CA Compromise");
    }
    iVar1 = FUN_003e37d0(param_3,3);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493aa8:
      FUN_003e9110(param_1,"Affiliation Changed");
    }
    iVar1 = FUN_003e37d0(param_3,4);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493ad8:
      FUN_003e9110(param_1,"Superseded");
    }
    iVar1 = FUN_003e37d0(param_3,5);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493b08:
      FUN_003e9110(param_1,"Cessation Of Operation");
    }
    iVar1 = FUN_003e37d0(param_3,6);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493b38:
      FUN_003e9110(param_1,"Certificate Hold");
    }
    iVar1 = FUN_003e37d0(param_3,7);
    if (iVar1 != 0) {
      FUN_003e9110(param_1,&DAT_03c82382);
LAB_00493b68:
      FUN_003e9110(param_1,"Privilege Withdrawn");
    }
    iVar1 = FUN_003e37d0(param_3,8);
    if (iVar1 == 0) goto LAB_00493ba8;
    FUN_003e9110(param_1,&DAT_03c82382);
  }
  FUN_003e9110(param_1,"AA Compromise");
LAB_00493ba8:
  FUN_003e9110(param_1,&DAT_03c67c74);
  return;
}


