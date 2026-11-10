/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0340c8e0; name: FUN_0340c8e0
 */


undefined8 FUN_0340c8e0(long param_1,int *param_2,long *param_3,int *param_4,uint param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  undefined1 uStack_f1;
  long alStack_f0 [6];
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  long *local_98;
  ulong local_90;
  undefined8 local_88;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_78 = *(long *)(param_1 + 0x18);
  local_a8 = *(long *)(local_78 + 0x40) + (ulong)*(byte *)((long)param_2 + 0x25) * 0x20;
  iVar24 = param_2[8];
  local_88 = (long)iVar24;
  local_80 = param_3;
  local_70 = param_1;
  bVar7 = *(byte *)(local_a8 + 0x1a);
  uVar31 = (ulong)bVar7;
  iVar25 = *(int *)(local_78 + (long)*(int *)(param_1 + 0x3c) * 4);
  uVar12 = (uint)bVar7;
  if (*param_2 < 2) {
    iVar25 = iVar25 >> 1;
    iVar28 = param_2[7];
    if (iVar25 <= param_2[7]) {
      iVar28 = iVar25;
    }
    if ((0 < iVar28 - param_2[6]) && (0 < (int)param_5)) {
      uVar32 = 0;
      if (iVar24 != 0) {
        uVar32 = (iVar28 - param_2[6]) / iVar24;
      }
      uVar33 = (ulong)uVar32;
      iVar25 = bVar7 - 1;
      uVar26 = 0;
      uVar16 = (ulong)param_5;
      local_c0 = CONCAT44(local_c0._4_4_,iVar25);
      plVar19 = param_3;
      do {
        if (*param_4 != 0) {
          param_3[(int)uVar26] = *plVar19;
          uVar26 = (ulong)((int)uVar26 + 1);
        }
        uVar16 = uVar16 - 1;
        plVar19 = plVar19 + 1;
        param_4 = param_4 + 1;
      } while (uVar16 != 0);
      iVar24 = (int)uVar26;
      if (iVar24 != 0) {
        lVar20 = -((-(uVar26 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3) + 0xf & 0xfffffffffffffff0
                  );
        plVar19 = (long *)((long)alStack_f0 + lVar20);
        iVar28 = 0;
        uVar30 = (uint)bVar7;
        if (bVar7 != 0) {
          iVar28 = (int)(uVar32 + iVar25) / (int)uVar30;
        }
        iVar28 = iVar28 * uVar30;
        lVar17 = (long)plVar19 - ((long)(iVar28 * iVar24) + 0xfU & 0xfffffffffffffff0);
        *plVar19 = lVar17;
        if ((1 < iVar24) &&
           (*(long *)((long)alStack_f0 + lVar20 + 8) = lVar17 + iVar28, iVar24 != 2)) {
          lVar15 = (long)iVar28;
          *(long *)((long)alStack_f0 + lVar20 + 0x10) = lVar17 + lVar15 * 2;
          if (iVar24 != 3) {
            if (iVar24 == 4) {
              lVar20 = 3;
            }
            else {
              lVar20 = 0;
              uVar16 = 0;
              do {
                uVar21 = uVar16;
                plVar19[uVar21 + 3] = *plVar19 + lVar15 * 3 + lVar20;
                lVar17 = *plVar19 + lVar15 * 4 + lVar20;
                lVar20 = lVar20 + lVar15 * 2;
                plVar19[uVar21 + 4] = lVar17;
                uVar16 = uVar21 + 2;
              } while ((uVar26 - 3 & 0xfffffffffffffffe) != uVar21 + 2);
              lVar20 = uVar21 + 5;
            }
            if ((uVar26 - 3 & 1) != 0) {
              plVar19[lVar20] = *plVar19 + lVar20 * lVar15;
            }
          }
        }
        uVar14 = (uint)*(byte *)((long)param_2 + 0x26);
        if (*(byte *)((long)param_2 + 0x26) != 0) {
          local_a0 = (ulong)(int)uVar32;
          local_b0 = uVar31 - 1;
          alStack_f0[5] = local_b0 & 3;
          alStack_f0[2] = uVar31 - 2;
          uVar32 = 0;
          alStack_f0[1] = uVar31 & 3;
          local_b8 = uVar31 & 0xfe;
          alStack_f0[3] = uVar33;
          alStack_f0[4] = uVar26;
          local_98 = plVar19;
          local_90 = uVar26;
          do {
            if (0 < (int)uVar33) {
              uVar16 = 0;
              do {
                uVar14 = (uint)uVar16;
                iVar25 = (int)uVar26;
                iVar24 = (int)uVar33;
                if (uVar32 == 0) {
                  lVar20 = *local_98;
                  *(undefined1 *)(lVar20 + (int)(uVar14 + (uint)local_c0)) = 1;
                  if (1 < uVar12) {
                    uVar21 = alStack_f0[2];
                    if (alStack_f0[5] != 0) {
                      uVar22 = alStack_f0[5];
                      do {
                        pcVar3 = (char *)(lVar20 + (int)uVar14 + uVar21);
                        uVar21 = uVar21 - 1;
                        uVar22 = uVar22 - 1;
                        *pcVar3 = (char)param_2[9] * pcVar3[1];
                      } while (uVar22 != 0);
                    }
                    if (2 < (ulong)alStack_f0[2]) {
                      lVar17 = uVar21 + 1;
                      do {
                        pcVar3 = (char *)(lVar20 + (int)uVar14 + -1 + lVar17);
                        lVar17 = lVar17 + -4;
                        cVar10 = (char)param_2[9] * pcVar3[1];
                        *pcVar3 = cVar10;
                        cVar10 = (char)param_2[9] * cVar10;
                        pcVar3[-1] = cVar10;
                        cVar10 = (char)param_2[9] * cVar10;
                        pcVar3[-2] = cVar10;
                        pcVar3[-3] = (char)param_2[9] * cVar10;
                      } while (0 < lVar17);
                    }
                  }
                  if (1 < iVar25) {
                    uVar21 = uVar26 & 0xffffffff;
                    if (uVar12 != 0) {
                      lVar17 = (long)(int)uVar14;
                      uVar21 = 1;
                      do {
                        lVar15 = local_98[uVar21];
                        uVar22 = uVar31;
                        if (alStack_f0[1] != 0) {
                          uVar23 = alStack_f0[1];
                          do {
                            uVar23 = uVar23 - 1;
                            *(undefined1 *)(lVar15 + lVar17 + -1 + uVar22) =
                                 *(undefined1 *)(lVar20 + lVar17 + -1 + uVar22);
                            uVar22 = uVar22 - 1;
                          } while (uVar23 != 0);
                        }
                        if (2 < local_b0) {
                          do {
                            puVar4 = (undefined1 *)(lVar20 + lVar17 + -4 + uVar22);
                            puVar5 = (undefined1 *)(lVar15 + lVar17 + -2 + uVar22);
                            uVar23 = uVar22 - 4;
                            puVar5[1] = puVar4[3];
                            *puVar5 = puVar4[2];
                            puVar5[-1] = puVar4[1];
                            puVar5[-2] = *puVar4;
                            bVar1 = 3 < (long)uVar22;
                            uVar22 = uVar23;
                          } while (uVar23 != 0 && bVar1);
                        }
                        uVar21 = uVar21 + 1;
                        lVar20 = lVar15;
                      } while (uVar21 != local_90);
                      goto LAB_0340d094;
                    }
LAB_0340d140:
                    do {
                      lVar20 = local_70;
                      FUN_03407b60(local_a8,local_70);
                      if (*(int *)(lVar20 + 0xc) < 0) {
                        return 0;
                      }
                      uVar13 = (int)uVar21 - 1;
                      uVar21 = (ulong)uVar13;
                    } while (uVar13 != 0);
                    goto LAB_0340ce5c;
                  }
LAB_0340d094:
                  if (0 < iVar25) {
                    uVar21 = uVar26 & 0xffffffff;
                    if (uVar30 != 0) {
                      uVar21 = 0;
                      do {
                        lVar20 = local_70;
                        uVar13 = FUN_03407b60(local_a8,local_70);
                        if (*(int *)(lVar20 + 0xc) < 0) {
                          return 0;
                        }
                        lVar20 = local_98[uVar21];
                        uVar22 = 0;
                        if (local_b0 != 0) {
                          uVar22 = 0;
                          do {
                            pbVar6 = (byte *)(lVar20 + (int)uVar14 + uVar22);
                            uVar22 = uVar22 + 2;
                            bVar8 = *pbVar6;
                            uVar18 = 0;
                            if (bVar8 != 0) {
                              uVar18 = uVar13 / bVar8;
                            }
                            *pbVar6 = (byte)uVar18;
                            uVar13 = uVar13 - (uVar18 & 0xff) * (uint)bVar8;
                            bVar8 = pbVar6[1];
                            uVar18 = 0;
                            if (bVar8 != 0) {
                              uVar18 = uVar13 / bVar8;
                            }
                            pbVar6[1] = (byte)uVar18;
                            uVar13 = uVar13 - (uVar18 & 0xff) * (uint)bVar8;
                          } while (local_b8 != uVar22);
                        }
                        if ((bVar7 & 1) != 0) {
                          lVar17 = uVar22 + (long)(int)uVar14;
                          uVar11 = 0;
                          uVar18 = (uint)*(byte *)(lVar20 + lVar17);
                          if (uVar18 != 0) {
                            uVar11 = (undefined1)(uVar13 / uVar18);
                          }
                          *(undefined1 *)(lVar20 + lVar17) = uVar11;
                        }
                        uVar21 = uVar21 + 1;
                      } while (uVar21 != local_90);
                      goto LAB_0340ce5c;
                    }
                    goto LAB_0340d140;
                  }
                  if ((uVar30 != 0) && ((int)uVar14 < iVar24)) goto LAB_0340d170;
                }
                else {
LAB_0340ce5c:
                  if ((uVar12 != 0) && ((int)uVar14 < iVar24)) {
                    if (iVar25 < 1) {
LAB_0340d170:
                      uVar13 = iVar24 + ~uVar14;
                      if ((uint)local_c0 <= iVar24 + ~uVar14) {
                        uVar13 = (uint)local_c0;
                      }
                      uVar16 = (ulong)(uVar14 + uVar13 + 1);
                    }
                    else {
                      uVar13 = 0;
                      uVar16 = (ulong)(int)uVar14;
                      do {
                        lVar20 = uVar16 * local_88;
                        plVar19 = local_80;
                        uVar26 = local_90;
                        plVar29 = local_98;
                        do {
                          if ((1 << (ulong)(uVar32 & 0x1f) &
                              (uint)*(byte *)(*(long *)(param_2 + 2) +
                                             (ulong)*(byte *)(*plVar29 + uVar16))) != 0) {
                            puVar2 = (undefined8 *)
                                     (*(long *)(local_78 + 0x40) +
                                     (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                     (ulong)*(byte *)(*plVar29 + uVar16) * 8 +
                                                     (ulong)uVar32) * 0x20);
                            Hint_Prefetch(*puVar2,0,0,0);
                            local_68 = *plVar19 + (lVar20 + param_2[6]) * 4;
                            (**(code **)(puVar2[2] + 0x48))(puVar2,&local_68,0,local_70,local_88);
                          }
                          uVar26 = uVar26 - 1;
                          plVar19 = plVar19 + 1;
                          plVar29 = plVar29 + 1;
                        } while (uVar26 != 0);
                        uVar16 = uVar16 + 1;
                      } while (((long)uVar16 < (long)local_a0) &&
                              (uVar13 = uVar13 + 1, uVar13 < uVar12));
                      uVar26 = alStack_f0[4];
                      uVar33 = alStack_f0[3];
                    }
                  }
                }
              } while ((int)uVar16 < (int)uVar33);
              uVar14 = (uint)*(byte *)((long)param_2 + 0x26);
            }
            uVar32 = uVar32 + 1;
          } while (uVar32 < uVar14);
        }
      }
    }
  }
  else {
    iVar28 = param_2[6];
    iVar25 = (int)(iVar25 * param_5) >> 1;
    iVar27 = param_2[7];
    if (iVar25 <= param_2[7]) {
      iVar27 = iVar25;
    }
    if (0 < iVar27 - iVar28) {
      uVar32 = 0;
      if (iVar24 != 0) {
        uVar32 = (iVar27 - iVar28) / iVar24;
      }
      uVar16 = (ulong)uVar32;
      local_b0 = CONCAT44(local_b0._4_4_,uVar12 - 1);
      iVar25 = 0;
      if (uVar12 != 0) {
        iVar25 = (int)(uVar32 + (uVar12 - 1)) / (int)uVar12;
      }
      lVar20 = -((long)(int)(iVar25 * uVar12) + 0xfU & 0xfffffffffffffff0);
      local_90 = (long)alStack_f0 + lVar20;
      if (iVar28 < 0) {
        iVar28 = iVar28 + 1;
      }
      if (param_4[1] != 0 || *param_4 != 0) {
        iVar25 = iVar24;
        if (iVar24 < 0) {
          iVar25 = iVar24 + 1;
        }
        if (*(char *)((long)param_2 + 0x26) != '\0') {
          local_98 = (long *)CONCAT44(local_98._4_4_,iVar28 >> 1);
          local_a0 = uVar31 - 2;
          alStack_f0[3] = uVar31 - 1;
          alStack_f0[4] = alStack_f0[3] & 3;
          local_b8 = uVar31 & 0xfe;
          iVar25 = iVar25 >> 1;
          alStack_f0[2] = (long)alStack_f0 + lVar20 + -1;
          local_88._4_4_ = iVar24 >> 0x1f;
          local_88 = (ulong)local_88._4_4_ << 0x20;
          alStack_f0[5] = uVar16;
          do {
            iVar24 = (int)uVar16;
            if (0 < iVar24) {
              uVar12 = (uint)local_88 & 0x1f;
              uVar31 = 0;
              uVar30 = (uint)bVar7;
              if ((uint)local_88 == 0) {
                do {
                  iVar28 = (int)uVar31;
                  *(undefined1 *)(local_90 + (long)(iVar28 + (int)local_b0)) = 1;
                  if (1 < uVar30) {
                    cVar10 = (char)param_2[9];
                    uVar26 = local_a0;
                    if (alStack_f0[4] != 0) {
                      uVar33 = alStack_f0[4];
                      do {
                        pcVar3 = (char *)(local_90 + (long)iVar28 + uVar26);
                        uVar26 = uVar26 - 1;
                        uVar33 = uVar33 - 1;
                        *pcVar3 = pcVar3[1] * cVar10;
                      } while (uVar33 != 0);
                    }
                    if (2 < local_a0) {
                      lVar20 = uVar26 + 1;
                      do {
                        pcVar3 = (char *)(alStack_f0[2] + iVar28 + lVar20);
                        lVar20 = lVar20 + -4;
                        *pcVar3 = pcVar3[1] * cVar10;
                        cVar9 = pcVar3[1] * cVar10 * cVar10;
                        pcVar3[-1] = cVar9;
                        cVar9 = cVar9 * cVar10;
                        pcVar3[-2] = cVar9;
                        pcVar3[-3] = cVar9 * cVar10;
                      } while (0 < lVar20);
                    }
                  }
                  uVar12 = FUN_03407b60(local_a8,local_70);
                  if (uVar30 != 0) {
                    uVar26 = 0;
                    if (alStack_f0[3] != 0) {
                      uVar26 = 0;
                      do {
                        pbVar6 = (byte *)(local_90 + (long)iVar28 + uVar26);
                        uVar26 = uVar26 + 2;
                        bVar8 = *pbVar6;
                        uVar14 = 0;
                        if (bVar8 != 0) {
                          uVar14 = uVar12 / bVar8;
                        }
                        *pbVar6 = (byte)uVar14;
                        uVar12 = uVar12 - (uVar14 & 0xff) * (uint)bVar8;
                        bVar8 = pbVar6[1];
                        uVar14 = 0;
                        if (bVar8 != 0) {
                          uVar14 = uVar12 / bVar8;
                        }
                        pbVar6[1] = (byte)uVar14;
                        uVar12 = uVar12 - (uVar14 & 0xff) * (uint)bVar8;
                      } while (local_b8 != uVar26);
                    }
                    if ((bVar7 & 1) != 0) {
                      lVar20 = uVar26 + (long)iVar28;
                      uVar11 = 0;
                      uVar14 = (uint)*(byte *)(local_90 + lVar20);
                      if (uVar14 != 0) {
                        uVar11 = (undefined1)(uVar12 / uVar14);
                      }
                      *(undefined1 *)(local_90 + lVar20) = uVar11;
                    }
                  }
                  if ((uVar30 != 0) && (iVar28 < iVar24)) {
                    iVar27 = (int)local_98 + iVar25 * iVar28;
                    lVar20 = local_90 + (long)iVar28;
                    lVar17 = 0;
                    local_c0 = uVar31;
                    do {
                      uVar31 = (ulong)*(byte *)(lVar20 + lVar17);
                      if ((*(byte *)(*(long *)(param_2 + 2) + uVar31) & 1) != 0) {
                        lVar15 = *(long *)(local_78 + 0x40) +
                                 (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar31 * 8) * 0x20;
                        (**(code **)(*(long *)(lVar15 + 0x10) + 0x48))
                                  (lVar15,local_80,iVar27,local_70,iVar25);
                      }
                      lVar15 = (long)iVar28 + 1 + lVar17;
                      lVar17 = lVar17 + 1;
                    } while ((lVar15 < (int)uVar32) &&
                            (iVar27 = iVar27 + iVar25, (uint)lVar17 < uVar30));
                    uVar31 = (ulong)((int)local_c0 + (uint)lVar17);
                  }
                } while ((int)uVar31 < iVar24);
              }
              else {
                do {
                  if ((uVar30 != 0) && (iVar24 = (int)uVar31, iVar24 < (int)uVar16)) {
                    iVar28 = (int)local_98 + iVar25 * iVar24;
                    lVar20 = local_90 + (long)iVar24;
                    lVar17 = 0;
                    do {
                      uVar31 = (ulong)*(byte *)(lVar20 + lVar17);
                      if ((1 << (ulong)uVar12 & (uint)*(byte *)(*(long *)(param_2 + 2) + uVar31)) !=
                          0) {
                        lVar15 = *(long *)(local_78 + 0x40) +
                                 (ulong)*(byte *)(*(long *)(param_2 + 4) +
                                                 uVar31 * 8 + (local_88 & 0xffffffff)) * 0x20;
                        (**(code **)(*(long *)(lVar15 + 0x10) + 0x48))
                                  (lVar15,local_80,iVar28,local_70,iVar25);
                      }
                      lVar15 = (long)iVar24 + 1 + lVar17;
                      lVar17 = lVar17 + 1;
                    } while ((lVar15 < (int)uVar32) &&
                            (iVar28 = iVar28 + iVar25, (uint)lVar17 < uVar30));
                    uVar31 = (ulong)(iVar24 + (uint)lVar17);
                    uVar16 = alStack_f0[5];
                  }
                } while ((int)uVar31 < (int)uVar16);
              }
            }
            uVar12 = (uint)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,uVar12);
          } while (uVar12 < *(byte *)((long)param_2 + 0x26));
        }
      }
    }
  }
  return 0;
}


