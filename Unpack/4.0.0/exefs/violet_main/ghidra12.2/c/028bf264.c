/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bf264; name: FUN_028bf264
 */


undefined1  [16] FUN_028bf264(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float fVar4;
  float fVar6;
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  
  if (*(char *)(param_1 + 0x194) == '\0') {
    return *(undefined1 (*) [16])(param_1 + 0x120);
  }
  fVar4 = *(float *)(param_1 + 0x160);
  fVar6 = *(float *)(param_1 + 0x164);
  fVar18 = *(float *)(param_1 + 0x168);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x170);
  fVar26 = (float)*(undefined8 *)(param_1 + 0x178);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x178) >> 0x20);
  fVar19 = (float)*(undefined8 *)*pauVar1;
  fVar25 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar11._12_4_ = fVar10;
  auVar11._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar10;
  auVar2._0_12_ = *pauVar1;
  auVar11 = NEON_ext(auVar11,auVar2,0xc,1);
  uVar3 = SUB124(*pauVar1,0);
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = uVar3;
  auVar14._12_4_ = auVar11._12_4_;
  auVar14._0_8_ = auVar12._0_8_;
  auVar14._8_4_ = SUB124(*pauVar1,4);
  auVar13._8_8_ = auVar14._8_8_;
  auVar13._4_4_ = auVar11._0_4_;
  auVar13._0_4_ = uVar3;
  auVar15._0_12_ = auVar13._0_12_;
  auVar15._12_4_ = auVar11._4_4_;
  auVar11 = NEON_ext(auVar15,auVar15,8,1);
  fVar16 = fVar25 * fVar25 + fVar25 * fVar25;
  fVar17 = fVar26 * fVar26 + fVar26 * fVar26;
  fVar7 = auVar11._0_4_ * SUB124(*pauVar1,8);
  fVar8 = auVar11._4_4_ * SUB124(*pauVar1,8);
  fVar9 = auVar11._8_4_ * fVar25;
  *(undefined1 *)(param_1 + 0x194) = 0;
  fVar4 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ 0x2b8cbccc) & -(uint)(ABS(fVar4) < 1e-12));
  auVar11 = NEON_fmov(0x3f800000,4);
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  auVar20._0_4_ = auVar11._0_4_ - (fVar19 * fVar19 + fVar19 * fVar19);
  auVar20._4_4_ = auVar11._4_4_ - fVar16;
  auVar20._8_4_ = auVar11._8_4_ - fVar17;
  auVar20._12_4_ = auVar11._12_4_ - (fVar10 * fVar10 + fVar10 * fVar10);
  auVar21._4_12_ = auVar20._4_12_;
  auVar21._0_4_ = auVar20._0_4_;
  auVar23._0_8_ = auVar21._0_8_;
  auVar23._8_4_ = auVar20._4_4_;
  auVar23._12_4_ = auVar20._12_4_;
  auVar22._8_8_ = auVar23._8_8_;
  auVar22._4_4_ = auVar20._0_4_;
  auVar22._0_4_ = auVar20._0_4_;
  auVar24._0_12_ = auVar22._0_12_;
  auVar24._12_4_ = auVar20._4_4_;
  auVar11 = NEON_ext(auVar24,auVar24,0xc,1);
  fVar6 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ 0x2b8cbccc) & -(uint)(ABS(fVar6) < 1e-12));
  fVar19 = fVar19 * fVar10 + fVar19 * fVar10;
  fVar25 = fVar25 * fVar10 + fVar25 * fVar10;
  fVar26 = fVar26 * fVar10 + fVar26 * fVar10;
  fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ 0x2b8cbccc) & -(uint)(ABS(fVar18) < 1e-12));
  auVar5._0_8_ = CONCAT44((fVar9 + fVar26) * fVar4,(auVar11._0_4_ - fVar17) * fVar4);
  auVar5._8_4_ = (fVar8 - fVar25) * fVar4;
  auVar5._12_4_ = fVar4 * 0.0;
  *(float *)(param_1 + 0x148) = (auVar11._8_4_ - fVar16) * fVar18;
  *(float *)(param_1 + 0x14c) = fVar18 * 0.0;
  *(float *)(param_1 + 0x140) = (fVar8 + fVar25) * fVar18;
  *(float *)(param_1 + 0x144) = (fVar7 - fVar19) * fVar18;
  *(ulong *)(param_1 + 0x158) = CONCAT44(0x3f800000,(int)*(undefined8 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x180);
  *(long *)(param_1 + 0x128) = auVar5._8_8_;
  *(undefined8 *)(param_1 + 0x120) = auVar5._0_8_;
  *(ulong *)(param_1 + 0x138) = CONCAT44(fVar6 * 0.0,(fVar7 + fVar19) * fVar6);
  *(ulong *)(param_1 + 0x130) = CONCAT44((auVar11._4_4_ - fVar17) * fVar6,(fVar9 - fVar26) * fVar6);
  return auVar5;
}


