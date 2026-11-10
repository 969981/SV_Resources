/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00489150; name: FUN_00489150
 */


bool FUN_00489150(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                 uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 local_b0;
  long local_a8;
  int *local_a0;
  long local_90;
  undefined8 local_88;
  int local_68;
  int local_64;
  
  lVar13 = *(long *)(param_1 + 0xb8);
  uVar17 = *param_5;
  iVar1 = FUN_0047e430(param_7);
  if (0 < iVar1) {
    iVar1 = 0;
    uVar14 = 0;
    local_b0 = 0;
    local_90 = 0;
    local_88 = 0;
    do {
      lVar6 = FUN_0047e450(param_7,iVar1);
      uVar16 = *(uint *)(lVar6 + 0x98);
      if ((uVar16 >> 1 & 1) == 0) {
        uVar15 = *param_6;
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) == 0) {
          if ((uVar16 & 0x60) == 0) goto LAB_00489238;
        }
        else if ((uVar16 >> 6 & 1) == 0) {
          if (*(long *)(lVar6 + 0xa8) == 0) goto LAB_00489238;
        }
        else if ((*(uint *)(lVar6 + 0x9c) & (uVar15 ^ 0xffffffff)) != 0) {
LAB_00489238:
          uVar7 = FUN_00483ac0(lVar13);
          uVar8 = FUN_0048a360(lVar6);
          iVar2 = FUN_00483880(uVar7,uVar8);
          if (iVar2 == 0) {
            uVar16 = 0x20;
LAB_00489280:
            uVar16 = (*(uint *)(lVar6 + 0x84) >> 1 & 0x100 | uVar16) ^ 0x100;
            iVar2 = FUN_004898c0(param_1,lVar6,0);
            if (iVar2 != 0) {
              uVar16 = uVar16 | 0x40;
            }
            uVar7 = FUN_0048a360(lVar6);
            iVar2 = *(int *)(param_1 + 0xac);
            iVar3 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
            if (iVar2 != iVar3 + -1) {
              iVar2 = iVar2 + 1;
            }
            uVar8 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar2);
            iVar3 = FUN_00499880(uVar8,*(undefined8 *)(lVar6 + 0x88));
            if (((uVar16 >> 5 & 1) == 0) || (iVar3 != 0)) {
              iVar2 = iVar2 + 1;
              iVar3 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
              if (iVar2 < iVar3) {
                do {
                  uVar8 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar2);
                  uVar9 = FUN_00483b40();
                  iVar3 = FUN_00483880(uVar9,uVar7);
                  if ((iVar3 == 0) &&
                     (iVar3 = FUN_00499880(uVar8,*(undefined8 *)(lVar6 + 0x88)), iVar3 == 0)) {
                    uVar16 = uVar16 | 0xc;
                    local_88 = uVar8;
                    goto LAB_00489404;
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
                } while (iVar2 < iVar3);
              }
              if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 4 & 1) != 0) &&
                 (iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x10)), 0 < iVar2)) {
                iVar2 = 0;
                do {
                  uVar8 = FUN_0047e450(*(undefined8 *)(param_1 + 0x10),iVar2);
                  uVar9 = FUN_00483b40();
                  iVar3 = FUN_00483880(uVar9,uVar7);
                  if ((iVar3 == 0) &&
                     (iVar3 = FUN_00499880(uVar8,*(undefined8 *)(lVar6 + 0x88)), iVar3 == 0)) {
                    uVar16 = uVar16 | 4;
                    goto LAB_004892f8;
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = FUN_0047e430(*(undefined8 *)(param_1 + 0x10));
                } while (iVar2 < iVar3);
                goto LAB_004892fc;
              }
            }
            else {
              uVar16 = uVar16 | 0x1c;
LAB_004892f8:
              local_88 = uVar8;
LAB_004892fc:
              if ((uVar16 >> 2 & 1) != 0) {
LAB_00489404:
                uVar12 = *(uint *)(lVar6 + 0x98);
                if ((uVar12 >> 4 & 1) == 0) {
                  if ((*(byte *)(lVar13 + 0xe0) >> 4 & 1) == 0) {
                    uVar12 = uVar12 >> 3;
                  }
                  else {
                    uVar12 = uVar12 >> 2;
                  }
                  if ((uVar12 & 1) == 0) {
                    uVar12 = *(uint *)(lVar6 + 0x9c);
                    iVar2 = FUN_0047e430(*(undefined8 *)(lVar13 + 0x108));
                    if (0 < iVar2) {
                      iVar2 = 0;
                      do {
                        puVar10 = (undefined8 *)FUN_0047e450(*(undefined8 *)(lVar13 + 0x108),iVar2);
                        uVar7 = FUN_0048a360(lVar6);
                        if (puVar10[2] == 0) {
                          if ((uVar16 >> 5 & 1) != 0) {
LAB_004894d8:
                            if ((*(undefined8 **)(lVar6 + 0x90) == (undefined8 *)0x0) ||
                               ((local_a0 = (int *)*puVar10, local_a0 == (int *)0x0 ||
                                (piVar11 = (int *)**(undefined8 **)(lVar6 + 0x90),
                                piVar11 == (int *)0x0)))) {
LAB_00489644:
                              uVar12 = *(uint *)(puVar10 + 3) & uVar12;
                              goto LAB_00489694;
                            }
                            if (*local_a0 == 1) {
                              local_a8 = *(long *)(local_a0 + 4);
                              if (local_a8 != 0) {
                                if (*piVar11 != 1) {
                                  local_a0 = piVar11;
                                  goto LAB_004895e8;
                                }
                                if ((*(long *)(piVar11 + 4) != 0) &&
                                   (iVar3 = FUN_00483880(local_a8), iVar3 == 0)) goto LAB_00489644;
                              }
                            }
                            else if (*piVar11 == 1) {
                              local_a8 = *(long *)(piVar11 + 4);
                              if (local_a8 != 0) {
LAB_004895e8:
                                uVar7 = *(undefined8 *)(local_a0 + 2);
                                iVar3 = FUN_0047e430(uVar7);
                                if (0 < iVar3) {
                                  iVar3 = 0;
                                  do {
                                    piVar11 = (int *)FUN_0047e450(uVar7,iVar3);
                                    if ((*piVar11 == 4) &&
                                       (iVar4 = FUN_00483880(local_a8,*(undefined8 *)(piVar11 + 2)),
                                       iVar4 == 0)) goto LAB_00489644;
                                    iVar3 = iVar3 + 1;
                                    iVar4 = FUN_0047e430(uVar7);
                                  } while (iVar3 < iVar4);
                                }
                              }
                            }
                            else {
                              iVar3 = FUN_0047e430(*(undefined8 *)(local_a0 + 2));
                              if (0 < iVar3) {
                                iVar3 = 0;
                                do {
                                  uVar7 = FUN_0047e450(*(undefined8 *)(local_a0 + 2),iVar3);
                                  iVar4 = FUN_0047e430(*(undefined8 *)(piVar11 + 2));
                                  if (0 < iVar4) {
                                    iVar4 = 0;
                                    do {
                                      uVar8 = FUN_0047e450(*(undefined8 *)(piVar11 + 2),iVar4);
                                      iVar5 = FUN_00494ee0(uVar7,uVar8);
                                      if (iVar5 == 0) goto LAB_00489644;
                                      iVar4 = iVar4 + 1;
                                      iVar5 = FUN_0047e430(*(undefined8 *)(piVar11 + 2));
                                    } while (iVar4 < iVar5);
                                  }
                                  iVar3 = iVar3 + 1;
                                  iVar4 = FUN_0047e430(*(undefined8 *)(local_a0 + 2));
                                } while (iVar3 < iVar4);
                              }
                            }
                          }
                        }
                        else {
                          iVar3 = FUN_0047e430();
                          if (0 < iVar3) {
                            iVar3 = 0;
                            do {
                              piVar11 = (int *)FUN_0047e450(puVar10[2],iVar3);
                              if ((*piVar11 == 4) &&
                                 (iVar4 = FUN_00483880(*(undefined8 *)(piVar11 + 2),uVar7),
                                 iVar4 == 0)) goto LAB_004894d8;
                              iVar3 = iVar3 + 1;
                              iVar4 = FUN_0047e430(puVar10[2]);
                            } while (iVar3 < iVar4);
                          }
                        }
                        iVar2 = iVar2 + 1;
                        iVar3 = FUN_0047e430(*(undefined8 *)(lVar13 + 0x108));
                      } while (iVar2 < iVar3);
                    }
                    if (((*(long **)(lVar6 + 0x90) == (long *)0x0) ||
                        (**(long **)(lVar6 + 0x90) == 0)) && ((uVar16 >> 5 & 1) != 0)) {
LAB_00489694:
                      if ((uVar12 & (uVar15 ^ 0xffffffff)) == 0) goto LAB_00489714;
                      uVar15 = uVar12 | uVar15;
                      uVar16 = uVar16 | 0x80;
                    }
                  }
                }
                if (((int)uVar17 <= (int)uVar16) && (uVar16 != 0)) {
                  if ((local_90 != 0) && (uVar16 == uVar17)) {
                    uVar7 = FUN_0048a340(local_90);
                    uVar8 = FUN_0048a340(lVar6);
                    iVar2 = FUN_003fa5b0(&local_64,&local_68,uVar7,uVar8);
                    if (iVar2 == 0) goto LAB_00489268;
                    if ((local_64 < 1) && (local_68 < 1)) {
                      goto LAB_004891d8;
                    }
                  }
                  local_b0 = local_88;
                  uVar17 = uVar16;
                  uVar14 = uVar15;
                  local_90 = lVar6;
                  goto LAB_004891d8;
                }
              }
            }
