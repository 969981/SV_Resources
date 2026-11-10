/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ea1d0; name: FUN_030ea1d0
 */


void FUN_030ea1d0(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 long *param_6,long *param_7,char param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float *pfVar11;
  float fVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  float unaff_w21;
  float *pfVar19;
  float *pfVar20;
  float unaff_w25;
  float *pfVar21;
  float unaff_w27;
  float unaff_w28;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_a0;
  
  pfVar21 = param_5 + -2;
  pfVar11 = param_4 + -2;
  if (param_8 == '\0') {
    if (param_2 != param_3) {
      unaff_w28 = *param_2;
      unaff_w27 = param_2[1];
    }
    if (param_5 != param_4) {
      unaff_w25 = 1.0 - param_5[-1];
      local_a0 = 1.0 - param_5[-2];
    }
    iVar15 = ((uint)((ulong)((long)pfVar21 - (long)pfVar11) >> 2) & 0xfffffffe) +
             (int)((ulong)((long)param_3 - (long)param_2) >> 3);
    if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) < iVar15) {
      FUN_030eb9b4(param_6,(long)iVar15);
    }
    iVar15 = ((uint)((ulong)((long)param_3 - (long)param_2) >> 2) & 0xfffffffe) +
             (int)((ulong)((long)pfVar21 - (long)pfVar11) >> 3);
    if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) < iVar15) {
      FUN_030eb9b4(param_7,(long)iVar15);
    }
    if (param_2 == param_3) {
      fVar12 = 0.0;
      fVar23 = 0.0;
    }
    else {
      fVar12 = 0.0;
      fVar23 = 0.0;
      if (param_5 != param_4) {
        fVar22 = -param_1;
        uVar18 = (uint)(param_1 < unaff_w28 - unaff_w25);
        if (unaff_w28 - unaff_w25 < fVar22) {
          uVar18 = 0xffffffff;
        }
        pfVar19 = pfVar21;
        while( true ) {
          while( true ) {
            while( true ) {
              pfVar20 = param_2;
              while (uVar18 == 0xffffffff) {
                pfVar21 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
                *(int *)(param_6 + 1) = (int)param_6[1] + 1;
                *pfVar21 = unaff_w28;
                if (unaff_w27 <= unaff_w25 + param_1) {
                  pfVar21[1] = unaff_w27;
                  pfVar21[2] = fVar23;
                  pfVar21[3] = -NAN;
                  unaff_w27 = unaff_w25;
                  if (pfVar20 + 2 == param_3) goto LAB_030eac18;
                  unaff_w28 = pfVar20[2];
                  unaff_w27 = pfVar20[3];
                  fVar23 = (float)((int)fVar23 + 1);
                  uVar18 = (uint)(param_1 < unaff_w28 - unaff_w25);
                  if (unaff_w28 - unaff_w25 < fVar22) {
                    uVar18 = 0xffffffff;
                  }
                  pfVar20 = pfVar20 + 2;
                }
                else {
                  uVar18 = 0;
                  pfVar21[1] = unaff_w25;
                  pfVar21[2] = fVar23;
                  pfVar21[3] = -NAN;
                  unaff_w28 = unaff_w25;
                }
              }
              param_2 = pfVar20;
              if (uVar18 == 1) break;
              uVar18 = (uint)(param_1 < unaff_w27 - local_a0);
              if (unaff_w27 - local_a0 < fVar22) {
                uVar18 = 0xffffffff;
              }
              if (uVar18 == 0xffffffff) {
                fVar8 = *(float *)(param_6 + 1);
                fVar24 = *(float *)(param_7 + 1);
                *(int *)(param_6 + 1) = (int)fVar8 + 1;
                pfVar21 = (float *)(*param_6 + (long)(int)fVar8 * 0x10);
                *pfVar21 = unaff_w28;
                pfVar21[1] = unaff_w27;
                pfVar21[2] = fVar23;
                pfVar21[3] = fVar24;
                pfVar21 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
                *(int *)(param_7 + 1) = (int)param_7[1] + 1;
                *pfVar21 = unaff_w25;
                pfVar21[1] = unaff_w27;
                pfVar21[2] = fVar12;
                pfVar21[3] = fVar8;
                if (pfVar20 + 2 == param_3) goto LAB_030eac18;
                fVar23 = (float)((int)fVar23 + 1);
                uVar18 = (uint)(unaff_w27 + param_1 < pfVar20[2]);
                param_2 = pfVar20 + 2;
                unaff_w28 = pfVar20[2];
                unaff_w25 = unaff_w27;
                unaff_w27 = pfVar20[3];
              }
              else if (uVar18 == 1) {
                fVar8 = *(float *)(param_6 + 1);
                fVar24 = *(float *)(param_7 + 1);
                *(int *)(param_6 + 1) = (int)fVar8 + 1;
                pfVar21 = (float *)(*param_6 + (long)(int)fVar8 * 0x10);
                *pfVar21 = unaff_w28;
                pfVar21[1] = local_a0;
                pfVar21[2] = fVar23;
                pfVar21[3] = fVar24;
                pfVar21 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
                *(int *)(param_7 + 1) = (int)param_7[1] + 1;
                pfVar21[2] = fVar12;
                pfVar21[3] = fVar8;
                *pfVar21 = unaff_w25;
                pfVar21[1] = local_a0;
                unaff_w28 = local_a0;
                if (pfVar19 == param_4) goto LAB_030eae38;
                pfVar21 = pfVar19 + -2;
                unaff_w25 = 1.0 - pfVar19[-1];
                uVar18 = -(uint)(local_a0 + param_1 < unaff_w25);
                pfVar19 = pfVar21;
                local_a0 = 1.0 - *pfVar21;
                fVar12 = (float)((int)fVar12 + 1);
              }
              else {
                fVar8 = *(float *)(param_6 + 1);
                fVar24 = *(float *)(param_7 + 1);
                *(int *)(param_6 + 1) = (int)fVar8 + 1;
                pfVar21 = (float *)(*param_6 + (long)(int)fVar8 * 0x10);
                *pfVar21 = unaff_w28;
                pfVar21[1] = unaff_w27;
                pfVar21[2] = fVar23;
                pfVar21[3] = fVar24;
                pfVar21 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
                *(int *)(param_7 + 1) = (int)param_7[1] + 1;
                param_2 = pfVar20 + 2;
                fVar23 = (float)((int)fVar23 + 1);
                *pfVar21 = unaff_w25;
                pfVar21[1] = local_a0;
                pfVar21[2] = fVar12;
                pfVar21[3] = fVar8;
                fVar12 = (float)((int)fVar12 + 1);
                pfVar21 = pfVar19 + -2;
                if (param_2 != param_3) {
                  unaff_w28 = pfVar20[2];
                  unaff_w27 = pfVar20[3];
                }
                if (pfVar19 == param_4) goto LAB_030eabb0;
                unaff_w25 = 1.0 - pfVar19[-1];
                local_a0 = 1.0 - pfVar19[-2];
                if (param_2 == param_3) {
                  goto LAB_030eac14;
                }
                uVar18 = (uint)(param_1 < unaff_w28 - unaff_w25);
                if (unaff_w28 - unaff_w25 < fVar22) {
                  uVar18 = 0xffffffff;
                }
                pfVar19 = pfVar21;
              }
            }
            lVar14 = param_7[1];
            *(int *)(param_7 + 1) = (int)lVar14 + 1;
            pfVar21 = (float *)(*param_7 + (long)(int)lVar14 * 0x10);
            *pfVar21 = unaff_w25;
            if (local_a0 <= unaff_w28 + param_1) break;
            uVar18 = 0;
            pfVar21[1] = unaff_w28;
            pfVar21[2] = fVar12;
            pfVar21[3] = -NAN;
            unaff_w25 = unaff_w28;
          }
          pfVar21[1] = local_a0;
          pfVar21[2] = fVar12;
          pfVar21[3] = -NAN;
          if (pfVar19 == param_4) break;
          pfVar21 = pfVar19 + -2;
          unaff_w25 = 1.0 - pfVar19[-1];
          uVar18 = (uint)(param_1 < unaff_w28 - unaff_w25);
          if (unaff_w28 - unaff_w25 < fVar22) {
            uVar18 = 0xffffffff;
          }
          pfVar19 = pfVar21;
          local_a0 = 1.0 - *pfVar21;
          fVar12 = (float)((int)fVar12 + 1);
        }
LAB_030eae38:
        fVar12 = (float)((int)fVar12 + 1);
        pfVar21 = pfVar11;
      }
    }
