/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9adc4; name: FUN_01f9adc4
 */


long * FUN_01f9adc4(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined *__compar;
  short sVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  long *local_b8;
  char *local_78;
  
  __compar = PTR_LAB_047d5600;
  local_b8 = (long *)0x0;
  param_2 = param_2 * param_2;
  fVar20 = param_1._0_4_ / *(float *)(param_3 + 0x28);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar24 = -param_1._8_4_ / *(float *)(param_3 + 0x28);
  uVar12 = (uint)fVar20;
  uVar13 = (ulong)uVar12;
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  uVar5 = (uint)fVar24;
  uVar6 = (ulong)uVar5;
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  lVar7 = *(long *)(param_3 + 400);
  if (uVar12 == 0) {
    uVar12 = 1;
  }
  uVar19 = (ulong)uVar12 - 1;
  do {
    uVar17 = (ulong)uVar5 - 1;
    do {
      plVar9 = (long *)(*(long *)(*(long *)(lVar7 + 0x98) + uVar19 * 0x38) + uVar17 * 0x38);
      plVar18 = (long *)*plVar9;
      if (((long *)plVar9[1] != plVar18) &&
         (*(long **)(*(long *)(*(long *)(lVar7 + 0x98) + uVar19 * 0x38) + uVar17 * 0x38 + 8) !=
          plVar18)) {
        do {
          if (param_4 == 0) {
LAB_01f9af90:
            piVar8 = (int *)plVar18[1];
            fVar20 = 0.0;
            fVar21 = 0.0;
            fVar24 = 0.0;
            if (piVar8 == (int *)0x0) goto LAB_01f9b5ac;
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
               (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar10 == 0)) {
              puVar4 = (uint *)0x0;
            }
            else {
              puVar4 = (uint *)((long)piVar8 + uVar10);
              puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
            }
            local_78 = "position";
            puVar4 = bsearch(&local_78,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
            if (puVar4 == (uint *)0x0) {
LAB_01f9b62c:
              fVar21 = 0.0;
            }
            else {
              piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
              if (*puVar11 < 7) {
                piVar15 = (int *)0x0;
              }
              else {
                piVar15 = (int *)0x0;
                if ((ulong)puVar11[3] != 0) {
                  puVar4 = (uint *)((long)piVar8 + (ulong)puVar11[3]);
                  piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
                }
              }
              fVar21 = 0.0;
              if (4 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                uVar10 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2];
                fVar21 = 0.0;
                if ((uVar10 != 0) &&
                   (fVar21 = 0.0, (int)*(char *)((long)piVar15 + uVar10) - 0xfU < 2)) {
                  lVar7 = *plVar18;
                  if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (ulong)*(ushort *)((long)piVar8 + (ulong)puVar11[5]);
                  }
                  piVar15 = (int *)plVar18[2];
                  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                     (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0))
                  {
                    lVar14 = 0;
                  }
                  else {
                    puVar4 = (uint *)((long)piVar15 + uVar16);
                    lVar14 = (long)puVar4 + (ulong)*puVar4;
                  }
                  piVar8 = (int *)((long)((long)piVar8 + (ulong)puVar11[3]) +
                                  (ulong)*(uint *)((long)piVar8 + (ulong)puVar11[3]));
                  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
                     (uVar16 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar16 == 0)) {
                    uVar16 = 0xffffffff;
                  }
                  else {
                    uVar16 = (ulong)*(uint *)((long)piVar8 + uVar16);
                  }
                  puVar4 = (uint *)(lVar14 + uVar16 * 4 + 4);
                  piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
                     (uVar16 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar16 == 0)) {
                    puVar4 = (uint *)0x0;
                  }
                  else {
                    puVar4 = (uint *)((long)piVar8 + uVar16);
                    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
                  }
                  local_78 = "x";
                  puVar4 = bsearch(&local_78,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
                  if (puVar4 == (uint *)0x0) goto LAB_01f9b62c;
                  piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                  puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
                  uVar2 = *puVar11;
                  if (uVar2 < 7) {
                    piVar15 = (int *)0x0;
                  }
                  else {
                    piVar15 = (int *)0x0;
                    if ((ulong)puVar11[3] != 0) {
                      puVar4 = (uint *)((long)piVar8 + (ulong)puVar11[3]);
                      piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
                    }
                  }
                  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                     (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0))
                  {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = (long)*(char *)((long)piVar15 + uVar16) & 0xffffffff;
                  }
                  if (*(long *)(PTR_DAT_047d5608 + uVar16 * 8) == 4) {
                    if ((uVar2 < 0xb) || ((ulong)puVar11[5] == 0)) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = (ulong)*(ushort *)((long)piVar8 + (ulong)puVar11[5]);
                    }
                    fVar21 = *(float *)(lVar7 + uVar10 + uVar16);
                  }
                  else {
                    fVar21 = 0.0;
                    if (0xe < uVar2) {
                      fVar21 = 0.0;
                      if ((ulong)puVar11[7] != 0) {
                        fVar21 = (float)*(double *)((long)piVar8 + (ulong)puVar11[7]);
                      }
                    }
                  }
                }
              }
            }
            piVar8 = (int *)plVar18[1];
            if (piVar8 == (int *)0x0) {
              fVar20 = 0.0;
LAB_01f9b6dc:
              fVar24 = 0.0;
            }
            else {
              if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
                 (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar10 == 0)) {
                puVar4 = (uint *)0x0;
              }
              else {
                puVar4 = (uint *)((long)piVar8 + uVar10);
                puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
              }
              local_78 = "position";
              puVar4 = bsearch(&local_78,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
              if (puVar4 == (uint *)0x0) {
LAB_01f9b634:
                fVar20 = 0.0;
              }
              else {
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
                if (*puVar11 < 7) {
                  piVar15 = (int *)0x0;
                }
                else {
                  piVar15 = (int *)0x0;
                  if ((ulong)puVar11[3] != 0) {
                    puVar4 = (uint *)((long)piVar8 + (ulong)puVar11[3]);
                    piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
                  }
                }
                fVar20 = 0.0;
                if (4 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
                  uVar10 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2];
                  fVar20 = 0.0;
                  if ((uVar10 != 0) &&
                     (fVar20 = 0.0, (int)*(char *)((long)piVar15 + uVar10) - 0xfU < 2)) {
                    lVar7 = *plVar18;
                    if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = (ulong)*(ushort *)((long)piVar8 + (ulong)puVar11[5]);
                    }
                    piVar15 = (int *)plVar18[2];
                    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                       (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0
                       )) {
                      lVar14 = 0;
                    }
                    else {
                      puVar4 = (uint *)((long)piVar15 + uVar16);
                      lVar14 = (long)puVar4 + (ulong)*puVar4;
                    }
                    piVar8 = (int *)((long)((long)piVar8 + (ulong)puVar11[3]) +
                                    (ulong)*(uint *)((long)piVar8 + (ulong)puVar11[3]));
                    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
                       (uVar16 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar16 == 0))
                    {
                      uVar16 = 0xffffffff;
                    }
                    else {
                      uVar16 = (ulong)*(uint *)((long)piVar8 + uVar16);
                    }
                    puVar4 = (uint *)(lVar14 + uVar16 * 4 + 4);
                    piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
                       (uVar16 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar16 == 0))
                    {
                      puVar4 = (uint *)0x0;
                    }
                    else {
                      puVar4 = (uint *)((long)piVar8 + uVar16);
                      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
                    }
                    local_78 = "y";
                    puVar4 = bsearch(&local_78,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
                    if (puVar4 == (uint *)0x0) goto LAB_01f9b634;
                    piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                    puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
                    uVar2 = *puVar11;
                    if (uVar2 < 7) {
                      piVar15 = (int *)0x0;
                    }
                    else {
                      piVar15 = (int *)0x0;
                      if ((ulong)puVar11[3] != 0) {
                        puVar4 = (uint *)((long)piVar8 + (ulong)puVar11[3]);
                        piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
                      }
                    }
                    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                       (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0
                       )) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = (long)*(char *)((long)piVar15 + uVar16) & 0xffffffff;
                    }
                    if (*(long *)(PTR_DAT_047d5608 + uVar16 * 8) == 4) {
                      if ((uVar2 < 0xb) || ((ulong)puVar11[5] == 0)) {
                        uVar16 = 0;
                      }
                      else {
                        uVar16 = (ulong)*(ushort *)((long)piVar8 + (ulong)puVar11[5]);
                      }
                      fVar20 = *(float *)(lVar7 + uVar10 + uVar16);
                    }
                    else {
                      fVar20 = 0.0;
                      if (0xe < uVar2) {
                        fVar20 = 0.0;
                        if ((ulong)puVar11[7] != 0) {
                          fVar20 = (float)*(double *)((long)piVar8 + (ulong)puVar11[7]);
                        }
                      }
                    }
                  }
                }
              }
              piVar8 = (int *)plVar18[1];
              if (piVar8 == (int *)0x0) goto LAB_01f9b6dc;
              if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
                 (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar10 == 0)) {
                puVar4 = (uint *)0x0;
              }
              else {
                puVar4 = (uint *)((long)piVar8 + uVar10);
                puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
              }
              local_78 = "position";
              puVar4 = bsearch(&local_78,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
              if (puVar4 == (uint *)0x0) {
LAB_01f9aee4:
                fVar24 = 0.0;
              }
              else {
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
                if (*puVar11 < 7) {
                  piVar15 = (int *)0x0;
                }
                else {
                  piVar15 = (int *)0x0;
                  if ((ulong)puVar11[3] != 0) {
                    puVar4 = (uint *)((long)piVar8 + (ulong)puVar11[3]);
                    piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
                  }
                }
                if (((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                    (uVar10 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar10 == 0))
                   || (1 < (int)*(char *)((long)piVar15 + uVar10) - 0xfU)) goto LAB_01f9aee4;
                lVar7 = *plVar18;
                if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (ulong)*(ushort *)((long)piVar8 + (ulong)puVar11[5]);
                }
                piVar15 = (int *)plVar18[2];
                if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                   (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0)) {
                  lVar14 = 0;
                }
                else {
                  puVar4 = (uint *)((long)piVar15 + uVar16);
                  lVar14 = (long)puVar4 + (ulong)*puVar4;
                }
                piVar8 = (int *)((long)((long)piVar8 + (ulong)puVar11[3]) +
                                (ulong)*(uint *)((long)piVar8 + (ulong)puVar11[3]));
                if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 9) ||
                   (uVar16 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4], uVar16 == 0)) {
                  uVar16 = 0xffffffff;
                }
                else {
                  uVar16 = (ulong)*(uint *)((long)piVar8 + uVar16);
                }
                puVar4 = (uint *)(lVar14 + uVar16 * 4 + 4);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
                   (uVar16 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar16 == 0)) {
                  puVar4 = (uint *)0x0;
                }
                else {
                  puVar4 = (uint *)((long)piVar8 + uVar16);
                  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
                }
                local_78 = "z";
                puVar4 = bsearch(&local_78,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
                if (puVar4 == (uint *)0x0) goto LAB_01f9aee4;
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
                puVar11 = (ushort *)((long)piVar8 - (long)*piVar8);
                uVar2 = *puVar11;
                if (uVar2 < 7) {
                  piVar15 = (int *)0x0;
                }
                else {
                  piVar15 = (int *)0x0;
                  if ((ulong)puVar11[3] != 0) {
                    puVar4 = (uint *)((long)piVar8 + (ulong)puVar11[3]);
                    piVar15 = (int *)((long)puVar4 + (ulong)*puVar4);
                  }
                }
                if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
                   (uVar16 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar16 == 0)) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = (long)*(char *)((long)piVar15 + uVar16) & 0xffffffff;
                }
                if (*(long *)(PTR_DAT_047d5608 + uVar16 * 8) == 4) {
                  if ((uVar2 < 0xb) || ((ulong)puVar11[5] == 0)) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = (ulong)*(ushort *)((long)piVar8 + (ulong)puVar11[5]);
                  }
                  fVar24 = *(float *)(lVar7 + uVar10 + uVar16);
                }
                else {
                  if ((uVar2 < 0xf) || ((ulong)puVar11[7] == 0)) goto LAB_01f9aee4;
                  fVar24 = (float)*(double *)((long)piVar8 + (ulong)puVar11[7]);
                }
              }
            }
