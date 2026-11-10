/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d3790; name: FUN_034d3790
 */


void FUN_034d3790(uint param_1,long param_2,undefined8 param_3,void *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  void *__s;
  uint uVar30;
  float *pfVar31;
  ulong uVar32;
  int *piVar33;
  float *pfVar34;
  float *pfVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_f0 [14];
  undefined1 auStack_80 [12];
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint local_68;
  byte local_64;
  bool bStack_63;
  undefined1 local_62;
  
  puVar6 = (undefined8 *)auStack_80;
  uVar12 = (uint)param_3;
  if ((((uint)((ulong)param_3 >> 0x10) & 0xffff ^ uVar12 >> 0x15) & 1) != 0) {
    uVar12 = uVar12 & 0xff9fffff | 0x30000;
  }
  uVar14 = uVar12 - (uVar12 >> 0xf & 1);
  uVar4 = uVar14 & 0xff;
  uVar29 = (ulong)uVar4;
  uVar17 = uVar12 & 0xff9c0000;
  if (uVar17 == 0) {
    uVar8 = uVar12 >> 0xc & 0x210;
    uVar23 = uVar12 >> 0xe & 1;
    local_64 = (byte)uVar23;
    bStack_63 = uVar8 == 0x210;
    puVar6 = local_f0;
    uVar19 = 0;
    uVar30 = 0;
    uVar28 = uVar12 >> 0xc & 0xfffffff7;
    puVar21 = puVar6;
    if (uVar28 != 0) {
      uVar22 = 0;
      uVar30 = 1;
      do {
        if ((uVar30 & uVar28) != 0) {
          uVar5 = (&DAT_03d986a4)[uVar22 * 3];
          *puVar21 = *(undefined8 *)((long)&DAT_03d9869c + uVar22 * 0xc);
          *(undefined4 *)(puVar21 + 1) = uVar5;
          puVar21 = (undefined8 *)((long)puVar21 + 0xc);
          uVar19 = uVar19 + 1;
        }
        uVar30 = uVar30 * 2;
        uVar22 = (ulong)((int)uVar22 + 1);
      } while (uVar30 - 1 < uVar28);
      uVar23 = (uint)local_64;
      uVar30 = uVar19;
    }
    puVar18 = puVar6;
    if ((uVar8 != 0) && (uVar23 != 0)) {
      *puVar21 = 0xbf80000000000000;
      bVar7 = bStack_63;
      *(undefined4 *)(puVar21 + 1) = 0;
      if (bVar7 == false) {
        uVar30 = uVar30 + 1;
      }
      else {
        *(undefined8 *)((long)puVar21 + 0xc) = 0;
        uVar30 = uVar30 + 2;
        *(undefined4 *)((long)puVar21 + 0x14) = 0;
      }
    }
  }
  else {
    local_64 = 1;
    bStack_63 = true;
    uVar30 = 0x1b;
    local_62 = 1;
    puVar18 = (undefined8 *)&DAT_03d98774;
  }
  local_6c = uVar12 >> 0xc;
  local_68 = uVar17;
  if (uVar4 < 2) {
    uVar19 = 0;
  }
  else {
    uVar19 = 1;
    if ((uVar12 & 0x210000) != 0) {
      uVar19 = 2;
    }
    if (uVar17 != 0) {
      uVar19 = uVar19 + 1;
    }
  }
  pfVar31 = (float *)((long)puVar6 - ((ulong)(uVar30 * param_1) * 4 + 0xf & 0x7fffffff0));
  if (param_1 != 0) {
    uVar22 = (ulong)uVar30;
    if (uVar30 == 0) {
      uVar22 = 0;
      do {
        if (uVar19 != 0) {
          uVar24 = 0;
          do {
            pfVar9 = (float *)((long)puVar18 + uVar24 * 4);
            uVar15 = (ulong)(uint)((int)uVar24 + (int)uVar22 * 3);
            pfVar13 = pfVar31;
            if ((&local_64)[uVar24] == 0) {
              do {
                pfVar34 = pfVar13 + 1;
                *pfVar13 = (*pfVar9 * *(float *)(param_2 + uVar15 * 4) * 0.5 + 0.5) * *pfVar13;
                pfVar9 = pfVar9 + 3;
                pfVar13 = pfVar34;
              } while (pfVar34 < pfVar31);
            }
            else {
              do {
                fVar36 = *(float *)(param_2 + uVar15 * 4);
                fVar37 = *pfVar9;
                if (0.0 <= fVar36) {
                  fVar38 = 0.0;
                  if (0.0 <= fVar37) {
                    fVar37 = fVar37 * 2.0 + -1.0;
                    fVar36 = fVar36 + -0.5;
                    goto LAB_034d3ad0;
                  }
                }
                else {
                  fVar38 = 0.0;
                  if (fVar37 <= 0.0) {
                    fVar37 = fVar37 * 2.0 + 1.0;
                    fVar36 = fVar36 + 0.5;
LAB_034d3ad0:
                    fVar38 = fVar36 * fVar37 + 0.5;
                  }
                }
                pfVar9 = pfVar9 + 3;
                pfVar34 = pfVar13 + 1;
                *pfVar13 = *pfVar13 * fVar38;
                pfVar13 = pfVar34;
              } while (pfVar34 < pfVar31);
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar19);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != param_1);
    }
    else {
      uVar15 = 0;
      uVar24 = 0;
      do {
        if (uVar22 - 1 < 7) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          pfVar9 = pfVar31 + uVar15 + 4;
          do {
            uVar16 = uVar16 + 8;
            pfVar9[-4] = 1.0;
            pfVar9[-3] = 1.0;
            pfVar9[-2] = 1.0;
            pfVar9[-1] = 1.0;
            pfVar9[0] = 1.0;
            pfVar9[1] = 1.0;
            pfVar9[2] = 1.0;
            pfVar9[3] = 1.0;
            pfVar9 = pfVar9 + 8;
          } while ((uVar22 & 0xfffffff8) != uVar16);
        }
        if ((uVar30 & 7) != 0) {
          pfVar9 = pfVar31 + uVar16 + uVar15;
          uVar16 = uVar22 & 7;
          do {
            uVar16 = uVar16 - 1;
            *pfVar9 = 1.0;
            pfVar9 = pfVar9 + 1;
          } while (uVar16 != 0);
        }
        if (uVar19 != 0) {
          uVar16 = 0;
          pfVar9 = pfVar31 + uVar30 * (int)uVar24;
          do {
            pfVar13 = (float *)((long)puVar18 + uVar16 * 4);
            uVar32 = (ulong)(uint)((int)uVar16 + (int)uVar24 * 3);
            pfVar34 = pfVar9;
            if ((&local_64)[uVar16] == 0) {
              do {
                pfVar35 = pfVar34 + 1;
                *pfVar34 = (*pfVar13 * *(float *)(param_2 + uVar32 * 4) * 0.5 + 0.5) * *pfVar34;
                pfVar13 = pfVar13 + 3;
                pfVar34 = pfVar35;
              } while (pfVar35 < pfVar9 + uVar22);
            }
            else {
              do {
                fVar36 = *(float *)(param_2 + uVar32 * 4);
                fVar37 = *pfVar13;
                if (0.0 <= fVar36) {
                  fVar38 = 0.0;
                  if (0.0 <= fVar37) {
                    fVar37 = fVar37 * 2.0 + -1.0;
                    fVar36 = fVar36 + -0.5;
                    goto LAB_034d3958;
                  }
                }
                else {
                  fVar38 = 0.0;
                  if (fVar37 <= 0.0) {
                    fVar37 = fVar37 * 2.0 + 1.0;
                    fVar36 = fVar36 + 0.5;
LAB_034d3958:
                    fVar38 = fVar36 * fVar37 + 0.5;
                  }
                }
                pfVar13 = pfVar13 + 3;
                pfVar35 = pfVar34 + 1;
                *pfVar34 = *pfVar34 * fVar38;
                pfVar34 = pfVar35;
              } while (pfVar35 < pfVar9 + uVar22);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar19);
        }
        uVar24 = uVar24 + 1;
        uVar15 = (ulong)((int)uVar15 + uVar30);
      } while (uVar24 != param_1);
    }
  }
  if (local_68 == 0) {
    if (((uVar12 >> 0xe & 1) == 0) || ((uVar12 & 0x210000) == 0)) {
      if ((param_1 != 0) && (uVar30 != 0)) {
        uVar24 = (ulong)uVar30;
        uVar22 = 0;
        lVar20 = 0;
        uVar29 = 0;
        do {
          if (uVar24 - 1 < 3) {
            uVar15 = 0;
          }
          else {
            pfVar9 = (float *)((long)param_4 + uVar22 * 4 + 8);
            uVar15 = 0;
            do {
              uVar16 = lVar20 + uVar15;
              uVar15 = uVar15 + 4;
              iVar10 = (int)uVar16;
              pfVar9[-2] = pfVar31[uVar16 & 0xffffffff];
              pfVar9[-1] = pfVar31[iVar10 + 1];
              *pfVar9 = pfVar31[iVar10 + 2];
              pfVar9[1] = pfVar31[iVar10 + 3];
              pfVar9 = pfVar9 + 4;
            } while ((uVar24 & 0xfffffffc) != uVar15);
          }
          if ((uVar30 & 3) != 0) {
            uVar16 = uVar24 & 3;
            do {
              *(float *)((long)param_4 + uVar15 * 4 + uVar22 * 4) =
                   pfVar31[(uint)((int)lVar20 + (int)uVar15)];
              uVar15 = uVar15 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          uVar29 = uVar29 + 1;
          lVar20 = lVar20 + uVar24;
          uVar22 = (ulong)((int)uVar22 + ((uVar12 & 0xff) + 3 & 0x1fc));
        } while (uVar29 != param_1);
      }
    }
    else {
      uVar17 = 9;
      if (uVar4 != 7) {
        uVar17 = 6;
      }
      uVar12 = (uVar12 & 0xff) + 3;
      uVar19 = uVar12 & 0x1fc;
      if (uVar19 * param_1 != 0) {
        memset(param_4,0,(ulong)(uVar19 * param_1) << 2);
      }
      if (param_1 == 0) {
        uVar29 = 1;
        do {
          lVar20 = uVar29 * 0xc;
          uVar29 = (ulong)((int)uVar29 + 1);
        } while (*(int *)(&DAT_03d988b8 + lVar20) + uVar4 < uVar17);
      }
      else {
        if (uVar4 != 0) {
          uVar24 = 0;
          lVar20 = 0;
          uVar22 = 0;
          do {
            if (uVar29 - 1 < 3) {
              uVar15 = 0;
            }
            else {
              pfVar9 = (float *)((long)param_4 + uVar24 * 4 + 8);
              uVar15 = 0;
              do {
                uVar16 = lVar20 + uVar15;
                uVar15 = uVar15 + 4;
                iVar10 = (int)uVar16;
                pfVar9[-2] = pfVar31[uVar16 & 0xffffffff];
                pfVar9[-1] = pfVar31[iVar10 + 1];
                *pfVar9 = pfVar31[iVar10 + 2];
                pfVar9[1] = pfVar31[iVar10 + 3];
                pfVar9 = pfVar9 + 4;
              } while ((uVar29 & 0xfc) != uVar15);
            }
            if ((uVar14 & 3) != 0) {
              lVar11 = -(uVar29 & 3);
              do {
                *(float *)((long)param_4 + uVar15 * 4 + uVar24 * 4) =
                     pfVar31[(uint)((int)lVar20 + (int)uVar15)];
                uVar15 = uVar15 + 1;
                bVar7 = lVar11 != -1;
                lVar11 = lVar11 + 1;
              } while (bVar7);
            }
            uVar22 = uVar22 + 1;
            lVar20 = lVar20 + (ulong)uVar30;
            uVar24 = (ulong)((int)uVar24 + uVar19);
          } while (uVar22 != param_1);
        }
        iVar10 = 0;
        uVar29 = 0;
        do {
          fVar36 = (float)(&DAT_03d988c0)[uVar29 * 3];
          uVar14 = (&DAT_03d988bc)[uVar29 * 3];
          if (param_1 == 1) {
            uVar22 = 0;
          }
          else {
            uVar28 = 0;
            uVar22 = 0;
            uVar8 = uVar4 + iVar10;
            do {
              uVar23 = uVar19 + uVar28;
              uVar2 = uVar30 + uVar8;
              uVar22 = uVar22 + 2;
              *(float *)((long)param_4 + (ulong)uVar28 * 4 + (ulong)uVar14 * 4) =
                   *(float *)((long)param_4 + (ulong)uVar28 * 4 + (ulong)uVar14 * 4) +
                   fVar36 * pfVar31[uVar8];
              uVar28 = uVar28 + (uVar12 * 2 & 0x3f8);
              uVar8 = uVar8 + uVar30 * 2;
              *(float *)((long)param_4 + (ulong)uVar23 * 4 + (ulong)uVar14 * 4) =
                   *(float *)((long)param_4 + (ulong)uVar23 * 4 + (ulong)uVar14 * 4) +
                   fVar36 * pfVar31[uVar2];
            } while (((ulong)param_1 & 0xfffffffe) != uVar22);
          }
          if ((param_1 & 1) != 0) {
            uVar8 = uVar19 * (int)uVar22;
            *(float *)((long)param_4 + (ulong)uVar8 * 4 + (ulong)uVar14 * 4) =
                 *(float *)((long)param_4 + (ulong)uVar8 * 4 + (ulong)uVar14 * 4) +
                 fVar36 * pfVar31[iVar10 + uVar4 + uVar30 * (int)uVar22];
          }
          uVar29 = (ulong)((int)uVar29 + 1);
          iVar10 = *(int *)(&DAT_03d988b8 + uVar29 * 0xc);
        } while (iVar10 + uVar4 < uVar17);
      }
    }
  }
  else {
    uVar4 = (uVar12 & 0xff) + 3;
    uVar17 = uVar4 & 0x1fc;
    if (uVar17 * param_1 != 0) {
      memset(param_4,0,(ulong)(uVar17 * param_1) << 2);
    }
    uStack_70 = uVar12 >> 0xc & 0x637;
    uVar12 = uStack_70 - (uStack_70 >> 1 & 0xf1f1f1f1);
    uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333);
    uVar14 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101;
    uVar12 = uVar14 >> 0x18;
    if ((uVar14 >> 0x1a & 1) == 0) {
      piVar33 = (int *)0x0;
    }
    else {
      piVar33 = *(int **)((long)&PTR_DAT_047c5390 +
                         (((long)((ulong)uVar12 << 0x3d) >> 0x3d) << 3 ^ 0xffffffffffffffe0U));
    }
    iVar10 = uVar30 * 2;
    local_68 = uVar4 * 2;
    if (param_1 == 0) {
      uVar29 = 1;
      do {
        lVar20 = uVar29 * 3;
        uVar29 = (ulong)((int)uVar29 + 1);
      } while ((uint)piVar33[lVar20] < 9);
    }
    else {
      uVar29 = 0;
      do {
        piVar25 = piVar33 + uVar29 * 3;
        pfVar9 = (float *)(piVar25 + 2);
        puVar1 = (uint *)(piVar25 + 1);
        if (param_1 == 1) {
          uVar22 = 0;
        }
        else {
          iVar27 = 0;
          uVar24 = 0;
          uVar22 = 0;
          do {
            uVar4 = iVar27 + *piVar25;
            iVar3 = uVar30 + iVar27;
            iVar27 = iVar27 + iVar10;
            *(float *)((long)param_4 + (ulong)*puVar1 * 4 + uVar24 * 4) =
                 *(float *)((long)param_4 + (ulong)*puVar1 * 4 + uVar24 * 4) +
                 pfVar31[uVar4] * *pfVar9;
            uVar4 = uVar17 + (int)uVar24;
            uVar24 = (ulong)((int)uVar24 + (local_68 & 0x3f8));
            uVar22 = uVar22 + 2;
            *(float *)((long)param_4 + (ulong)*puVar1 * 4 + (ulong)uVar4 * 4) =
                 *(float *)((long)param_4 + (ulong)*puVar1 * 4 + (ulong)uVar4 * 4) +
                 pfVar31[(uint)(iVar3 + *piVar25)] * *pfVar9;
          } while (((ulong)param_1 & 0xfffffffe) != uVar22);
        }
        if ((param_1 & 1) != 0) {
          uVar4 = uVar17 * (int)uVar22;
          *(float *)((long)param_4 + (ulong)*puVar1 * 4 + (ulong)uVar4 * 4) =
               *(float *)((long)param_4 + (ulong)*puVar1 * 4 + (ulong)uVar4 * 4) +
               pfVar31[*piVar25 + uVar30 * (int)uVar22] * *pfVar9;
        }
        uVar29 = (ulong)((int)uVar29 + 1);
      } while ((uint)piVar33[uVar29 * 3] < 9);
    }
    local_74 = uVar12 + 3;
    __s = (void *)((long)pfVar31 - (ulong)(param_1 * (local_74 >> 2) * 0x10));
    uVar4 = local_74 & 0xc;
    uVar14 = uStack_70;
    uVar19 = local_68;
    if (uVar4 * param_1 != 0) {
      memset(__s,0,(ulong)(uVar4 * param_1) << 2);
      uVar14 = uStack_70;
      uVar19 = local_68;
    }
    if (param_1 == 0) {
      uVar29 = 1;
      do {
        lVar20 = uVar29 * 3;
        uVar29 = (ulong)((int)uVar29 + 1);
      } while (piVar33[lVar20] + 0x12U < 0x1b);
    }
    else {
      iVar27 = *piVar33;
      uVar29 = 0;
      do {
        uVar8 = piVar33[uVar29 * 3 + 1];
        fVar36 = (float)piVar33[uVar29 * 3 + 2];
        if (param_1 == 1) {
          uVar22 = 0;
        }
        else {
          uVar28 = 0;
          uVar22 = 0;
          uVar23 = iVar27 + 0x12U;
          do {
            uVar2 = uVar4 + uVar28;
            fVar37 = pfVar31[uVar30 + uVar23];
            *(float *)((long)__s + (ulong)uVar28 * 4 + (ulong)uVar8 * 4) =
                 *(float *)((long)__s + (ulong)uVar28 * 4 + (ulong)uVar8 * 4) +
                 fVar36 * pfVar31[uVar23];
            uVar22 = uVar22 + 2;
            uVar28 = uVar28 + (local_74 & 0x1fc) * 2;
            uVar23 = uVar23 + iVar10;
            *(float *)((long)__s + (ulong)uVar2 * 4 + (ulong)uVar8 * 4) =
                 *(float *)((long)__s + (ulong)uVar2 * 4 + (ulong)uVar8 * 4) + fVar36 * fVar37;
          } while (((ulong)param_1 & 0xfffffffe) != uVar22);
        }
        if ((param_1 & 1) != 0) {
          uVar28 = uVar4 * (int)uVar22;
          *(float *)((long)__s + (ulong)uVar28 * 4 + (ulong)uVar8 * 4) =
               *(float *)((long)__s + (ulong)uVar28 * 4 + (ulong)uVar8 * 4) +
               fVar36 * pfVar31[iVar27 + 0x12U + uVar30 * (int)uVar22];
        }
        uVar29 = (ulong)((int)uVar29 + 1);
        iVar27 = piVar33[uVar29 * 3];
      } while (iVar27 + 0x12U < 0x1b);
    }
    if ((param_1 != 0) && (uVar14 != 0)) {
      uVar29 = 0;
      uVar22 = 0;
      uVar14 = uVar12;
      if (uVar12 < 2) {
        uVar14 = 1;
      }
      uVar24 = (ulong)param_1;
      do {
        pfVar9 = (float *)((long)param_4 + uVar29 * 4);
        pfVar13 = (float *)((long)__s + uVar22 * 4);
        *pfVar9 = *pfVar9 + *pfVar13;
        if ((((1 < uVar12) && (pfVar9[1] = pfVar9[1] + pfVar13[1], uVar14 != 2)) &&
            (pfVar9[2] = pfVar9[2] + pfVar13[2], uVar14 != 3)) &&
           (((pfVar9[3] = pfVar9[3] + pfVar13[3], uVar14 != 4 &&
             (pfVar9[4] = pfVar9[4] + pfVar13[4], uVar14 != 5)) &&
            (pfVar9[5] = pfVar9[5] + pfVar13[5], uVar14 != 6)))) {
          pfVar9[6] = pfVar9[6] + pfVar13[6];
        }
        uVar24 = uVar24 - 1;
        uVar22 = (ulong)((int)uVar22 + uVar4);
        uVar29 = (ulong)((int)uVar29 + uVar17);
      } while (uVar24 != 0);
    }
    local_6c = local_6c & 0x3f800;
    if (local_6c < 0x2d800) {
      if (local_6c == 0x5000) {
        piVar33 = (int *)&UNK_03d98bb8;
      }
      else if (local_6c == 0x2d000) {
        piVar33 = (int *)&UNK_03d98c54;
      }
    }
    else if (local_6c == 0x2d800) {
      piVar33 = (int *)&UNK_03d98d20;
    }
    else if (local_6c == 0x2f000) {
      piVar33 = (int *)&UNK_03d98dc8;
    }
    else if (local_6c == 0x2f800) {
      piVar33 = &DAT_03d98e94;
    }
    if (param_1 == 0) {
      uVar29 = 1;
      do {
        lVar20 = uVar29 * 3;
        uVar29 = (ulong)((int)uVar29 + 1);
      } while (piVar33[lVar20] + 9U < 0x12);
    }
    else {
      uVar29 = 0;
      do {
        piVar26 = piVar33 + uVar29 * 3;
        pfVar9 = (float *)(piVar26 + 2);
        piVar25 = piVar26 + 1;
        if (param_1 == 1) {
          uVar22 = 0;
        }
        else {
          uVar24 = 0;
          uVar22 = 0;
          iVar27 = 9;
          do {
            uVar22 = uVar22 + 2;
            *(float *)((long)param_4 + (ulong)(*piVar25 + uVar12) * 4 + uVar24 * 4) =
                 *(float *)((long)param_4 + (ulong)(*piVar25 + uVar12) * 4 + uVar24 * 4) +
                 pfVar31[(uint)(iVar27 + *piVar26)] * *pfVar9;
            iVar3 = uVar30 + iVar27;
            iVar27 = iVar27 + iVar10;
            uVar4 = uVar17 + (int)uVar24;
            uVar24 = (ulong)((int)uVar24 + (uVar19 & 0x3f8));
            *(float *)((long)param_4 + (ulong)(*piVar25 + uVar12) * 4 + (ulong)uVar4 * 4) =
                 *(float *)((long)param_4 + (ulong)(*piVar25 + uVar12) * 4 + (ulong)uVar4 * 4) +
                 pfVar31[(uint)(iVar3 + *piVar26)] * *pfVar9;
          } while (((ulong)param_1 & 0xfffffffe) != uVar22);
        }
        if ((param_1 & 1) != 0) {
          uVar4 = uVar17 * (int)uVar22;
          *(float *)((long)param_4 + (ulong)(*piVar25 + uVar12) * 4 + (ulong)uVar4 * 4) =
               *(float *)((long)param_4 + (ulong)(*piVar25 + uVar12) * 4 + (ulong)uVar4 * 4) +
               pfVar31[*piVar26 + uVar30 * (int)uVar22 + 9] * *pfVar9;
        }
        uVar29 = (ulong)((int)uVar29 + 1);
      } while (piVar33[uVar29 * 3] + 9U < 0x12);
    }
  }
  return;
}


