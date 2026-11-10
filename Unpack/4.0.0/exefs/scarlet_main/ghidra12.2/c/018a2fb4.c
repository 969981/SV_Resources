/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a2fb4; name: FUN_018a2fb4
 */


int FUN_018a2fb4(byte param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *__src;
  int iVar5;
  void *__s;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  long local_98;
  long lStack_90;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *local_70;
  
  lVar22 = *(long *)PTR_DAT_047d1b90;
  iVar26 = -0xfff4;
  if (lVar22 == 0) {
    return -0xff01;
  }
  uVar18 = param_3 - param_2;
  uVar20 = (int)uVar18 - 1;
  uVar19 = (ulong)uVar20;
  if ((int)uVar18 < 1) {
    uVar18 = 0;
    if (0 < (int)uVar20) {
LAB_018a304c:
      uVar19 = (ulong)(int)(~(uint)param_2 + (int)param_3);
      do {
        if ((*(byte *)(param_2 + uVar19) | 2) != 0x22) goto LAB_018a307c;
        uVar19 = uVar19 - 1;
      } while ((long)(int)uVar18 < (long)uVar19);
      uVar19 = uVar18;
    }
  }
  else {
    uVar21 = 0;
    do {
      if ((*(byte *)(param_2 + uVar21) | 2) != 0x22) {
        uVar18 = uVar21 & 0xffffffff;
        if ((int)uVar21 < (int)uVar20) goto LAB_018a304c;
        break;
      }
      uVar21 = uVar21 + 1;
    } while ((uVar18 & 0xffffffff) != uVar21);
  }
LAB_018a307c:
  __src = (char *)(param_2 + (uVar18 & 0xffffffff));
  iVar11 = (int)uVar19 - (int)uVar18;
  iVar5 = iVar11 + 1;
  local_70 = __src + iVar5;
  local_98 = param_2;
  lStack_90 = param_3;
  local_78 = __src;
  if (5 < param_1) {
    iVar26 = -0xfff6;
    goto LAB_018a33e4;
  }
  if (iVar5 == 0) {
    iVar26 = -0xfff5;
    goto LAB_018a33e4;
  }
  if (((0xdc < iVar11 - 0x23U) || (*__src != '0')) || (__src[1] != 'x')) goto LAB_018a33e4;
  uVar20 = (byte)__src[2] - 0x30;
  if ((0x36 < uVar20) || ((0x7e0000007e03ffU >> ((ulong)uVar20 & 0x3f) & 1) == 0))
  goto LAB_018a33e4;
  uVar23 = (byte)__src[3] - 0x30;
  if ((0x36 < uVar23) || ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) == 0))
  goto LAB_018a33e4;
  uVar17 = (byte)__src[4] - 0x30;
  if ((0x36 < uVar17) || ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) == 0))
  goto LAB_018a33e4;
  uVar24 = (byte)__src[5] - 0x30;
  if ((0x36 < uVar24) || ((0x7e0000007e03ffU >> ((ulong)uVar24 & 0x3f) & 1) == 0))
  goto LAB_018a33e4;
  uVar6 = (byte)__src[6] - 0x30;
  if (0x36 < uVar6) goto LAB_018a33e4;
  pcVar16 = __src;
  if ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0) {
    uVar7 = (byte)__src[7] - 0x30;
    if ((uVar7 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) != 0)) {
      uVar8 = (byte)__src[8] - 0x30;
      if ((uVar8 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar8 & 0x3f) & 1) != 0)) {
        uVar9 = (byte)__src[9] - 0x30;
        if ((uVar9 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar9 & 0x3f) & 1) != 0)) {
          uVar20 = *(int *)(&DAT_03d0ec58 + (long)(char)uVar9 * 4) + (uint)(byte)__src[9] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar8 * 4) + (uint)(byte)__src[8] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar7 * 4) + (uint)(byte)__src[7] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar6 * 4) + (uint)(byte)__src[6] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar24 * 4) + (uint)(byte)__src[5] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar17 * 4) + (uint)(byte)__src[4] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar23 * 4) + (uint)(byte)__src[3] +
                   (*(int *)(&DAT_03d0ec58 + (long)(char)uVar20 * 4) + (uint)(byte)__src[2]) * 0x10)
                   * 0x10) * 0x10) * 0x10) * 0x10) * 0x10) * 0x10;
          local_78 = __src + 10;
          if ((int)uVar20 < 0) {
            uVar23 = 0xffffffff;
LAB_018a3580:
            pcVar16 = local_78;
            if (*local_78 == ':') {
              pcVar16 = local_78 + 1;
              if ((uint)((ulong)(byte)local_78[1] - 0x30) < 10) {
                pcVar16 = local_78 + 2;
                if ((uint)((ulong)(byte)local_78[2] - 0x30) < 10) {
                  pcVar16 = local_78 + 3;
                  if ((uint)((ulong)(byte)local_78[3] - 0x30) < 10) {
                    pcVar16 = local_78 + 4;
                    if (((uint)((ulong)(byte)local_78[4] - 0x30) < 10) &&
                       (pcVar16 = local_78 + 5, local_78[5] == '-')) {
                      pbVar1 = (byte *)(local_78 + 6);
                      pcVar16 = local_78 + 6;
                      if ((uint)((ulong)*pbVar1 - 0x30) < 10) {
                        pbVar2 = (byte *)(local_78 + 7);
                        pcVar16 = local_78 + 7;
                        if (((uint)((ulong)*pbVar2 - 0x30) < 10) &&
                           (pcVar16 = local_78 + 8, local_78[8] == '-')) {
                          pbVar3 = (byte *)(local_78 + 9);
                          pcVar16 = local_78 + 9;
                          if ((uint)((ulong)*pbVar3 - 0x30) < 10) {
                            pbVar4 = (byte *)(local_78 + 10);
                            pcVar16 = local_78 + 10;
                            if (((uint)((ulong)*pbVar4 - 0x30) < 10) &&
                               (pcVar16 = local_78 + 0xb, local_78[0xb] == '.')) {
                              uVar19 = ((ulong)(byte)local_78[4] - 0x30) +
                                       (((ulong)(byte)local_78[3] - 0x30) +
                                       (((ulong)(byte)local_78[2] - 0x30) +
                                       ((ulong)(byte)local_78[1] - 0x30) * 10) * 10) * 10;
                              local_78 = local_78 + 0xc;
                              uVar17 = (uint)uVar19;
                              pcVar16 = local_78;
                              if (0x7cd < (int)uVar17) {
                                lVar25 = ((ulong)*pbVar2 - 0x30) + ((ulong)*pbVar1 - 0x30) * 10;
                                uVar24 = (uint)lVar25;
                                if (uVar24 < 0xd) {
                                  lVar27 = ((ulong)*pbVar4 - 0x30) + ((ulong)*pbVar3 - 0x30) * 10;
                                  uVar6 = 1 << (ulong)(uVar24 & 0x1f);
                                  iVar26 = (int)lVar27;
                                  if ((uVar6 & 0x15aa) == 0) {
                                    if ((uVar6 & 0xa50) == 0) {
                                      if (((uVar24 == 2) && (iVar26 != 0)) && (iVar26 < 0x1e))
                                      goto LAB_018a371c;
                                    }
                                    else if ((iVar26 != 0) && (iVar26 < 0x1f)) {
LAB_018a371c:
                                      if (param_1 < 6) {
                                        pcVar16 = (&PTR_s_Physics_044e97b8)[(char)param_1];
                                      }
                                      else {
                                        pcVar16 = "Invalid";
                                      }
                                      FUN_018a2d8c(&local_88,pcVar16);
                                      local_1e8 = local_88;
                                      local_1e0 = pcStack_80;
                                      uVar18 = FUN_031c63d8(&local_78,&local_1e8);
                                      pcVar16 = local_78;
                                      if ((uVar18 & 1) != 0) {
                                        pcVar16 = local_78 + ((int)local_1e0 - (int)local_1e8);
                                        if (*pcVar16 == '.') {
                                          local_78 = pcVar16 + 1;
                                          if ((int)uVar20 < 0) {
                                            local_1e8 = "Evaluation.";
                                            local_1e0 = "";
                                            uVar18 = FUN_031c63d8(&local_78,&local_1e8);
                                            pcVar16 = local_78;
                                            if ((uVar18 & 1) == 0) goto LAB_018a36a8;
                                            local_78 = local_78 + ((int)local_1e0 - (int)local_1e8);
                                          }
                                          pcVar12 = local_70;
                                          pcVar16 = local_78;
                                          if (param_1 < 6) {
                                            uVar7 = *(uint *)(&DAT_03d0ec40 +
                                                             (long)(char)param_1 * 4);
                                            uVar6 = uVar7 ^ uVar20 & 0x7fffffff;
                                            if ((int)uVar20 < 0) {
                                              uVar18 = thunk_FUN_031bf030();
                                              lVar15 = FUN_008647b0();
                                              iVar26 = -0xfff1;
                                              if ((uVar18 < lVar15 - 0x1e13380U) ||
                                                 (uVar6 < (uint)(uVar18 >> 8))) goto LAB_018a33e4;
                                            }
                                            uVar8 = uVar17 & 0xffff;
                                            iVar26 = (int)((ulong)((long)(int)uVar17 * -0x51eb851f)
                                                          >> 0x20);
                                            if ((uVar19 & 3) == 0) {
                                              if ((uVar8 * -0x3d70a3d7 >> 2 | uVar17 * 0x40000000) <
                                                  0x28f5c29) {
                                                bVar14 = (uVar17 + (uVar8 / 400) * -400 & 0xffff) ==
                                                         0;
                                              }
                                              else {
                                                bVar14 = true;
                                              }
                                            }
                                            else {
                                              bVar14 = false;
                                            }
                                            lVar15 = -0x1de;
                                            if (!(bool)((int)uVar24 < 3 & bVar14)) {
                                              lVar15 = -0x1dd;
                                            }
                                            uVar17 = (uint)((lVar27 + (long)((iVar26 >> 5) -
                                                                            (iVar26 >> 0x1f)) +
                                                                      (ulong)(uVar17 >> 2) +
                                                                      (ulong)uVar8 / 400 +
                                                                      uVar19 * 0x16d + -0xaf8ca +
                                                             *(long *)("17hkKeycodeDataBase" +
                                                                      lVar25 * 8 + 0x13) + lVar15) *
                                                            0x15180 + -0x15180 >> 8);
                                            bVar13 = uVar17 <= uVar6 + 0x3f4;
                                            bVar14 = uVar6 <= uVar17 + 0x3f4;
                                            iVar26 = -0xfff1;
                                            if (bVar13 && bVar14) {
                                              iVar26 = 0;
                                            }
                                            if ((-1 < (int)uVar20) && (bVar13 && bVar14)) {
                                              uVar19 = (long)pcVar12 - (long)pcVar16;
                                              if ((int)uVar19 < 1) {
                                                uVar20 = 0;
                                              }
                                              else {
                                                if ((uVar19 & 0xffffffff) == 1) {
                                                  lVar25 = 0;
                                                  uVar20 = 0;
                                                }
                                                else {
                                                  lVar25 = 0;
                                                  uVar20 = 0;
                                                  do {
                                                    pbVar1 = (byte *)(pcVar16 + lVar25);
                                                    lVar25 = lVar25 + 2;
                                                    uVar20 = ((uint)pbVar1[1] +
                                                             (uVar20 + *pbVar1) * 0x17) * 0x17;
                                                  } while ((uVar19 & 0xffffffff) - (uVar19 & 1) !=
                                                           lVar25);
                                                }
                                                if ((uVar19 & 1) != 0) {
                                                  uVar20 = (uVar20 + (byte)pcVar16[lVar25]) * 0x17;
                                                }
                                                uVar20 = uVar20 & 0x7fffffff;
                                              }
                                              iVar26 = 0;
                                              if (uVar23 != (uVar20 ^ uVar7)) {
                                                iVar26 = -0xfff4;
                                              }
                                            }
                                            if (iVar26 < 0) goto LAB_018a33e4;
                                          }
                                          else {
                                            iVar26 = 0;
                                          }
                                          __s = (void *)(lVar22 + (ulong)CONCAT11(param_1,param_1) +
                                                        0x18);
                                          memset(__s,0,0x101);
                                          memcpy(__s,__src,(long)iVar5);
                                          goto LAB_018a33e4;
                                        }
                                      }
                                    }
                                  }
                                  else if ((iVar26 != 0) && (iVar26 < 0x20)) goto LAB_018a371c;
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
          else {
            pcVar16 = local_78;
            if (((*local_78 == '-') && (pcVar16 = __src + 0xb, __src[0xb] == '0')) &&
               (__src[0xc] == 'x')) {
              uVar23 = (byte)__src[0xd] - 0x30;
              if ((uVar23 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar23 & 0x3f) & 1) != 0)) {
                uVar17 = (byte)__src[0xe] - 0x30;
                if ((uVar17 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar17 & 0x3f) & 1) != 0)) {
                  uVar24 = (byte)__src[0xf] - 0x30;
                  if ((uVar24 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar24 & 0x3f) & 1) != 0)) {
                    uVar6 = (byte)__src[0x10] - 0x30;
                    if ((uVar6 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
                      uVar7 = (byte)__src[0x11] - 0x30;
                      if ((uVar7 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar7 & 0x3f) & 1) != 0))
                      {
                        uVar8 = (byte)__src[0x12] - 0x30;
                        if ((uVar8 < 0x37) &&
                           ((0x7e0000007e03ffU >> ((ulong)uVar8 & 0x3f) & 1) != 0)) {
                          uVar9 = (byte)__src[0x13] - 0x30;
                          if ((uVar9 < 0x37) &&
                             ((0x7e0000007e03ffU >> ((ulong)uVar9 & 0x3f) & 1) != 0)) {
                            uVar10 = (byte)__src[0x14] - 0x30;
                            if ((uVar10 < 0x37) &&
                               ((0x7e0000007e03ffU >> ((ulong)uVar10 & 0x3f) & 1) != 0)) {
                              uVar23 = *(int *)(&DAT_03d0ec58 + (long)(char)uVar10 * 4) +
                                       (uint)(byte)__src[0x14] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar9 * 4) +
                                        (uint)(byte)__src[0x13] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar8 * 4) +
                                        (uint)(byte)__src[0x12] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar7 * 4) +
                                        (uint)(byte)__src[0x11] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar6 * 4) +
                                        (uint)(byte)__src[0x10] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar24 * 4) +
                                        (uint)(byte)__src[0xf] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar17 * 4) +
                                        (uint)(byte)__src[0xe] +
                                       (*(int *)(&DAT_03d0ec58 + (long)(char)uVar23 * 4) +
                                       (uint)(byte)__src[0xd]) * 0x10) * 0x10) * 0x10) * 0x10) *
                                       0x10) * 0x10) * 0x10;
                              local_78 = __src + 0x15;
                              goto LAB_018a3580;
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
LAB_018a36a8:
  local_78 = pcVar16;
  iVar26 = -0xfff4;
LAB_018a33e4:
  if ((iVar26 < 0) && ((2 < DAT_047fc098 || (uVar19 = FUN_0322d380(), (uVar19 & 1) != 0)))) {
    uVar19 = FUN_0322d380();
    if ((uVar19 & 1) == 0) {
      FUN_0322cb38(&local_1e8,&DAT_047fc048,3);
      if (param_1 < 6) {
        local_78 = (&PTR_s_Physics_044e97b8)[(char)param_1];
      }
      else {
        local_78 = "Invalid";
      }
      if (iVar26 + 0xfff6U < 6) {
        local_88 = (&PTR_s_Invalid_Product_044e9788)[(int)(iVar26 + 0xfff6U)];
      }
      else {
        local_88 = "Unknown Error";
      }
      lVar22 = FUN_0322c554(&local_1e8,"  [ERROR: INVALID KEY] {0,-16} : {} ({})",PTR_DAT_047d1c58,
                            &local_78,&local_98,&local_88);
      *(char **)(lVar22 + 0x38) =
           "D:/CI/Stable_Package_Build_nx64/Source/Common/Internal/Keycode/hkKeycodeManager.cpp";
      *(undefined8 *)(lVar22 + 0x40) = 0x71;
      FUN_0322cb80(&local_1e8);
    }
    else {
      FUN_0322cbcc(&local_1e8,&DAT_047fc048,3);
      if (param_1 < 6) {
        local_1f0 = (&PTR_s_Physics_044e97b8)[(char)param_1];
      }
      else {
        local_1f0 = "Invalid";
      }
      if (iVar26 + 0xfff6U < 6) {
        local_1f8 = (&PTR_s_Invalid_Product_044e9788)[(int)(iVar26 + 0xfff6U)];
      }
      else {
        local_1f8 = "Unknown Error";
      }
      lVar22 = FUN_0322c554(&local_1e8,"  [ERROR: INVALID KEY] {0,-16} : {} ({})",PTR_DAT_047d1c58,
                            &local_1f0,&local_98,&local_1f8);
      *(char **)(lVar22 + 0x38) =
           "D:/CI/Stable_Package_Build_nx64/Source/Common/Internal/Keycode/hkKeycodeManager.cpp";
      *(undefined8 *)(lVar22 + 0x40) = 0x71;
      FUN_0322cc24(&local_1e8);
    }
  }
  return iVar26;
}


