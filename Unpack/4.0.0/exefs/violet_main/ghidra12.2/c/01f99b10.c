/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f99b10; name: FUN_01f99b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f99b10(undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *__compar;
  undefined *__compar_00;
  bool bVar8;
  bool bVar9;
  short sVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ushort *puVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  uint uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  char *local_78;
  
  fVar33 = param_1._8_4_;
  fVar32 = param_1._0_4_;
  plVar17 = (long *)(param_4 + 0x40);
  fVar39 = param_3 * 0.5;
  fVar37 = *(float *)(param_4 + 0x28);
  fVar38 = (fVar32 - fVar39) / fVar37;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  *(long *)(param_4 + 0x48) = *plVar17;
  __compar = PTR_LAB_047d5600;
  uVar30 = (uint)fVar38;
  uVar27 = (ulong)uVar30;
  fVar38 = (fVar32 + fVar39) / fVar37;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  uVar15 = (uint)fVar38;
  if (uVar30 <= uVar15) {
    fVar38 = -(fVar33 + fVar39) / fVar37;
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    fVar37 = -(fVar33 - fVar39) / fVar37;
    if (fVar37 <= 0.0) {
      fVar37 = 0.0;
    }
    uVar12 = (uint)fVar37;
    uVar22 = (uint)fVar38;
    uVar1 = uVar22;
    if (uVar12 <= uVar22) {
      uVar1 = uVar12;
    }
    if (uVar12 <= uVar22) {
      uVar12 = uVar22;
    }
    lVar13 = *(long *)(param_4 + 400);
    if (uVar30 <= uVar15) {
      uVar30 = uVar15;
    }
    do {
      uVar19 = (ulong)uVar1;
      do {
        plVar18 = (long *)(*(long *)(*(long *)(lVar13 + 0x98) + uVar27 * 0x38) + uVar19 * 0x38);
        plVar29 = (long *)*plVar18;
        if (((long *)plVar18[1] != plVar29) &&
           (*(long **)(*(long *)(*(long *)(lVar13 + 0x98) + uVar27 * 0x38) + uVar19 * 0x38 + 8) !=
            plVar29)) {
          do {
            if ((param_5 == 0) || (sVar10 = FUN_010573e4(plVar29), param_5 == sVar10)) {
              piVar14 = (int *)plVar29[1];
              fVar38 = 0.0;
              fVar37 = 0.0;
              fVar39 = 0.0;
              if (piVar14 == (int *)0x0) goto LAB_01f9a374;
              if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                 (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar26 == 0)) {
                puVar11 = (uint *)0x0;
              }
              else {
                puVar11 = (uint *)((long)piVar14 + uVar26);
                puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
              }
              local_78 = "position";
              puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar);
              if (puVar11 == (uint *)0x0) {
LAB_01f9a3fc:
                fVar37 = 0.0;
              }
              else {
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                if (*puVar20 < 7) {
                  piVar24 = (int *)0x0;
                }
                else {
                  piVar24 = (int *)0x0;
                  if ((ulong)puVar20[3] != 0) {
                    puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                    piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                  }
                }
                fVar37 = 0.0;
                if (4 < *(ushort *)((long)piVar24 - (long)*piVar24)) {
                  uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
                  fVar37 = 0.0;
                  if ((uVar26 != 0) &&
                     (fVar37 = 0.0, (int)*(char *)((long)piVar24 + uVar26) - 0xfU < 2)) {
                    lVar13 = *plVar29;
                    if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
                      uVar26 = 0;
                    }
                    else {
                      uVar26 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                    }
                    piVar24 = (int *)plVar29[2];
                    if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar21 == 0
                       )) {
                      lVar28 = 0;
                    }
                    else {
                      puVar11 = (uint *)((long)piVar24 + uVar21);
                      lVar28 = (long)puVar11 + (ulong)*puVar11;
                    }
                    piVar14 = (int *)((long)((long)piVar14 + (ulong)puVar20[3]) +
                                     (ulong)*(uint *)((long)piVar14 + (ulong)puVar20[3]));
                    if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar21 == 0
                       )) {
                      uVar21 = 0xffffffff;
                    }
                    else {
                      uVar21 = (ulong)*(uint *)((long)piVar14 + uVar21);
                    }
                    puVar11 = (uint *)(lVar28 + uVar21 * 4 + 4);
                    piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                    if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar21 == 0
                       )) {
                      puVar11 = (uint *)0x0;
                    }
                    else {
                      puVar11 = (uint *)((long)piVar14 + uVar21);
                      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                    }
                    local_78 = "x";
                    puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,
                                      (__compar_fn_t)__compar);
                    if (puVar11 == (uint *)0x0) goto LAB_01f9a3fc;
                    piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                    puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                    uVar2 = *puVar20;
                    if (uVar2 < 7) {
                      piVar24 = (int *)0x0;
                    }
                    else {
                      piVar24 = (int *)0x0;
                      if ((ulong)puVar20[3] != 0) {
                        puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                        piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                      }
                    }
                    if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar21 == 0
                       )) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = (long)*(char *)((long)piVar24 + uVar21) & 0xffffffff;
                    }
                    if (*(long *)(PTR_DAT_047d5608 + uVar21 * 8) == 4) {
                      if ((uVar2 < 0xb) || ((ulong)puVar20[5] == 0)) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                      }
                      fVar37 = *(float *)(lVar13 + uVar26 + uVar21);
                    }
                    else {
                      fVar37 = 0.0;
                      if (0xe < uVar2) {
                        fVar37 = 0.0;
                        if ((ulong)puVar20[7] != 0) {
                          fVar37 = (float)*(double *)((long)piVar14 + (ulong)puVar20[7]);
                        }
                      }
                    }
                  }
                }
              }
              piVar14 = (int *)plVar29[1];
              if (piVar14 == (int *)0x0) {
                fVar38 = 0.0;
LAB_01f9ad30:
                fVar39 = 0.0;
              }
              else {
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar26 == 0)) {
                  puVar11 = (uint *)0x0;
                }
                else {
                  puVar11 = (uint *)((long)piVar14 + uVar26);
                  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                }
                local_78 = "position";
                puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar);
                if (puVar11 == (uint *)0x0) {
LAB_01f9a404:
                  fVar38 = 0.0;
                }
                else {
                  piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                  puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                  if (*puVar20 < 7) {
                    piVar24 = (int *)0x0;
                  }
                  else {
                    piVar24 = (int *)0x0;
                    if ((ulong)puVar20[3] != 0) {
                      puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                      piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                    }
                  }
                  fVar38 = 0.0;
                  if (4 < *(ushort *)((long)piVar24 - (long)*piVar24)) {
                    uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
                    fVar38 = 0.0;
                    if ((uVar26 != 0) &&
                       (fVar38 = 0.0, (int)*(char *)((long)piVar24 + uVar26) - 0xfU < 2)) {
                      lVar13 = *plVar29;
                      if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
                        uVar26 = 0;
                      }
                      else {
                        uVar26 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                      }
                      piVar24 = (int *)plVar29[2];
                      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                         (uVar21 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2],
                         uVar21 == 0)) {
                        lVar28 = 0;
                      }
                      else {
                        puVar11 = (uint *)((long)piVar24 + uVar21);
                        lVar28 = (long)puVar11 + (ulong)*puVar11;
                      }
                      piVar14 = (int *)((long)((long)piVar14 + (ulong)puVar20[3]) +
                                       (ulong)*(uint *)((long)piVar14 + (ulong)puVar20[3]));
                      if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
                         (uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4],
                         uVar21 == 0)) {
                        uVar21 = 0xffffffff;
                      }
                      else {
                        uVar21 = (ulong)*(uint *)((long)piVar14 + uVar21);
                      }
                      puVar11 = (uint *)(lVar28 + uVar21 * 4 + 4);
                      piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                      if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                         (uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3],
                         uVar21 == 0)) {
                        puVar11 = (uint *)0x0;
                      }
                      else {
                        puVar11 = (uint *)((long)piVar14 + uVar21);
                        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                      }
                      local_78 = "y";
                      puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,
                                        (__compar_fn_t)__compar);
                      if (puVar11 == (uint *)0x0) goto LAB_01f9a404;
                      piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                      puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                      uVar2 = *puVar20;
                      if (uVar2 < 7) {
                        piVar24 = (int *)0x0;
                      }
                      else {
                        piVar24 = (int *)0x0;
                        if ((ulong)puVar20[3] != 0) {
                          puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                          piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                        }
                      }
                      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                         (uVar21 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2],
                         uVar21 == 0)) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = (long)*(char *)((long)piVar24 + uVar21) & 0xffffffff;
                      }
                      if (*(long *)(PTR_DAT_047d5608 + uVar21 * 8) == 4) {
                        if ((uVar2 < 0xb) || ((ulong)puVar20[5] == 0)) {
                          uVar21 = 0;
                        }
                        else {
                          uVar21 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                        }
                        fVar38 = *(float *)(lVar13 + uVar26 + uVar21);
                      }
                      else {
                        fVar38 = 0.0;
                        if (0xe < uVar2) {
                          fVar38 = 0.0;
                          if ((ulong)puVar20[7] != 0) {
                            fVar38 = (float)*(double *)((long)piVar14 + (ulong)puVar20[7]);
                          }
                        }
                      }
                    }
                  }
                }
                piVar14 = (int *)plVar29[1];
                if (piVar14 == (int *)0x0) goto LAB_01f9ad30;
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar26 == 0)) {
                  puVar11 = (uint *)0x0;
                }
                else {
                  puVar11 = (uint *)((long)piVar14 + uVar26);
                  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                }
                local_78 = "position";
                puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar);
                if (puVar11 == (uint *)0x0) {
LAB_01f99cb0:
                  fVar39 = 0.0;
                }
                else {
                  piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                  puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                  if (*puVar20 < 7) {
                    piVar24 = (int *)0x0;
                  }
                  else {
                    piVar24 = (int *)0x0;
                    if ((ulong)puVar20[3] != 0) {
                      puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                      piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                    }
                  }
                  if (((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                      (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)
                      ) || (1 < (int)*(char *)((long)piVar24 + uVar26) - 0xfU)) goto LAB_01f99cb0;
                  lVar13 = *plVar29;
                  if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                  }
                  piVar24 = (int *)plVar29[2];
                  if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                     (uVar21 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar21 == 0))
                  {
                    lVar28 = 0;
                  }
                  else {
                    puVar11 = (uint *)((long)piVar24 + uVar21);
                    lVar28 = (long)puVar11 + (ulong)*puVar11;
                  }
                  piVar14 = (int *)((long)((long)piVar14 + (ulong)puVar20[3]) +
                                   (ulong)*(uint *)((long)piVar14 + (ulong)puVar20[3]));
                  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
                     (uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar21 == 0))
                  {
                    uVar21 = 0xffffffff;
                  }
                  else {
                    uVar21 = (ulong)*(uint *)((long)piVar14 + uVar21);
                  }
                  puVar11 = (uint *)(lVar28 + uVar21 * 4 + 4);
                  piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                     (uVar21 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar21 == 0))
                  {
                    puVar11 = (uint *)0x0;
                  }
                  else {
                    puVar11 = (uint *)((long)piVar14 + uVar21);
                    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                  }
                  local_78 = "z";
                  puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar)
                  ;
                  if (puVar11 == (uint *)0x0) goto LAB_01f99cb0;
                  piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                  puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                  uVar2 = *puVar20;
                  if (uVar2 < 7) {
                    piVar24 = (int *)0x0;
                  }
                  else {
                    piVar24 = (int *)0x0;
                    if ((ulong)puVar20[3] != 0) {
                      puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                      piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                    }
                  }
                  if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                     (uVar21 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar21 == 0))
                  {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = (long)*(char *)((long)piVar24 + uVar21) & 0xffffffff;
                  }
                  if (*(long *)(PTR_DAT_047d5608 + uVar21 * 8) == 4) {
                    if ((uVar2 < 0xb) || ((ulong)puVar20[5] == 0)) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                    }
                    fVar39 = *(float *)(lVar13 + uVar26 + uVar21);
                  }
                  else {
                    if ((uVar2 < 0xf) || ((ulong)puVar20[7] == 0)) goto LAB_01f99cb0;
                    fVar39 = (float)*(double *)((long)piVar14 + (ulong)puVar20[7]);
                  }
                }
              }
