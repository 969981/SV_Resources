/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f9670; name: FUN_033f9670
 */


void FUN_033f9670(undefined4 *param_1,long *param_2)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  switch(*param_1) {
  case 1:
    bVar2 = *(byte *)(param_2 + 1);
    if (bVar2 != 0) {
      uVar3 = *(ushort *)((long)param_2 + 0x12);
      fVar9 = 1.0 / (float)uVar3;
      uVar7 = 0;
      do {
        fVar8 = 0.0;
        if (-37.0 <= (float)param_1[1] * -0.01) {
          uVar4 = (uint)((float)param_1[1] * -278663.5 + 1.0653532e+09);
          fVar8 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar8 = (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar4 & 0xff800000);
        }
        fVar10 = 0.0;
        if (-37.0 <= (float)param_1[2] * -0.01) {
          uVar4 = (uint)((float)param_1[2] * -278663.5 + 1.0653532e+09);
          fVar10 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar4 & 0xff800000);
        }
        if (uVar3 != 0) {
          pfVar1 = (float *)(*param_2 + uVar7 * *(ushort *)(param_2 + 2) * 4);
          fVar8 = fVar8 - fVar10;
          fVar13 = ((float)param_1[6] * 0.003333333 + 0.6666666) * (float)param_1[4];
          fVar12 = ((float)param_1[5] * 0.003333333 + 0.6666666) * (float)param_1[3] - fVar13;
          pfVar5 = pfVar1;
          do {
            fVar11 = *pfVar5 * fVar13;
            fVar13 = fVar13 + fVar12 * fVar9;
            fVar15 = ABS(fVar11);
            fVar17 = fVar15 * -3.0 + 2.0;
            fVar14 = 1.0;
            if (fVar15 <= 0.6666666) {
              fVar14 = fVar11;
            }
            if (fVar15 <= 0.6666666) {
              fVar14 = -(fVar17 * fVar17 * 0.3333333) - -0.99999994;
            }
            if (fVar15 <= 0.3333333) {
              fVar14 = fVar15 + fVar15;
            }
            if (fVar11 <= 0.0) {
              fVar14 = -fVar14;
            }
            fVar14 = fVar14 * fVar10;
            fVar10 = fVar10 + fVar8 * fVar9;
            pfVar6 = pfVar5 + 1;
            *pfVar5 = fVar14;
            pfVar5 = pfVar6;
          } while (pfVar6 < pfVar1 + uVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != bVar2);
    }
    break;
  case 2:
    bVar2 = *(byte *)(param_2 + 1);
    if (bVar2 != 0) {
      uVar3 = *(ushort *)((long)param_2 + 0x12);
      fVar9 = 1.0 / (float)uVar3;
      uVar7 = 0;
      do {
        fVar10 = (float)param_1[4];
        fVar8 = 0.0;
        if (-37.0 <= (float)param_1[1] * -0.01) {
          uVar4 = (uint)((float)param_1[1] * -278663.5 + 1.0653532e+09);
          fVar8 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar8 = (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar4 & 0xff800000);
        }
        fVar12 = 0.0;
        if (-37.0 <= (float)param_1[2] * -0.01) {
          uVar4 = (uint)((float)param_1[2] * -278663.5 + 1.0653532e+09);
          fVar12 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar12 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar4 & 0xff800000);
        }
        if (uVar3 != 0) {
          fVar13 = (float)param_1[3] - fVar10;
          fVar8 = fVar8 - fVar12;
          pfVar1 = (float *)(*param_2 + uVar7 * *(ushort *)(param_2 + 2) * 4);
          pfVar5 = pfVar1;
          do {
            fVar11 = ABS(*pfVar5 * fVar10);
            fVar14 = 0.0;
            if (fVar11 <= 37.0) {
              uVar4 = (uint)(fVar11 * -12102203.0 + 1.0653532e+09);
              fVar14 = (float)(uVar4 & 0x7fffff | 0x3f800000);
              fVar14 = (fVar14 * (fVar14 * 0.32518977 + 0.020805772) + 0.65304345) *
                       (float)(uVar4 & 0xff800000);
            }
            fVar11 = 1.0 - fVar14;
            if (0.0 <= *pfVar5 * fVar10) {
              fVar11 = -(1.0 - fVar14);
            }
            fVar11 = fVar11 * fVar12;
            fVar10 = fVar10 + fVar13 * fVar9;
            fVar12 = fVar12 + fVar8 * fVar9;
            pfVar6 = pfVar5 + 1;
            *pfVar5 = fVar11;
            pfVar5 = pfVar6;
          } while (pfVar6 < pfVar1 + uVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != bVar2);
    }
    break;
  case 3:
    bVar2 = *(byte *)(param_2 + 1);
    if (bVar2 != 0) {
      uVar3 = *(ushort *)((long)param_2 + 0x12);
      fVar9 = 1.0 / (float)uVar3;
      uVar7 = 0;
      do {
        fVar10 = (float)param_1[4];
        fVar8 = 0.0;
        if (-37.0 <= (float)param_1[1] * -0.01) {
          uVar4 = (uint)((float)param_1[1] * -278663.5 + 1.0653532e+09);
          fVar8 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar8 = (fVar8 * (fVar8 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar4 & 0xff800000);
        }
        fVar12 = 0.0;
        if (-37.0 <= (float)param_1[2] * -0.01) {
          uVar4 = (uint)((float)param_1[2] * -278663.5 + 1.0653532e+09);
          fVar12 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar12 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar4 & 0xff800000);
        }
        fVar13 = 0.0;
        fVar14 = (float)param_1[5] * 0.03 + 2.0;
        if (-37.0 <= fVar14) {
          uVar4 = (uint)(fVar14 * 8388608.0 + 1.0653532e+09);
          fVar13 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar13 = (fVar13 * (fVar13 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar4 & 0xff800000);
        }
        fVar14 = 0.0;
        if (-37.0 <= fVar13 * -0.2) {
          uVar4 = (uint)(fVar13 * -2420440.8 + 1.0653532e+09);
          fVar14 = (float)(uVar4 & 0x7fffff | 0x3f800000);
          fVar14 = (fVar14 * (fVar14 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar4 & 0xff800000);
        }
        if (uVar3 != 0) {
          fVar11 = (float)param_1[3] - fVar10;
          fVar8 = fVar8 - fVar12;
          pfVar1 = (float *)(*param_2 + uVar7 * *(ushort *)(param_2 + 2) * 4);
          pfVar5 = pfVar1;
          do {
            fVar15 = 1.0 / fVar13;
            if (*pfVar5 * fVar10 != -0.2) {
              fVar15 = *pfVar5 * fVar10 + 0.2;
              fVar16 = fVar15 * -fVar13;
              fVar17 = 0.0;
              if (-37.0 <= fVar16) {
                uVar4 = (uint)(fVar16 * 12102203.0 + 1.0653532e+09);
                fVar17 = (float)(uVar4 & 0x7fffff | 0x3f800000);
                fVar17 = (fVar17 * (fVar17 * 0.32518977 + 0.020805772) + 0.65304345) *
                         (float)(uVar4 & 0xff800000);
              }
              fVar15 = fVar15 / (1.0 - fVar17);
            }
            fVar15 = (float)NEON_fminnm(fVar15 - 0.2 / (1.0 - fVar14),0x3f800000);
            if (fVar15 <= -1.0) {
              fVar15 = -1.0;
            }
            fVar15 = fVar15 * fVar12;
            fVar10 = fVar10 + fVar11 * fVar9;
            fVar12 = fVar12 + fVar8 * fVar9;
            pfVar6 = pfVar5 + 1;
            *pfVar5 = fVar15;
            pfVar5 = pfVar6;
          } while (pfVar6 < pfVar1 + uVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != bVar2);
    }
    break;
  case 4:
    bVar2 = *(byte *)(param_2 + 1);
    if (bVar2 != 0) {
      uVar3 = *(ushort *)((long)param_2 + 0x12);
      if (uVar3 != 0) {
        uVar7 = 0;
        do {
          fVar8 = (float)param_1[4];
          pfVar1 = (float *)(*param_2 + uVar7 * *(ushort *)(param_2 + 2) * 4);
          fVar9 = 0.0;
          if (-37.0 <= (float)param_1[1] * -0.01) {
            uVar4 = (uint)((float)param_1[1] * -278663.5 + 1.0653532e+09);
            fVar9 = (float)(uVar4 & 0x7fffff | 0x3f800000);
            fVar9 = (fVar9 * (fVar9 * 0.32518977 + 0.020805772) + 0.65304345) *
                    (float)(uVar4 & 0xff800000);
          }
          fVar12 = (float)param_1[3] - fVar8;
          fVar10 = 0.0;
          if (-37.0 <= (float)param_1[2] * -0.01) {
            uVar4 = (uint)((float)param_1[2] * -278663.5 + 1.0653532e+09);
            fVar10 = (float)(uVar4 & 0x7fffff | 0x3f800000);
            fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar4 & 0xff800000);
          }
          fVar9 = fVar9 - fVar10;
          pfVar5 = pfVar1;
          do {
            fVar13 = *pfVar5 * fVar8;
            fVar8 = fVar8 + fVar12 * (1.0 / (float)uVar3);
            fVar13 = (float)NEON_fminnm(fVar13,0x3f800000);
            if (fVar13 <= -1.0) {
              fVar13 = -1.0;
            }
            fVar13 = fVar13 * fVar10;
            fVar10 = fVar10 + fVar9 * (1.0 / (float)uVar3);
            pfVar6 = pfVar5 + 1;
            *pfVar5 = fVar13;
            pfVar5 = pfVar6;
          } while (pfVar6 < pfVar1 + uVar3);
          uVar7 = uVar7 + 1;
        } while (uVar7 != bVar2);
      }
    }
  }
  param_1[2] = param_1[1];
  param_1[4] = param_1[3];
  param_1[6] = param_1[5];
  return;
}


