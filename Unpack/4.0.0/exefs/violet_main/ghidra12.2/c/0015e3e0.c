/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0015e3e0; name: FUN_0015e3e0
 */


/* WARNING: Control flow encountered bad instruction data */

int FUN_0015e3e0(int *param_1,int param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_88 [8];
  float afStack_80 [2];
  ulong local_78;
  
  if ((param_4 < 1) &&
     (iVar3 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0xda,
                           "normalize_counts_v6","from_sum > 0"), iVar3 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)param_5 < 1) {
    iVar3 = 0;
    afStack_80[1] = 0.0;
  }
  else {
    afStack_80[1] = 0.0;
    iVar3 = 0;
    uVar6 = (ulong)param_5;
    uVar18 = *param_3;
    puVar2 = param_3;
    piVar17 = param_1;
    while( true ) {
      iVar9 = 0;
      if (uVar18 != 0) {
        dVar19 = ((double)param_2 / (double)param_4) * (double)uVar18;
        iVar9 = (int)dVar19;
        iVar9 = (uint)((double)(uint)((iVar9 + 1) * iVar9) < dVar19 * dVar19) + iVar9;
        iVar3 = iVar9 + iVar3;
        afStack_80[1] = (float)((int)afStack_80[1] + 1);
      }
      puVar2 = puVar2 + 1;
      uVar6 = uVar6 - 1;
      *piVar17 = iVar9;
      if (uVar6 == 0) break;
      uVar18 = *puVar2;
      piVar17 = piVar17 + 1;
    }
  }
  param_2 = param_2 - iVar3;
  if (param_2 == 0) {
    return (int)afStack_80[1];
  }
  lVar16 = -((-(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3) + 0xf &
            0xfffffffffffffff0);
  piVar17 = (int *)((long)afStack_80 + lVar16);
  if (param_2 < 1) {
    if (0 < (int)param_5) {
      uVar4 = 0;
      uVar6 = 0;
      uVar18 = *param_3;
      while( true ) {
        if (uVar18 != 0) {
          uVar1 = param_1[uVar4];
          if (1 < uVar1) {
            if ((int)uVar1 < 0x20) {
              fVar20 = *(float *)(&DAT_03cb6e64 + (long)(int)uVar1 * 4);
            }
            else {
              fVar20 = 1.0 / (float)(int)uVar1;
              fVar20 = fVar20 * fVar20 * -0.5 - fVar20;
            }
            lVar12 = uVar6 * 2;
            uVar6 = uVar6 + 1;
            piVar17[lVar12] = (int)uVar4;
            (piVar17 + lVar12)[1] = (int)(fVar20 * (float)uVar18);
          }
        }
        uVar4 = uVar4 + 1;
        if (param_5 == uVar4) break;
        uVar18 = param_3[uVar4];
      }
      goto LAB_0015e604;
    }
  }
  else if (0 < (int)param_5) {
    uVar4 = 0;
    uVar6 = 0;
    uVar18 = *param_3;
    while( true ) {
      if (uVar18 != 0) {
        iVar3 = param_1[uVar4];
        if (iVar3 < 0x20) {
          fVar20 = *(float *)(&DAT_03cb6de4 + (long)iVar3 * 4);
        }
        else {
          fVar20 = 1.0 / (float)iVar3;
          fVar20 = fVar20 + fVar20 * fVar20 * -0.5;
        }
        lVar12 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        piVar17[lVar12] = (int)uVar4;
        (piVar17 + lVar12)[1] = (int)(fVar20 * (float)uVar18);
      }
      uVar4 = uVar4 + 1;
      if (param_5 == uVar4) break;
      uVar18 = param_3[uVar4];
    }
LAB_0015e604:
    lVar15 = uVar6 * 8;
    lVar12 = (long)(uVar6 << 3) >> 3;
    piVar5 = piVar17 + uVar6 * 2;
    if (0xf < lVar15) {
      uVar4 = uVar6 >> 1 & 0xfffffffffffffff;
      do {
        uVar4 = uVar4 - 1;
        uVar10 = uVar4 * 2 | 1;
        if ((long)uVar10 < lVar12) {
          uVar11 = uVar4;
          do {
            uVar8 = uVar10 + 1;
            if ((long)uVar8 < lVar12) {
              if ((float)piVar17[uVar8 * 2 + 1] <= (float)piVar17[uVar10 * 2 + 1]) {
                uVar8 = uVar10;
              }
            }
            else {
              uVar8 = uVar10;
            }
            if ((float)piVar17[uVar8 * 2 + 1] < (float)piVar17[uVar11 * 2 + 1]) break;
            uVar13 = *(undefined8 *)(piVar17 + uVar11 * 2);
            *(undefined8 *)(piVar17 + uVar11 * 2) = *(undefined8 *)(piVar17 + uVar8 * 2);
            *(undefined8 *)(piVar17 + uVar8 * 2) = uVar13;
            uVar10 = uVar8 << 1 | 1;
            uVar11 = uVar8;
          } while ((long)uVar10 < lVar12);
        }
      } while (0 < (long)uVar4);
    }
    goto LAB_0015e6c4;
  }
  lVar12 = 0;
  lVar15 = 0;
  uVar6 = 0;
  piVar5 = piVar17;
LAB_0015e6c4:
  if (param_2 < 1) {
    do {
      if (((long)uVar6 < 1) &&
         (iVar3 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x174,
                               "normalize_counts_v6","heap_size > 0"), iVar3 != 0)) {
        halt_baddata();
      }
      iVar3 = *piVar17;
      lVar12 = (long)(uVar6 << 3) >> 3;
      if ((long)(uVar6 * 8) < 9) {
        uVar4 = 0;
      }
      else {
        uVar11 = 1;
        uVar10 = 2;
        uVar8 = 0;
        uVar4 = uVar11;
        if (2 < lVar12) goto LAB_0015e940;
        while( true ) {
          uVar11 = uVar4 << 1 | 1;
          *(undefined8 *)(piVar17 + uVar8 * 2) = *(undefined8 *)(piVar17 + uVar4 * 2);
          if (lVar12 <= (long)uVar11) break;
          uVar10 = uVar11 + 1;
          uVar8 = uVar4;
          uVar4 = uVar11;
          if ((long)uVar10 < lVar12) {
LAB_0015e940:
            uVar4 = uVar10;
            if ((float)piVar17[uVar10 * 2 + 1] <= (float)piVar17[uVar11 * 2 + 1]) {
              uVar4 = uVar11;
            }
          }
        }
      }
      if (((long)uVar4 < lVar12 + -1) &&
         (*(undefined8 *)(piVar17 + uVar4 * 2) = *(undefined8 *)(piVar17 + (lVar12 + -1) * 2),
         0 < (long)(uVar4 * 8))) {
        uVar4 = uVar4 & 0x1fffffffffffffff;
        do {
          lVar12 = uVar4 - 1;
          uVar10 = lVar12 >> 1;
          if ((float)piVar17[uVar4 * 2 + 1] <= (float)piVar17[uVar10 * 2 + 1]) break;
          uVar13 = *(undefined8 *)(piVar17 + uVar10 * 2);
          *(undefined8 *)(piVar17 + uVar10 * 2) = *(undefined8 *)(piVar17 + uVar4 * 2);
          *(undefined8 *)(piVar17 + uVar4 * 2) = uVar13;
          uVar4 = uVar10;
        } while (1 < lVar12);
      }
      uVar18 = param_1[iVar3] - 1;
      param_1[iVar3] = uVar18;
      param_2 = param_2 + 1;
      uVar4 = uVar6 - 1;
      if (1 < uVar18) {
        if ((int)uVar18 < 0x20) {
          fVar20 = *(float *)(&DAT_03cb6e64 + (long)(int)uVar18 * 4);
        }
        else {
          fVar20 = 1.0 / (float)(int)uVar18;
          fVar20 = fVar20 * fVar20 * -0.5 - fVar20;
        }
        uVar18 = param_3[iVar3];
        piVar17[(uVar6 - 1) * 2] = iVar3;
        fVar21 = (float)NEON_ucvtf(uVar18);
        (piVar17 + (uVar6 - 1) * 2)[1] = (int)(fVar20 * fVar21);
        if (0 < (long)(auStack_88 + ((uVar6 * 8 + lVar16) - (long)piVar17))) {
          uVar4 = (ulong)(auStack_88 + ((uVar6 * 8 + lVar16) - (long)piVar17)) >> 3;
          do {
            lVar12 = uVar4 - 1;
            uVar10 = lVar12 >> 1;
            if ((float)piVar17[uVar4 * 2 + 1] <= (float)piVar17[uVar10 * 2 + 1]) break;
            uVar13 = *(undefined8 *)(piVar17 + uVar10 * 2);
            *(undefined8 *)(piVar17 + uVar10 * 2) = *(undefined8 *)(piVar17 + uVar4 * 2);
            *(undefined8 *)(piVar17 + uVar4 * 2) = uVar13;
            uVar4 = uVar10;
          } while (1 < lVar12);
        }
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (param_2 != 0);
  }
  else {
    uVar4 = (long)piVar5 + (-8 - (long)piVar17);
    lVar16 = lVar12 + -1;
    local_78 = uVar4 >> 3;
    if (0 < (long)uVar6) {
      iVar3 = *piVar17;
      if (8 < lVar15) goto LAB_0015e724;
LAB_0015e780:
      uVar10 = 0;
      do {
        if (((long)uVar10 < lVar16) &&
           (*(undefined8 *)(piVar17 + uVar10 * 2) = *(undefined8 *)(piVar17 + lVar16 * 2),
           0 < (long)(uVar10 * 8))) {
          uVar10 = uVar10 & 0x1fffffffffffffff;
          do {
            lVar14 = uVar10 - 1;
            uVar11 = lVar14 >> 1;
            if ((float)piVar17[uVar10 * 2 + 1] <= (float)piVar17[uVar11 * 2 + 1]) break;
            uVar13 = *(undefined8 *)(piVar17 + uVar11 * 2);
            *(undefined8 *)(piVar17 + uVar11 * 2) = *(undefined8 *)(piVar17 + uVar10 * 2);
            *(undefined8 *)(piVar17 + uVar10 * 2) = uVar13;
            uVar10 = uVar11;
          } while (1 < lVar14);
        }
        iVar9 = param_1[iVar3] + 1;
        param_1[iVar3] = iVar9;
        if (iVar9 < 0x20) {
          fVar20 = *(float *)(&DAT_03cb6de4 + (long)iVar9 * 4);
        }
        else {
          fVar20 = 1.0 / (float)iVar9;
          fVar20 = fVar20 + fVar20 * fVar20 * -0.5;
        }
        param_2 = param_2 + -1;
        fVar21 = (float)NEON_ucvtf(param_3[iVar3]);
        piVar17[uVar6 * 2 + -2] = iVar3;
        piVar17[uVar6 * 2 + -1] = (int)(fVar20 * fVar21);
        if (0 < (long)uVar4) {
          uVar10 = local_78;
          do {
            lVar14 = uVar10 - 1;
            uVar11 = lVar14 >> 1;
            if ((float)piVar17[uVar10 * 2 + 1] <= (float)piVar17[uVar11 * 2 + 1]) break;
            uVar13 = *(undefined8 *)(piVar17 + uVar11 * 2);
            *(undefined8 *)(piVar17 + uVar11 * 2) = *(undefined8 *)(piVar17 + uVar10 * 2);
            *(undefined8 *)(piVar17 + uVar10 * 2) = uVar13;
            uVar10 = uVar11;
          } while (1 < lVar14);
        }
        if (param_2 == 0) {
          return (int)afStack_80[1];
        }
        iVar3 = *piVar17;
        if (lVar15 < 9) goto LAB_0015e780;
LAB_0015e724:
        uVar8 = 1;
        uVar11 = 2;
        uVar7 = 0;
        uVar10 = uVar8;
        if (2 < lVar12) goto LAB_0015e764;
        while( true ) {
          uVar8 = uVar10 << 1 | 1;
          *(undefined8 *)(piVar17 + uVar7 * 2) = *(undefined8 *)(piVar17 + uVar10 * 2);
          if (lVar12 <= (long)uVar8) break;
          uVar11 = uVar8 + 1;
          uVar7 = uVar10;
          uVar10 = uVar8;
          if ((long)uVar11 < lVar12) {
LAB_0015e764:
            uVar10 = uVar11;
            if ((float)piVar17[uVar11 * 2 + 1] <= (float)piVar17[uVar8 * 2 + 1]) {
              uVar10 = uVar8;
            }
          }
        }
      } while( true );
    }
    do {
      iVar3 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x15b,
                           "normalize_counts_v6","heap_size > 0");
      if (iVar3 != 0) {
        halt_baddata();
      }
      iVar3 = *piVar17;
      if (lVar15 < 9) {
        uVar10 = 0;
      }
      else {
        uVar8 = 1;
        uVar11 = 2;
        uVar7 = 0;
        uVar10 = uVar8;
        if (2 < lVar12) goto LAB_0015eb14;
        while( true ) {
          uVar8 = uVar10 << 1 | 1;
          *(undefined8 *)(piVar17 + uVar7 * 2) = *(undefined8 *)(piVar17 + uVar10 * 2);
          if (lVar12 <= (long)uVar8) break;
          uVar11 = uVar8 + 1;
          uVar7 = uVar10;
          uVar10 = uVar8;
          if ((long)uVar11 < lVar12) {
LAB_0015eb14:
            uVar10 = uVar11;
            if ((float)piVar17[uVar11 * 2 + 1] <= (float)piVar17[uVar8 * 2 + 1]) {
              uVar10 = uVar8;
            }
          }
        }
      }
      if (((long)uVar10 < lVar16) &&
         (*(undefined8 *)(piVar17 + uVar10 * 2) = *(undefined8 *)(piVar17 + lVar16 * 2),
         0 < (long)(uVar10 * 8))) {
        uVar10 = uVar10 & 0x1fffffffffffffff;
        do {
          lVar14 = uVar10 - 1;
          uVar11 = lVar14 >> 1;
          if ((float)piVar17[uVar10 * 2 + 1] <= (float)piVar17[uVar11 * 2 + 1]) break;
          uVar13 = *(undefined8 *)(piVar17 + uVar11 * 2);
          *(undefined8 *)(piVar17 + uVar11 * 2) = *(undefined8 *)(piVar17 + uVar10 * 2);
          *(undefined8 *)(piVar17 + uVar10 * 2) = uVar13;
          uVar10 = uVar11;
        } while (1 < lVar14);
      }
      iVar9 = param_1[iVar3] + 1;
      param_1[iVar3] = iVar9;
      if (iVar9 < 0x20) {
        fVar20 = *(float *)(&DAT_03cb6de4 + (long)iVar9 * 4);
      }
      else {
        fVar20 = 1.0 / (float)iVar9;
        fVar20 = fVar20 + fVar20 * fVar20 * -0.5;
      }
      param_2 = param_2 + -1;
      fVar21 = (float)NEON_ucvtf(param_3[iVar3]);
      piVar17[uVar6 * 2 + -2] = iVar3;
      piVar17[uVar6 * 2 + -1] = (int)(fVar20 * fVar21);
      if (0 < (long)uVar4) {
        uVar10 = local_78;
        do {
          lVar14 = uVar10 - 1;
          uVar11 = lVar14 >> 1;
          if ((float)piVar17[uVar10 * 2 + 1] <= (float)piVar17[uVar11 * 2 + 1]) break;
          uVar13 = *(undefined8 *)(piVar17 + uVar11 * 2);
          *(undefined8 *)(piVar17 + uVar11 * 2) = *(undefined8 *)(piVar17 + uVar10 * 2);
          *(undefined8 *)(piVar17 + uVar10 * 2) = uVar13;
          uVar10 = uVar11;
        } while (1 < lVar14);
      }
    } while (param_2 != 0);
  }
  return (int)afStack_80[1];
}


