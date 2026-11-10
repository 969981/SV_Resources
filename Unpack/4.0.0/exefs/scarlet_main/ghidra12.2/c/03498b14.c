/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03498b14; name: FUN_03498b14
 */


void FUN_03498b14(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = *param_1;
  fVar4 = *(float *)(lVar3 + 0xc);
  fVar7 = *(float *)(lVar3 + 0x10);
  fVar5 = *(float *)(lVar3 + 0x1c);
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (iVar1 == 4) {
    fVar10 = 0.0;
    if (-37.0 <= fVar7 * 0.05) {
      uVar2 = (uint)(fVar7 * 1393317.6 + 1.0653532e+09);
      fVar7 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar10 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar2 & 0xff800000);
    }
    fVar7 = fVar10;
    if (fVar5 * 0.05 < -37.0) {
LAB_03498d70:
      fVar5 = 0.0;
      goto LAB_03498de0;
    }
    fVar10 = 1393317.6;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        fVar10 = (float)NEON_fminnm(fVar7,0x3f800000);
        fVar6 = (float)NEON_fminnm(fVar5,0x3f800000);
        if (fVar6 <= -1.0) {
          fVar6 = -1.0;
        }
        fVar11 = 1.0;
        if (0.0 <= fVar7) {
          fVar11 = -1.0;
        }
        if (fVar10 <= -1.0) {
          fVar10 = -1.0;
        }
        fVar8 = 1.0;
        if (0.0 <= fVar5) {
          fVar8 = -1.0;
        }
        fVar6 = fVar8 * fVar6 + 1.0;
        fVar7 = fVar11 * fVar10 + 1.0;
        fVar5 = (float)((uint)fVar7 & 0x7fffff | 0x3f800000);
        fVar12 = fVar5 + 1.0;
        fVar10 = (float)((uint)fVar6 & 0x7fffff | 0x3f800000);
        fVar9 = fVar10 + 1.0;
        fVar7 = fVar11 * 20.0 *
                ((float)((uint)fVar7 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                (fVar5 * fVar5 * fVar5 * 1.1581186 + -1.1581186) / (fVar12 * fVar12 * fVar12));
        fVar5 = fVar8 * 20.0 *
                ((float)((uint)fVar6 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                (fVar10 * fVar10 * fVar10 * 1.1581186 + -1.1581186) / (fVar9 * fVar9 * fVar9));
      }
      goto LAB_03498de0;
    }
    fVar10 = 0.0;
    if (-37.0 <= fVar7) {
      uVar2 = (uint)(fVar7 * 27866352.0 + 1.0653532e+09);
      fVar7 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar10 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar2 & 0xff800000);
    }
    fVar7 = fVar10;
    if (fVar5 < -37.0) goto LAB_03498d70;
    fVar10 = 27866352.0;
  }
  uVar2 = (uint)(fVar10 * fVar5 + 1.0653532e+09);
  fVar5 = (float)(uVar2 & 0x7fffff | 0x3f800000);
  fVar5 = (fVar5 * (fVar5 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar2 & 0xff800000);
LAB_03498de0:
  fVar6 = 0.0;
  fVar10 = 0.0;
  if (-37.0 <= fVar7 * 0.05) {
    uVar2 = (uint)(fVar7 * 1393317.6 + 1.0653532e+09);
    fVar7 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    fVar10 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar2 & 0xff800000)
    ;
  }
  if (-37.0 <= fVar5 * 0.05) {
    uVar2 = (uint)(fVar5 * 1393317.6 + 1.0653532e+09);
    fVar5 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    fVar6 = (fVar5 * (fVar5 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar2 & 0xff800000);
  }
  fVar6 = fVar6 - fVar10;
  fVar5 = *(float *)(lVar3 + 0x18) - fVar4;
  fVar7 = (fVar6 * -fVar4) / fVar5;
  *param_3 = fVar7 + fVar10;
  *param_2 = (fVar6 - fVar6 * fVar4) / fVar5 - fVar7;
  return;
}


