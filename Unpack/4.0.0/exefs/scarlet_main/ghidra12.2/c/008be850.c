/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008be850; name: FUN_008be850
 */


undefined1  [16] FUN_008be850(undefined1 param_1 [16],long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = param_1._8_8_;
  fVar6 = *(float *)(param_2 + 0xc) * 3.0;
  fVar5 = *(float *)(param_2 + 4) * 3.0;
  fVar7 = (fVar6 - fVar5) + 1.0;
  fVar5 = (*(float *)(param_2 + 0xc) * -6.0 + 0.0 + fVar5) / fVar7;
  fVar6 = fVar6 / fVar7;
  fVar8 = (fVar5 * fVar5 - fVar6 * 3.0) / 9.0;
  fVar9 = (((0.0 - param_1._0_4_) / fVar7) * 27.0 +
          (fVar5 * fVar5 * (fVar5 + fVar5) - fVar6 * fVar5 * 9.0)) / 54.0;
  fVar6 = fVar8 * fVar8 * fVar8;
  fVar7 = fVar9 * fVar9 - fVar6;
  if (0.0 < fVar7) {
    fVar6 = SQRT(fVar7);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    fVar6 = powf(ABS(fVar9) + fVar6,0.33333334);
    fVar6 = fVar6 + fVar8 / fVar6;
    if (-1 < (int)fVar9) {
      fVar6 = -fVar6;
    }
    uVar1 = (ulong)(uint)(fVar6 + fVar5 / -3.0);
    uVar4 = 0;
  }
  else {
    fVar7 = SQRT(fVar6);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar6);
    }
    fVar6 = acosf(fVar9 * (1.0 / fVar7));
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar5 = fVar5 / 3.0;
    fVar7 = fVar7 * -2.0;
    fVar8 = cosf(fVar6 / 3.0);
    fVar8 = fVar7 * fVar8 - fVar5;
    uVar2 = (ulong)(uint)fVar8;
    if ((fVar8 < 0.0) || (1.0 < fVar8)) {
      fVar9 = *(float *)PTR_FloatPi_047d2460;
      fVar8 = cosf((fVar6 + fVar9 + fVar9) / 3.0);
      fVar8 = fVar7 * fVar8 - fVar5;
      uVar2 = (ulong)(uint)fVar8;
      if ((fVar8 < 0.0) || (1.0 < fVar8)) {
        fVar6 = cosf((fVar6 + fVar9 * 4.0) / 3.0);
        fVar5 = fVar7 * fVar6 - fVar5;
        uVar2 = (ulong)(uint)fVar5;
        uVar1 = param_1._0_8_;
        if ((fVar5 < 0.0) || (1.0 < fVar5)) goto LAB_008bea18;
      }
    }
    uVar4 = 0;
    uVar1 = uVar2;
  }
LAB_008bea18:
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


