/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040d120; name: FUN_0040d120
 */


undefined8 FUN_0040d120(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  if (param_2 == (long *)0x0) {
    uVar8 = 0x6f;
    uVar9 = 0x43;
    uVar10 = 0x14e;
    goto LAB_0040d188;
  }
  if (((param_1[8] == 0) || (iVar1 = FUN_003eb480(), iVar1 != 0)) ||
     (iVar1 = FUN_003ec670(param_1[8]), iVar1 != 0)) {
    uVar8 = 0x6f;
    uVar9 = 0x67;
    uVar10 = 0x155;
    goto LAB_0040d188;
  }
  if (((param_3 != 0) && (iVar1 = FUN_003eb480(param_3), iVar1 == 0)) &&
     (iVar1 = FUN_003ec670(param_3), iVar1 == 0)) {
    iVar1 = FUN_003eb2b0(param_3);
    iVar2 = FUN_003eb2b0(param_1[8]);
    if (iVar1 <= iVar2 + 1) {
      if ((param_4 != 0) && (iVar1 = FUN_003ec670(param_4), iVar1 != 0)) {
        uVar8 = 0x6f;
        uVar9 = 0xa4;
        uVar10 = 0x16a;
        goto LAB_0040d188;
      }
      plVar4 = (long *)param_1[1];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)FUN_0040cf10(param_1);
        param_1[1] = (long)plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
      }
      pcVar11 = *(code **)(*plVar4 + 0x68);
      if (pcVar11 == (code *)0x0) {
        uVar8 = 0x72;
        uVar9 = 0x42;
        uVar10 = 0x2c1;
        goto LAB_0040d188;
      }
      if ((*plVar4 != *param_2) ||
         ((((int)param_2[1] != 0 && ((int)plVar4[1] != 0)) && ((int)plVar4[1] != (int)param_2[1]))))
      {
        uVar8 = 0x72;
        uVar9 = 0x65;
        uVar10 = 0x2c8;
        goto LAB_0040d188;
      }
      if ((plVar4 != param_2) && (iVar1 = (*pcVar11)(plVar4,param_2), iVar1 == 0)) {
        return 0;
      }
      lVar5 = FUN_003eb8f0(param_1[2],param_3);
      if (lVar5 == 0) {
        return 0;
      }
      if ((param_4 == 0) || (iVar1 = FUN_003eb480(param_4), iVar1 != 0)) {
        iVar2 = FUN_003eb2b0(param_1[2]);
        iVar3 = FUN_003eb2b0(param_1[8]);
        iVar1 = iVar3 + 2;
        if (-1 < iVar3 + 1) {
          iVar1 = iVar3 + 1;
        }
        if ((iVar1 >> 1) + 3 < iVar2) {
          lVar5 = FUN_003ed1c0();
          if (lVar5 == 0) goto LAB_0040d474;
          FUN_003ed410();
          lVar6 = FUN_003ed5c0(lVar5);
          if (lVar6 != 0) {
            if (*(int *)(*param_1 + 4) == 0x197) {
              FUN_003eb9f0(lVar6,0);
              iVar1 = FUN_003eb2b0(param_1[8]);
              iVar1 = FUN_003ec020(lVar6,iVar1 + -1);
              if (iVar1 != 0) {
LAB_0040d3f8:
                iVar1 = FUN_003f2040(param_1[3],param_1[2]);
                if ((iVar1 != 0) && (iVar1 = FUN_003f0310(param_1[3],param_1[3],lVar6), iVar1 != 0))
                {
                  lVar6 = param_1[3];
                  uVar8 = FUN_003eb200();
                  iVar1 = FUN_003f0310(lVar6,lVar6,uVar8);
                  if (iVar1 != 0) {
                    iVar1 = FUN_003ed910(param_1[3],0,param_1[3],param_1[2],lVar5);
                    FUN_003ed530(lVar5);
                    FUN_003ed280(lVar5);
                    if (iVar1 == 0) goto LAB_0040d474;
                    goto LAB_0040d37c;
                  }
                }
              }
            }
            else {
              lVar7 = FUN_003eb8f0(lVar6,param_1[8]);
              if (lVar7 != 0) goto LAB_0040d3f8;
            }
          }
          FUN_003ed530(lVar5);
          FUN_003ed280(lVar5);
LAB_0040d474:
          FUN_003eb9f0(param_1[3],0);
          return 0;
        }
        FUN_003eb9f0(param_1[3],0);
      }
      else {
        lVar5 = FUN_003eb8f0(param_1[3],param_4);
        if (lVar5 == 0) {
          return 0;
        }
      }
LAB_0040d37c:
      iVar1 = FUN_003ec640(param_1[2]);
      if (iVar1 == 0) {
        FUN_003eccf0(param_1[0x12]);
        param_1[0x12] = 0;
        return 1;
      }
      lVar5 = FUN_003ed1c0();
      FUN_003eccf0(param_1[0x12]);
      param_1[0x12] = 0;
      if (lVar5 != 0) {
        lVar6 = FUN_003ecc70();
        param_1[0x12] = lVar6;
        if (lVar6 != 0) {
          iVar1 = FUN_003ecd40(lVar6,param_1[2],lVar5);
          if (iVar1 == 0) {
            FUN_003eccf0(param_1[0x12]);
            uVar8 = 0;
            param_1[0x12] = 0;
          }
          else {
            uVar8 = 1;
          }
          goto LAB_0040d3dc;
        }
      }
      uVar8 = 0;
LAB_0040d3dc:
      FUN_003ed280(lVar5);
      return uVar8;
    }
  }
  uVar8 = 0x6f;
  uVar9 = 0x7a;
  uVar10 = 0x160;
LAB_0040d188:
  FUN_004806c0(0x10,uVar8,uVar9,"external/openssl/crypto/ec/ec_lib.c",uVar10);
  return 0;
}


