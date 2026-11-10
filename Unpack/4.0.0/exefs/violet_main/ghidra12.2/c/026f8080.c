/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f8080; name: FUN_026f8080
 */


undefined1  [16] FUN_026f8080(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = FUN_026fe444();
  uVar5 = FUN_026fe44c(param_2);
  uVar1 = FUN_026f8014(param_1,param_2);
  fVar9 = (float)param_1;
  fVar3 = (float)((ulong)param_1 >> 0x20);
  if ((uVar1 & 1) == 0) {
    fVar2 = (float)(uVar4 >> 0x20);
    if ((float)uVar5 <= fVar9) {
      fVar9 = (float)uVar5;
    }
    if (fVar9 <= (float)uVar4) {
      fVar9 = (float)uVar4;
    }
    fVar7 = (float)(uVar5 >> 0x20);
    if (fVar7 <= fVar3) {
      fVar3 = fVar7;
    }
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  else {
    fVar2 = (float)FUN_026fe6f4(param_1,uVar4,uVar5);
    fVar7 = fVar2 - fVar9;
    fVar10 = 1.0;
    if (0.0 <= fVar7) {
      fVar10 = 0.0;
    }
    fVar13 = 1.0;
    if (0.0 > fVar7) {
      fVar13 = 0.0;
    }
    fVar7 = fVar7 * fVar13 - fVar7 * fVar10;
    if (3.4028235e+38 <= fVar7) {
      fVar2 = 0.0;
    }
    fVar13 = (float)NEON_fminnm(fVar7,0x7f7fffff);
    fVar10 = fVar3;
    if (3.4028235e+38 <= fVar7) {
      fVar10 = 0.0;
    }
    fVar7 = (float)FUN_026fe6f4(fVar3,uVar4 >> 0x20,uVar5 >> 0x20);
    fVar8 = fVar7 - fVar3;
    fVar11 = 1.0;
    if (0.0 <= fVar8) {
      fVar11 = 0.0;
    }
    fVar12 = 1.0;
    if (0.0 > fVar8) {
      fVar12 = 0.0;
    }
    fVar3 = fVar7;
    if (fVar13 <= fVar8 * fVar12 - fVar8 * fVar11) {
      fVar9 = fVar2;
      fVar3 = fVar10;
    }
  }
  auVar6._4_4_ = fVar3;
  auVar6._0_4_ = fVar9;
  auVar6._8_8_ = 0;
  return auVar6;
}


