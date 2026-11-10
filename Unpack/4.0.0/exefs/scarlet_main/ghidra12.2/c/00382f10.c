/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00382f10; name: FUN_00382f10
 */


undefined4
FUN_00382f10(int param_1,long param_2,uint param_3,long *param_4,uint *param_5,undefined *param_6)

{
  undefined1 *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined *puVar27;
  ushort uVar28;
  undefined1 uVar29;
  uint uVar30;
  ushort auStack_a0 [5];
  short local_96;
  short local_94;
  short local_92;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  ushort local_80 [16];
  
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0xc] = 0;
  local_80[0xd] = 0;
  local_80[0xe] = 0;
  local_80[0xf] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  if (param_3 == 0) {
    uVar20 = *param_5;
LAB_00382fc8:
    if (local_80[0xe] == 0) {
      if (local_80[0xd] == 0) {
        if (local_80[0xc] == 0) {
          if (local_80[0xb] == 0) {
            if (local_80[10] == 0) {
              if (local_80[9] == 0) {
                if (local_80[8] == 0) {
                  if (local_80[7] == 0) {
                    if (local_80[6] == 0) {
                      if (local_80[5] == 0) {
                        if (local_80[4] == 0) {
                          if (local_80[3] == 0) {
                            if (local_80[2] == 0) {
                              if (local_80[1] == 0) {
                                puVar19 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar19 + 1);
                                *puVar19 = 0x140;
                                puVar19 = (undefined4 *)*param_4;
                                *param_4 = (long)(puVar19 + 1);
                                *puVar19 = 0x140;
                                *param_5 = 1;
                                return 0;
                              }
                              bVar8 = 0;
                              uVar13 = 0;
                              uVar24 = (uint)(uVar20 != 0);
                              uVar18 = 1;
                              uVar23 = 1;
                              goto LAB_003830fc;
                            }
                            uVar13 = 0;
                            uVar18 = 2;
                          }
                          else {
                            uVar13 = 0;
                            uVar18 = 3;
                          }
                        }
                        else {
                          uVar13 = 0;
                          uVar18 = 4;
                        }
                      }
                      else {
                        uVar13 = 0;
                        uVar18 = 5;
                      }
                    }
                    else {
                      uVar13 = 0;
                      uVar18 = 6;
                    }
                  }
                  else {
                    uVar13 = 0;
                    uVar18 = 7;
                  }
                }
                else {
                  uVar13 = 0;
                  uVar18 = 8;
                }
              }
              else {
                uVar13 = 0;
                uVar18 = 9;
              }
            }
            else {
              uVar13 = 0;
              uVar18 = 10;
            }
          }
          else {
            uVar13 = 0;
            uVar18 = 0xb;
          }
        }
        else {
          uVar13 = 0;
          uVar18 = 0xc;
        }
      }
      else {
        uVar13 = 0;
        uVar18 = 0xd;
      }
    }
    else {
      uVar13 = 0;
      uVar18 = 0xe;
    }
  }
  else {
    if (param_3 == 1) {
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      do {
        puVar2 = (ushort *)(param_2 + uVar18 * 2);
        uVar18 = uVar18 + 2;
        uVar28 = *puVar2;
        local_80[uVar28] = local_80[uVar28] + 1;
        uVar28 = puVar2[1];
        local_80[uVar28] = local_80[uVar28] + 1;
      } while (((ulong)param_3 & 0xfffffffe) != uVar18);
    }
    if ((param_3 & 1) != 0) {
      uVar28 = *(ushort *)(param_2 + uVar18 * 2);
      local_80[uVar28] = local_80[uVar28] + 1;
    }
    uVar13 = (uint)local_80[0xf];
    uVar20 = *param_5;
    if (local_80[0xf] == 0) goto LAB_00382fc8;
    uVar18 = 0xf;
  }
  uVar24 = (uint)uVar18;
  if (uVar20 <= (uint)uVar18) {
    uVar24 = uVar20;
  }
  uVar23 = 1;
  do {
    if (local_80[uVar23] != 0) {
      bVar8 = 1;
      goto LAB_003830fc;
    }
    uVar23 = uVar23 + 1;
  } while (uVar18 != uVar23);
  bVar8 = 1;
  uVar23 = uVar18;
