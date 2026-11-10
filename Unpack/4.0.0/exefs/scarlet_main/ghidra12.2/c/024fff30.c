/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024fff30; name: FUN_024fff30
 */


void FUN_024fff30(long *param_1,long *param_2,undefined1 (*param_3) [12],undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    fVar26 = (float)*(undefined8 *)(*param_3 + 8);
    fVar10 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
    fVar24 = (float)*(undefined8 *)*param_3;
    fVar25 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    auVar18._12_4_ = fVar10;
    auVar18._0_12_ = *param_3;
    auVar23._12_4_ = fVar10;
    auVar23._0_12_ = *param_3;
    auVar18 = NEON_ext(auVar18,auVar23,0xc,1);
    uVar6 = SUB124(*param_3,0);
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = uVar6;
    auVar21._12_4_ = auVar18._12_4_;
    auVar21._0_8_ = auVar19._0_8_;
    auVar21._8_4_ = SUB124(*param_3,4);
    auVar20._8_8_ = auVar21._8_8_;
    auVar20._4_4_ = auVar18._0_4_;
    auVar20._0_4_ = uVar6;
    auVar22._0_12_ = auVar20._0_12_;
    auVar22._12_4_ = auVar18._4_4_;
    fVar11 = fVar25 * fVar25 + fVar25 * fVar25;
    fVar12 = fVar26 * fVar26 + fVar26 * fVar26;
    auVar23 = NEON_ext(auVar22,auVar22,8,1);
    auVar18 = NEON_fmov(0x3f800000,4);
    fVar7 = auVar23._0_4_ * SUB124(*param_3,8);
    fVar8 = auVar23._4_4_ * SUB124(*param_3,8);
    fVar9 = auVar23._8_4_ * fVar25;
    auVar13._0_4_ = auVar18._0_4_ - (fVar24 * fVar24 + fVar24 * fVar24);
    auVar13._4_4_ = auVar18._4_4_ - fVar11;
    auVar13._8_4_ = auVar18._8_4_ - fVar12;
    auVar13._12_4_ = auVar18._12_4_ - (fVar10 * fVar10 + fVar10 * fVar10);
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = auVar13._0_4_;
    auVar16._0_8_ = auVar14._0_8_;
    auVar16._8_4_ = auVar13._4_4_;
    auVar16._12_4_ = auVar13._12_4_;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = auVar13._0_4_;
    auVar15._0_4_ = auVar13._0_4_;
    auVar17._0_12_ = auVar15._0_12_;
    auVar17._12_4_ = auVar13._4_4_;
    auVar18 = NEON_ext(auVar17,auVar17,0xc,1);
    fVar24 = fVar24 * fVar10 + fVar24 * fVar10;
    fVar25 = fVar25 * fVar10 + fVar25 * fVar10;
    fVar26 = fVar26 * fVar10 + fVar26 * fVar10;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    uVar2 = param_4[1];
    uVar1 = *param_4;
    puVar4[1] = (ulong)(uint)(fVar8 - fVar25);
    *puVar4 = CONCAT44(fVar9 + fVar26,auVar18._0_4_ - fVar12);
    puVar4[3] = (ulong)(uint)(fVar7 + fVar24);
    puVar4[2] = CONCAT44(auVar18._4_4_ - fVar12,fVar9 - fVar26);
    puVar4[5] = (ulong)(uint)(auVar18._8_4_ - fVar11);
    puVar4[4] = CONCAT44(fVar7 - fVar24,fVar8 + fVar25);
    puVar4[7] = CONCAT44(0x3f800000,(int)uVar2);
    puVar4[6] = uVar1;
    *param_1 = (long)puVar4;
    param_1[1] = (long)param_2;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


