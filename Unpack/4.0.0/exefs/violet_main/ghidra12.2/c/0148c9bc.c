/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148c9bc; name: FUN_0148c9bc
 */


undefined1  [16] FUN_0148c9bc(undefined1 param_1 [16],float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  ushort uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar11 = *(undefined8 *)param_2;
  fVar8 = (float)((ulong)uVar11 >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_2 + 6);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar10 = param_1._8_4_;
  fVar3 = param_1._0_4_;
  fVar4 = (float)*(undefined8 *)(param_2 + 4);
  fVar6 = param_1._4_4_;
  fVar7 = 0.0 - param_1._12_4_;
  auVar17._0_4_ = fVar3 - *param_2;
  auVar17._4_4_ = fVar6 - param_2[1];
  auVar17._8_4_ = fVar10 - param_2[2];
  auVar17._12_4_ = param_1._12_4_ - 0.0;
  auVar18._4_2_ = SUB42(fVar9 - fVar6,0);
  auVar18._0_4_ = fVar4 - fVar3;
  auVar18._6_2_ = (short)((uint)(fVar9 - fVar6) >> 0x10);
  auVar18._8_2_ = SUB42(fVar12 - fVar10,0);
  auVar18._10_2_ = (short)((uint)(fVar12 - fVar10) >> 0x10);
  auVar18._12_2_ = SUB42(fVar7,0);
  auVar18._14_2_ = (short)((uint)fVar7 >> 0x10);
  auVar18 = NEON_fmin(auVar17,auVar18,4);
  if (((auVar18._8_4_ < 0.0) || (auVar18._0_4_ < 0.0)) || (auVar18._4_4_ < 0.0)) {
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    if (fVar3 <= (float)uVar11) {
      fVar3 = (float)uVar11;
    }
    if (fVar9 <= fVar6) {
      fVar6 = fVar9;
    }
    uVar14 = SUB42(fVar6,0);
    uVar15 = (undefined2)((uint)fVar6 >> 0x10);
    if (fVar6 <= fVar8) {
      uVar14 = (undefined2)((ulong)uVar11 >> 0x20);
      uVar15 = (undefined2)((ulong)uVar11 >> 0x30);
    }
    if (fVar12 <= fVar10) {
      fVar10 = fVar12;
    }
    uVar13 = (ulong)(uint)fVar10;
    if (fVar10 <= (float)*(ulong *)(param_2 + 2)) {
      uVar13 = *(ulong *)(param_2 + 2) & 0xffffffff;
    }
  }
  else {
    fVar4 = (float)FUN_026fe6f4();
    fVar7 = fVar4 - fVar3;
    fVar12 = 1.0;
    if (0.0 <= fVar7) {
      fVar12 = 0.0;
    }
    uVar16 = 0x3f80;
    if (0.0 > fVar7) {
      uVar16 = 0;
    }
    fVar7 = fVar7 * (float)((uint)uVar16 << 0x10) - fVar7 * fVar12;
    bVar1 = fVar7 < 3.4028235e+38;
    uVar14 = 0;
    uVar15 = 0;
    if (bVar1) {
      uVar14 = param_1._8_2_;
      uVar15 = param_1._10_2_;
    }
    fVar12 = 3.4028235e+38;
    if (bVar1) {
      fVar12 = fVar7;
    }
    fVar7 = 0.0;
    if (bVar1) {
      fVar7 = fVar6;
    }
    fVar2 = 0.0;
    if (bVar1) {
      fVar2 = fVar4;
    }
    fVar4 = (float)FUN_026fe6f4(fVar6,fVar8,fVar9);
    fVar8 = fVar4 - fVar6;
    fVar9 = 1.0;
    if (0.0 <= fVar8) {
      fVar9 = 0.0;
    }
    uVar16 = 0x3f80;
    if (0.0 > fVar8) {
      uVar16 = 0;
    }
    fVar9 = fVar8 * (float)((uint)uVar16 << 0x10) - fVar8 * fVar9;
    fVar8 = (float)CONCAT22(uVar15,uVar14);
    if (fVar9 < fVar12) {
      fVar8 = fVar10;
      fVar7 = fVar4;
      fVar2 = fVar3;
      fVar12 = fVar9;
    }
    fVar4 = (float)FUN_026fe6f4();
    fVar10 = fVar4 - fVar10;
    fVar9 = 1.0;
    if (0.0 <= fVar10) {
      fVar9 = 0.0;
    }
    uVar16 = 0x3f80;
    if (0.0 > fVar10) {
      uVar16 = 0;
    }
    if (fVar12 <= fVar10 * (float)((uint)uVar16 << 0x10) - fVar10 * fVar9) {
      fVar4 = fVar8;
      fVar3 = fVar2;
      fVar6 = fVar7;
    }
    uVar13 = (ulong)(uint)fVar4;
    uVar14 = SUB42(fVar6,0);
    uVar15 = (undefined2)((uint)fVar6 >> 0x10);
  }
  auVar5._6_2_ = uVar15;
  auVar5._4_2_ = uVar14;
  auVar5._0_4_ = fVar3;
  auVar5._8_8_ = uVar13;
  return auVar5;
}


