/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ffbd0; name: FUN_024ffbd0
 */


void FUN_024ffbd0(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined1 (*param_4) [12],
                 undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    fVar12 = (float)*(undefined8 *)(*param_4 + 8);
    fVar14 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
    fVar11 = (float)*(undefined8 *)*param_4;
    fVar28 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
    auVar5._12_4_ = fVar14;
    auVar5._0_12_ = *param_4;
    auVar22._12_4_ = fVar14;
    auVar22._0_12_ = *param_4;
    auVar22 = NEON_ext(auVar5,auVar22,0xc,1);
    fVar17 = fVar28 * fVar28 + fVar28 * fVar28;
    fVar18 = fVar12 * fVar12 + fVar12 * fVar12;
    auVar5 = NEON_fmov(0x3f800000,4);
    uVar20 = param_5[1];
    uVar19 = *param_5;
    uVar4 = SUB124(*param_4,0);
    auVar23._4_12_ = auVar22._4_12_;
    auVar23._0_4_ = uVar4;
    auVar25._12_4_ = auVar22._12_4_;
    auVar25._0_8_ = auVar23._0_8_;
    auVar25._8_4_ = SUB124(*param_4,4);
    auVar24._8_8_ = auVar25._8_8_;
    auVar24._4_4_ = auVar22._0_4_;
    auVar24._0_4_ = uVar4;
    auVar26._0_12_ = auVar24._0_12_;
    auVar26._12_4_ = auVar22._4_4_;
    auVar22 = NEON_ext(auVar26,auVar26,8,1);
    auVar6._0_4_ = auVar5._0_4_ - (fVar11 * fVar11 + fVar11 * fVar11);
    auVar6._4_4_ = auVar5._4_4_ - fVar17;
    auVar6._8_4_ = auVar5._8_4_ - fVar18;
    auVar6._12_4_ = auVar5._12_4_ - (fVar14 * fVar14 + fVar14 * fVar14);
    fVar11 = fVar11 * fVar14 + fVar11 * fVar14;
    fVar13 = fVar28 * fVar14 + fVar28 * fVar14;
    fVar15 = fVar12 * fVar14 + fVar12 * fVar14;
    fVar21 = auVar22._0_4_ * SUB124(*param_4,8);
    fVar27 = auVar22._4_4_ * SUB124(*param_4,8);
    fVar28 = auVar22._8_4_ * fVar28;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = auVar6._0_4_;
    auVar9._0_8_ = auVar7._0_8_;
    auVar9._8_4_ = auVar6._4_4_;
    auVar9._12_4_ = auVar6._12_4_;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = auVar6._0_4_;
    auVar8._0_4_ = auVar6._0_4_;
    auVar10._0_12_ = auVar8._0_12_;
    auVar10._12_4_ = auVar6._4_4_;
    fVar21 = fVar21 + fVar21;
    fVar27 = fVar27 + fVar27;
    fVar28 = fVar28 + fVar28;
    auVar5 = NEON_ext(auVar10,auVar10,0xc,1);
    fVar16 = (float)param_3[1];
    fVar12 = (float)*param_3;
    fVar14 = (float)((ulong)*param_3 >> 0x20);
    *(float *)(puVar2 + 5) = (auVar5._8_4_ - fVar17) * fVar16;
    *(float *)((long)puVar2 + 0x2c) = fVar16 * 0.0;
    *(float *)(puVar2 + 4) = (fVar27 + fVar13) * fVar16;
    *(float *)((long)puVar2 + 0x24) = (fVar21 - fVar11) * fVar16;
    puVar2[7] = CONCAT44(0x3f800000,(int)uVar20);
    puVar2[6] = uVar19;
    puVar2[1] = CONCAT44(fVar12 * 0.0,(fVar27 - fVar13) * fVar12);
    *puVar2 = CONCAT44((fVar28 + fVar15) * fVar12,(auVar5._0_4_ - fVar18) * fVar12);
    *(float *)(puVar2 + 3) = (fVar21 + fVar11) * fVar14;
    *(float *)((long)puVar2 + 0x1c) = fVar14 * 0.0;
    *(float *)(puVar2 + 2) = (fVar28 - fVar15) * fVar14;
    *(float *)((long)puVar2 + 0x14) = (auVar5._4_4_ - fVar18) * fVar14;
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


