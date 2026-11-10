/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004126b0; name: FUN_004126b0
 */


bool FUN_004126b0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  
  FUN_004808e0();
  if (param_5 == 0) {
    param_5 = FUN_003ed1c0();
    lVar11 = param_5;
    if (param_5 == 0) {
      return false;
    }
  }
  else {
    lVar11 = 0;
  }
  FUN_003ed410(param_5);
  uVar4 = FUN_003ed5c0(param_5);
  uVar5 = FUN_003ed5c0(param_5);
  uVar6 = FUN_003ed5c0(param_5);
  lVar7 = FUN_003ed5c0(param_5);
  if ((lVar7 != 0) && (iVar2 = FUN_003f0870(uVar6,param_3,param_1[8],param_5), iVar2 != 0)) {
    if (*(long *)(*param_1 + 0x130) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,param_3,param_5);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar5,param_3,param_5);
joined_r0x00412794:
        if (iVar2 != 0) {
          if ((int)param_1[0xe] == 0) {
            pcVar10 = *(code **)(*param_1 + 0x130);
            if (pcVar10 == (code *)0x0) {
              iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,param_1[0xc],uVar6,param_5);
            }
            else {
              iVar2 = (*pcVar10)(param_1,uVar5,param_1[0xc],param_5);
              if (iVar2 == 0) goto LAB_00412a34;
              iVar2 = FUN_003f0dc0(uVar5,uVar5,uVar6,param_1[8],param_5);
            }
            if (iVar2 != 0) {
              iVar2 = FUN_003f0b30(uVar4,uVar4,uVar5,param_1[8]);
              goto joined_r0x004128ac;
            }
          }
          else {
            iVar2 = FUN_003f0f00(uVar5,uVar6,param_1[8]);
            if ((iVar2 != 0) && (iVar2 = FUN_003f0b30(uVar5,uVar5,uVar6,param_1[8]), iVar2 != 0)) {
              iVar2 = FUN_003f0d70(uVar4,uVar4,uVar5,param_1[8]);
joined_r0x004128ac:
              if (iVar2 != 0) {
                if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
                  iVar2 = FUN_003f0b30(uVar4,uVar4,param_1[0xd],param_1[8]);
                }
                else {
                  iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar5,param_1[0xd],param_5);
                  if (iVar2 == 0) goto LAB_00412a34;
                  iVar2 = FUN_003f0b30(uVar4,uVar4,uVar5,param_1[8]);
                }
                if (iVar2 != 0) {
                  lVar8 = FUN_00413440(lVar7,uVar4,param_1[8],param_5);
                  if (lVar8 == 0) {
                    uVar9 = FUN_00480c80();
                    if ((uVar9 & 0xff000fff) == 0x300006f) {
                      FUN_004808e0();
                      uVar4 = 0x6e;
                      uVar5 = 0x6c;
                    }
                    else {
                      uVar5 = 0x6f;
                      uVar4 = 3;
                    }
                  }
                  else {
                    uVar3 = FUN_003ec640(lVar7);
                    if (uVar3 != (param_4 != 0)) {
                      iVar2 = FUN_003eb480(lVar7);
                      if (iVar2 == 0) {
                        iVar2 = FUN_003f05a0(lVar7,param_1[8],lVar7);
                        if (iVar2 != 0) goto LAB_0041292c;
                      }
                      else {
                        iVar2 = FUN_004131e0(uVar6,param_1[8],param_5);
                        if (iVar2 != -2) {
                          if (iVar2 == 1) {
                            uVar4 = 0x6d;
                            uVar5 = 0x7d;
                          }
                          else {
                            uVar4 = 0x6e;
                            uVar5 = 0x83;
                          }
                          goto LAB_00412a30;
                        }
                      }
                      goto LAB_00412a34;
                    }
LAB_0041292c:
                    uVar3 = FUN_003ec640(lVar7);
                    if (uVar3 == (param_4 != 0)) {
                      iVar2 = FUN_0040dbd0(param_1,param_2,uVar6,lVar7,param_5);
                      bVar1 = iVar2 != 0;
                      goto LAB_00412a38;
                    }
                    uVar4 = 0x44;
                    uVar5 = 0x8b;
                  }
LAB_00412a30:
                  FUN_004806c0(0x10,0xa9,uVar4,"external/openssl/crypto/ec/ecp_oct.c",uVar5);
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar2 = FUN_003f0eb0(uVar5,param_3,param_1[8],param_5);
      if (iVar2 != 0) {
        iVar2 = FUN_003f0dc0(uVar4,uVar5,param_3,param_1[8],param_5);
        goto joined_r0x00412794;
      }
    }
  }
LAB_00412a34:
  bVar1 = false;
LAB_00412a38:
  FUN_003ed530(param_5);
  FUN_003ed280(lVar11);
  return bVar1;
}


