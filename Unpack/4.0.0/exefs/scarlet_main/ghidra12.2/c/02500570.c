/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02500570; name: FUN_02500570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02500570(long *param_1,long *param_2,undefined1 (*param_3) [12])

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
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar25;
  float fVar26;
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  
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
    uVar2 = _UNK_03cabe58;
    uVar1 = _DAT_03cabe50;
    fVar9 = (float)*(undefined8 *)(*param_3 + 8);
    fVar10 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
    fVar7 = (float)*(undefined8 *)*param_3;
    fVar8 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    auVar13 = NEON_fmov(0x3f800000,4);
    fVar11 = fVar8 * fVar8 + fVar8 * fVar8;
    fVar12 = fVar9 * fVar9 + fVar9 * fVar9;
    auVar19._12_4_ = fVar10;
    auVar19._0_12_ = *param_3;
    auVar24._12_4_ = fVar10;
    auVar24._0_12_ = *param_3;
    auVar19 = NEON_ext(auVar19,auVar24,0xc,1);
    auVar14._0_4_ = auVar13._0_4_ - (fVar7 * fVar7 + fVar7 * fVar7);
    auVar14._4_4_ = auVar13._4_4_ - fVar11;
    auVar14._8_4_ = auVar13._8_4_ - fVar12;
    auVar14._12_4_ = auVar13._12_4_ - (fVar10 * fVar10 + fVar10 * fVar10);
    uVar6 = SUB124(*param_3,0);
    auVar20._4_12_ = auVar19._4_12_;
    auVar20._0_4_ = uVar6;
    auVar22._12_4_ = auVar19._12_4_;
    auVar22._0_8_ = auVar20._0_8_;
    auVar22._8_4_ = SUB124(*param_3,4);
    auVar21._8_8_ = auVar22._8_8_;
    auVar21._4_4_ = auVar19._0_4_;
    auVar21._0_4_ = uVar6;
    auVar23._0_12_ = auVar21._0_12_;
    auVar23._12_4_ = auVar19._4_4_;
    auVar24 = NEON_ext(auVar23,auVar23,8,1);
    auVar13._4_12_ = auVar14._4_12_;
    auVar13._0_4_ = auVar14._0_4_;
    auVar16._0_8_ = auVar13._0_8_;
    auVar16._8_4_ = auVar14._4_4_;
    auVar16._12_4_ = auVar14._12_4_;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = auVar14._0_4_;
    auVar15._0_4_ = auVar14._0_4_;
    auVar17._0_12_ = auVar15._0_12_;
    auVar17._12_4_ = auVar14._4_4_;
    auVar19 = NEON_ext(auVar17,auVar17,0xc,1);
    fVar18 = auVar24._0_4_ * SUB124(*param_3,8);
    fVar25 = auVar24._4_4_ * SUB124(*param_3,8);
    fVar26 = auVar24._8_4_ * fVar8;
    fVar18 = fVar18 + fVar18;
    fVar25 = fVar25 + fVar25;
    fVar26 = fVar26 + fVar26;
    fVar7 = fVar7 * fVar10 + fVar7 * fVar10;
    fVar8 = fVar8 * fVar10 + fVar8 * fVar10;
    fVar9 = fVar9 * fVar10 + fVar9 * fVar10;
    puVar4[5] = (ulong)(uint)(auVar19._8_4_ - fVar11);
    puVar4[4] = CONCAT44(fVar18 - fVar7,fVar25 + fVar8);
    puVar4[7] = uVar2;
    puVar4[6] = uVar1;
    puVar4[1] = (ulong)(uint)(fVar25 - fVar8);
    *puVar4 = CONCAT44(fVar26 + fVar9,auVar19._0_4_ - fVar12);
    puVar4[3] = (ulong)(uint)(fVar18 + fVar7);
    puVar4[2] = CONCAT44(auVar19._4_4_ - fVar12,fVar26 - fVar9);
    *param_1 = (long)puVar4;
    param_1[1] = (long)param_2;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


