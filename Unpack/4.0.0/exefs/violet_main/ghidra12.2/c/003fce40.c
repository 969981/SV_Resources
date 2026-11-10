/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fce40; name: FUN_003fce40
 */


ulong FUN_003fce40(undefined8 param_1,int param_2,long param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int local_64;
  
  iVar3 = FUN_003ec5f0(param_1,2);
  if ((iVar3 != 0) || (iVar3 = FUN_003ec5f0(param_1,3), iVar3 != 0)) {
    return 1;
  }
  iVar3 = FUN_003ec640(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  uVar7 = FUN_003eb200();
  iVar3 = FUN_003ebf70(param_1,uVar7);
  if (iVar3 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = FUN_003eb2b0(param_1);
    if (iVar3 < 0xea3) {
      iVar3 = FUN_003eb2b0(param_1);
      if (iVar3 < 0x541) {
        iVar3 = FUN_003eb2b0(param_1);
        if (iVar3 < 0x1dc) {
          iVar3 = FUN_003eb2b0(param_1);
          if (iVar3 < 400) {
            iVar3 = FUN_003eb2b0(param_1);
            if (iVar3 < 0x15b) {
              iVar3 = FUN_003eb2b0(param_1);
              if (iVar3 < 0x134) {
                iVar3 = FUN_003eb2b0(param_1);
                param_2 = 0x1b;
                if (iVar3 < 0x37) {
                  param_2 = 0x22;
                }
              }
              else {
                param_2 = 8;
              }
            }
            else {
              param_2 = 7;
            }
          }
          else {
            param_2 = 6;
          }
        }
        else {
          param_2 = 5;
        }
      }
      else {
        param_2 = 4;
      }
    }
    else {
      param_2 = 3;
    }
  }
  if (param_4 == 0) {
LAB_003fd040:
    lVar8 = param_3;
    if ((param_3 != 0) || (lVar8 = FUN_003ed1c0(), lVar8 != 0)) {
      FUN_003ed410(lVar8);
      uVar7 = FUN_003ed5c0(lVar8);
      uVar9 = FUN_003ed5c0(lVar8);
      uVar10 = FUN_003ed5c0(lVar8);
      lVar11 = FUN_003ed5c0(lVar8);
      if (((lVar11 != 0) &&
          (((lVar12 = FUN_003eb8f0(uVar7,param_1), lVar12 != 0 &&
            (iVar3 = FUN_003f2f20(uVar7,1), iVar3 != 0)) &&
           (lVar12 = FUN_003eb8f0(uVar9,param_1), lVar12 != 0)))) &&
         (iVar3 = FUN_003f2f20(uVar9,3), iVar3 != 0)) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          iVar5 = FUN_003ec150(uVar7,iVar3);
        } while (iVar5 == 0);
        iVar5 = FUN_003f23a0(uVar10,uVar7,iVar3);
        if (iVar5 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_003ecc70();
          if ((lVar12 != 0) && (iVar5 = FUN_003ecd40(lVar12,param_1,lVar8), iVar5 != 0)) {
            if (param_2 < 1) {
              uVar13 = 1;
            }
            else {
              iVar5 = 0;
              if (param_5 == (int *)0x0) {
                do {
                  iVar6 = FUN_003ff740(lVar11,uVar9);
                  if (((iVar6 == 0) || (iVar6 = FUN_003f2e00(lVar11,2), iVar6 == 0)) ||
                     (iVar6 = FUN_003fd860(lVar11,lVar11,uVar10,param_1,lVar8,lVar12), iVar6 == 0))
                  goto LAB_003fd178;
                  iVar6 = FUN_003ec5b0(lVar11);
                  if ((iVar6 == 0) && (iVar6 = FUN_003ebf70(lVar11,uVar7), iVar6 != 0)) {
                    uVar4 = -iVar3;
                    do {
                      bVar2 = 0xfffffffe < uVar4;
                      uVar4 = uVar4 + 1;
                      if (bVar2) goto LAB_003fd34c;
                      iVar6 = FUN_003f0dc0(lVar11,lVar11,lVar11,param_1,lVar8);
                      if (iVar6 == 0) goto LAB_003fd178;
                      iVar6 = FUN_003ec5b0(lVar11);
                      if (iVar6 != 0) goto LAB_003fd34c;
                      iVar6 = FUN_003ebf70(lVar11,uVar7);
                    } while (iVar6 != 0);
                  }
                  iVar5 = iVar5 + 1;
                  uVar13 = 1;
                } while (iVar5 != param_2);
              }
              else {
                local_64 = 0;
                do {
                  iVar5 = FUN_003ff740(lVar11,uVar9);
                  if (((iVar5 == 0) || (iVar5 = FUN_003f2e00(lVar11,2), iVar5 == 0)) ||
                     (iVar5 = FUN_003fd860(lVar11,lVar11,uVar10,param_1,lVar8,lVar12), iVar5 == 0))
                  goto LAB_003fd178;
                  iVar5 = FUN_003ec5b0(lVar11);
                  if ((iVar5 == 0) && (iVar5 = FUN_003ebf70(lVar11,uVar7), iVar5 != 0)) {
                    uVar4 = -iVar3;
                    do {
                      bVar2 = 0xfffffffe < uVar4;
                      uVar4 = uVar4 + 1;
                      if (bVar2) goto LAB_003fd34c;
                      iVar5 = FUN_003f0dc0(lVar11,lVar11,lVar11,param_1,lVar8);
                      if (iVar5 == 0) goto LAB_003fd178;
                      iVar5 = FUN_003ec5b0(lVar11);
                      if (iVar5 != 0) goto LAB_003fd34c;
                      iVar5 = FUN_003ebf70(lVar11,uVar7);
                    } while (iVar5 != 0);
                  }
                  if (*param_5 == 2) {
                    iVar5 = (**(code **)(param_5 + 4))(1,local_64,param_5);
                    if (iVar5 == 0) goto LAB_003fd178;
                  }
                  else {
                    if (*param_5 != 1) goto LAB_003fd178;
                    if (*(code **)(param_5 + 4) != (code *)0x0) {
                      (**(code **)(param_5 + 4))(1,local_64,*(undefined8 *)(param_5 + 2));
                    }
                  }
                  local_64 = local_64 + 1;
                  uVar13 = 1;
                } while (local_64 != param_2);
              }
            }
            goto LAB_003fd17c;
          }
        }
LAB_003fd178:
        uVar13 = 0xffffffff;
        goto LAB_003fd17c;
      }
      lVar12 = 0;
      uVar13 = 0xffffffff;
      goto LAB_003fd140;
    }
  }
  else {
    lVar12 = 2;
    do {
      uVar1 = *(undefined2 *)(&UNK_03ce04c2 + lVar12);
      uVar4 = FUN_003f2ca0(param_1,uVar1);
      uVar13 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) goto LAB_003fd158;
      if (uVar4 == 0) {
        uVar13 = FUN_003ec5f0(param_1,uVar1);
        return uVar13;
      }
      lVar12 = lVar12 + 2;
    } while (lVar12 != 0x1000);
    if (param_5 == (int *)0x0) goto LAB_003fd040;
    if (*param_5 == 2) {
      uVar13 = 0xffffffff;
      iVar3 = (**(code **)(param_5 + 4))(1,0xffffffff,param_5);
      if (iVar3 == 0) {
LAB_003fd158:
        lVar12 = 0;
        goto LAB_003fd168;
      }
      goto LAB_003fd040;
    }
    if (*param_5 == 1) {
      if (*(code **)(param_5 + 4) != (code *)0x0) {
        (**(code **)(param_5 + 4))(1,0xffffffff,*(undefined8 *)(param_5 + 2));
      }
      goto LAB_003fd040;
    }
  }
  lVar12 = 0;
  uVar13 = 0xffffffff;
LAB_003fd168:
  FUN_003eccf0(lVar12);
  return uVar13;
LAB_003fd34c:
  uVar13 = 0;
LAB_003fd17c:
  if (lVar8 == 0) goto LAB_003fd168;
LAB_003fd140:
  FUN_003ed530(lVar8);
  if (param_3 == 0) {
    FUN_003ed280(lVar8);
  }
  goto LAB_003fd168;
}


