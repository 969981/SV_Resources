/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00402190; name: FUN_00402190
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00402190(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 *param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  int local_294;
  int local_290;
  long local_260 [32];
  long local_160 [32];
  
  if ((*(byte *)*param_6 & 1) == 0) {
    FUN_004806c0(3,0x76,0x66,"external/openssl/crypto/bn/bn_exp2.c",0x24);
    return 0;
  }
  iVar3 = FUN_003eb2b0(param_3);
  iVar4 = FUN_003eb2b0(param_5);
  if (iVar4 == 0 && iVar3 == 0) {
    uVar18 = FUN_003eb9f0(param_1,1);
    return uVar18;
  }
  iVar14 = iVar3;
  if (iVar3 <= iVar4) {
    iVar14 = iVar4;
  }
  FUN_003ed410(param_7);
  uVar8 = FUN_003ed5c0(param_7);
  uVar9 = FUN_003ed5c0(param_7);
  lVar10 = FUN_003ed5c0(param_7);
  local_160[0] = lVar10;
  lVar11 = FUN_003ed5c0(param_7);
  local_260[0] = lVar11;
  if (lVar11 == 0) {
    uVar18 = 0;
    lVar12 = 0;
LAB_0040279c:
    if (param_8 != 0) goto LAB_004027a8;
  }
  else {
    lVar12 = param_8;
    if (param_8 != 0) {
joined_r0x004022d4:
      if (iVar3 < 0x2a0) {
        if (iVar3 < 0xf0) {
          if (iVar3 < 0x50) {
            uVar15 = 3;
            if (iVar3 < 0x18) {
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 4;
          }
        }
        else {
          uVar15 = 5;
        }
      }
      else {
        uVar15 = 6;
      }
      if (iVar4 < 0x2a0) {
        if (iVar4 < 0xf0) {
          if (iVar4 < 0x50) {
            uVar16 = 3;
            if (iVar4 < 0x18) {
              uVar16 = 1;
            }
          }
          else {
            uVar16 = 4;
          }
        }
        else {
          uVar16 = 5;
        }
      }
      else {
        uVar16 = 6;
      }
      if (*(int *)(param_2 + 0x10) != 0) {
LAB_00402368:
        iVar3 = FUN_003ed910(0,lVar10,param_2,param_6,param_7);
        param_2 = lVar10;
        if (iVar3 != 0) goto LAB_00402388;
        goto LAB_00402794;
      }
      iVar3 = FUN_003ebf10(param_2,param_6);
      if (-1 < iVar3) goto LAB_00402368;
LAB_00402388:
      iVar3 = FUN_003eb480(param_2);
      if (iVar3 == 0) {
        iVar3 = FUN_003ec680(lVar10,param_2,lVar12,param_7);
        if (iVar3 == 0) goto LAB_00402794;
        if (1 < uVar15) {
          iVar3 = FUN_003ec770(uVar8,lVar10,lVar10,lVar12,param_7);
          if (iVar3 == 0) goto LAB_00402794;
          uVar18 = 1 << (ulong)(uVar15 - 1 & 0x1f);
          if (1 < (int)uVar18) {
            plVar17 = local_160;
            lVar10 = (ulong)uVar18 - 1;
            do {
              plVar17 = plVar17 + 1;
              lVar13 = FUN_003ed5c0(param_7);
              *plVar17 = lVar13;
              if ((lVar13 == 0) ||
                 (iVar3 = FUN_003ec770(lVar13,plVar17[-1],uVar8,lVar12,param_7), iVar3 == 0))
              goto LAB_00402794;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        if (*(int *)(param_4 + 0x10) == 0) {
          iVar3 = FUN_003ebf10(param_4,param_6);
          if (-1 < iVar3) goto LAB_00402458;
        }
        else {
LAB_00402458:
          iVar3 = FUN_003ed910(0,lVar11,param_4,param_6,param_7);
          param_4 = lVar11;
          if (iVar3 == 0) goto LAB_00402794;
        }
        iVar3 = FUN_003eb480(param_4);
        if (iVar3 == 0) {
          iVar3 = FUN_003ec680(lVar11,param_4,lVar12,param_7);
          if (iVar3 != 0) {
            if (1 < uVar16) {
              iVar3 = FUN_003ec770(uVar8,lVar11,lVar11,lVar12,param_7);
              if (iVar3 == 0) goto LAB_00402794;
              uVar18 = 1 << (ulong)(uVar16 - 1 & 0x1f);
              if (1 < (int)uVar18) {
                plVar17 = local_260;
                lVar10 = (ulong)uVar18 - 1;
                do {
                  plVar17 = plVar17 + 1;
                  lVar11 = FUN_003ed5c0(param_7);
                  *plVar17 = lVar11;
                  if ((lVar11 == 0) ||
                     (iVar3 = FUN_003ec770(lVar11,plVar17[-1],uVar8,lVar12,param_7), iVar3 == 0))
                  goto LAB_00402794;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
            }
            uVar8 = FUN_003eb200();
            iVar3 = FUN_003ec680(uVar9,uVar8,lVar12,param_7);
            if (iVar3 != 0) {
              if (0 < iVar14) {
                uVar19 = 0;
                local_294 = 0;
                local_290 = 0;
                uVar18 = 0;
                iVar3 = iVar14 - uVar15;
                iVar4 = iVar14 - uVar16;
                bVar2 = true;
                do {
                  if ((!bVar2) &&
                     (iVar5 = FUN_003ec770(uVar9,uVar9,uVar9,lVar12,param_7), iVar5 == 0))
                  goto LAB_00402794;
                  iVar5 = iVar14 + -1;
                  if (uVar18 == 0) {
                    iVar6 = FUN_003ec150(param_3);
                    if (iVar6 == 0) {
                      uVar18 = 0;
                    }
                    else {
                      iVar6 = iVar3;
                      do {
                        local_290 = iVar6;
                        iVar7 = FUN_003ec150(param_3,local_290);
                        iVar6 = local_290 + 1;
                      } while (iVar7 == 0);
                      uVar18 = 1;
                      for (iVar6 = iVar14 + -2; local_290 + -1 < iVar6; iVar6 = iVar6 + -1) {
                        iVar7 = FUN_003ec150(param_3,iVar6);
                        uVar18 = (uint)(iVar7 != 0) | uVar18 << 1;
                      }
                    }
                  }
                  if (uVar19 == 0) {
                    iVar6 = FUN_003ec150(param_5);
                    if (iVar6 == 0) {
                      uVar19 = 0;
                    }
                    else {
                      iVar6 = iVar4;
                      do {
                        local_294 = iVar6;
                        iVar7 = FUN_003ec150(param_5,local_294);
                        iVar6 = local_294 + 1;
                      } while (iVar7 == 0);
                      uVar19 = 1;
                      for (iVar6 = iVar14 + -2; local_294 + -1 < iVar6; iVar6 = iVar6 + -1) {
                        iVar7 = FUN_003ec150(param_5,iVar6);
                        uVar19 = (uint)(iVar7 != 0) | uVar19 << 1;
                      }
                    }
                  }
                  if ((uVar18 != 0) && (iVar5 == local_290)) {
                    iVar6 = FUN_003ec770(uVar9,uVar9,local_160[(int)uVar18 >> 1],lVar12,param_7);
                    bVar2 = false;
                    uVar18 = 0;
                    if (iVar6 == 0) {
                      goto LAB_0040279c;
                    }
                  }
                  if ((uVar19 != 0) && (iVar5 == local_294)) {
                    iVar6 = FUN_003ec770(uVar9,uVar9,local_260[(int)uVar19 >> 1],lVar12,param_7);
                    bVar2 = false;
                    uVar19 = 0;
                    if (iVar6 == 0) {
                      uVar18 = 0;
                      goto LAB_0040279c;
                    }
                  }
                  iVar3 = iVar3 + -1;
                  iVar4 = iVar4 + -1;
                  bVar1 = 1 < iVar14;
                  iVar14 = iVar5;
                } while (bVar1);
              }
              iVar3 = FUN_003ecb60(param_1,uVar9,lVar12,param_7);
              uVar18 = (uint)(iVar3 != 0);
              goto LAB_0040279c;
            }
          }
LAB_00402794:
          uVar18 = 0;
          goto LAB_0040279c;
        }
      }
      FUN_003eb9f0(param_1,0);
      uVar18 = 1;
      goto LAB_0040279c;
    }
    lVar12 = FUN_003ecc70();
    if (lVar12 == 0) {
      lVar12 = 0;
      uVar18 = 0;
    }
    else {
      iVar5 = FUN_003ecd40(lVar12,param_6,param_7);
      if (iVar5 != 0) goto joined_r0x004022d4;
      uVar18 = 0;
    }
  }
  FUN_003eccf0(lVar12);
LAB_004027a8:
  FUN_003ed530(param_7);
  return uVar18;
}


