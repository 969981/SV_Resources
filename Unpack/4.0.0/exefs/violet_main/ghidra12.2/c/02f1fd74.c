/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1fd74; name: FUN_02f1fd74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1fd74(undefined8 *param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  if (param_1[0xf] != 0) {
    auVar5._8_8_ = _UNK_03caab28;
    auVar5._0_8_ = _DAT_03caab20;
    auVar3._0_4_ = -*(float *)(param_1 + 0x14);
    auVar3._4_4_ = -*(float *)((long)param_1 + 0xa4);
    auVar3._8_4_ = -*(float *)(param_1 + 0x15);
    auVar3._12_4_ = *(undefined4 *)((long)param_1 + 0xac);
    auVar14._8_8_ = _UNK_03caa778;
    auVar14._0_8_ = _DAT_03caa770;
    auVar9 = a64_TBL(ZEXT816(0),*param_2,auVar5);
    auVar5 = a64_TBL(ZEXT816(0),*param_2,auVar14);
    auVar13._8_8_ = _UNK_03caa6a8;
    auVar13._0_8_ = _DAT_03caa6a0;
    auVar16._8_8_ = _UNK_03caab38;
    auVar16._0_8_ = _DAT_03caab30;
    auVar14 = a64_TBL(ZEXT816(0),auVar3,auVar13);
    auVar3 = a64_TBL(ZEXT816(0),auVar3,auVar16);
    auVar17._0_4_ = auVar5._0_4_ * auVar3._0_4_ - auVar9._0_4_ * auVar14._0_4_;
    auVar17._4_4_ = auVar5._4_4_ * auVar3._4_4_ - auVar9._4_4_ * auVar14._4_4_;
    auVar17._8_4_ = auVar5._8_4_ * auVar3._8_4_ - auVar9._8_4_ * auVar14._8_4_;
    auVar17._12_4_ = auVar5._12_4_ * auVar3._12_4_ - auVar9._12_4_ * auVar14._12_4_;
    auVar18._8_4_ = (int)_UNK_03cab148;
    auVar18._0_8_ = _DAT_03cab140;
    auVar18._12_4_ = (int)((ulong)_UNK_03cab148 >> 0x20);
    auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar18);
    fVar4 = auVar18._12_4_ - (auVar5._12_4_ * auVar14._12_4_ + auVar9._12_4_ * auVar3._12_4_);
    fVar8 = -(auVar18._0_4_ - (auVar5._0_4_ * auVar14._0_4_ + auVar9._0_4_ * auVar3._0_4_));
    fVar10 = -(auVar18._4_4_ - (auVar5._4_4_ * auVar14._4_4_ + auVar9._4_4_ * auVar3._4_4_));
    fVar11 = -(auVar18._8_4_ - (auVar5._8_4_ * auVar14._8_4_ + auVar9._8_4_ * auVar3._8_4_));
    fVar6 = fVar10 + fVar10;
    fVar7 = fVar11 + fVar11;
    fVar12 = (fVar8 + fVar8) * fVar8;
    fVar2 = (fVar8 + fVar8) * fVar4;
    fVar11 = 1.0 - fVar11 * fVar7;
    fVar24 = fVar7 * fVar10 - fVar2;
    fVar21 = fVar11 - fVar6 * fVar10;
    fVar11 = fVar11 - fVar12;
    fVar22 = fVar6 * fVar8 + fVar7 * fVar4;
    fVar19 = fVar6 * fVar8 - fVar7 * fVar4;
    fVar2 = fVar7 * fVar10 + fVar2;
    fVar23 = fVar7 * fVar8 - fVar6 * fVar4;
    fVar4 = fVar7 * fVar8 + fVar6 * fVar4;
    fVar6 = (1.0 - fVar12) - fVar6 * fVar10;
    fVar8 = (float)((ulong)param_1[1] >> 0x20);
    fVar10 = (float)((ulong)param_1[3] >> 0x20);
    fVar7 = (float)((ulong)param_1[5] >> 0x20);
    dVar20 = *(double *)param_2[2];
    dVar15 = *(double *)param_2[1] - (double)(fVar4 * fVar7 + fVar19 * fVar10 + fVar21 * fVar8);
    dVar1 = *(double *)(param_2[1] + 8) -
            (double)(fVar24 * fVar7 + fVar11 * fVar10 + fVar22 * fVar8);
    *(float *)(param_1 + 3) = fVar2;
    param_1[4] = CONCAT44(fVar24,fVar4);
    fVar4 = (float)dVar15;
    dVar20 = dVar20 - (double)(fVar6 * fVar7 + fVar2 * fVar10 + fVar23 * fVar8);
    fVar7 = (float)dVar20;
    fVar2 = (float)dVar1;
    *(float *)(param_1 + 5) = fVar6;
    param_1[6] = CONCAT44(fVar2,fVar4);
    *param_1 = CONCAT44(fVar22,fVar21);
    *(float *)(param_1 + 1) = fVar23;
    param_1[2] = CONCAT44(fVar11,fVar19);
    *(float *)(param_1 + 7) = fVar7;
    param_1[8] = CONCAT44((float)(dVar1 - (double)fVar2),(float)(dVar15 - (double)fVar4));
    *(float *)(param_1 + 9) = (float)(dVar20 - (double)fVar7);
  }
  return;
}


