/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fc410; name: FUN_003fc410
 */


undefined4
FUN_003fc410(undefined8 param_1,int param_2,int param_3,long param_4,long param_5,int *param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  long lVar20;
  uint local_84;
  int local_6c;
  
  if (param_2 < 0xea3) {
    if (param_2 < 0x541) {
      if (param_2 < 0x1dc) {
        if (param_2 < 400) {
          if (param_2 < 0x15b) {
            if (param_2 < 0x134) {
              iVar15 = 0x1b;
              if (param_2 < 0x37) {
                iVar15 = 0x22;
              }
              if (param_2 < 2) {
                uVar14 = 0x42;
                goto LAB_003fc500;
              }
            }
            else {
              iVar15 = 8;
            }
          }
          else {
            iVar15 = 7;
          }
        }
        else {
          iVar15 = 6;
        }
      }
      else {
        iVar15 = 5;
      }
    }
    else {
      iVar15 = 4;
    }
  }
  else {
    iVar15 = 3;
  }
  if ((((param_2 != 3) && (param_2 < 6)) && (param_3 != 0)) && (param_4 == 0)) {
    uVar14 = 0x4a;
LAB_003fc500:
    FUN_004806c0(3,0x8d,0x76,"external/openssl/crypto/bn/bn_prime.c",uVar14);
    return 0;
  }
  lVar10 = FUN_00452ce0(0x1000,"external/openssl/crypto/bn/bn_prime.c",0x4e);
  if (lVar10 == 0) {
    uVar19 = 0;
    lVar11 = 0;
    goto LAB_003fcde4;
  }
  lVar11 = FUN_003ed1c0();
  if (lVar11 != 0) {
    FUN_003ed410(lVar11);
    lVar12 = FUN_003ed5c0(lVar11);
    if (lVar12 != 0) {
      local_6c = 0;
      uVar16 = 3;
      if (param_3 == 0) {
        uVar16 = 1;
      }
      uVar17 = 3;
      if (param_3 != 0) {
        uVar17 = 5;
      }
      lVar2 = lVar10 + 4;
LAB_003fc580:
      if (param_4 == 0) {
        iVar7 = FUN_003ff560(param_1,param_2,1,1);
        if (iVar7 != 0) {
LAB_003fc920:
          if ((param_3 == 0) || (iVar7 = FUN_003ec020(param_1,1), iVar7 != 0)) {
            lVar13 = 2;
            do {
              iVar7 = FUN_003f2ca0(param_1,*(undefined2 *)(&UNK_03ce04c2 + lVar13));
              if (iVar7 == -1) goto LAB_003fcde0;
              *(short *)(lVar10 + lVar13) = (short)iVar7;
              lVar13 = lVar13 + 2;
            } while (lVar13 != 0x1000);
            if (param_2 < 0x20) {
              uVar6 = 0;
              if (param_3 == 0) {
                do {
                  if ((int)uVar6 < 0) {
                    lVar13 = 0;
                    while( true ) {
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13 + -2);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar13);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 == uVar5 * uVar4) break;
                      if (lVar13 == 0xffc) goto LAB_003fcbb0;
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar13);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 == uVar5 * uVar4) break;
                      lVar13 = lVar13 + 4;
                    }
                  }
                  else {
                    lVar13 = 2;
                    while( true ) {
                      uVar4 = *(ushort *)(&UNK_03ce04c2 + lVar13);
                      iVar7 = FUN_003eb9c0(param_1);
                      if (iVar7 + uVar6 < (uint)uVar4 * (uint)uVar4) goto LAB_003fcbb0;
                      uVar3 = uVar6 + *(ushort *)(lVar10 + lVar13);
                      uVar5 = 0;
                      uVar18 = (uint)uVar4;
                      if (uVar18 != 0) {
                        uVar5 = uVar3 / uVar18;
                      }
                      if (uVar3 == uVar5 * uVar18) break;
                      lVar13 = lVar13 + 2;
                      if (lVar13 == 0x1000) goto LAB_003fcbb0;
                    }
                  }
                  bVar1 = uVar6 < 0xffffba37;
                  uVar6 = uVar6 + 2;
                } while (bVar1);
              }
              else {
                do {
                  if ((int)uVar6 < 0) {
                    lVar13 = 0;
                    while( true ) {
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13 + -2);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar13);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 - uVar5 * uVar4 < 2) break;
                      if (lVar13 == 0xffc) goto LAB_003fcbb0;
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar13);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 - uVar5 * uVar4 < 2) break;
                      lVar13 = lVar13 + 4;
                    }
                  }
                  else {
                    lVar13 = 2;
                    while( true ) {
                      uVar4 = *(ushort *)(&UNK_03ce04c2 + lVar13);
                      iVar7 = FUN_003eb9c0(param_1);
                      if (iVar7 + uVar6 < (uint)uVar4 * (uint)uVar4) goto LAB_003fcbb0;
                      uVar3 = uVar6 + *(ushort *)(lVar10 + lVar13);
                      uVar5 = 0;
                      uVar18 = (uint)uVar4;
                      if (uVar18 != 0) {
                        uVar5 = uVar3 / uVar18;
                      }
                      if (uVar3 - uVar5 * uVar18 < 2) break;
                      lVar13 = lVar13 + 2;
                      if (lVar13 == 0x1000) goto LAB_003fcbb0;
                    }
                  }
                  bVar1 = uVar6 < 0xffffba35;
                  uVar6 = uVar6 + 4;
                } while (bVar1);
              }
            }
            else {
              uVar6 = 0;
              if (param_3 == 0) {
                do {
                  lVar13 = 0;
                  while( true ) {
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13 + -2);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar13);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 == uVar5 * uVar4) break;
                    if (lVar13 == 0xffc) goto LAB_003fcbb0;
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar13);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 == uVar5 * uVar4) break;
                    lVar13 = lVar13 + 4;
                  }
                  bVar1 = uVar6 < 0xffffba37;
                  uVar6 = uVar6 + 2;
                } while (bVar1);
              }
              else {
                do {
                  lVar13 = 0;
                  while( true ) {
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13 + -2);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar13);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 - uVar5 * uVar4 < 2) break;
                    if (lVar13 == 0xffc) goto LAB_003fcbb0;
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar13);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar13);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 - uVar5 * uVar4 < 2) break;
                    lVar13 = lVar13 + 4;
                  }
                  bVar1 = uVar6 < 0xffffba35;
                  uVar6 = uVar6 + 4;
                } while (bVar1);
              }
            }
            goto LAB_003fcbd0;
          }
        }
      }
      else {
        FUN_003ed410(lVar11);
        lVar13 = FUN_003ed5c0(lVar11);
        if (lVar13 != 0) {
          uVar6 = FUN_003eb9c0(param_4);
          local_84 = 0xffffba38;
          if ((uVar6 ^ 0xfffffff8) < 0xffffba38) {
            local_84 = FUN_003eb9c0(param_4);
            local_84 = ~local_84;
          }
          while (((iVar7 = FUN_003ff2d0(param_1,param_2,0,1), iVar7 != 0 &&
                  (iVar7 = FUN_003ed910(0,lVar13,param_1,param_4,lVar11), iVar7 != 0)) &&
                 (iVar7 = FUN_003f06e0(param_1,param_1,lVar13), iVar7 != 0))) {
            if (param_5 == 0) {
              iVar7 = FUN_003f2e00(param_1,uVar16);
            }
            else {
              iVar7 = FUN_003f0310(param_1,param_1,param_5);
            }
            if ((iVar7 == 0) ||
               (((iVar7 = FUN_003eb2b0(param_1), iVar7 < param_2 ||
                 (uVar6 = FUN_003eb9c0(param_1), uVar6 < uVar17)) &&
                (iVar7 = FUN_003f0310(param_1,param_1,param_4), iVar7 == 0)))) break;
            lVar20 = 2;
            do {
              iVar7 = FUN_003f2ca0(param_1,*(undefined2 *)(&UNK_03ce04c2 + lVar20));
              if (iVar7 == -1) goto LAB_003fcdd8;
              *(short *)(lVar10 + lVar20) = (short)iVar7;
              lVar20 = lVar20 + 2;
            } while (lVar20 != 0x1000);
            if (param_2 < 0x20) {
              uVar6 = 0;
              if (param_3 == 0) {
                do {
                  if ((int)uVar6 < 0) {
                    lVar20 = 0;
                    while( true ) {
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20 + -2);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar20);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 == uVar5 * uVar4) break;
                      if (lVar20 == 0xffc) goto LAB_003fcbf4;
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar20);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 == uVar5 * uVar4) break;
                      lVar20 = lVar20 + 4;
                    }
                  }
                  else {
                    lVar20 = 2;
                    while( true ) {
                      uVar4 = *(ushort *)(&UNK_03ce04c2 + lVar20);
                      iVar7 = FUN_003eb9c0(param_1);
                      if (iVar7 + uVar6 < (uint)uVar4 * (uint)uVar4) goto LAB_003fcbf4;
                      uVar3 = uVar6 + *(ushort *)(lVar10 + lVar20);
                      uVar5 = 0;
                      uVar18 = (uint)uVar4;
                      if (uVar18 != 0) {
                        uVar5 = uVar3 / uVar18;
                      }
                      if (uVar3 == uVar5 * uVar18) break;
                      lVar20 = lVar20 + 2;
                      if (lVar20 == 0x1000) goto LAB_003fcbf4;
                    }
                  }
                  iVar7 = FUN_003eb9c0(param_4);
                  uVar6 = iVar7 + uVar6;
                } while (uVar6 <= local_84);
              }
              else {
                do {
                  if ((int)uVar6 < 0) {
                    lVar20 = 0;
                    while( true ) {
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20 + -2);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar20);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 - uVar5 * uVar4 < 2) break;
                      if (lVar20 == 0xffc) goto LAB_003fcbf4;
                      uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20);
                      uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar20);
                      uVar5 = 0;
                      if (uVar4 != 0) {
                        uVar5 = uVar3 / uVar4;
                      }
                      if (uVar3 - uVar5 * uVar4 < 2) break;
                      lVar20 = lVar20 + 4;
                    }
                  }
                  else {
                    lVar20 = 2;
                    while( true ) {
                      uVar4 = *(ushort *)(&UNK_03ce04c2 + lVar20);
                      iVar7 = FUN_003eb9c0(param_1);
                      if (iVar7 + uVar6 < (uint)uVar4 * (uint)uVar4) goto LAB_003fcbf4;
                      uVar3 = uVar6 + *(ushort *)(lVar10 + lVar20);
                      uVar5 = 0;
                      uVar18 = (uint)uVar4;
                      if (uVar18 != 0) {
                        uVar5 = uVar3 / uVar18;
                      }
                      if (uVar3 - uVar5 * uVar18 < 2) break;
                      lVar20 = lVar20 + 2;
                      if (lVar20 == 0x1000) goto LAB_003fcbf4;
                    }
                  }
                  iVar7 = FUN_003eb9c0(param_4);
                  uVar6 = iVar7 + uVar6;
                } while (uVar6 <= local_84);
              }
            }
            else {
              uVar6 = 0;
              if (param_3 == 0) {
                do {
                  lVar20 = 0;
                  while( true ) {
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20 + -2);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar20);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 == uVar5 * uVar4) break;
                    if (lVar20 == 0xffc) goto LAB_003fcbf4;
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar20);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 == uVar5 * uVar4) break;
                    lVar20 = lVar20 + 4;
                  }
                  iVar7 = FUN_003eb9c0(param_4);
                  uVar6 = iVar7 + uVar6;
                } while (uVar6 <= local_84);
              }
              else {
                do {
                  lVar20 = 0;
                  while( true ) {
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20 + -2);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c4 + lVar20);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 - uVar5 * uVar4 < 2) break;
                    if (lVar20 == 0xffc) goto LAB_003fcbf4;
                    uVar3 = uVar6 + *(ushort *)(lVar2 + lVar20);
                    uVar4 = *(ushort *)((long)&DAT_03ce04c6 + lVar20);
                    uVar5 = 0;
                    if (uVar4 != 0) {
                      uVar5 = uVar3 / uVar4;
                    }
                    if (uVar3 - uVar5 * uVar4 < 2) break;
                    lVar20 = lVar20 + 4;
                  }
                  iVar7 = FUN_003eb9c0(param_4);
                  uVar6 = iVar7 + uVar6;
                } while (uVar6 <= local_84);
              }
            }
          }
        }
