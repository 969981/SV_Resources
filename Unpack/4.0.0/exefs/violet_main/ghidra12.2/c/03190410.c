/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03190410; name: FUN_03190410
 */


void FUN_03190410(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  ushort uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar6 = param_1[1];
  uVar10 = param_1[2];
  auVar11._0_6_ = (uint6)(ushort)uVar6 << 0x10;
  auVar11._6_2_ = (short)((ulong)uVar6 >> 0x10);
  auVar11._8_2_ = 0;
  auVar11._10_2_ = (short)((ulong)uVar6 >> 0x20);
  auVar11._12_2_ = 0;
  auVar11._14_2_ = (short)((ulong)uVar6 >> 0x30);
  auVar16 = NEON_scvtf(auVar11,4);
  fVar8 = auVar11._12_4_;
  fVar5 = auVar16._0_4_ * fVar8;
  fVar7 = auVar16._4_4_ * fVar8;
  fVar8 = auVar16._8_4_ * fVar8;
  auVar16._0_8_ =
       CONCAT17((char)((ulong)uVar10 >> 0x18),
                CONCAT16((char)((ulong)uVar10 >> 0x10),
                         (uint6)(ushort)((ushort)uVar10 ^ 0x8000) << 0x10)) ^ 0x8000000000000000;
  auVar16._8_2_ = 0;
  auVar16[10] = (undefined1)((ulong)uVar10 >> 0x20);
  auVar16[0xb] = (byte)((ulong)uVar10 >> 0x28) ^ 0x80;
  auVar16._12_2_ = 0;
  auVar16[0xe] = (undefined1)((ulong)uVar10 >> 0x30);
  auVar16[0xf] = (byte)((ulong)uVar10 >> 0x38) ^ 0x80;
  auVar11 = NEON_scvtf(auVar16,4);
  fVar9 = auVar11._0_4_ * 5.086263e-10;
  fVar12 = auVar11._4_4_ * 5.086263e-10;
  fVar13 = auVar11._8_4_ * 5.086263e-10;
  fVar14 = auVar11._12_4_ * 5.086263e-10;
  auVar17._0_4_ = fVar9 * fVar9;
  auVar17._4_4_ = fVar12 * fVar12;
  auVar17._8_4_ = fVar13 * fVar13;
  auVar17._12_4_ = fVar14 * fVar14;
  auVar11 = NEON_ext(auVar17,auVar17,8,1);
  fVar3 = auVar11._0_4_ + auVar11._4_4_;
  fVar2 = auVar17._0_4_ + auVar17._4_4_ + fVar3;
  fVar15 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar18 = 0.0;
  if (fVar2 != 0.0) {
    fVar2 = SQRT(fVar2);
    fVar18 = SQRT(auVar17._0_4_ + auVar17._4_4_ + fVar3);
    fVar15 = fVar9 / fVar2;
    fVar19 = fVar12 / fVar18;
    fVar20 = fVar13 / fVar2;
    fVar18 = fVar14 / fVar18;
  }
  fVar2 = fVar19 + fVar19;
  fVar3 = fVar20 + fVar20;
  fVar9 = (fVar15 + fVar15) * fVar15;
  fVar12 = (fVar15 + fVar15) * fVar18;
  fVar20 = 1.0 - fVar20 * fVar3;
  fVar28 = fVar3 * fVar19 - fVar12;
  fVar24 = fVar20 - fVar2 * fVar19;
  fVar20 = fVar20 - fVar9;
  fVar26 = fVar2 * fVar15 + fVar3 * fVar18;
  fVar25 = fVar2 * fVar15 - fVar3 * fVar18;
  fVar12 = fVar3 * fVar19 + fVar12;
  fVar13 = fVar3 * fVar15 + fVar2 * fVar18;
  fVar27 = fVar3 * fVar15 - fVar2 * fVar18;
  fVar14 = (1.0 - fVar9) - fVar2 * fVar19;
  fVar21 = fVar25 * fVar7;
  fVar22 = fVar20 * fVar7;
  fVar23 = fVar12 * fVar7;
  fVar7 = fVar13 * fVar7;
  fVar15 = fVar24 * fVar5;
  fVar18 = fVar26 * fVar5;
  fVar19 = fVar27 * fVar5;
  fVar5 = fVar28 * fVar5;
  fVar2 = fVar13 * fVar8;
  fVar3 = fVar28 * fVar8;
  fVar9 = fVar14 * fVar8;
  fVar8 = fVar8 * 0.0;
  param_2[0xe] = fVar9 * fVar28 + fVar23 * fVar20 + fVar19 * fVar26;
  param_2[0xf] = fVar8 * fVar28 + fVar7 * fVar20 + fVar5 * fVar26;
  param_2[0xc] = fVar2 * fVar28 + fVar21 * fVar20 + fVar15 * fVar26;
  param_2[0xd] = fVar3 * fVar28 + fVar22 * fVar20 + fVar18 * fVar26;
  *(ulong *)(param_2 + 0x12) =
       CONCAT44(fVar8 * fVar14 + fVar7 * fVar12 + fVar5 * fVar27,
                fVar9 * fVar14 + fVar23 * fVar12 + fVar19 * fVar27);
  *(ulong *)(param_2 + 0x10) =
       CONCAT44(fVar3 * fVar14 + fVar22 * fVar12 + fVar18 * fVar27,
                fVar2 * fVar14 + fVar21 * fVar12 + fVar15 * fVar27);
  param_2[10] = fVar9 * fVar13 + fVar23 * fVar25 + fVar19 * fVar24;
  param_2[0xb] = fVar8 * fVar13 + fVar7 * fVar25 + fVar5 * fVar24;
  param_2[8] = fVar2 * fVar13 + fVar21 * fVar25 + fVar15 * fVar24;
  param_2[9] = fVar3 * fVar13 + fVar22 * fVar25 + fVar18 * fVar24;
  *param_2 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar6 = *param_1;
  uVar4 = (ushort)((ulong)uVar6 >> 0x30);
  auVar1._6_2_ = (short)((ulong)uVar6 >> 0x10);
  auVar1._0_6_ = (uint6)(ushort)uVar6 << 0x10;
  auVar1._8_2_ = 0;
  auVar1._10_2_ = (short)((ulong)uVar6 >> 0x20);
  auVar1._12_2_ = 0;
  auVar1._14_2_ = uVar4;
  auVar11 = NEON_scvtf(auVar1,4);
  fVar2 = (float)((uint)uVar4 << 0x10);
  fVar3 = auVar11._4_4_ * fVar2;
  fVar5 = auVar11._12_4_ * fVar2;
  *(ulong *)(param_2 + 6) =
       CONCAT26((short)((uint)fVar5 >> 0x10),CONCAT24(SUB42(fVar5,0),auVar11._8_4_ * fVar2));
  *(ulong *)(param_2 + 4) =
       CONCAT26((short)((uint)fVar3 >> 0x10),CONCAT24(SUB42(fVar3,0),auVar11._0_4_ * fVar2));
  param_2[1] = *(undefined4 *)(param_1 + 3);
  return;
}