LAB_030eabb0:
    if (param_2 != param_3) {
      pfVar19 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
      *(int *)(param_6 + 1) = (int)param_6[1] + 1;
      *pfVar19 = unaff_w28;
      pfVar19[1] = unaff_w27;
      pfVar19[2] = fVar23;
      pfVar19[3] = -NAN;
      while( true ) {
        param_2 = param_2 + 2;
        if (param_2 == param_3) break;
        fVar23 = (float)((int)fVar23 + 1);
        lVar14 = param_6[1];
        fVar22 = *param_2;
        fVar24 = param_2[1];
        *(int *)(param_6 + 1) = (int)lVar14 + 1;
        pfVar19 = (float *)(*param_6 + (long)(int)lVar14 * 0x10);
        pfVar19[2] = fVar23;
        pfVar19[3] = -NAN;
        *pfVar19 = fVar22;
        pfVar19[1] = fVar24;
      }
    }
LAB_030eac14:
    unaff_w27 = unaff_w25;
    pfVar19 = pfVar21;
LAB_030eac18:
    if (pfVar19 != pfVar11) {
      pfVar21 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      *pfVar21 = unaff_w27;
      pfVar21[1] = local_a0;
      pfVar21[2] = fVar12;
      pfVar21[3] = -NAN;
      for (; pfVar19 != param_4; pfVar19 = pfVar19 + -2) {
        fVar12 = (float)((int)fVar12 + 1);
        fVar23 = pfVar19[-2];
        fVar22 = pfVar19[-1];
        pfVar21 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        pfVar21[2] = fVar12;
        pfVar21[3] = -NAN;
        *pfVar21 = 1.0 - fVar22;
        pfVar21[1] = 1.0 - fVar23;
      }
    }
  }
  else {
    if (param_2 != param_3) {
      unaff_w27 = *param_2;
      unaff_w28 = param_2[1];
    }
    if (param_5 != param_4) {
      unaff_w25 = 1.0 - param_5[-1];
      unaff_w21 = 1.0 - param_5[-2];
    }
    iVar15 = (int)((ulong)((long)param_3 - (long)param_2) >> 3) +
             ((uint)((ulong)((long)pfVar21 - (long)pfVar11) >> 2) & 0xfffffffe) + 2;
    if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) < iVar15) {
      FUN_030eb9b4(param_6,(long)iVar15);
    }
    iVar15 = ((int)((ulong)((long)param_3 - (long)param_2) >> 2) + 2U & 0xfffffffe) +
             (int)((ulong)((long)pfVar21 - (long)pfVar11) >> 3);
    if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) < iVar15) {
      FUN_030eb9b4(param_7,(long)iVar15);
    }
    fVar23 = 0.0;
    if ((param_2 != param_3) && (unaff_w28 <= param_1)) {
      fVar23 = 0.0;
      pfVar19 = param_2;
      do {
        lVar14 = param_6[1];
        *(int *)(param_6 + 1) = (int)lVar14 + 1;
        pfVar20 = (float *)(*param_6 + (long)(int)lVar14 * 0x10);
        *pfVar20 = unaff_w27;
        pfVar20[1] = unaff_w28;
        pfVar20[2] = fVar23;
        pfVar20[3] = -NAN;
        param_2 = pfVar19 + 2;
        unaff_w27 = *param_2;
        unaff_w28 = pfVar19[3];
        fVar23 = (float)((int)fVar23 + 1);
        if (param_3 + -2 == pfVar19) break;
        pfVar19 = param_2;
      } while (unaff_w28 <= param_1);
    }
    bVar10 = param_5 != param_4;
    fVar12 = 0.0;
    if ((bVar10) && (unaff_w21 <= param_1)) {
      fVar12 = 0.0;
      pfVar19 = pfVar21;
      do {
        pfVar21 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        *pfVar21 = unaff_w25;
        pfVar21[1] = unaff_w21;
        pfVar21[2] = fVar12;
        pfVar21[3] = -NAN;
        pfVar21 = pfVar19 + -2;
        bVar10 = param_4 != pfVar19;
        unaff_w21 = 1.0 - *pfVar21;
        unaff_w25 = 1.0 - pfVar19[-1];
        fVar12 = (float)((int)fVar12 + 1);
        if (param_4 == pfVar19) break;
        pfVar19 = pfVar21;
      } while (unaff_w21 <= param_1);
    }
    if (param_2 != param_3) {
      if (bVar10) {
        fVar22 = -param_1;
        if ((unaff_w27 <= fVar22) && (unaff_w25 <= fVar22)) {
          lVar14 = param_6[1];
          *(int *)(param_6 + 1) = (int)lVar14 + 1;
          pfVar19 = (float *)(*param_6 + (long)(int)lVar14 * 0x10);
          *pfVar19 = unaff_w27;
          pfVar19[1] = 0.0;
          pfVar19[2] = fVar23;
          pfVar19[3] = -NAN;
          pfVar19 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
          *(int *)(param_7 + 1) = (int)param_7[1] + 1;
          *pfVar19 = unaff_w25;
          pfVar19[1] = 0.0;
          unaff_w25 = 0.0;
          unaff_w27 = 0.0;
          pfVar19[2] = fVar12;
          pfVar19[3] = -NAN;
        }
        fVar24 = param_1 + 1.0;
        uVar18 = (uint)(param_1 < unaff_w27 - unaff_w25);
        if (unaff_w27 - unaff_w25 < fVar22) {
          uVar18 = 0xffffffff;
        }
        pfVar19 = param_2;
LAB_030ea44c:
        while( true ) {
          while( true ) {
            while( true ) {
              param_2 = pfVar19;
              while (uVar18 == 0xffffffff) {
                if (fVar24 < unaff_w25) goto LAB_030ea728;
                pfVar19 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
                *(int *)(param_6 + 1) = (int)param_6[1] + 1;
                *pfVar19 = unaff_w27;
                if (unaff_w28 <= unaff_w25 + param_1) {
                  pfVar19[1] = unaff_w28;
                  pfVar19[2] = fVar23;
                  pfVar19[3] = -NAN;
                  if (param_2 + 2 == param_3) goto LAB_030ea78c;
                  unaff_w27 = param_2[2];
                  unaff_w28 = param_2[3];
                  fVar23 = (float)((int)fVar23 + 1);
                  uVar18 = (uint)(param_1 < unaff_w27 - unaff_w25);
                  if (unaff_w27 - unaff_w25 < fVar22) {
                    uVar18 = 0xffffffff;
                  }
                  param_2 = param_2 + 2;
                }
                else {
                  uVar18 = 0;
                  pfVar19[1] = unaff_w25;
                  pfVar19[2] = fVar23;
                  pfVar19[3] = -NAN;
                  unaff_w27 = unaff_w25;
                }
              }
              pfVar19 = param_2;
              if (uVar18 != 1) break;
              if (fVar24 < unaff_w27) goto LAB_030ea728;
              lVar14 = param_7[1];
              *(int *)(param_7 + 1) = (int)lVar14 + 1;
              pfVar20 = (float *)(*param_7 + (long)(int)lVar14 * 0x10);
              *pfVar20 = unaff_w25;
              if (unaff_w21 <= unaff_w27 + param_1) {
                pfVar20[1] = unaff_w21;
                pfVar20[2] = fVar12;
                pfVar20[3] = -NAN;
                if (pfVar21 == param_4) goto LAB_030eae5c;
                pfVar20 = pfVar21 + -2;
                unaff_w25 = 1.0 - pfVar21[-1];
                uVar18 = (uint)(param_1 < unaff_w27 - unaff_w25);
                if (unaff_w27 - unaff_w25 < fVar22) {
                  uVar18 = 0xffffffff;
                }
                pfVar21 = pfVar20;
                unaff_w21 = 1.0 - *pfVar20;
                fVar12 = (float)((int)fVar12 + 1);
              }
              else {
                uVar18 = 0;
                pfVar20[1] = unaff_w27;
                pfVar20[2] = fVar12;
                pfVar20[3] = -NAN;
                unaff_w25 = unaff_w27;
              }
            }
            if ((fVar24 < unaff_w21) && (fVar24 < unaff_w28)) {
              fVar24 = *(float *)(param_6 + 1);
              fVar22 = *(float *)(param_7 + 1);
              *(int *)(param_6 + 1) = (int)fVar24 + 1;
              pfVar19 = (float *)(*param_6 + (long)(int)fVar24 * 0x10);
              *pfVar19 = unaff_w27;
              pfVar19[2] = fVar23;
              pfVar19[3] = fVar22;
              unaff_w27 = 1.0;
              pfVar19[1] = 1.0;
              pfVar19 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
              *(int *)(param_7 + 1) = (int)param_7[1] + 1;
              *pfVar19 = unaff_w25;
              pfVar19[1] = 1.0;
              unaff_w25 = 1.0;
              pfVar19[2] = fVar12;
              pfVar19[3] = fVar24;
              goto LAB_030ea728;
            }
            uVar18 = (uint)(param_1 < unaff_w28 - unaff_w21);
            if (unaff_w28 - unaff_w21 < fVar22) {
              uVar18 = 0xffffffff;
            }
            if (uVar18 != 0xffffffff) break;
            fVar9 = *(float *)(param_6 + 1);
            fVar8 = *(float *)(param_7 + 1);
            *(int *)(param_6 + 1) = (int)fVar9 + 1;
            pfVar19 = (float *)(*param_6 + (long)(int)fVar9 * 0x10);
            *pfVar19 = unaff_w27;
            pfVar19[1] = unaff_w28;
            pfVar19[2] = fVar23;
            pfVar19[3] = fVar8;
            pfVar19 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
            *(int *)(param_7 + 1) = (int)param_7[1] + 1;
            *pfVar19 = unaff_w25;
            pfVar19[1] = unaff_w28;
            pfVar19[2] = fVar12;
            pfVar19[3] = fVar9;
            unaff_w25 = unaff_w28;
            if (param_2 + 2 == param_3) goto LAB_030ea790;
            fVar23 = (float)((int)fVar23 + 1);
            uVar18 = (uint)(unaff_w28 + param_1 < param_2[2]);
            pfVar19 = param_2 + 2;
            unaff_w27 = param_2[2];
            unaff_w28 = param_2[3];
          }
          if (uVar18 != 1) break;
          fVar9 = *(float *)(param_6 + 1);
          fVar8 = *(float *)(param_7 + 1);
          *(int *)(param_6 + 1) = (int)fVar9 + 1;
          pfVar20 = (float *)(*param_6 + (long)(int)fVar9 * 0x10);
          *pfVar20 = unaff_w27;
          pfVar20[1] = unaff_w21;
          pfVar20[2] = fVar23;
          pfVar20[3] = fVar8;
          pfVar20 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
          *(int *)(param_7 + 1) = (int)param_7[1] + 1;
          pfVar20[2] = fVar12;
          pfVar20[3] = fVar9;
          *pfVar20 = unaff_w25;
          pfVar20[1] = unaff_w21;
          unaff_w27 = unaff_w21;
          if (pfVar21 == param_4) {
LAB_030eae5c:
            fVar12 = (float)((int)fVar12 + 1);
            pfVar21 = pfVar11;
            goto LAB_030ea728;
          }
          pfVar20 = pfVar21 + -2;
          unaff_w25 = 1.0 - pfVar21[-1];
          uVar18 = -(uint)(unaff_w21 + param_1 < unaff_w25);
          pfVar21 = pfVar20;
          unaff_w21 = 1.0 - *pfVar20;
          fVar12 = (float)((int)fVar12 + 1);
        }
        fVar9 = *(float *)(param_6 + 1);
        fVar8 = *(float *)(param_7 + 1);
        *(int *)(param_6 + 1) = (int)fVar9 + 1;
        pfVar19 = (float *)(*param_6 + (long)(int)fVar9 * 0x10);
        *pfVar19 = unaff_w27;
        pfVar19[1] = unaff_w28;
        pfVar19[2] = fVar23;
        pfVar19[3] = fVar8;
        pfVar20 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        pfVar19 = param_2 + 2;
        fVar23 = (float)((int)fVar23 + 1);
        *pfVar20 = unaff_w25;
        pfVar20[1] = unaff_w21;
        pfVar20[2] = fVar12;
        pfVar20[3] = fVar9;
        fVar12 = (float)((int)fVar12 + 1);
        pfVar20 = pfVar21 + -2;
        if (pfVar19 != param_3) {
          unaff_w27 = param_2[2];
          unaff_w28 = param_2[3];
        }
        if (pfVar21 == param_4) {
          param_2 = pfVar19;
          pfVar21 = pfVar20;
          goto LAB_030ea728;
        }
        unaff_w25 = 1.0 - pfVar21[-1];
        unaff_w21 = 1.0 - pfVar21[-2];
        if (pfVar19 != param_3) {
          uVar18 = (uint)(param_1 < unaff_w27 - unaff_w25);
          if (unaff_w27 - unaff_w25 < fVar22) {
            uVar18 = 0xffffffff;
          }
          pfVar21 = pfVar20;
          goto LAB_030ea44c;
        }
        pfVar21 = pfVar20;
      }
      else {
LAB_030ea728:
        if (param_2 != param_3) {
          pfVar19 = (float *)(*param_6 + (long)(int)param_6[1] * 0x10);
          *(int *)(param_6 + 1) = (int)param_6[1] + 1;
          *pfVar19 = unaff_w27;
          pfVar19[1] = unaff_w28;
          pfVar19[2] = fVar23;
          pfVar19[3] = -NAN;
          while (param_2 = param_2 + 2, param_2 != param_3) {
            fVar23 = (float)((int)fVar23 + 1);
            lVar14 = param_6[1];
            fVar22 = *param_2;
            fVar24 = param_2[1];
            *(int *)(param_6 + 1) = (int)lVar14 + 1;
            pfVar19 = (float *)(*param_6 + (long)(int)lVar14 * 0x10);
            pfVar19[2] = fVar23;
            pfVar19[3] = -NAN;
            *pfVar19 = fVar22;
            pfVar19[1] = fVar24;
          }
        }
LAB_030ea78c:
      }
    }
