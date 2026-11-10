/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01056a08; name: FUN_01056a08
 */


void FUN_01056a08(undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
                 long param_6,int param_7)

{
  uint uVar1;
  ushort uVar2;
  undefined *__compar;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ushort *puVar16;
  uint uVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  char *local_88;
  
  fVar26 = param_1._8_4_;
  fVar24 = param_1._0_4_;
  fVar28 = *(float *)(param_6 + 0x28);
  fVar27 = param_3 * 0.5;
  fVar29 = (fVar24 - fVar27) / fVar28;
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  uVar22 = (uint)fVar29;
  uVar23 = (ulong)uVar22;
  fVar29 = (fVar24 + fVar27) / fVar28;
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  *(undefined8 *)(param_6 + 0x48) = *(undefined8 *)(param_6 + 0x40);
  puVar3 = PTR_DAT_047d5608;
  __compar = PTR_LAB_047d5600;
  uVar12 = (uint)fVar29;
  if (uVar22 <= uVar12) {
    fVar29 = -(fVar26 - fVar27) / fVar28;
    fVar28 = -(fVar26 + fVar27) / fVar28;
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    uVar9 = (uint)fVar28;
    uVar17 = (uint)fVar29;
    uVar1 = uVar9;
    if (uVar17 <= uVar9) {
      uVar1 = uVar17;
    }
    if (uVar17 <= uVar9) {
      uVar17 = uVar9;
    }
    lVar10 = *(long *)(param_6 + 400);
    if (uVar22 <= uVar12) {
      uVar22 = uVar12;
    }
    do {
      if (uVar23 < (ulong)((*(long *)(lVar10 + 0xa0) - *(long *)(lVar10 + 0x98) >> 3) *
                          0x6db6db6db6db6db7)) {
        uVar21 = (ulong)uVar1;
        do {
          plVar13 = (long *)(*(long *)(lVar10 + 0x98) + uVar23 * 0x38);
          lVar19 = *plVar13;
          if (((uVar21 < (ulong)((plVar13[1] - lVar19 >> 3) * 0x6db6db6db6db6db7)) &&
              (plVar14 = (long *)(lVar19 + uVar21 * 0x38), plVar13 = (long *)*plVar14,
              (long *)plVar14[1] != plVar13)) &&
             (*(long **)(*(long *)(*(long *)(lVar10 + 0x98) + uVar23 * 0x38) + uVar21 * 0x38 + 8) !=
              plVar13)) {
            do {
              if ((param_7 == 0) || (sVar7 = FUN_010573e4(plVar13), param_7 == sVar7)) {
                piVar11 = (int *)plVar13[1];
                fVar27 = 0.0;
                if (piVar11 != (int *)0x0) {
                  if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
                     (uVar15 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar15 == 0))
                  {
                    puVar8 = (uint *)0x0;
                  }
                  else {
                    puVar8 = (uint *)((long)piVar11 + uVar15);
                    puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                  }
                  local_88 = "position";
                  puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,(__compar_fn_t)__compar);
                  if (puVar8 == (uint *)0x0) {
LAB_0105734c:
                    fVar27 = 0.0;
                  }
                  else {
                    piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                    puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
                    if (*puVar16 < 7) {
                      piVar18 = (int *)0x0;
                    }
                    else {
                      piVar18 = (int *)0x0;
                      if ((ulong)puVar16[3] != 0) {
                        puVar8 = (uint *)((long)piVar11 + (ulong)puVar16[3]);
                        piVar18 = (int *)((long)puVar8 + (ulong)*puVar8);
                      }
                    }
                    fVar27 = 0.0;
                    if (4 < *(ushort *)((long)piVar18 - (long)*piVar18)) {
                      uVar15 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2];
                      fVar27 = 0.0;
                      if ((uVar15 != 0) &&
                         (fVar27 = 0.0, (int)*(char *)((long)piVar18 + uVar15) - 0xfU < 2)) {
                        lVar10 = *plVar13;
                        if ((*puVar16 < 0xb) || ((ulong)puVar16[5] == 0)) {
                          uVar15 = 0;
                        }
                        else {
                          uVar15 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar16[5]);
                        }
                        piVar18 = (int *)plVar13[2];
                        if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                           (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                           uVar20 == 0)) {
                          lVar19 = 0;
                        }
                        else {
                          puVar8 = (uint *)((long)piVar18 + uVar20);
                          lVar19 = (long)puVar8 + (ulong)*puVar8;
                        }
                        piVar11 = (int *)((long)((long)piVar11 + (ulong)puVar16[3]) +
                                         (ulong)*(uint *)((long)piVar11 + (ulong)puVar16[3]));
                        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 9) ||
                           (uVar20 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4],
                           uVar20 == 0)) {
                          uVar20 = 0xffffffff;
                        }
                        else {
                          uVar20 = (ulong)*(uint *)((long)piVar11 + uVar20);
                        }
                        puVar8 = (uint *)(lVar19 + uVar20 * 4 + 4);
                        piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
                           (uVar20 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3],
                           uVar20 == 0)) {
                          puVar8 = (uint *)0x0;
                        }
                        else {
                          puVar8 = (uint *)((long)piVar11 + uVar20);
                          puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                        }
                        local_88 = "y";
                        puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,
                                         (__compar_fn_t)__compar);
                        if (puVar8 == (uint *)0x0) goto LAB_0105734c;
                        piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                        puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
                        uVar2 = *puVar16;
                        if (uVar2 < 7) {
                          piVar18 = (int *)0x0;
                        }
                        else {
                          piVar18 = (int *)0x0;
                          if ((ulong)puVar16[3] != 0) {
                            puVar8 = (uint *)((long)piVar11 + (ulong)puVar16[3]);
                            piVar18 = (int *)((long)puVar8 + (ulong)*puVar8);
                          }
                        }
                        if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                           (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                           uVar20 == 0)) {
                          uVar20 = 0;
                        }
                        else {
                          uVar20 = (long)*(char *)((long)piVar18 + uVar20) & 0xffffffff;
                        }
                        if (*(long *)(puVar3 + uVar20 * 8) == 4) {
                          if ((uVar2 < 0xb) || ((ulong)puVar16[5] == 0)) {
                            uVar20 = 0;
                          }
                          else {
                            uVar20 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar16[5]);
                          }
                          fVar27 = *(float *)(lVar10 + uVar15 + uVar20);
                        }
                        else {
                          fVar27 = 0.0;
                          if (0xe < uVar2) {
                            fVar27 = 0.0;
                            if ((ulong)puVar16[7] != 0) {
                              fVar27 = (float)*(double *)((long)piVar11 + (ulong)puVar16[7]);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar27 = fVar27 - param_1._4_4_;
                bVar4 = false;
                bVar5 = true;
                bVar6 = false;
                if (fVar27 < param_5) {
                  bVar4 = false;
                  bVar5 = false;
                  bVar6 = true;
                  if (!NAN(fVar27) && !NAN(param_4)) {
                    bVar4 = fVar27 < param_4;
                    bVar5 = fVar27 == param_4;
                    bVar6 = false;
                  }
                }
                if (!bVar5 && bVar4 == bVar6) {
                  fVar27 = 0.0;
                  fVar28 = 0.0;
                  piVar11 = (int *)plVar13[1];
                  if (piVar11 != (int *)0x0) {
                    if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
                       (uVar15 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3], uVar15 == 0
                       )) {
                      puVar8 = (uint *)0x0;
                    }
                    else {
                      puVar8 = (uint *)((long)piVar11 + uVar15);
                      puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                    }
                    local_88 = "position";
                    puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,(__compar_fn_t)__compar);
                    if (puVar8 == (uint *)0x0) {
LAB_01057354:
                      fVar27 = 0.0;
                    }
                    else {
                      piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                      puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
                      if (*puVar16 < 7) {
                        piVar18 = (int *)0x0;
                      }
                      else {
                        piVar18 = (int *)0x0;
                        if ((ulong)puVar16[3] != 0) {
                          puVar8 = (uint *)((long)piVar11 + (ulong)puVar16[3]);
                          piVar18 = (int *)((long)puVar8 + (ulong)*puVar8);
                        }
                      }
                      fVar27 = 0.0;
                      if (4 < *(ushort *)((long)piVar18 - (long)*piVar18)) {
                        uVar15 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2];
                        fVar27 = 0.0;
                        if ((uVar15 != 0) &&
                           (fVar27 = 0.0, (int)*(char *)((long)piVar18 + uVar15) - 0xfU < 2)) {
                          lVar10 = *plVar13;
                          if ((*puVar16 < 0xb) || ((ulong)puVar16[5] == 0)) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar16[5]);
                          }
                          piVar18 = (int *)plVar13[2];
                          if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                             uVar20 == 0)) {
                            lVar19 = 0;
                          }
                          else {
                            puVar8 = (uint *)((long)piVar18 + uVar20);
                            lVar19 = (long)puVar8 + (ulong)*puVar8;
                          }
                          piVar11 = (int *)((long)((long)piVar11 + (ulong)puVar16[3]) +
                                           (ulong)*(uint *)((long)piVar11 + (ulong)puVar16[3]));
                          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 9) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4],
                             uVar20 == 0)) {
                            uVar20 = 0xffffffff;
                          }
                          else {
                            uVar20 = (ulong)*(uint *)((long)piVar11 + uVar20);
                          }
                          puVar8 = (uint *)(lVar19 + uVar20 * 4 + 4);
                          piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3],
                             uVar20 == 0)) {
                            puVar8 = (uint *)0x0;
                          }
                          else {
                            puVar8 = (uint *)((long)piVar11 + uVar20);
                            puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                          }
                          local_88 = "x";
                          puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,
                                           (__compar_fn_t)__compar);
                          if (puVar8 == (uint *)0x0) goto LAB_01057354;
                          piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                          puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
                          uVar2 = *puVar16;
                          if (uVar2 < 7) {
                            piVar18 = (int *)0x0;
                          }
                          else {
                            piVar18 = (int *)0x0;
                            if ((ulong)puVar16[3] != 0) {
                              puVar8 = (uint *)((long)piVar11 + (ulong)puVar16[3]);
                              piVar18 = (int *)((long)puVar8 + (ulong)*puVar8);
                            }
                          }
                          if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                             uVar20 == 0)) {
                            uVar20 = 0;
                          }
                          else {
                            uVar20 = (long)*(char *)((long)piVar18 + uVar20) & 0xffffffff;
                          }
                          if (*(long *)(puVar3 + uVar20 * 8) == 4) {
                            if ((uVar2 < 0xb) || ((ulong)puVar16[5] == 0)) {
                              uVar20 = 0;
                            }
                            else {
                              uVar20 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar16[5]);
                            }
                            fVar27 = *(float *)(lVar10 + uVar15 + uVar20);
                          }
                          else {
                            fVar27 = 0.0;
                            if (0xe < uVar2) {
                              fVar27 = 0.0;
                              if ((ulong)puVar16[7] != 0) {
                                fVar27 = (float)*(double *)((long)piVar11 + (ulong)puVar16[7]);
                              }
                            }
                          }
                        }
                      }
                    }
                    piVar11 = (int *)plVar13[1];
                    if (piVar11 == (int *)0x0) {
                      fVar28 = 0.0;
                    }
                    else {
                      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
                         (uVar15 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3],
                         uVar15 == 0)) {
                        puVar8 = (uint *)0x0;
                      }
                      else {
                        puVar8 = (uint *)((long)piVar11 + uVar15);
                        puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                      }
                      local_88 = "position";
                      puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,(__compar_fn_t)__compar
                                      );
                      if (puVar8 != (uint *)0x0) {
                        piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                        puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
                        if (*puVar16 < 7) {
                          piVar18 = (int *)0x0;
                        }
                        else {
                          piVar18 = (int *)0x0;
                          if ((ulong)puVar16[3] != 0) {
                            puVar8 = (uint *)((long)piVar11 + (ulong)puVar16[3]);
                            piVar18 = (int *)((long)puVar8 + (ulong)*puVar8);
                          }
                        }
                        if (((4 < *(ushort *)((long)piVar18 - (long)*piVar18)) &&
                            (uVar15 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                            uVar15 != 0)) && ((int)*(char *)((long)piVar18 + uVar15) - 0xfU < 2)) {
                          lVar10 = *plVar13;
                          if ((*puVar16 < 0xb) || ((ulong)puVar16[5] == 0)) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar16[5]);
                          }
                          piVar18 = (int *)plVar13[2];
                          if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                             uVar20 == 0)) {
                            lVar19 = 0;
                          }
                          else {
                            puVar8 = (uint *)((long)piVar18 + uVar20);
                            lVar19 = (long)puVar8 + (ulong)*puVar8;
                          }
                          piVar11 = (int *)((long)((long)piVar11 + (ulong)puVar16[3]) +
                                           (ulong)*(uint *)((long)piVar11 + (ulong)puVar16[3]));
                          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 9) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4],
                             uVar20 == 0)) {
                            uVar20 = 0xffffffff;
                          }
                          else {
                            uVar20 = (ulong)*(uint *)((long)piVar11 + uVar20);
                          }
                          puVar8 = (uint *)(lVar19 + uVar20 * 4 + 4);
                          piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 7) ||
                             (uVar20 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[3],
                             uVar20 == 0)) {
                            puVar8 = (uint *)0x0;
                          }
                          else {
                            puVar8 = (uint *)((long)piVar11 + uVar20);
                            puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                          }
                          local_88 = "z";
                          puVar8 = bsearch(&local_88,puVar8 + 1,(ulong)*puVar8,4,
                                           (__compar_fn_t)__compar);
                          if (puVar8 != (uint *)0x0) {
                            piVar11 = (int *)((long)puVar8 + (ulong)*puVar8);
                            puVar16 = (ushort *)((long)piVar11 - (long)*piVar11);
                            uVar2 = *puVar16;
                            if (uVar2 < 7) {
                              piVar18 = (int *)0x0;
                            }
                            else {
                              piVar18 = (int *)0x0;
                              if ((ulong)puVar16[3] != 0) {
                                puVar8 = (uint *)((long)piVar11 + (ulong)puVar16[3]);
                                piVar18 = (int *)((long)puVar8 + (ulong)*puVar8);
                              }
                            }
                            if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                               (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2],
                               uVar20 == 0)) {
                              uVar20 = 0;
                            }
                            else {
                              uVar20 = (long)*(char *)((long)piVar18 + uVar20) & 0xffffffff;
                            }
                            if (*(long *)(puVar3 + uVar20 * 8) == 4) {
                              if ((uVar2 < 0xb) || ((ulong)puVar16[5] == 0)) {
                                uVar20 = 0;
                              }
                              else {
                                uVar20 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar16[5]);
                              }
                              fVar28 = *(float *)(lVar10 + uVar15 + uVar20);
                            }
                            else {
                              if ((uVar2 < 0xf) || ((ulong)puVar16[7] == 0)) goto LAB_01057278;
                              fVar28 = (float)*(double *)((long)piVar11 + (ulong)puVar16[7]);
                            }
                            goto LAB_010571b0;
                          }
                        }
                      }