LAB_01f9a374:
              fVar38 = fVar38 - param_1._4_4_;
              fVar36 = 0.0 - param_1._12_4_;
              fVar37 = (fVar37 - fVar32) * (fVar37 - fVar32);
              fVar38 = fVar38 * fVar38;
              fVar39 = (fVar39 - fVar33) * (fVar39 - fVar33);
              fVar36 = fVar36 * fVar36;
              auVar34._0_4_ = fVar37 + fVar38;
              auVar34._4_4_ = fVar39 + fVar36;
              auVar34._8_4_ = fVar37 + fVar38;
              auVar34._12_4_ = fVar39 + fVar36;
              auVar34 = NEON_ext(auVar34,auVar34,4,1);
              fVar37 = auVar34._0_4_ + auVar34._4_4_;
              bVar9 = true;
              bVar8 = false;
              if (param_2 * param_2 <= fVar37) {
                bVar9 = false;
                bVar8 = true;
                if (!NAN(param_3 * param_3) && !NAN(fVar37)) {
                  bVar9 = param_3 * param_3 < fVar37;
                  bVar8 = false;
                }
              }
              if (bVar9 == bVar8) {
                FUN_00d5cc64(plVar17,plVar29);
              }
            }
            lVar13 = *(long *)(param_4 + 400);
            plVar29 = plVar29 + 3;
          } while (plVar29 !=
                   *(long **)(*(long *)(*(long *)(lVar13 + 0x98) + uVar27 * 0x38) + uVar19 * 0x38 +
                             8));
        }
        __compar_00 = PTR_LAB_047d5600;
        uVar7 = _DAT_03d5f030;
        uVar6 = _DAT_03d5f020;
        uVar5 = _DAT_03d5f010;
        uVar4 = _DAT_03d5f000;
        uVar3 = _DAT_03cac230;
        bVar9 = uVar19 != uVar12;
        uVar19 = uVar19 + 1;
      } while (bVar9);
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar30 + 1);
    lVar13 = *(long *)(param_4 + 0x40);
    if (*(long *)(param_4 + 0x48) != lVar13) {
      lVar28 = 0;
      uVar27 = 0;
      do {
        piVar14 = *(int **)(lVar13 + lVar28 + 8);
        fVar32 = 0.0;
        if (piVar14 != (int *)0x0) {
          if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
             (uVar19 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar19 == 0)) {
            puVar11 = (uint *)0x0;
          }
          else {
            puVar11 = (uint *)((long)piVar14 + uVar19);
            puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          }
          local_78 = "position";
          puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar_00);
          if (puVar11 == (uint *)0x0) {
LAB_01f9aca0:
            fVar32 = 0.0;
          }
          else {
            piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
            if (*puVar20 < 7) {
              piVar24 = (int *)0x0;
            }
            else {
              piVar24 = (int *)0x0;
              if ((ulong)puVar20[3] != 0) {
                puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
              }
            }
            fVar32 = 0.0;
            if (4 < *(ushort *)((long)piVar24 - (long)*piVar24)) {
              uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
              fVar32 = 0.0;
              if ((uVar19 != 0) && (fVar32 = 0.0, (int)*(char *)((long)piVar24 + uVar19) - 0xfU < 2)
                 ) {
                lVar31 = *(long *)(lVar13 + lVar28);
                if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                }
                piVar24 = *(int **)(lVar13 + lVar28 + 0x10);
                if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)) {
                  lVar13 = 0;
                }
                else {
                  puVar11 = (uint *)((long)piVar24 + uVar26);
                  lVar13 = (long)puVar11 + (ulong)*puVar11;
                }
                piVar14 = (int *)((long)((long)piVar14 + (ulong)puVar20[3]) +
                                 (ulong)*(uint *)((long)piVar14 + (ulong)puVar20[3]));
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar26 == 0)) {
                  uVar26 = 0xffffffff;
                }
                else {
                  uVar26 = (ulong)*(uint *)((long)piVar14 + uVar26);
                }
                puVar11 = (uint *)(lVar13 + uVar26 * 4 + 4);
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar26 == 0)) {
                  puVar11 = (uint *)0x0;
                }
                else {
                  puVar11 = (uint *)((long)piVar14 + uVar26);
                  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                }
                local_78 = "x";
                puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar_00
                                 );
                if (puVar11 == (uint *)0x0) goto LAB_01f9aca0;
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                uVar2 = *puVar20;
                if (uVar2 < 7) {
                  piVar24 = (int *)0x0;
                }
                else {
                  piVar24 = (int *)0x0;
                  if ((ulong)puVar20[3] != 0) {
                    puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                    piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                  }
                }
                if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = (long)*(char *)((long)piVar24 + uVar26) & 0xffffffff;
                }
                if (*(long *)(PTR_DAT_047d5608 + uVar26 * 8) == 4) {
                  if ((uVar2 < 0xb) || ((ulong)puVar20[5] == 0)) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                  }
                  fVar32 = *(float *)(lVar31 + uVar19 + uVar26);
                }
                else {
                  fVar32 = 0.0;
                  if (0xe < uVar2) {
                    fVar32 = 0.0;
                    if ((ulong)puVar20[7] != 0) {
                      fVar32 = (float)*(double *)((long)piVar14 + (ulong)puVar20[7]);
                    }
                  }
                }
              }
            }
          }
        }
        fVar33 = 0.0;
        lVar31 = *plVar17;
        lVar13 = lVar31 + lVar28;
        piVar14 = *(int **)(lVar13 + 8);
        if (piVar14 != (int *)0x0) {
          if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
             (uVar19 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar19 == 0)) {
            puVar11 = (uint *)0x0;
          }
          else {
            puVar11 = (uint *)((long)piVar14 + uVar19);
            puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          }
          local_78 = "position";
          puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar_00);
          if (puVar11 == (uint *)0x0) {
LAB_01f9aca8:
            fVar33 = 0.0;
          }
          else {
            piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
            if (*puVar20 < 7) {
              piVar24 = (int *)0x0;
            }
            else {
              piVar24 = (int *)0x0;
              if ((ulong)puVar20[3] != 0) {
                puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
              }
            }
            fVar33 = 0.0;
            if (4 < *(ushort *)((long)piVar24 - (long)*piVar24)) {
              uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
              fVar33 = 0.0;
              if ((uVar19 != 0) && (fVar33 = 0.0, (int)*(char *)((long)piVar24 + uVar19) - 0xfU < 2)
                 ) {
                lVar31 = *(long *)(lVar31 + lVar28);
                if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                }
                piVar24 = *(int **)(lVar13 + 0x10);
                if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)) {
                  lVar13 = 0;
                }
                else {
                  puVar11 = (uint *)((long)piVar24 + uVar26);
                  lVar13 = (long)puVar11 + (ulong)*puVar11;
                }
                piVar14 = (int *)((long)((long)piVar14 + (ulong)puVar20[3]) +
                                 (ulong)*(uint *)((long)piVar14 + (ulong)puVar20[3]));
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar26 == 0)) {
                  uVar26 = 0xffffffff;
                }
                else {
                  uVar26 = (ulong)*(uint *)((long)piVar14 + uVar26);
                }
                puVar11 = (uint *)(lVar13 + uVar26 * 4 + 4);
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar26 == 0)) {
                  puVar11 = (uint *)0x0;
                }
                else {
                  puVar11 = (uint *)((long)piVar14 + uVar26);
                  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                }
                local_78 = "y";
                puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar_00
                                 );
                if (puVar11 == (uint *)0x0) goto LAB_01f9aca8;
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                uVar2 = *puVar20;
                if (uVar2 < 7) {
                  piVar24 = (int *)0x0;
                }
                else {
                  piVar24 = (int *)0x0;
                  if ((ulong)puVar20[3] != 0) {
                    puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                    piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                  }
                }
                if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = (long)*(char *)((long)piVar24 + uVar26) & 0xffffffff;
                }
                if (*(long *)(PTR_DAT_047d5608 + uVar26 * 8) == 4) {
                  if ((uVar2 < 0xb) || ((ulong)puVar20[5] == 0)) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                  }
                  fVar33 = *(float *)(lVar31 + uVar19 + uVar26);
                }
                else {
                  fVar33 = 0.0;
                  if (0xe < uVar2) {
                    fVar33 = 0.0;
                    if ((ulong)puVar20[7] != 0) {
                      fVar33 = (float)*(double *)((long)piVar14 + (ulong)puVar20[7]);
                    }
                  }
                }
              }
            }
          }
        }
        fVar37 = 0.0;
        lVar31 = *plVar17;
        lVar13 = lVar31 + lVar28;
        piVar14 = *(int **)(lVar13 + 8);
        if (piVar14 != (int *)0x0) {
          if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
             (uVar19 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar19 == 0)) {
            puVar11 = (uint *)0x0;
          }
          else {
            puVar11 = (uint *)((long)piVar14 + uVar19);
            puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          }
          local_78 = "position";
          puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar_00);
          if (puVar11 == (uint *)0x0) {
LAB_01f9acb0:
            fVar37 = 0.0;
          }
          else {
            piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
            if (*puVar20 < 7) {
              piVar24 = (int *)0x0;
            }
            else {
              piVar24 = (int *)0x0;
              if ((ulong)puVar20[3] != 0) {
                puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
              }
            }
            fVar37 = 0.0;
            if (4 < *(ushort *)((long)piVar24 - (long)*piVar24)) {
              uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
              fVar37 = 0.0;
              if ((uVar19 != 0) && (fVar37 = 0.0, (int)*(char *)((long)piVar24 + uVar19) - 0xfU < 2)
                 ) {
                lVar31 = *(long *)(lVar31 + lVar28);
                if ((*puVar20 < 0xb) || ((ulong)puVar20[5] == 0)) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                }
                piVar24 = *(int **)(lVar13 + 0x10);
                if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)) {
                  lVar13 = 0;
                }
                else {
                  puVar11 = (uint *)((long)piVar24 + uVar26);
                  lVar13 = (long)puVar11 + (ulong)*puVar11;
                }
                piVar14 = (int *)((long)((long)piVar14 + (ulong)puVar20[3]) +
                                 (ulong)*(uint *)((long)piVar14 + (ulong)puVar20[3]));
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar26 == 0)) {
                  uVar26 = 0xffffffff;
                }
                else {
                  uVar26 = (ulong)*(uint *)((long)piVar14 + uVar26);
                }
                puVar11 = (uint *)(lVar13 + uVar26 * 4 + 4);
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar26 == 0)) {
                  puVar11 = (uint *)0x0;
                }
                else {
                  puVar11 = (uint *)((long)piVar14 + uVar26);
                  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                }
                local_78 = "z";
                puVar11 = bsearch(&local_78,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)__compar_00
                                 );
                if (puVar11 == (uint *)0x0) goto LAB_01f9acb0;
                piVar14 = (int *)((long)puVar11 + (ulong)*puVar11);
                puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
                uVar2 = *puVar20;
                if (uVar2 < 7) {
                  piVar24 = (int *)0x0;
                }
                else {
                  piVar24 = (int *)0x0;
                  if ((ulong)puVar20[3] != 0) {
                    puVar11 = (uint *)((long)piVar14 + (ulong)puVar20[3]);
                    piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
                  }
                }
                if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
                   (uVar26 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar26 == 0)) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = (long)*(char *)((long)piVar24 + uVar26) & 0xffffffff;
                }
                if (*(long *)(PTR_DAT_047d5608 + uVar26 * 8) == 4) {
                  if ((uVar2 < 0xb) || ((ulong)puVar20[5] == 0)) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar20[5]);
                  }
                  fVar37 = *(float *)(lVar31 + uVar19 + uVar26);
                }
                else {
                  fVar37 = 0.0;
                  if (0xe < uVar2) {
                    fVar37 = 0.0;
                    if ((ulong)puVar20[7] != 0) {
                      fVar37 = (float)*(double *)((long)piVar14 + (ulong)puVar20[7]);
                    }
                  }
                }
              }
            }
          }
        }
        auVar35._4_4_ = fVar33;
        auVar35._0_4_ = fVar32;
        auVar35._8_4_ = fVar37;
        auVar35._12_4_ = 0;
        if (param_6 == 1) {
          FUN_01df5700(auVar35,CONCAT44(fVar33 + (float)((ulong)uVar3 >> 0x20),fVar32 + (float)uVar3
                                       ),uVar4,uVar5,uVar6,uVar7);
        }
        else if (param_6 == 0) {
          FUN_01f9adc0(auVar35,0x3f800000,_DAT_03d5eff0,uVar4,uVar5,uVar6,uVar7,10,10);
        }
        lVar13 = *(long *)(param_4 + 0x40);
        uVar19 = (*(long *)(param_4 + 0x48) - lVar13 >> 3) * -0x5555555555555555;
        uVar27 = uVar27 + 1;
        lVar28 = lVar28 + 0x18;
      } while (uVar27 < uVar19);
      uVar30 = (uint)uVar19;
      if (uVar30 != 1) {
        if (uVar30 == 0) {
          uVar27 = *(ulong *)(param_4 + 0x78);
          uVar19 = *(ulong *)(param_4 + 0x80) ^ uVar27;
          *(ulong *)(param_4 + 0x78) = uVar19 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar19 << 0x10;
          *(ulong *)(param_4 + 0x80) = uVar19 >> 0x1b | uVar19 << 0x25;
        }
        else {
          lVar13 = 0x1f;
          if ((uVar30 << (ulong)((uint)LZCOUNT(uVar30) & 0x1f) & 0x7fffffff) != 0) {
            lVar13 = 0x20;
          }
          uVar19 = lVar13 - LZCOUNT(uVar30);
          uVar27 = uVar19 >> 6;
          if ((uVar19 & 0x3f) != 0) {
            uVar27 = uVar27 + 1;
          }
          uVar26 = 0;
          if (uVar27 != 0) {
            uVar26 = uVar19 / uVar27;
          }
          uVar21 = *(ulong *)(param_4 + 0x78);
          uVar15 = (int)uVar21 + (int)*(ulong *)(param_4 + 0x80);
          uVar25 = uVar21 ^ *(ulong *)(param_4 + 0x80);
          uVar21 = uVar25 ^ (uVar21 >> 0x28 | uVar21 << 0x18) ^ uVar25 << 0x10;
          uVar1 = 0;
          if (uVar27 <= uVar19) {
            uVar1 = (uint)(0xffffffffffffffff >> (-uVar26 & 0x3f));
          }
          uVar27 = uVar25 >> 0x1b | uVar25 << 0x25;
          while (uVar30 <= (uVar15 & uVar1)) {
            uVar19 = uVar21 ^ uVar27;
            iVar23 = (int)uVar27;
            iVar16 = (int)uVar21;
            uVar27 = uVar19 >> 0x1b | uVar19 << 0x25;
            uVar21 = uVar19 ^ (uVar21 >> 0x28 | uVar21 << 0x18) ^ uVar19 << 0x10;
            uVar15 = iVar16 + iVar23;
          }
          *(ulong *)(param_4 + 0x78) = uVar21;
          *(ulong *)(param_4 + 0x80) = uVar27;
        }
      }
    }
  }
  return;
}