LAB_00489714:
          }
          else {
            if ((*(byte *)(lVar6 + 0x98) >> 5 & 1) != 0) {
              uVar16 = 0;
              goto LAB_00489280;
            }
LAB_00489268:
          }
        }
      }
LAB_004891d8:
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_7);
    } while (iVar1 < iVar2);
    if (local_90 != 0) {
      FUN_0048b0c0(*param_2);
      *param_2 = local_90;
      *param_4 = local_b0;
      *param_5 = uVar17;
      *param_6 = uVar14;
      FUN_0048a320(local_90);
      FUN_0048b0c0(*param_3);
      *param_3 = 0;
      if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 5 & 1) != 0) &&
         (((*(uint *)(local_90 + 0x84) | *(uint *)(*(long *)(param_1 + 0xb8) + 0xe0)) >> 0xc & 1) !=
          0)) {
        iVar1 = FUN_0047e430(param_7);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            lVar13 = FUN_0047e450(param_7,iVar1);
            if ((*(long *)(lVar13 + 0xa8) != 0) && (*(long *)(local_90 + 0xa0) != 0)) {
              uVar7 = FUN_0048a360(local_90);
              uVar8 = FUN_0048a360(lVar13);
              iVar2 = FUN_00483880(uVar7,uVar8);
              if (((iVar2 == 0) &&
                  (((iVar2 = FUN_00487880(lVar13,local_90,0x5a), iVar2 != 0 &&
                    (iVar2 = FUN_00487880(lVar13,local_90,0x302), iVar2 != 0)) &&
                   (iVar2 = FUN_003e0620(*(undefined8 *)(lVar13 + 0xa8),
                                         *(undefined8 *)(local_90 + 0xa0)), iVar2 < 1)))) &&
                 (iVar2 = FUN_003e0620(*(undefined8 *)(lVar13 + 0xa0),
                                       *(undefined8 *)(local_90 + 0xa0)), 0 < iVar2)) {
                iVar1 = FUN_004898c0(param_1,lVar13,0);
                if (iVar1 != 0) {
                  *param_5 = *param_5 | 2;
                }
                FUN_0048a320(lVar13);
                *param_3 = lVar13;
                goto LAB_00489894;
              }
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0047e430(param_7);
          } while (iVar1 < iVar2);
        }
        *param_3 = 0;
      }
    }
  }
LAB_00489894:
  return 0x1bf < (int)uVar17;
}