LAB_030ea790:
    if (pfVar21 != pfVar11) {
      pfVar11 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      *pfVar11 = unaff_w25;
      pfVar11[1] = unaff_w21;
      pfVar11[2] = fVar12;
      pfVar11[3] = -NAN;
      for (; pfVar21 != param_4; pfVar21 = pfVar21 + -2) {
        fVar12 = (float)((int)fVar12 + 1);
        fVar23 = pfVar21[-2];
        fVar22 = pfVar21[-1];
        pfVar11 = (float *)(*param_7 + (long)(int)param_7[1] * 0x10);
        *(int *)(param_7 + 1) = (int)param_7[1] + 1;
        pfVar11[2] = fVar12;
        pfVar11[3] = -NAN;
        *pfVar11 = 1.0 - fVar22;
        pfVar11[1] = 1.0 - fVar23;
      }
    }
  }
  uVar18 = *(uint *)(param_7 + 1);
  if (1 < (int)uVar18) {
    lVar16 = (ulong)uVar18 * 0x10;
    lVar13 = 0;
    lVar14 = 0;
    lVar17 = (ulong)uVar18 - 2;
    do {
      lVar16 = lVar16 + -0x10;
      puVar1 = (undefined8 *)(*param_7 + lVar13);
      puVar2 = (undefined8 *)(*param_7 + lVar16);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      lVar14 = lVar14 + 1;
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      lVar13 = lVar13 + 0x10;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      bVar10 = lVar14 < lVar17;
      lVar17 = lVar17 + -1;
    } while (bVar10);
    uVar18 = *(uint *)(param_7 + 1);
  }
  if (0 < (int)uVar18) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      puVar3 = (undefined4 *)(*param_7 + lVar13);
      lVar14 = lVar14 + 1;
      uVar4 = *puVar3;
      *puVar3 = puVar3[1];
      puVar3[1] = uVar4;
      *(float *)(*param_7 + lVar13) = 1.0 - *(float *)(*param_7 + lVar13);
      *(float *)(*param_7 + lVar13 + 4) = 1.0 - *(float *)(*param_7 + lVar13 + 4);
      lVar17 = *param_7 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(uint *)(lVar17 + 8) =
           ~*(uint *)(lVar17 + 8) + (int)((ulong)((long)param_5 - (long)param_4) >> 3);
    } while (lVar14 < (int)param_7[1]);
  }
  iVar15 = (int)param_6[1];
  if (0 < iVar15) {
    lVar14 = 0;
    lVar13 = 0xc;
    do {
      uVar18 = *(uint *)(*param_6 + lVar13);
      if (uVar18 != 0xffffffff) {
        *(uint *)(*param_6 + lVar13) = (int)param_7[1] + ~uVar18;
        iVar15 = (int)param_6[1];
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar14 < iVar15);
  }
  return;
}