LAB_003830fc:
  uVar20 = (uint)uVar23;
  if ((uint)uVar23 <= uVar24) {
    uVar20 = uVar24;
  }
  if (local_80[1] < 3) {
    iVar15 = 4 - ((uint)local_80[2] + (uint)local_80[1] * 2);
    if (-1 < iVar15) {
      iVar15 = iVar15 * 2 - (uint)local_80[3];
      if (-1 < iVar15) {
        iVar15 = iVar15 * 2 - (uint)local_80[4];
        if (-1 < iVar15) {
          iVar15 = iVar15 * 2 - (uint)local_80[5];
          if (-1 < iVar15) {
            iVar15 = iVar15 * 2 - (uint)local_80[6];
            if (-1 < iVar15) {
              iVar15 = iVar15 * 2 - (uint)local_80[7];
              if (-1 < iVar15) {
                iVar15 = iVar15 * 2 - (uint)local_80[8];
                if (-1 < iVar15) {
                  iVar15 = iVar15 * 2 - (uint)local_80[9];
                  if (-1 < iVar15) {
                    iVar15 = iVar15 * 2 - (uint)local_80[10];
                    if (-1 < iVar15) {
                      iVar15 = iVar15 * 2 - (uint)local_80[0xb];
                      if (-1 < iVar15) {
                        iVar15 = iVar15 * 2 - (uint)local_80[0xc];
                        if (-1 < iVar15) {
                          iVar15 = iVar15 * 2 - (uint)local_80[0xd];
                          if (-1 < iVar15) {
                            iVar15 = iVar15 * 2 - (uint)local_80[0xe];
                            if ((-1 < iVar15) && (uVar24 = iVar15 * 2, -1 < (int)(uVar24 - uVar13)))
                            {
                              if ((uVar24 != uVar13) && ((bool)(param_1 == 0 | bVar8))) {
                                return 0xffffffff;
                              }
                              auStack_a0[3] = local_80[2] + local_80[1];
                              auStack_a0[4] = local_80[3] + local_80[2] + local_80[1];
                              local_96 = local_80[4] + auStack_a0[4];
                              local_94 = local_80[5] + local_96;
                              local_92 = local_80[6] + local_94;
                              local_90 = local_80[7] + local_92;
                              local_8e = local_80[8] + local_90;
                              local_8c = local_80[9] + local_8e;
                              local_8a = local_80[10] + local_8c;
                              local_88 = local_80[0xb] + local_8a;
                              local_86 = local_80[0xc] + local_88;
                              local_84 = local_80[0xd] + local_86;
                              auStack_a0[1] = 0;
                              auStack_a0[2] = local_80[1];
                              local_82 = local_80[0xe] + local_84;
                              if (param_3 != 0) {
                                uVar16 = 0;
                                do {
                                  uVar25 = (ulong)*(ushort *)(param_2 + uVar16 * 2);
                                  if (uVar25 != 0) {
                                    uVar28 = auStack_a0[uVar25];
                                    auStack_a0[uVar25] = uVar28 + 1;
                                    *(short *)(param_6 + (ulong)uVar28 * 2) = (short)uVar16;
                                  }
                                  uVar16 = uVar16 + 1;
                                } while (param_3 != uVar16);
                              }
                              if (param_1 == 0) {
                                bVar9 = false;
                                bVar8 = 0;
                                uVar13 = 0x14;
                                puVar26 = param_6;
                                puVar27 = param_6;
                              }
                              else if (param_1 == 1) {
                                if (9 < uVar20) {
                                  return 1;
                                }
                                bVar9 = false;
                                uVar13 = 0x101;
                                bVar8 = 1;
                                puVar26 = &DAT_03cda98e;
                                puVar27 = &DAT_03cda950;
                              }
                              else {
                                bVar9 = param_1 == 2;
                                uVar13 = 0;
                                puVar26 = &UNK_03cdaa0c;
                                puVar27 = &UNK_03cda9cc;
                                if (bVar9) {
                                  bVar8 = 0;
                                  if (9 < uVar20) {
                                    return 1;
                                  }
                                }
                                else {
                                  bVar8 = 0;
                                }
                              }
                              lVar12 = *param_4;
                              uVar24 = 1 << (ulong)(uVar20 & 0x1f);
                              uVar16 = 0;
                              uVar11 = 0;
                              uVar7 = uVar24 - 1;
                              uVar21 = uVar20;
                              uVar14 = 0xffffffff;
                              uVar10 = 0;
                              do {
                                uVar5 = 1 << (ulong)(uVar21 & 0x1f);
                                do {
                                  uVar28 = *(ushort *)(param_6 + uVar16 * 2);
                                  uVar21 = (uint)uVar23;
                                  if (uVar28 + 1 < uVar13) {
                                    uVar29 = 0;
                                  }
                                  else if (uVar13 < uVar28 || uVar13 == uVar28) {
                                    lVar17 = (ulong)(uVar28 - uVar13) * 2;
                                    uVar29 = puVar26[lVar17];
                                    uVar28 = *(ushort *)(puVar27 + lVar17);
                                  }
                                  else {
                                    uVar28 = 0;
                                    uVar29 = 0x60;
                                  }
                                  iVar15 = -1 << (ulong)(uVar21 - uVar10 & 0x1f);
                                  uVar30 = uVar5;
                                  do {
                                    uVar22 = (uVar11 >> (ulong)(uVar10 & 0x1f)) + iVar15 + uVar30;
                                    uVar30 = uVar30 + iVar15;
                                    puVar1 = (undefined1 *)(lVar12 + (ulong)uVar22 * 4);
                                    *puVar1 = uVar29;
                                    uVar6 = (undefined1)(uVar21 - uVar10);
                                    puVar1[1] = uVar6;
                                    *(ushort *)(puVar1 + 2) = uVar28;
                                  } while (uVar30 != 0);
                                  uVar30 = 1 << (ulong)(uVar21 - 1 & 0x1f);
                                  do {
                                    uVar22 = uVar30;
                                    uVar30 = uVar22 >> 1;
                                  } while ((uVar22 & uVar11) != 0);
                                  uVar30 = uVar22 - 1 & uVar11;
                                  uVar28 = local_80[uVar23 & 0xffffffff];
                                  uVar11 = 0;
                                  if (uVar22 != 0) {
                                    uVar11 = uVar30 + uVar22;
                                  }
                                  uVar16 = (ulong)((int)uVar16 + 1);
                                  local_80[uVar23 & 0xffffffff] = uVar28 - 1;
                                  uVar30 = (uint)uVar18;
                                  if ((ushort)(uVar28 - 1) == 0) {
                                    if (uVar21 == uVar30) {
                                      if (uVar11 != 0) {
                                        puVar1 = (undefined1 *)(lVar12 + (ulong)uVar11 * 4);
                                        *puVar1 = 0x40;
                                        puVar1[1] = uVar6;
                                        *(undefined2 *)(puVar1 + 2) = 0;
                                      }
                                      *param_4 = *param_4 + (ulong)uVar24 * 4;
                                      *param_5 = uVar20;
                                      return 0;
                                    }
                                    uVar23 = (ulong)*(ushort *)
                                                     (param_2 +
                                                     (ulong)*(ushort *)(param_6 + uVar16 * 2) * 2);
                                  }
                                  uVar22 = (uint)uVar23;
                                } while ((uVar22 <= uVar20) ||
                                        (uVar3 = uVar11 & uVar7, uVar3 == uVar14));
                                uVar4 = uVar20;
                                if (uVar10 != 0) {
                                  uVar4 = uVar10;
                                }
                                uVar21 = uVar22 - uVar4;
                                iVar15 = 1 << (ulong)(uVar21 & 0x1f);
                                if (uVar22 < uVar30) {
                                  uVar21 = uVar30 - uVar4;
                                  uVar25 = uVar23 & 0xffffffff;
                                  do {
                                    puVar2 = local_80 + uVar25;
                                    if ((int)(iVar15 - (uint)*puVar2) < 1) {
                                      uVar21 = (int)uVar25 - uVar4;
                                      break;
                                    }
                                    uVar25 = uVar25 + 1;
                                    iVar15 = (iVar15 - (uint)*puVar2) * 2;
                                  } while ((uint)uVar25 < uVar30);
                                  iVar15 = 1 << (ulong)(uVar21 & 0x1f);
                                }
                                uVar24 = iVar15 + uVar24;
                                if ((bool)(bVar8 & 0x354 < uVar24)) {
                                  return 1;
                                }
                                if ((bool)(bVar9 & 0x250 < uVar24)) {
                                  return 1;
                                }
                                lVar17 = *param_4;
                                lVar12 = lVar12 + (ulong)uVar5 * 4;
                                puVar1 = (undefined1 *)(lVar17 + (ulong)uVar3 * 4);
                                *puVar1 = (char)uVar21;
                                puVar1[1] = (char)uVar20;
                                *(short *)(puVar1 + 2) =
                                     (short)((uint)((int)lVar12 - (int)lVar17) >> 2);
                                uVar14 = uVar3;
                                uVar10 = uVar4;
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}