LAB_01f9b5ac:
            fVar21 = fVar21 - param_1._0_4_;
            fVar20 = fVar20 - param_1._4_4_;
            fVar24 = fVar24 - param_1._8_4_;
            fVar23 = 0.0 - param_1._12_4_;
            fVar21 = fVar21 * fVar21;
            fVar20 = fVar20 * fVar20;
            fVar24 = fVar24 * fVar24;
            fVar23 = fVar23 * fVar23;
            auVar22._0_4_ = fVar21 + fVar20;
            auVar22._4_4_ = fVar24 + fVar23;
            auVar22._8_4_ = fVar21 + fVar20;
            auVar22._12_4_ = fVar24 + fVar23;
            auVar22 = NEON_ext(auVar22,auVar22,4,1);
            fVar20 = auVar22._0_4_ + auVar22._4_4_;
            if (fVar20 < param_2) {
              local_b8 = plVar18;
              param_2 = fVar20;
            }
          }
          else {
            sVar3 = FUN_010573e4(plVar18);
            if (param_4 == sVar3) goto LAB_01f9af90;
          }
          lVar7 = *(long *)(param_3 + 400);
          plVar18 = plVar18 + 3;
        } while (plVar18 !=
                 *(long **)(*(long *)(*(long *)(lVar7 + 0x98) + uVar19 * 0x38) + uVar17 * 0x38 + 8))
        ;
      }
      bVar1 = uVar17 <= uVar6;
      uVar17 = uVar17 + 1;
    } while (bVar1);
    bVar1 = uVar13 < uVar19;
    uVar19 = uVar19 + 1;
    if (bVar1) {
      return local_b8;
    }
  } while( true );
}


