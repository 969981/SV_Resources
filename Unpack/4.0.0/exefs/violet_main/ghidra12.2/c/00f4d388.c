/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4d388; name: FUN_00f4d388
 */


void FUN_00f4d388(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char *local_58;
  
  puVar2 = PTR_DAT_047d5608;
  fVar18 = 0.0;
  piVar5 = (int *)param_2[1];
  fVar14 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "MinScale";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar12 = 0.0;
      fVar13 = 0.0;
      goto LAB_00f4eb30;
    }
    piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    if (*puVar7 < 7) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)0x0;
      if ((ulong)puVar7[3] != 0) {
        puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
        piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    if (4 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      if (uVar6 != 0) {
        fVar12 = 0.0;
        fVar13 = 0.0;
        fVar14 = 0.0;
        if ((int)*(char *)((long)piVar9 + uVar6) - 0xfU < 2) {
          if (*puVar7 < 0xb) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((ulong)puVar7[5] != 0) {
              uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
            }
          }
          piVar9 = (int *)param_2[2];
          if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar11 == 0)) {
            lVar10 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar9 + uVar11);
            lVar10 = (long)puVar4 + (ulong)*puVar4;
          }
          piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar7[3]) +
                          (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[3]));
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
             (uVar11 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar11 == 0)) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (ulong)*(uint *)((long)piVar5 + uVar11);
          }
          puVar4 = (uint *)(lVar10 + uVar11 * 4 + 4);
          piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
          lVar10 = *param_2 + uVar6;
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "x";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar12 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar12 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar12 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar12 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "y";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar13 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar13 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar13 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar13 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "z";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
LAB_00f4eb30:
            fVar14 = 0.0;
          }
          else {
            piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
              }
              fVar14 = *(float *)(lVar10 + uVar6);
            }
            else {
              if ((uVar1 < 0xf) || ((ulong)puVar7[7] == 0)) goto LAB_00f4eb30;
              fVar14 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
  }
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  param_1[5] = (ulong)(uint)fVar14;
  param_1[4] = CONCAT44(fVar13,fVar12);
  piVar5 = (int *)param_2[1];
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "MaxScale";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar15 = 0.0;
      fVar16 = 0.0;
      goto LAB_00f4eb40;
    }
    piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    if (*puVar7 < 7) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)0x0;
      if ((ulong)puVar7[3] != 0) {
        puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
        piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    if (4 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      if (uVar6 != 0) {
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        if ((int)*(char *)((long)piVar9 + uVar6) - 0xfU < 2) {
          if (*puVar7 < 0xb) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((ulong)puVar7[5] != 0) {
              uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
            }
          }
          piVar9 = (int *)param_2[2];
          if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar11 == 0)) {
            lVar10 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar9 + uVar11);
            lVar10 = (long)puVar4 + (ulong)*puVar4;
          }
          piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar7[3]) +
                          (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[3]));
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
             (uVar11 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar11 == 0)) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (ulong)*(uint *)((long)piVar5 + uVar11);
          }
          puVar4 = (uint *)(lVar10 + uVar11 * 4 + 4);
          piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
          lVar10 = *param_2 + uVar6;
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "x";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar15 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar15 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar15 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar15 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "y";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar16 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar16 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar16 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar16 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "z";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
LAB_00f4eb40:
            fVar17 = 0.0;
          }
          else {
            piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
              }
              fVar17 = *(float *)(lVar10 + uVar6);
            }
            else {
              if ((uVar1 < 0xf) || ((ulong)puVar7[7] == 0)) goto LAB_00f4eb40;
              fVar17 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
  }
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  param_1[7] = (ulong)(uint)fVar17;
  param_1[6] = CONCAT44(fVar16,fVar15);
  piVar5 = (int *)param_2[1];
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "MinPos";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar12 = 0.0;
      fVar13 = 0.0;
      goto LAB_00f4eb50;
    }
    piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    if (*puVar7 < 7) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)0x0;
      if ((ulong)puVar7[3] != 0) {
        puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
        piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    if (4 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      if (uVar6 != 0) {
        fVar12 = 0.0;
        fVar13 = 0.0;
        fVar14 = 0.0;
        if ((int)*(char *)((long)piVar9 + uVar6) - 0xfU < 2) {
          if (*puVar7 < 0xb) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((ulong)puVar7[5] != 0) {
              uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
            }
          }
          piVar9 = (int *)param_2[2];
          if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar11 == 0)) {
            lVar10 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar9 + uVar11);
            lVar10 = (long)puVar4 + (ulong)*puVar4;
          }
          piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar7[3]) +
                          (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[3]));
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
             (uVar11 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar11 == 0)) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (ulong)*(uint *)((long)piVar5 + uVar11);
          }
          puVar4 = (uint *)(lVar10 + uVar11 * 4 + 4);
          piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
          lVar10 = *param_2 + uVar6;
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "x";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar12 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar12 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar12 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar12 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "y";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar13 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar13 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar13 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar13 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "z";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
LAB_00f4eb50:
            fVar14 = 0.0;
          }
          else {
            piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
              }
              fVar14 = *(float *)(lVar10 + uVar6);
            }
            else {
              if ((uVar1 < 0xf) || ((ulong)puVar7[7] == 0)) goto LAB_00f4eb50;
              fVar14 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
  }
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  param_1[1] = (ulong)(uint)fVar14;
  *param_1 = CONCAT44(fVar13,fVar12);
  piVar5 = (int *)param_2[1];
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "MaxPos";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar15 = 0.0;
      fVar16 = 0.0;
      goto LAB_00f4eb60;
    }
    piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    if (*puVar7 < 7) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)0x0;
      if ((ulong)puVar7[3] != 0) {
        puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
        piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    if (4 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
      uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      if (uVar6 != 0) {
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        if ((int)*(char *)((long)piVar9 + uVar6) - 0xfU < 2) {
          if (*puVar7 < 0xb) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if ((ulong)puVar7[5] != 0) {
              uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
            }
          }
          piVar9 = (int *)param_2[2];
          if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
             (uVar11 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar11 == 0)) {
            lVar10 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar9 + uVar11);
            lVar10 = (long)puVar4 + (ulong)*puVar4;
          }
          piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar7[3]) +
                          (ulong)*(uint *)((long)piVar5 + (ulong)puVar7[3]));
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
             (uVar11 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar11 == 0)) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (ulong)*(uint *)((long)piVar5 + uVar11);
          }
          puVar4 = (uint *)(lVar10 + uVar11 * 4 + 4);
          piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
          lVar10 = *param_2 + uVar6;
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "x";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar15 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar15 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar15 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar15 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "y";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
            fVar16 = 0.0;
          }
          else {
            piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar9 - (long)*piVar9);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar9 + (ulong)puVar7[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar9 + (ulong)puVar7[5]);
              }
              fVar16 = *(float *)(lVar10 + uVar6);
            }
            else {
              fVar16 = 0.0;
              if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                fVar16 = (float)*(double *)((long)piVar9 + (ulong)puVar7[7]);
              }
            }
          }
          if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
             (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = (uint *)((long)piVar5 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          }
          local_58 = "z";
          puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar4 == (uint *)0x0) {
LAB_00f4eb60:
            fVar17 = 0.0;
          }
          else {
            piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
                piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
                uVar6 = 0;
              }
              else {
                uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
              }
              fVar17 = *(float *)(lVar10 + uVar6);
            }
            else {
              if ((uVar1 < 0xf) || ((ulong)puVar7[7] == 0)) goto LAB_00f4eb60;
              fVar17 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
  }
  fVar12 = 0.0;
  param_1[3] = (ulong)(uint)fVar17;
  param_1[2] = CONCAT44(fVar16,fVar15);
  piVar5 = (int *)param_2[1];
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "MinStrength";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar12 = 0.0;
    }
    else {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        fVar12 = *(float *)(*param_2 + uVar6);
      }
      else {
        fVar12 = 0.0;
        if (0xe < uVar1) {
          fVar12 = 0.0;
          if ((ulong)puVar7[7] != 0) {
            fVar12 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
          }
        }
      }
    }
  }
  *(float *)(param_1 + 8) = fVar12;
  piVar5 = (int *)param_2[1];
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "MaxStrength";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 != (uint *)0x0) {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        fVar18 = *(float *)(*param_2 + uVar6);
      }
      else if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
        fVar18 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
      }
    }
  }
  *(float *)((long)param_1 + 0x44) = fVar18;
  piVar5 = (int *)param_2[1];
  bVar3 = false;
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "AdaptJointRotate";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
LAB_00f4ebec:
      bVar3 = false;
    }
    else {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 1) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        bVar3 = *(char *)(*param_2 + uVar6) == '\0';
      }
      else {
        if ((uVar1 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00f4ebec;
        bVar3 = *(long *)((long)piVar5 + (ulong)puVar7[6]) == 0;
      }
      bVar3 = !bVar3;
    }
  }
  *(bool *)(param_1 + 9) = bVar3;
  piVar5 = (int *)param_2[1];
  bVar3 = false;
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "RotateLockX";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
LAB_00f4ec10:
      bVar3 = false;
    }
    else {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 1) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        bVar3 = *(char *)(*param_2 + uVar6) == '\0';
      }
      else {
        if ((uVar1 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00f4ec10;
        bVar3 = *(long *)((long)piVar5 + (ulong)puVar7[6]) == 0;
      }
      bVar3 = !bVar3;
    }
  }
  *(bool *)((long)param_1 + 0x49) = bVar3;
  piVar5 = (int *)param_2[1];
  bVar3 = false;
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)piVar5 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_58 = "RotateLockY";
    puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
