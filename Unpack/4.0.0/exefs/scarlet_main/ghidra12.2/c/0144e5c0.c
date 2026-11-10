/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0144e5c0; name: FUN_0144e5c0
 */


ulong FUN_0144e5c0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,int param_8,int param_9)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  param_2 = ((float)param_8 * 3.0 + 1.5) - param_2;
  fVar11 = param_2 * param_2;
  if (fVar11 <= param_7) {
    fVar9 = SQRT(param_7 - fVar11);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(param_7 - fVar11);
    }
    fVar10 = (param_1 - fVar9) / 3.0;
    iVar3 = (int)fVar10;
    fVar9 = (fVar9 + param_1) / 3.0;
    iVar8 = (int)fVar9;
    uVar5 = (iVar3 - param_9) - (uint)(fVar10 < (float)iVar3);
    if (0x3e < (int)uVar5) {
      uVar5 = 0x3f;
    }
    iVar3 = param_9 + 0x3f;
    uVar6 = (iVar3 - iVar8) + (uint)(fVar9 < (float)iVar8);
    if (0x3e < (int)uVar6) {
      uVar6 = 0x3f;
    }
    if (((DAT_0483c768 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0483c768), iVar8 != 0)) {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      uVar2 = (ulong)((fVar9 / *(float *)PTR_FloatDegree180_047d2390) * 0.1);
      DAT_0483c760 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar2 >> 0x18 & 0xff) * 0x10) +
                     *(float *)((long)(PTR_SinCosSampleTable_047d2398 +
                                      (uVar2 >> 0x18 & 0xff) * 0x10) + 8) *
                     (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08;
      __cxa_guard_release(&DAT_0483c768);
    }
    if (((DAT_0483c778 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0483c778), iVar8 != 0)) {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      uVar2 = (ulong)((fVar9 / *(float *)PTR_FloatDegree180_047d2390) * 179.9);
      DAT_0483c770 = *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar2 >> 0x18 & 0xff) * 0x10) +
                     *(float *)((long)(PTR_SinCosSampleTable_047d2398 +
                                      (uVar2 >> 0x18 & 0xff) * 0x10) + 8) *
                     (float)((uint)uVar2 & 0xffffff) * 5.9604645e-08;
      __cxa_guard_release(&DAT_0483c778);
    }
    if (param_5 < DAT_0483c760) {
      uVar2 = -1L << ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
              0xffffffffffffffffU >> ((ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) & 0x3f);
      if (DAT_0483c770 < param_5) {
        fVar10 = 1.0 - param_5 * param_5;
        fVar9 = SQRT(fVar10);
        if (NAN(fVar9)) {
          fVar9 = sqrtf(fVar10);
        }
        fVar10 = param_4 * param_5 + fVar9 * param_3;
        fVar12 = param_2 * (param_3 * param_5 - fVar9 * param_4);
        if ((fVar10 * fVar10 < 1e-07) || (fVar10 * fVar10 * param_7 <= fVar11)) {
          if (0.0 < fVar12) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0xffffffffffffffff;
          }
        }
        else {
          fVar12 = fVar12 / fVar10 + param_1;
          if (fVar10 < 0.0) {
            fVar10 = (fVar12 + -1.5) / 3.0;
            iVar8 = (int)fVar10;
            uVar5 = (iVar3 - iVar8) + (uint)(fVar10 < (float)iVar8);
            if (0x3e < (int)uVar5) {
              uVar5 = 0x3f;
            }
            uVar7 = 0xffffffffffffffff >>
                    ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f);
          }
          else {
            fVar10 = (fVar12 + 1.5) / 3.0;
            iVar8 = (int)fVar10;
            uVar5 = (iVar8 - param_9) - (uint)(fVar10 < (float)iVar8);
            if (0x3e < (int)uVar5) {
              uVar5 = 0x3f;
            }
            uVar7 = -1L << ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f);
          }
        }
        fVar10 = param_4 * param_5 - fVar9 * param_3;
        param_2 = param_2 * (param_3 * param_5 + fVar9 * param_4);
        if ((fVar10 * fVar10 < 1e-07) || (fVar10 * fVar10 * param_7 <= fVar11)) {
          if (param_2 < 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0xffffffffffffffff;
          }
        }
        else {
          fVar9 = param_2 / fVar10 + param_1;
          if (fVar10 < 0.0) {
            fVar9 = (fVar9 + 1.5) / 3.0;
            iVar3 = (int)fVar9;
            uVar5 = (iVar3 - param_9) - (uint)(fVar9 < (float)iVar3);
            if (0x3e < (int)uVar5) {
              uVar5 = 0x3f;
            }
            uVar4 = -1L << ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f);
          }
          else {
            fVar9 = (fVar9 + -1.5) / 3.0;
            iVar8 = (int)fVar9;
            uVar5 = (iVar3 - iVar8) + (uint)(fVar9 < (float)iVar8);
            if (0x3e < (int)uVar5) {
              uVar5 = 0x3f;
            }
            uVar4 = 0xffffffffffffffff >>
                    ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f);
          }
        }
        uVar1 = uVar4 | uVar7;
        if (0.0 <= param_5) {
          uVar1 = uVar4 & uVar7;
        }
        uVar2 = uVar1 & uVar2;
      }
      goto LAB_0144e7d8;
    }
  }
  uVar2 = 0;
LAB_0144e7d8:
  if ((0.0 < param_6) && (fVar11 <= param_6)) {
    fVar9 = SQRT(param_6 - fVar11);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(param_6 - fVar11);
    }
    fVar10 = (param_1 - fVar9) / 3.0;
    iVar3 = (int)fVar10;
    fVar11 = (fVar9 + param_1) / 3.0;
    iVar8 = (int)fVar11;
    uVar6 = (iVar3 - param_9) - (uint)(fVar10 < (float)iVar3);
    uVar5 = (param_9 - iVar8) + (uint)(fVar11 < (float)iVar8) + 0x3f;
    if (0x3e < (int)uVar6) {
      uVar6 = 0x3f;
    }
    if (0x3e < (int)uVar5) {
      uVar5 = 0x3f;
    }
    uVar2 = uVar2 & (-1L << ((ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
                     0xffffffffffffffffU >>
                     ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f) ^
                    0xffffffffffffffff);
  }
  return uVar2;
}


