/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fd880; name: FUN_026fd880
 */


void FUN_026fd880(undefined1 param_1 [16],undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = param_1._0_4_ - (float)*param_2;
  fVar7 = param_1._4_4_ - (float)((ulong)*param_2 >> 0x20);
  fVar8 = param_1._8_4_ - (float)param_2[1];
  fVar9 = param_1._12_4_ - (float)((ulong)param_2[1] >> 0x20);
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar6 < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < -1.1920929e-07;
      bVar3 = fVar6 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar7))) {
    bVar2 = fVar7 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar7)) {
      bVar1 = fVar7 < -1.1920929e-07;
      bVar3 = fVar7 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  bVar2 = false;
  if ((!bVar3 && bVar1 == bVar4) && (bVar2 = false, !NAN(fVar8))) {
    bVar2 = fVar8 < 1.1920929e-07;
  }
  bVar1 = false;
  bVar3 = true;
  bVar4 = false;
  if (bVar2) {
    bVar1 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar1 = fVar8 < -1.1920929e-07;
      bVar3 = fVar8 == -1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar1 != bVar4) {
    fVar9 = fVar9 * fVar9;
    auVar5._0_4_ = fVar6 * fVar6 + fVar7 * fVar7;
    auVar5._4_4_ = fVar8 * fVar8 + fVar9;
    auVar5._8_4_ = fVar6 * fVar6 + fVar7 * fVar7;
    auVar5._12_4_ = fVar8 * fVar8 + fVar9;
    NEON_ext(auVar5,auVar5,4,1);
    return;
  }
  return;
}