LAB_00f4ec34:
      bVar3 = false;
    }
    else {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 1) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        bVar3 = *(char *)(*param_2 + uVar6) == '\0';
      }
      else {
        if ((uVar1 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00f4ec34;
        bVar3 = *(long *)((long)piVar5 + (ulong)puVar7[6]) == 0;
      }
      bVar3 = !bVar3;
    }
  }
  *(bool *)((long)param_1 + 0x4a) = bVar3;
  piVar5 = (int *)param_2[1];
  bVar3 = false;
  if (piVar5 == (int *)0x0) goto LAB_00f4e824;
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)((long)piVar5 + uVar6);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  }
  local_58 = "RotateLockZ";
  puVar4 = bsearch(&local_58,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar4 == (uint *)0x0) {
LAB_00f4ec58:
    bVar3 = false;
  }
  else {
    piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
    uVar1 = *puVar7;
    if (uVar1 < 7) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)0x0;
      if ((ulong)puVar7[3] != 0) {
        puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
        piVar9 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar6 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (long)*(char *)((long)piVar9 + uVar6) & 0xffffffff;
    }
    if (*(long *)(puVar2 + uVar6 * 8) == 1) {
      if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
      }
      bVar3 = *(char *)(*param_2 + uVar6) == '\0';
    }
    else {
      if ((uVar1 < 0xd) || ((ulong)puVar7[6] == 0)) goto LAB_00f4ec58;
      bVar3 = *(long *)((long)piVar5 + (ulong)puVar7[6]) == 0;
    }
    bVar3 = !bVar3;
  }
LAB_00f4e824:
  *(bool *)((long)param_1 + 0x4b) = bVar3;
  return;
}


