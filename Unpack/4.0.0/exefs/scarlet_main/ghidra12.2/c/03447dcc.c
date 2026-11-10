/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03447dcc; name: FUN_03447dcc
 */


undefined1  [16] FUN_03447dcc(float param_1,long *param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  float extraout_s0;
  float fVar7;
  undefined4 uVar9;
  undefined4 extraout_var;
  undefined8 uVar10;
  undefined8 extraout_var_00;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = *param_2;
  uVar4 = *param_3;
  uVar2 = (ulong)uVar4;
  pfVar3 = (float *)(lVar6 + uVar2 * 0xc);
  pfVar5 = pfVar3 + 3;
  if ((param_1 < *pfVar3) || (*pfVar5 <= param_1)) {
    if (*pfVar3 <= param_1) {
      if (*pfVar5 <= param_1) {
        uVar4 = uVar4 + 1;
        if (uVar4 < *(uint *)(param_2 + 1)) {
          pfVar3 = (float *)(lVar6 + uVar2 * 0xc + 0x18);
          do {
            pfVar5 = pfVar3;
            *param_3 = uVar4;
            uVar2 = (ulong)uVar4;
            uVar4 = uVar4 + 1;
            if (*(uint *)(param_2 + 1) <= uVar4) break;
            pfVar3 = pfVar5 + 3;
          } while (*pfVar5 <= param_1);
        }
        pfVar3 = pfVar5 + -3;
      }
    }
    else {
      if (uVar4 != 0) {
        pfVar3 = (float *)(lVar6 + uVar2 * 0xc);
        do {
          uVar4 = uVar4 - 1;
          pfVar3 = pfVar3 + -3;
          *param_3 = uVar4;
          if (uVar4 == 0) {
            uVar2 = 0;
            goto LAB_03447eac;
          }
        } while (param_1 < *pfVar3);
        uVar2 = (ulong)uVar4;
      }
LAB_03447eac:
      pfVar5 = pfVar3 + 3;
    }
  }
  lVar6 = *param_2 + (ulong)*(uint *)(param_2 + 1) * 0xc;
  fVar11 = *(float *)(lVar6 + uVar2 * 8);
  if ((1 << (ulong)((uint)pfVar3[2] & 0x1f) & 0x210U) == 0) {
    FUN_03448080(fVar11 * (param_1 - *pfVar3),pfVar3[1],pfVar5[1],
                 *(undefined4 *)(lVar6 + uVar2 * 8 + 4));
    fVar11 = extraout_s0;
    uVar9 = extraout_var;
    uVar10 = extraout_var_00;
  }
  else {
    fVar11 = pfVar3[1] + (param_1 - *pfVar3) * fVar11;
    uVar9 = 0;
    uVar10 = 0;
  }
  iVar1 = *(int *)((long)param_2 + 0xc);
  if (iVar1 == 4) {
    if (-37.0 <= fVar11 * 0.05) {
      fVar7 = 1393317.6;
LAB_03448020:
      uVar4 = (uint)(fVar7 * fVar11 + 1.0653532e+09);
      fVar11 = (float)(uVar4 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar11 * (fVar11 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar4 & 0xff800000);
      uVar9 = 0;
      uVar10 = 0;
      goto LAB_03448070;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        fVar7 = (float)NEON_fminnm(fVar11,0x3f800000);
        if (fVar7 <= -1.0) {
          fVar7 = -1.0;
        }
        fVar13 = 1.0;
        if (0.0 <= fVar11) {
          fVar13 = -1.0;
        }
        fVar7 = fVar13 * fVar7 + 1.0;
        fVar11 = (float)((uint)fVar7 & 0x7fffff | 0x3f800000);
        fVar12 = fVar11 + 1.0;
        fVar11 = fVar13 * 20.0 *
                 ((float)((uint)fVar7 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                 (fVar11 * fVar11 * fVar11 * 1.1581186 + -1.1581186) / (fVar12 * fVar12 * fVar12));
        uVar9 = 0;
        uVar10 = 0;
      }
      goto LAB_03448070;
    }
    if (-37.0 <= fVar11) {
      fVar7 = 27866352.0;
      goto LAB_03448020;
    }
  }
  fVar11 = 0.0;
  uVar9 = 0;
  uVar10 = 0;
LAB_03448070:
  auVar8._4_4_ = uVar9;
  auVar8._0_4_ = fVar11;
  auVar8._8_8_ = uVar10;
  return auVar8;
}