LAB_003fcdd8:
        FUN_003ed530(lVar11);
      }
    }
  }
  goto LAB_003fcde0;
LAB_003fcbb0:
  iVar7 = FUN_003f2e00(param_1,uVar6);
  if (iVar7 == 0) goto LAB_003fcde0;
  iVar7 = FUN_003eb2b0(param_1);
  if (iVar7 == param_2) goto LAB_003fcc10;
LAB_003fcbd0:
  iVar7 = FUN_003ff560(param_1,param_2,1,1);
  if (iVar7 == 0) goto LAB_003fcde0;
  goto LAB_003fc920;
LAB_003fcbf4:
  iVar7 = FUN_003f2e00(param_1,uVar6);
  FUN_003ed530(lVar11);
  uVar19 = 0;
  if (iVar7 == 0) goto LAB_003fcde4;
LAB_003fcc10:
  if (param_6 != (int *)0x0) {
    if (*param_6 == 2) {
      iVar7 = (**(code **)(param_6 + 4))(0,local_6c,param_6);
      if (iVar7 == 0) goto LAB_003fcde0;
    }
    else {
      if (*param_6 != 1) goto LAB_003fcde0;
      if (*(code **)(param_6 + 4) != (code *)0x0) {
        (**(code **)(param_6 + 4))(0,local_6c,*(undefined8 *)(param_6 + 2));
      }
    }
  }
  iVar7 = local_6c + 1;
  if (param_3 != 0) {
    iVar8 = FUN_003f2040(lVar12,param_1);
    if (iVar8 == 0) goto LAB_003fcde0;
    iVar8 = iVar15;
    if (param_6 == (int *)0x0) {
      while( true ) {
        iVar9 = FUN_003fce40(param_1,1,lVar11,0,0);
        if (iVar9 == -1) goto LAB_003fcde0;
        if (iVar9 == 0) break;
        iVar9 = FUN_003fce40(lVar12,1,lVar11,0,0);
        if (iVar9 == -1) goto LAB_003fcde0;
        if (iVar9 == 0) break;
        iVar8 = iVar8 + -1;
        uVar19 = 1;
        if (iVar8 == 0) goto LAB_003fcde4;
      }
      local_6c = iVar7;
    }
    else {
      while( true ) {
        iVar9 = FUN_003fce40(param_1,1,lVar11,0,param_6);
        if (iVar9 == -1) goto LAB_003fcde0;
        if (iVar9 == 0) break;
        iVar9 = FUN_003fce40(lVar12,1,lVar11,0,param_6);
        if (iVar9 == -1) goto LAB_003fcde0;
        if (iVar9 == 0) break;
        if (*param_6 == 2) {
          iVar9 = (**(code **)(param_6 + 4))(2,local_6c,param_6);
          if (iVar9 == 0) goto LAB_003fcde0;
        }
        else {
          if (*param_6 != 1) goto LAB_003fcde0;
          if (*(code **)(param_6 + 4) != (code *)0x0) {
            (**(code **)(param_6 + 4))(2,local_6c,*(undefined8 *)(param_6 + 2));
          }
        }
        iVar8 = iVar8 + -1;
        uVar19 = 1;
        if (iVar8 == 0) goto LAB_003fcde4;
      }
      local_6c = iVar7;
    }
    goto LAB_003fc580;
  }
  iVar8 = FUN_003fce40(param_1,iVar15,lVar11,0,param_6);
  local_6c = iVar7;
  if (iVar8 == 0) goto LAB_003fc580;
  if (iVar8 != -1) {
    uVar19 = 1;
    goto LAB_003fcde4;
  }
LAB_003fcde0:
  uVar19 = 0;
LAB_003fcde4:
  FUN_00452f80(lVar10,"external/openssl/crypto/bn/bn_prime.c",0x8a);
  FUN_003ed530(lVar11);
  FUN_003ed280(lVar11);
  return uVar19;
}


