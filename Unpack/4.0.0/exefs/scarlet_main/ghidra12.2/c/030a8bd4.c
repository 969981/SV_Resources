/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a8bd4; name: FUN_030a8bd4
 */


void FUN_030a8bd4(long param_1,int *param_2,unkbyte10 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_28 [2];
  
  lVar7 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  local_28[0] = *param_2;
  plVar5 = *(long **)(lVar7 + 0x10);
  if (plVar5 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar5 + 0x38))
                      (plVar5,lVar6,local_28,*(undefined8 *)(lVar7 + 0x18),
                       *(undefined8 *)(lVar7 + 0x20));
    if (iVar4 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    local_28[0] = *param_2;
  }
  lVar7 = *(long *)(*(long *)(lVar6 + 0x20) + 0x38);
  auVar1 = *(undefined1 (*) [16])(*(long *)(lVar7 + 0x18) + (long)local_28[0] * 0x18);
  auVar9._2_14_ = auVar1._2_14_;
  auVar9._0_2_ = auVar1._8_2_;
  auVar11._6_10_ = auVar1._6_10_;
  auVar11._0_4_ = auVar9._0_4_;
  auVar11._4_2_ = auVar1._10_2_;
  auVar13._10_6_ = auVar1._10_6_;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_2_ = auVar1._12_2_;
  auVar14._0_12_ = auVar13._0_12_;
  auVar14._12_2_ = auVar1._14_2_;
  auVar14._14_2_ = auVar1._14_2_;
  auVar10._4_12_ = auVar14._4_12_;
  auVar10._0_4_ = auVar11._0_4_ & 0xffff;
  auVar12._8_8_ = auVar14._8_8_;
  auVar12._0_6_ = auVar10._0_6_;
  auVar12._6_2_ = 0;
  auVar16._12_4_ = auVar14._12_4_;
  auVar16._0_10_ = auVar12._0_10_;
  auVar16._10_2_ = 0;
  auVar15._0_14_ = auVar16._0_14_;
  auVar15._14_2_ = 0;
  auVar16 = NEON_ucvtf(auVar15,4);
  auVar20._2_2_ = 0;
  auVar20._0_2_ = auVar1._0_2_;
  auVar20._4_2_ = auVar1._2_2_;
  auVar20._6_2_ = 0;
  auVar20._8_2_ = auVar1._4_2_;
  auVar20._10_2_ = 0;
  auVar20._12_2_ = auVar1._6_2_;
  auVar20._14_2_ = 0;
  auVar20 = NEON_ucvtf(auVar20,4);
  fVar8 = (float)*(undefined8 *)(lVar7 + 0x90);
  fVar18 = (float)((ulong)*(undefined8 *)(lVar7 + 0x90) >> 0x20);
  fVar19 = (float)*(undefined8 *)(lVar7 + 0x98);
  fVar2 = (float)((ulong)*(undefined8 *)(lVar7 + 0x98) >> 0x20);
  uVar3 = *(undefined8 *)((long)param_3 + 8);
  fVar22 = (float)*(undefined8 *)(lVar7 + 0xa0);
  auVar17._0_4_ = fVar22 + fVar8 * auVar16._0_4_;
  fVar23 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa0) >> 0x20);
  auVar17._4_4_ = fVar23 + fVar18 * auVar16._4_4_;
  fVar24 = (float)*(undefined8 *)(lVar7 + 0xa8);
  auVar17._8_4_ = fVar24 + fVar19 * auVar16._8_4_;
  fVar25 = (float)((ulong)*(undefined8 *)(lVar7 + 0xa8) >> 0x20);
  auVar17._12_4_ = fVar25 + fVar2 * auVar16._12_4_;
  auVar21._0_4_ = fVar22 + fVar8 * auVar20._0_4_;
  auVar21._4_4_ = fVar23 + fVar18 * auVar20._4_4_;
  auVar21._8_4_ = fVar24 + fVar19 * auVar20._8_4_;
  auVar21._12_4_ = fVar25 + fVar2 * auVar20._12_4_;
  auVar1._10_2_ = (short)((ulong)uVar3 >> 0x10);
  auVar1._0_10_ = *param_3;
  auVar1._12_2_ = (short)((ulong)uVar3 >> 0x20);
  auVar1._14_2_ = (short)((ulong)uVar3 >> 0x30);
  auVar20 = NEON_fmin(auVar1,auVar17,4);
  auVar20 = NEON_fmax(auVar20,auVar21,4);
  fVar8 = (float)*(undefined8 *)param_3 - auVar20._0_4_;
  fVar18 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - auVar20._4_4_;
  fVar19 = (float)uVar3 - auVar20._8_4_;
  if (fVar8 * fVar8 + fVar18 * fVar18 + fVar19 * fVar19 < (float)*param_5) {
    param_4[1] = auVar20._8_8_;
    *param_4 = auVar20._0_8_;
    *(int *)(param_1 + 0x18) = *param_2;
  }
  return;
}


