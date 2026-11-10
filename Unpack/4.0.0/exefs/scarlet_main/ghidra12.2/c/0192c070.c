/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192c070; name: FUN_0192c070
 */


void FUN_0192c070(undefined8 *param_1,float *param_2,undefined8 *param_3,float *param_4,
                 float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined8 uVar12;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined8 uVar17;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  
  plVar7 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  pfVar5 = (float *)(**(code **)(*plVar7 + 0x10))(plVar7,0x40,0x10);
  if (pfVar5 == (float *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    fVar10 = (float)*param_3;
    fVar13 = (float)((ulong)*param_3 >> 0x20);
    fVar15 = (float)param_3[1];
    fVar18 = (float)((ulong)param_3[1] >> 0x20);
    auVar22._0_4_ = fVar10 * fVar10 + fVar13 * fVar13;
    auVar22._4_4_ = fVar15 * fVar15 + fVar18 * fVar18;
    auVar22._8_4_ = fVar10 * fVar10 + fVar13 * fVar13;
    auVar22._12_4_ = fVar15 * fVar15 + fVar18 * fVar18;
    fVar11 = *param_2;
    fVar14 = param_2[1];
    fVar16 = param_2[2];
    fVar19 = param_2[3];
    fVar20 = *param_4;
    pfVar5[0xc] = ABS(*param_5);
    auVar22 = NEON_ext(auVar22,auVar22,4,1);
    fVar21 = SQRT(auVar22._0_4_ + auVar22._4_4_);
    if (((ABS(fVar21) < 1.1920929e-07) || (fVar20 < 0.0)) || (ABS(fVar20) < 1.1920929e-07)) {
      fVar10 = fVar11 - fVar11;
      fVar13 = fVar14 - fVar14;
      uVar12 = CONCAT44(fVar13,fVar10);
      fVar15 = fVar16 - fVar16;
      fVar18 = fVar19 - fVar19;
      uVar17 = CONCAT44(fVar18,fVar15);
      auVar9._0_4_ = fVar10 * fVar10 + fVar13 * fVar13;
      auVar9._4_4_ = fVar15 * fVar15 + fVar18 * fVar18;
      auVar9._8_4_ = fVar10 * fVar10 + fVar13 * fVar13;
      auVar9._12_4_ = fVar15 * fVar15 + fVar18 * fVar18;
      auVar22 = NEON_ext(auVar9,auVar9,4,1);
      fVar20 = SQRT(auVar22._0_4_ + auVar22._4_4_);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar20 < 1.1920929e-07) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar20)) {
          bVar1 = fVar20 < -1.1920929e-07;
          bVar2 = fVar20 == -1.1920929e-07;
          bVar3 = false;
        }
      }
      fVar21 = fVar11;
      fVar23 = fVar14;
      fVar24 = fVar16;
      fVar25 = fVar19;
      if (bVar2 || bVar1 != bVar3) {
        uVar12 = CONCAT44(fVar13 / fVar20,fVar10 / fVar20);
        uVar17 = CONCAT44(fVar18 / fVar20,fVar15 / fVar20);
      }
    }
    else {
      fVar20 = fVar20 * 0.5;
      fVar10 = fVar10 * (fVar20 / fVar21);
      fVar13 = fVar13 * (fVar20 / SQRT(auVar22._8_4_ + auVar22._12_4_));
      fVar15 = fVar15 * (fVar20 / SQRT(auVar22._0_4_ + auVar22._4_4_));
      fVar18 = fVar18 * (fVar20 / SQRT(auVar22._8_4_ + auVar22._12_4_));
      fVar21 = fVar11 + fVar10;
      fVar23 = fVar14 + fVar13;
      fVar24 = fVar16 + fVar15;
      fVar25 = fVar19 + fVar18;
      fVar11 = (fVar11 - fVar10) - fVar21;
      fVar14 = (fVar14 - fVar13) - fVar23;
      uVar12 = CONCAT44(fVar14,fVar11);
      fVar16 = (fVar16 - fVar15) - fVar24;
      fVar19 = (fVar19 - fVar18) - fVar25;
      uVar17 = CONCAT44(fVar19,fVar16);
      auVar8._0_4_ = fVar11 * fVar11 + fVar14 * fVar14;
      auVar8._4_4_ = fVar16 * fVar16 + fVar19 * fVar19;
      auVar8._8_4_ = fVar11 * fVar11 + fVar14 * fVar14;
      auVar8._12_4_ = fVar16 * fVar16 + fVar19 * fVar19;
      auVar22 = NEON_ext(auVar8,auVar8,4,1);
      fVar20 = SQRT(auVar22._0_4_ + auVar22._4_4_);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar20 < 1.1920929e-07) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar20)) {
          bVar1 = fVar20 < -1.1920929e-07;
          bVar2 = fVar20 == -1.1920929e-07;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        uVar12 = CONCAT44(fVar14 / fVar20,fVar11 / fVar20);
        uVar17 = CONCAT44(fVar19 / fVar20,fVar16 / fVar20);
      }
    }
    pfVar5[8] = fVar20;
    pfVar5[2] = fVar24;
    pfVar5[3] = fVar25;
    *pfVar5 = fVar21;
    pfVar5[1] = fVar23;
    *(undefined8 *)(pfVar5 + 6) = uVar17;
    *(undefined8 *)(pfVar5 + 4) = uVar12;
    *param_1 = pfVar5;
    param_1[1] = plVar7;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