LAB_01057278:
                      fVar28 = 0.0;
                    }
                  }
LAB_010571b0:
                  fVar29 = 0.0 - param_1._12_4_;
                  fVar27 = (fVar27 - fVar24) * (fVar27 - fVar24);
                  fVar28 = (fVar28 - fVar26) * (fVar28 - fVar26);
                  fVar29 = fVar29 * fVar29;
                  auVar25._0_4_ = fVar27 + 0.0;
                  auVar25._4_4_ = fVar28 + fVar29;
                  auVar25._8_4_ = fVar27 + 0.0;
                  auVar25._12_4_ = fVar28 + fVar29;
                  auVar25 = NEON_ext(auVar25,auVar25,4,1);
                  fVar27 = auVar25._0_4_ + auVar25._4_4_;
                  bVar4 = true;
                  bVar5 = false;
                  if (param_2 * param_2 <= fVar27) {
                    bVar4 = false;
                    bVar5 = true;
                    if (!NAN(param_3 * param_3) && !NAN(fVar27)) {
                      bVar4 = param_3 * param_3 < fVar27;
                      bVar5 = false;
                    }
                  }
                  if (bVar4 == bVar5) {
                    FUN_00d5cc64((undefined8 *)(param_6 + 0x40),plVar13);
                  }
                }
              }
              lVar10 = *(long *)(param_6 + 400);
              plVar13 = plVar13 + 3;
            } while (plVar13 !=
                     *(long **)(*(long *)(*(long *)(lVar10 + 0x98) + uVar23 * 0x38) + uVar21 * 0x38
                               + 8));
          }
          bVar4 = uVar21 != uVar17;
          uVar21 = uVar21 + 1;
        } while (bVar4);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar22 + 1);
  }
  return;
}


