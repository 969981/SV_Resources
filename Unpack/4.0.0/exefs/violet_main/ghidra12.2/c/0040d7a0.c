/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040d7a0; name: FUN_0040d7a0
 */


undefined8 FUN_0040d7a0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  if ((*(int *)((byte *)*param_1 + 4) != *(int *)(*param_2 + 4)) ||
     ((((int)param_1[4] != 0 && ((int)param_2[4] != 0)) && ((int)param_1[4] != (int)param_2[4])))) {
    return 1;
  }
  if ((*(byte *)*param_1 >> 1 & 1) != 0) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_003ed1c0();
    lVar10 = param_3;
    if (param_3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    lVar10 = 0;
  }
  FUN_003ed410(param_3);
  uVar2 = FUN_003ed5c0(param_3);
  uVar3 = FUN_003ed5c0(param_3);
  uVar4 = FUN_003ed5c0(param_3);
  uVar5 = FUN_003ed5c0(param_3);
  uVar6 = FUN_003ed5c0(param_3);
  lVar7 = FUN_003ed5c0(param_3);
  if (lVar7 == 0) goto LAB_0040d9f0;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,uVar2,uVar3,uVar4,param_3);
  if (((iVar1 != 0) &&
      (iVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar5,uVar6,lVar7,param_3), iVar1 != 0)) &&
     ((iVar1 = FUN_003ebf70(uVar2,uVar5), iVar1 == 0 &&
      ((iVar1 = FUN_003ebf70(uVar3,uVar6), iVar1 == 0 &&
       (iVar1 = FUN_003ebf70(uVar4,lVar7), iVar1 == 0)))))) {
    lVar7 = *param_1;
    if (*(code **)(lVar7 + 0xd8) == (code *)0x0) {
      uVar2 = 0x42;
      uVar3 = 0x3bc;
    }
    else {
      plVar8 = (long *)param_1[1];
      if (lVar7 == *plVar8) {
        plVar9 = (long *)param_2[1];
        iVar1 = (int)param_1[4];
        if (iVar1 == 0) {
          if (lVar7 == *plVar9) goto LAB_0040d9a8;
        }
        else if (((((int)plVar8[1] == 0) || (iVar1 == (int)plVar8[1])) && (lVar7 == *plVar9)) &&
                (((int)plVar9[1] == 0 || (iVar1 == (int)plVar9[1])))) {
LAB_0040d9a8:
          iVar1 = (**(code **)(lVar7 + 0xd8))(param_1,plVar8,plVar9,param_3);
          if (iVar1 == 0) {
            if ((param_1[2] == 0) || (param_2[2] == 0)) {
LAB_0040d9f0:
              FUN_003ed530(param_3);
              FUN_003ed280(lVar10);
              return 0xffffffff;
            }
            lVar11 = param_1[3];
            lVar7 = param_2[3];
            iVar1 = FUN_003ebf70();
            if ((iVar1 == 0) && (iVar1 = FUN_003ebf70(lVar11,lVar7), iVar1 == 0)) {
              uVar2 = 0;
              goto LAB_0040d94c;
            }
          }
          goto LAB_0040d948;
        }
      }
      uVar2 = 0x65;
      uVar3 = 0x3c0;
    }
    FUN_004806c0(0x10,0x71,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  }
LAB_0040d948:
  uVar2 = 1;
LAB_0040d94c:
  FUN_003ed530(param_3);
  FUN_003ed280(lVar10);
  return uVar2;
}


