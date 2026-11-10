/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350834c; name: FUN_0350834c
 */


void FUN_0350834c(long *param_1,long *param_2,long param_3)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_90 [2];
  long *local_88 [2];
  uint local_78 [2];
  long *local_70;
  undefined8 *local_68;
  
  if ((int)param_1[1] != 0) {
    if ((*(short *)((long)param_1 + 0x2c) == 0) && (*(short *)(param_3 + 400) == 0)) {
      if (*(char *)((long)param_1 + 0x26) == '\0') {
        plVar12 = (long *)*param_2;
        uVar11 = *(uint *)(plVar12 + 1);
        if (uVar11 != 0) {
          uVar22 = 0;
          while( true ) {
            lVar23 = *plVar12;
            lVar13 = *(long *)(lVar23 + uVar22 * 0x30 + 0x18);
            fVar24 = *(float *)(lVar13 + 0x58);
            fVar25 = *(float *)(lVar13 + 0x5c);
            bVar6 = false;
            if ((fVar24 == 1.0) && (bVar6 = false, !NAN(fVar25))) {
              bVar6 = fVar25 == 1.0;
            }
            if (!bVar6) {
              plVar12 = (long *)(lVar23 + uVar22 * 0x30);
              bVar4 = *(byte *)(plVar12 + 1);
              uVar14 = (ulong)bVar4;
              uVar5 = *(ushort *)((long)plVar12 + 0x12);
              uVar18 = (ulong)uVar5;
              if (fVar25 == fVar24) {
                bVar6 = true;
                if ((bVar4 != 0) && (bVar6 = false, !NAN(fVar24))) {
                  bVar6 = fVar24 == 1.0;
                }
                if (!bVar6) {
                  puVar1 = (ushort *)(lVar23 + uVar22 * 0x30 + 0x10);
                  if (uVar5 < 4) {
                    uVar20 = uVar18 * 4 - 1;
                    uVar2 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
                    uVar19 = 0;
                    do {
                      pfVar10 = (float *)(*plVar12 + uVar19 * *puVar1 * 4);
                      pfVar21 = pfVar10 + uVar18;
                      if (pfVar10 < pfVar21) {
                        if ((uVar2 & 7) != 0) {
                          pfVar9 = pfVar10;
                          lVar13 = -((ulong)uVar2 & 7);
                          do {
                            bVar6 = lVar13 != -1;
                            lVar13 = lVar13 + 1;
                            pfVar10 = pfVar9 + 1;
                            *pfVar9 = *pfVar9 * fVar24;
                            pfVar9 = pfVar10;
                          } while (bVar6);
                        }
                        if (0x1b < uVar20) {
                          do {
                            pfVar10[1] = pfVar10[1] * fVar24;
                            *pfVar10 = *pfVar10 * fVar24;
                            pfVar10[3] = pfVar10[3] * fVar24;
                            pfVar10[2] = pfVar10[2] * fVar24;
                            pfVar10[5] = pfVar10[5] * fVar24;
                            pfVar10[4] = pfVar10[4] * fVar24;
                            pfVar10[7] = pfVar10[7] * fVar24;
                            pfVar10[6] = pfVar10[6] * fVar24;
                            pfVar10 = pfVar10 + 8;
                          } while (pfVar10 < pfVar21);
                        }
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != uVar14);
                  }
                  else if ((int)(uVar18 & 0xfffc) == 0) {
                    uVar20 = uVar18 * 4 - 1;
                    uVar2 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
                    uVar19 = 0;
                    do {
                      pfVar10 = (float *)(*plVar12 + uVar19 * *puVar1 * 4);
                      pfVar21 = pfVar10 + uVar18;
                      if (pfVar10 < pfVar21) {
                        if ((uVar2 & 7) != 0) {
                          pfVar9 = pfVar10;
                          lVar13 = -((ulong)uVar2 & 7);
                          do {
                            bVar6 = lVar13 != -1;
                            lVar13 = lVar13 + 1;
                            pfVar10 = pfVar9 + 1;
                            *pfVar9 = *pfVar9 * fVar24;
                            pfVar9 = pfVar10;
                          } while (bVar6);
                        }
                        if (0x1b < uVar20) {
                          do {
                            *pfVar10 = *pfVar10 * fVar24;
                            pfVar10[1] = pfVar10[1] * fVar24;
                            pfVar10[2] = pfVar10[2] * fVar24;
                            pfVar10[3] = pfVar10[3] * fVar24;
                            pfVar10[4] = pfVar10[4] * fVar24;
                            pfVar10[5] = pfVar10[5] * fVar24;
                            pfVar10[6] = pfVar10[6] * fVar24;
                            pfVar10[7] = pfVar10[7] * fVar24;
                            pfVar10 = pfVar10 + 8;
                          } while (pfVar10 < pfVar21);
                        }
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != uVar14);
                  }
                  else {
                    uVar19 = 0;
                    do {
                      pfVar10 = (float *)(*plVar12 + uVar19 * *puVar1 * 4);
                      pfVar21 = pfVar10;
                      do {
                        pfVar9 = pfVar21 + 4;
                        *(ulong *)(pfVar21 + 2) =
                             CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar24,
                                      (float)*(undefined8 *)(pfVar21 + 2) * fVar24);
                        *(ulong *)pfVar21 =
                             CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar24,
                                      (float)*(undefined8 *)pfVar21 * fVar24);
                        pfVar21 = pfVar9;
                      } while (pfVar9 < pfVar10 + (uVar18 & 0xfffc));
                      for (; pfVar9 < pfVar10 + uVar18; pfVar9 = pfVar9 + 1) {
                        *pfVar9 = *pfVar9 * fVar24;
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != uVar14);
                  }
                }
              }
              else if (bVar4 != 0) {
                fVar26 = (fVar25 - fVar24) / (float)uVar18;
                puVar1 = (ushort *)(lVar23 + uVar22 * 0x30 + 0x10);
                if (uVar5 < 4) {
                  uVar20 = uVar18 * 4 - 1;
                  uVar2 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
                  uVar19 = 0;
                  do {
                    pfVar10 = (float *)(*plVar12 + uVar19 * *puVar1 * 4);
                    pfVar21 = pfVar10 + uVar18;
                    if (pfVar10 < pfVar21) {
                      fVar25 = fVar24;
                      if ((uVar2 & 3) != 0) {
                        pfVar9 = pfVar10;
                        lVar13 = -((ulong)uVar2 & 3);
                        do {
                          fVar28 = *pfVar9 * fVar25;
                          fVar25 = fVar25 + fVar26;
                          pfVar10 = pfVar9 + 1;
                          *pfVar9 = fVar28;
                          bVar6 = lVar13 != -1;
                          lVar13 = lVar13 + 1;
                          pfVar9 = pfVar10;
                        } while (bVar6);
                      }
                      if (0xb < uVar20) {
                        do {
                          fVar28 = fVar25 + fVar26 + fVar26;
                          *pfVar10 = *pfVar10 * fVar25;
                          pfVar10[1] = pfVar10[1] * (fVar25 + fVar26);
                          fVar27 = fVar28 + fVar26;
                          fVar25 = fVar27 + fVar26;
                          pfVar10[2] = pfVar10[2] * fVar28;
                          pfVar10[3] = pfVar10[3] * fVar27;
                          pfVar10 = pfVar10 + 4;
                        } while (pfVar10 < pfVar21);
                      }
                    }
                    uVar19 = uVar19 + 1;
                  } while (uVar19 != uVar14);
                }
                else {
                  uVar19 = uVar18 & 0xfffc;
                  if ((int)uVar19 == 0) {
                    uVar20 = uVar18 * 4 - 1;
                    uVar2 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
                    uVar19 = 0;
                    do {
                      pfVar10 = (float *)(*plVar12 + uVar19 * *puVar1 * 4);
                      pfVar21 = pfVar10 + uVar18;
                      if (pfVar10 < pfVar21) {
                        fVar25 = fVar24;
                        if ((uVar2 & 3) != 0) {
                          pfVar9 = pfVar10;
                          lVar13 = -((ulong)uVar2 & 3);
                          do {
                            fVar28 = *pfVar9 * fVar25;
                            fVar25 = fVar25 + fVar26;
                            pfVar10 = pfVar9 + 1;
                            *pfVar9 = fVar28;
                            bVar6 = lVar13 != -1;
                            lVar13 = lVar13 + 1;
                            pfVar9 = pfVar10;
                          } while (bVar6);
                        }
                        if (0xb < uVar20) {
                          do {
                            fVar28 = fVar25 + fVar26 + fVar26;
                            *pfVar10 = *pfVar10 * fVar25;
                            pfVar10[1] = pfVar10[1] * (fVar25 + fVar26);
                            fVar27 = fVar28 + fVar26;
                            fVar25 = fVar27 + fVar26;
                            pfVar10[2] = pfVar10[2] * fVar28;
                            pfVar10[3] = pfVar10[3] * fVar27;
                            pfVar10 = pfVar10 + 4;
                          } while (pfVar10 < pfVar21);
                        }
                      }
                      uVar19 = uVar19 + 1;
                    } while (uVar19 != uVar14);
                  }
                  else {
                    fVar28 = (fVar25 - fVar24) / (float)uVar19;
                    fVar25 = fVar28 * 4.0;
                    fVar27 = fVar28 + fVar24 + fVar28;
                    uVar20 = 0;
                    do {
                      pfVar10 = (float *)(*plVar12 + uVar20 * *puVar1 * 4);
                      pfVar21 = pfVar10;
                      fVar31 = fVar27;
                      fVar32 = fVar27 + fVar28;
                      fVar29 = fVar24;
                      fVar30 = fVar28 + fVar24;
                      do {
                        fVar33 = (float)*(undefined8 *)pfVar21 * fVar29;
                        fVar34 = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar30;
                        fVar35 = (float)*(undefined8 *)(pfVar21 + 2) * fVar31;
                        fVar36 = (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar32;
                        fVar29 = fVar29 + fVar25;
                        fVar30 = fVar30 + fVar25;
                        fVar31 = fVar31 + fVar25;
                        fVar32 = fVar32 + fVar25;
                        pfVar9 = pfVar21 + 4;
                        *(ulong *)(pfVar21 + 2) = CONCAT44(fVar36,fVar35);
                        *(ulong *)pfVar21 = CONCAT44(fVar34,fVar33);
                        pfVar21 = pfVar9;
                      } while (pfVar9 < pfVar10 + uVar19);
                      if (pfVar9 < pfVar10 + uVar18) {
                        fVar31 = fVar24;
                        do {
                          fVar32 = *pfVar9 * fVar31;
                          fVar31 = fVar31 + fVar26;
                          pfVar21 = pfVar9 + 1;
                          *pfVar9 = fVar32;
                          pfVar9 = pfVar21;
                        } while (pfVar21 < pfVar10 + uVar18);
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar20 != uVar14);
                  }
                }
              }
              *(undefined8 *)(*(long *)(*(long *)*param_2 + uVar22 * 0x30 + 0x18) + 0x58) =
                   0x3f8000003f800000;
            }
            uVar22 = uVar22 + 1;
            if (uVar22 == uVar11) break;
            plVar12 = (long *)*param_2;
          }
        }
      }
      if (*(char *)((long)param_1 + 0x24) == '\0') {
        uVar11 = *(uint *)(param_1 + 1);
        if (*(char *)((long)param_1 + 0x27) == '\0') {
          if (uVar11 != 0) {
            uVar22 = 0;
            do {
              plVar12 = (long *)(*(long *)*param_2 + uVar22 * 0x30 + 0x18);
              lVar13 = *(long *)(*param_1 + uVar22 * 8);
              if (*(long *)*plVar12 == *(long *)(lVar13 + 0x60)) {
                plVar7 = *(long **)(lVar13 + 0x68);
                (**(code **)(*plVar7 + 0x40))
                          (plVar7,*(long *)*param_2 + uVar22 * 0x30,0,param_1[2] + uVar22 * 0x30);
                lVar13 = *(long *)(param_1[2] + uVar22 * 0x30 + 0x18);
                lVar23 = *plVar12;
                memcpy((void *)(lVar13 + 8),(void *)(lVar23 + 8),0x50);
                *(undefined8 *)(lVar13 + 0x58) = *(undefined8 *)(lVar23 + 0x58);
                *(undefined4 *)(lVar13 + 0x70) = 0;
                uVar11 = *(uint *)(lVar23 + 0x70);
                if (*(uint *)(lVar13 + 0x74) < uVar11) {
                  uVar2 = *(uint *)(lVar13 + 0x74) + uVar11;
                  lVar8 = (**(code **)(**(long **)(lVar13 + 0x60) + 0x28))
                                    (*(long **)(lVar13 + 0x60),*(undefined8 *)(lVar13 + 0x68),
                                     (ulong)uVar2 * 0x18,
                                     "../../../../include\\AK/SoundEngine/Common/IAkPluginMemAlloc.h"
                                     ,0xce);
                  if (lVar8 != 0) {
                    *(long *)(lVar13 + 0x68) = lVar8;
                    *(uint *)(lVar13 + 0x74) = uVar2;
                    goto LAB_03508b7c;
                  }
                }
                else {
LAB_03508b7c:
                  *(uint *)(lVar13 + 0x70) = uVar11;
                  if (*(int *)(lVar23 + 0x70) != 0) {
                    lVar8 = 0;
                    uVar14 = 0;
                    do {
                      puVar16 = (undefined8 *)(*(long *)(lVar23 + 0x68) + lVar8);
                      uVar17 = puVar16[1];
                      uVar15 = puVar16[2];
                      puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x68) + lVar8);
                      lVar8 = lVar8 + 0x18;
                      *puVar3 = *puVar16;
                      puVar3[1] = uVar17;
                      puVar3[2] = uVar15;
                      uVar14 = uVar14 + 1;
                    } while (uVar14 < *(uint *)(lVar23 + 0x70));
                  }
                }
                *(undefined4 *)(lVar13 + 0x78) = *(undefined4 *)(lVar23 + 0x78);
                uVar17 = *(undefined8 *)(lVar23 + 0x88);
                if ((*(long *)(lVar13 + 0x88) != 0) && (*(char *)(lVar13 + 0x90) != '\0')) {
                  (**(code **)(**(long **)(lVar13 + 0x80) + 0x18))();
                  *(undefined1 *)(lVar13 + 0x90) = 0;
                }
                *(undefined8 *)(lVar13 + 0x88) = uVar17;
                *(undefined8 *)(lVar13 + 0x80) = *(undefined8 *)(lVar23 + 0x80);
                uVar11 = *(uint *)(param_1 + 1);
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < uVar11);
          }
          *param_2 = (long)(param_1 + 2);
        }
        else if (uVar11 != 0) {
          lVar13 = 0;
          uVar22 = 0;
          do {
            plVar12 = *(long **)(*(long *)(*param_1 + uVar22 * 8) + 0x68);
            (**(code **)(*plVar12 + 0x40))(plVar12,*(long *)*param_2 + lVar13);
            uVar22 = uVar22 + 1;
            lVar13 = lVar13 + 0x30;
          } while (uVar22 < *(uint *)(param_1 + 1));
        }
      }
      else {
        plVar12 = (long *)*param_2;
        uVar11 = *(uint *)(plVar12 + 1);
        uVar22 = (ulong)uVar11 * 8 + 0xf & 0xffffffff0;
        lVar13 = -uVar22;
        local_70 = (long *)((long)local_90 + lVar13);
        puVar16 = (undefined8 *)((long)local_70 - uVar22);
        local_78[0] = uVar11;
        local_68 = puVar16;
        if (uVar11 != 0) {
          *local_70 = *plVar12;
          *puVar16 = *(undefined8 *)(*plVar12 + 0x18);
          if (uVar11 != 1) {
            *(long *)((long)local_88 + lVar13) = *plVar12 + 0x30;
            local_68[1] = *(undefined8 *)(*(long *)*param_2 + 0x48);
            if (2 < local_78[0]) {
              uVar22 = 2;
              lVar13 = 0x78;
              do {
                local_70[uVar22] = *(long *)*param_2 + lVar13 + -0x18;
                local_68[uVar22] = *(undefined8 *)(*(long *)*param_2 + lVar13);
                uVar22 = uVar22 + 1;
                lVar13 = lVar13 + 0x30;
              } while (uVar22 < local_78[0]);
            }
          }
        }
        if (*(char *)((long)param_1 + 0x27) == '\0') {
          local_90[0] = *(uint *)(param_1 + 3);
          plVar12 = param_1 + 2;
          local_88[0] = (long *)0x0;
          local_88[1] = (undefined8 *)0x0;
          if (local_90[0] != 0) {
            uVar22 = (ulong)local_90[0] * 8 + 0xf & 0xffffffff0;
            local_88[0] = (long *)((long)puVar16 - uVar22);
            puVar16 = (undefined8 *)((long)local_88[0] - uVar22);
            lVar13 = *plVar12;
            uVar17 = *(undefined8 *)(lVar13 + 0x18);
            bVar6 = local_90[0] != 1;
            local_88[1] = puVar16;
            *local_88[0] = lVar13;
            *puVar16 = uVar17;
            if (bVar6) {
              puVar16[1] = *(undefined8 *)(lVar13 + 0x48);
              local_88[0][1] = *plVar12 + 0x30;
              if (2 < local_90[0]) {
                uVar22 = 2;
                lVar13 = 0x78;
                do {
                  local_88[1][uVar22] = *(undefined8 *)(*plVar12 + lVar13);
                  lVar23 = *plVar12 + lVar13;
                  lVar13 = lVar13 + 0x30;
                  local_88[0][uVar22] = lVar23 + -0x18;
                  uVar22 = uVar22 + 1;
                } while (uVar22 < local_90[0]);
              }
            }
          }
          (**(code **)(**(long **)(*(long *)*param_1 + 0x68) + 0x40))
                    (*(long **)(*(long *)*param_1 + 0x68),local_78,local_90);
          *param_2 = (long)plVar12;
        }
        else {
          (**(code **)(**(long **)(*(long *)*param_1 + 0x68) + 0x40))
                    (*(long **)(*(long *)*param_1 + 0x68),local_78);
        }
      }
    }
    else if ((*(short *)((long)param_1 + 0x2a) == 0) && (*(short *)(param_3 + 0x192) == 0)) {
      uVar22 = 0;
      do {
        (**(code **)(**(long **)(*(long *)(*param_1 + uVar22 * 8) + 0x68) + 0x18))();
        uVar22 = uVar22 + 1;
      } while (uVar22 < *(uint *)(param_1 + 1));
    }
    *(undefined2 *)((long)param_1 + 0x2a) = *(undefined2 *)((long)param_1 + 0x2c);
  }
  return;
}


