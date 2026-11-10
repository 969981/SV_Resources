/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee84f8; name: FUN_02ee84f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ee84f8(long param_1,long param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 local_50 [32];
  
  iVar3 = *(int *)(param_1 + 0x40);
  lVar1 = 0;
  if (iVar3 != 0) {
    lVar1 = (long)iVar3 + param_1 + 0x40;
  }
  iVar3 = FUN_02f06584(*(undefined4 *)(param_1 + 0x20),param_2,lVar1,*(undefined4 *)(param_1 + 0x44)
                       ,param_3);
  if (iVar3 < 0) {
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,PTR_DAT_047d19b0 + 0x200,local_50);
    uVar2 = _DAT_03cabe50;
    fVar4 = local_50._16_4_;
    fVar5 = local_50._20_4_;
    fVar6 = local_50._24_4_;
    fVar7 = local_50._28_4_;
    fVar10 = (fVar4 - local_50._0_4_) * 0.5;
    fVar13 = (fVar5 - local_50._4_4_) * 0.5;
    fVar14 = (fVar6 - local_50._8_4_) * 0.5;
    fVar15 = (fVar7 - local_50._12_4_) * 0.5;
    auVar17._8_8_ = _UNK_03cab388;
    auVar17._0_8_ = _DAT_03cab380;
    auVar11._0_4_ = fVar10 + (float)((-(uint)(fVar10 == 0.0) >> 0x18 & 0x35) << 0x18);
    auVar11._4_4_ = fVar13 + (float)((-(uint)(fVar13 == 0.0) >> 0x18 & 0x35) << 0x18);
    auVar11._8_4_ = fVar14 + (float)((-(uint)(fVar14 == 0.0) >> 0x18 & 0x35) << 0x18);
    auVar11._12_4_ = fVar15 + (float)((-(uint)(fVar15 == 0.0) >> 0x18 & 0x35) << 0x18);
    *(undefined8 *)(param_3 + 0xe) = _UNK_03cabe58;
    *(undefined8 *)(param_3 + 0xc) = uVar2;
    auVar16._8_8_ = _UNK_03cabbe8;
    auVar16._0_8_ = _DAT_03cabbe0;
    fVar10 = auVar11._4_4_ * auVar11._4_4_;
    uVar18 = (undefined1)((uint)fVar10 >> 8);
    uVar19 = (undefined1)((uint)fVar10 >> 0x10);
    uVar20 = (undefined1)((uint)fVar10 >> 0x18);
    fVar13 = auVar11._8_4_ * auVar11._8_4_;
    uVar21 = (undefined1)((uint)fVar13 >> 8);
    uVar22 = (undefined1)((uint)fVar13 >> 0x10);
    uVar23 = (undefined1)((uint)fVar13 >> 0x18);
    fVar14 = auVar11._12_4_ * auVar11._12_4_;
    uVar24 = (undefined1)((uint)fVar14 >> 8);
    uVar25 = (undefined1)((uint)fVar14 >> 0x10);
    uVar26 = (undefined1)((uint)fVar14 >> 0x18);
    auVar8[4] = SUB41(fVar10,0);
    auVar8._0_4_ = auVar11._0_4_ * auVar11._0_4_;
    auVar8[5] = uVar18;
    auVar8[6] = uVar19;
    auVar8[7] = uVar20;
    auVar8[8] = SUB41(fVar13,0);
    auVar8[9] = uVar21;
    auVar8[10] = uVar22;
    auVar8[0xb] = uVar23;
    auVar8[0xc] = SUB41(fVar14,0);
    auVar8[0xd] = uVar24;
    auVar8[0xe] = uVar25;
    auVar8[0xf] = uVar26;
    auVar8 = a64_TBL(ZEXT816(0),auVar8,auVar17);
    auVar12[4] = SUB41(fVar10,0);
    auVar12._0_4_ = auVar11._0_4_ * auVar11._0_4_;
    auVar12[5] = uVar18;
    auVar12[6] = uVar19;
    auVar12[7] = uVar20;
    auVar12[8] = SUB41(fVar13,0);
    auVar12[9] = uVar21;
    auVar12[10] = uVar22;
    auVar12[0xb] = uVar23;
    auVar12[0xc] = SUB41(fVar14,0);
    auVar12[0xd] = uVar24;
    auVar12[0xe] = uVar25;
    auVar12[0xf] = uVar26;
    auVar17 = a64_TBL(ZEXT816(0),auVar12,auVar16);
    auVar12 = NEON_ext(auVar11,auVar11,8,1);
    fVar10 = auVar12._0_4_ * auVar11._0_4_ * auVar11._4_4_ * 8.0;
    fVar14 = (auVar8._0_4_ + auVar17._0_4_) * 0.33333334;
    fVar15 = (auVar8._4_4_ + auVar17._4_4_) * 0.33333334;
    fVar9 = (auVar8._8_4_ + auVar17._8_4_) * 0.33333334;
    *param_3 = fVar10;
    *(ulong *)(param_3 + 6) =
         CONCAT44(fVar7 + (local_50._12_4_ - fVar7) * 0.5,fVar6 + (local_50._8_4_ - fVar6) * 0.5);
    *(ulong *)(param_3 + 4) =
         CONCAT44(fVar5 + (local_50._4_4_ - fVar5) * 0.5,fVar4 + (local_50._0_4_ - fVar4) * 0.5);
    param_3[10] = fVar9;
    param_3[0xb] = 1.0;
    param_3[8] = fVar14;
    param_3[9] = fVar15;
    fVar13 = *(float *)(param_2 + 0x20);
    fVar10 = fVar10 * -fVar13;
    if (0.0 <= fVar13) {
      fVar10 = fVar13;
    }
    fVar13 = *(float *)(param_2 + 0x1c) * fVar10;
    *(ulong *)(param_3 + 10) = CONCAT44(fVar13 * 1.0,fVar9 * fVar13);
    *(ulong *)(param_3 + 8) = CONCAT44(fVar15 * fVar13,fVar14 * fVar13);
    param_3[1] = fVar10;
  }
  return;
}


