/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00870770; name: FUN_00870770
 */


void FUN_00870770(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 (*local_110 [5]) [16];
  uint local_e8 [2];
  undefined1 (*local_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*local_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*local_c0) [16];
  uint local_b8;
  undefined1 (*local_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*local_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*local_90) [16];
  uint local_88;
  
  local_88 = *(uint *)((long)param_1 + 0x1c);
  if (local_88 != 0) {
    lVar6 = param_2[1];
    lVar9 = 0;
    if (*param_1 != 0) {
      lVar9 = *param_1 + (long)param_1;
    }
    local_90 = (undefined1 (*) [16])(lVar9 + (ulong)local_88 * 0x30);
    pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
    local_b0 = *(undefined1 (**) [16])*local_90;
    pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
    local_a0 = *(undefined1 (**) [16])local_90[1];
    uVar31 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    fVar25 = (float)param_3[8];
    fVar27 = (float)((ulong)param_3[8] >> 0x20);
    fVar26 = (float)param_3[2];
    fVar28 = (float)((ulong)param_3[2] >> 0x20);
    fVar29 = (float)param_3[3];
    fVar30 = (float)((ulong)param_3[3] >> 0x20);
    fVar14 = (float)param_3[6];
    auVar24._0_4_ = fVar14 * ((*(float *)*local_90 - fVar25) - fVar26);
    fVar15 = (float)((ulong)param_3[6] >> 0x20);
    auVar24._4_4_ = fVar15 * ((*(float *)(*local_90 + 4) - fVar27) - fVar28);
    fVar16 = (float)param_3[7];
    auVar24._8_4_ = fVar16 * ((*(float *)(*local_90 + 8) - fVar25) - fVar29);
    fVar17 = (float)((ulong)param_3[7] >> 0x20);
    auVar24._12_4_ = fVar17 * ((*(float *)(*local_90 + 0xc) - fVar27) - fVar30);
    fVar14 = fVar14 * ((SUB84(local_a0,0) + fVar25) - fVar26);
    fVar15 = fVar15 * (((float)((ulong)local_a0 >> 0x20) + fVar27) - fVar28);
    fVar16 = fVar16 * ((SUB84(pauStack_98,0) + fVar25) - fVar29);
    fVar17 = fVar17 * (((float)((ulong)pauStack_98 >> 0x20) + fVar27) - fVar30);
    auVar13._4_4_ = fVar15;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = fVar16;
    auVar13._12_4_ = fVar17;
    auVar20 = NEON_fmin(auVar24,auVar13,4);
    uVar18 = (undefined4)((ulong)param_3[5] >> 0x20);
    auVar2._4_4_ = fVar15;
    auVar2._0_4_ = fVar14;
    auVar2._8_4_ = fVar16;
    auVar2._12_4_ = fVar17;
    auVar13 = NEON_fmax(auVar24,auVar2,4);
    uVar22 = NEON_fmaxp(auVar20._0_8_,auVar20._0_8_,4);
    uVar22 = NEON_fmax(CONCAT44(auVar20._8_4_,auVar20._8_4_),uVar22,4);
    uVar19 = NEON_fminp(auVar13._0_8_,auVar13._0_8_,4);
    uVar19 = NEON_fmin(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar19,4);
    uVar22 = NEON_fmax(uVar22,uVar31,4);
    uVar19 = NEON_fmin(uVar19,CONCAT44(uVar18,uVar18),4);
    if ((float)uVar22 <= (float)uVar19) {
LAB_008708c4:
      while( true ) {
        uVar7 = *(uint *)(local_90[2] + 4);
        if (uVar7 == 0) break;
        local_e8[0] = uVar7;
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        pauVar10 = (undefined1 (*) [16])(lVar9 + (ulong)uVar7 * 0x30);
        local_110[4] = pauVar10;
        auVar13 = *pauVar10;
        local_110[1] = auVar13._8_8_;
        local_110[0] = auVar13._0_8_;
        local_110[3] = *(undefined1 (**) [16])(pauVar10[1] + 8);
        local_110[2] = *(undefined1 (**) [16])pauVar10[1];
        local_b8 = *(uint *)(local_90[2] + 8);
        local_c0 = (undefined1 (*) [16])(lVar9 + (ulong)local_b8 * 0x30);
        pauStack_d8 = *(undefined1 (**) [16])(*local_c0 + 8);
        local_e0 = *(undefined1 (**) [16])*local_c0;
        auVar2 = local_c0[1];
        pauStack_c8 = auVar2._8_8_;
        local_d0 = auVar2._0_8_;
        fVar14 = (float)param_3[8];
        fVar15 = (float)((ulong)param_3[8] >> 0x20);
        fVar32 = (float)param_3[2];
        fVar34 = (float)((ulong)param_3[2] >> 0x20);
        fVar35 = (float)param_3[3];
        fVar36 = (float)((ulong)param_3[3] >> 0x20);
        uVar18 = (undefined4)((ulong)param_3[5] >> 0x20);
        uVar37 = CONCAT44(uVar18,uVar18);
        fVar17 = (float)param_3[6];
        auVar23._0_4_ = fVar17 * ((SUB84(local_110[2],0) + fVar14) - fVar32);
        fVar26 = (float)((ulong)param_3[6] >> 0x20);
        auVar23._4_4_ = fVar26 * (((float)((ulong)local_110[2] >> 0x20) + fVar15) - fVar34);
        fVar28 = (float)param_3[7];
        auVar23._8_4_ = fVar28 * ((SUB84(local_110[3],0) + fVar14) - fVar35);
        fVar30 = (float)((ulong)param_3[7] >> 0x20);
        auVar23._12_4_ = fVar30 * (((float)((ulong)local_110[3] >> 0x20) + fVar15) - fVar36);
        fVar16 = fVar17 * ((auVar13._0_4_ - fVar14) - fVar32);
        fVar25 = fVar26 * ((auVar13._4_4_ - fVar15) - fVar34);
        fVar27 = fVar28 * ((auVar13._8_4_ - fVar14) - fVar35);
        fVar29 = fVar30 * ((auVar13._12_4_ - fVar15) - fVar36);
        auVar20._4_4_ = fVar25;
        auVar20._0_4_ = fVar16;
        auVar20._8_4_ = fVar27;
        auVar20._12_4_ = fVar29;
        auVar20 = NEON_fmin(auVar20,auVar23,4);
        auVar3._4_4_ = fVar25;
        auVar3._0_4_ = fVar16;
        auVar3._8_4_ = fVar27;
        auVar3._12_4_ = fVar29;
        auVar24 = NEON_fmax(auVar3,auVar23,4);
        uVar22 = NEON_fmaxp(auVar20._0_8_,auVar20._0_8_,4);
        uVar22 = NEON_fmax(CONCAT44(auVar20._8_4_,auVar20._8_4_),uVar22,4);
        uVar19 = NEON_fminp(auVar24._0_8_,auVar24._0_8_,4);
        uVar33 = NEON_fmax(uVar22,uVar31,4);
        uVar22 = NEON_fmin(CONCAT44(auVar24._8_4_,auVar24._8_4_),uVar19,4);
        uVar19 = NEON_fmin(uVar22,uVar37,4);
        auVar21._0_4_ = fVar17 * ((SUB84(local_e0,0) - fVar14) - fVar32);
        auVar21._4_4_ = fVar26 * (((float)((ulong)local_e0 >> 0x20) - fVar15) - fVar34);
        auVar21._8_4_ = fVar28 * ((SUB84(pauStack_d8,0) - fVar14) - fVar35);
        auVar21._12_4_ = fVar30 * (((float)((ulong)pauStack_d8 >> 0x20) - fVar15) - fVar36);
        fVar16 = (float)uVar33;
        fVar17 = fVar17 * ((auVar2._0_4_ + fVar14) - fVar32);
        fVar26 = fVar26 * ((auVar2._4_4_ + fVar15) - fVar34);
        fVar28 = fVar28 * ((auVar2._8_4_ + fVar14) - fVar35);
        fVar30 = fVar30 * ((auVar2._12_4_ + fVar15) - fVar36);
        auVar4._4_4_ = fVar26;
        auVar4._0_4_ = fVar17;
        auVar4._8_4_ = fVar28;
        auVar4._12_4_ = fVar30;
        auVar20 = NEON_fmin(auVar21,auVar4,4);
        auVar5._4_4_ = fVar26;
        auVar5._0_4_ = fVar17;
        auVar5._8_4_ = fVar28;
        auVar5._12_4_ = fVar30;
        auVar24 = NEON_fmax(auVar21,auVar5,4);
        uVar22 = NEON_fmaxp(auVar20._0_8_,auVar20._0_8_,4);
        uVar33 = NEON_fmax(CONCAT44(auVar20._8_4_,auVar20._8_4_),uVar22,4);
        uVar22 = NEON_fminp(auVar24._0_8_,auVar24._0_8_,4);
        uVar22 = NEON_fmin(CONCAT44(auVar24._8_4_,auVar24._8_4_),uVar22,4);
        uVar33 = NEON_fmax(uVar33,uVar31,4);
        fVar14 = (float)uVar33;
        uVar22 = NEON_fmin(uVar22,uVar37,4);
        bVar1 = fVar16 <= (float)uVar19 | (fVar14 <= (float)uVar22) << 1;
        if (bVar1 == 1) {
          local_b0 = auVar13._0_8_;
          pauStack_a8 = auVar13._8_8_;
          local_a0 = local_110[2];
          pauStack_98 = local_110[3];
LAB_00870ae0:
          local_90 = pauVar10;
          local_88 = uVar7;
        }
        else {
          if (bVar1 == 2) {
            local_b0 = local_e0;
            pauVar10 = local_c0;
            uVar7 = local_b8;
            pauStack_a8 = pauStack_d8;
            local_a0 = auVar2._0_8_;
            pauStack_98 = auVar2._8_8_;
            goto LAB_00870ae0;
          }
          if (bVar1 != 3) goto LAB_00870a70;
          *(uint *)(param_3 + 9) = (uint)(fVar14 < fVar16);
          iVar8 = (int)param_2[1];
          lVar9 = (long)iVar8;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar8) {
            FUN_02eb1f88(param_2,PTR_PTR_047d1a50,lVar9 + 1);
            iVar8 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar9 + 1);
          uVar11 = (ulong)(fVar14 < fVar16);
          *(uint *)(*param_2 + (long)iVar8 * 4) = local_e8[(ulong)(fVar14 >= fVar16) * 0xc];
          pauStack_a8 = local_110[uVar11 * 6 + 1];
          pauStack_98 = local_110[uVar11 * 6 + 3];
          local_a0 = local_110[uVar11 * 6 + 2];
          local_b0 = local_110[uVar11 * 6];
          local_90 = local_110[uVar11 * 6 + 4];
          local_88 = local_e8[uVar11 * 0xc];
        }
      }
      local_110[0] = (undefined1 (*) [16])
                     CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),
                              *(undefined4 *)((long)param_3 + 0x2c));
      puVar12 = (undefined8 *)*param_3;
      uVar7 = (**(code **)(*(long *)*puVar12 + 0x10))
                        ((long *)*puVar12,*(undefined4 *)(local_90[2] + 8),&local_b0,local_110);
      *(uint *)(puVar12 + 1) = *(uint *)(puVar12 + 1) | uVar7;
      param_3[5] = CONCAT44((int)local_110[0],(int)param_3[5]);
      param_3[4] = param_3[4];
LAB_00870a70:
      if ((int)lVar6 < (int)param_2[1]) {
        uVar7 = (int)param_2[1] - 1;
        uVar11 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
        *(uint *)(param_2 + 1) = uVar7;
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        local_90 = (undefined1 (*) [16])(lVar9 + (ulong)*(uint *)(*param_2 + uVar11) * 0x30);
        pauStack_a8 = *(undefined1 (**) [16])(*local_90 + 8);
        local_b0 = *(undefined1 (**) [16])*local_90;
        local_a0 = *(undefined1 (**) [16])local_90[1];
        pauStack_98 = *(undefined1 (**) [16])(local_90[1] + 8);
        local_88 = *(uint *)(*param_2 + uVar11);
        goto LAB_008708c4;
      }
    }
  }
  return;
}


