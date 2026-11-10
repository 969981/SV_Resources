/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00870fbc; name: FUN_00870fbc
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00870fbc(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  undefined4 *puVar14;
  float extraout_s0;
  float extraout_var;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 (*local_100 [5]) [16];
  uint local_d8 [2];
  undefined1 (*local_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*local_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*local_b0) [16];
  uint local_a8;
  undefined1 (*local_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*local_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 (*local_80) [16];
  uint local_78;
  
  local_78 = *(uint *)((long)param_1 + 0x1c);
  if (local_78 != 0) {
    lVar7 = param_2[1];
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    local_80 = (undefined1 (*) [16])(lVar10 + (ulong)local_78 * 0x30);
    auVar15 = *local_80;
    local_a0 = auVar15._0_8_;
    pauStack_88 = *(undefined1 (**) [16])(local_80[1] + 8);
    uVar19 = (undefined4)((ulong)pauStack_88 >> 0x20);
    local_90 = *(undefined1 (**) [16])local_80[1];
    pfVar12 = (float *)(param_3 + 4);
    pauVar13 = (undefined1 (*) [16])(param_3 + 2);
    fVar23 = (float)((ulong)param_3[3] >> 0x20);
    auVar25._12_4_ = fVar23;
    auVar25._0_12_ = *(undefined1 (*) [12])*pauVar13;
    auVar25 = NEON_fmax(auVar15,auVar25,4);
    auVar26._12_4_ = uVar19;
    auVar26._0_12_ = *(undefined1 (*) [12])local_80[1];
    auVar26 = NEON_fmin(auVar26,auVar25,4);
    fVar20 = (float)*(undefined8 *)*pauVar13 - auVar26._0_4_;
    fVar21 = (float)((ulong)*(undefined8 *)*pauVar13 >> 0x20) - auVar26._4_4_;
    fVar22 = (float)param_3[3] - auVar26._8_4_;
    fVar23 = fVar23 - auVar26._12_4_;
    fVar20 = fVar20 * fVar20;
    fVar21 = fVar21 * fVar21;
    fVar22 = fVar22 * fVar22;
    fVar23 = fVar23 * fVar23;
    auVar29._4_4_ = fVar21;
    auVar29._0_4_ = fVar20;
    auVar29._8_4_ = fVar22;
    auVar29._12_4_ = fVar23;
    auVar5._4_4_ = fVar21;
    auVar5._0_4_ = fVar20;
    auVar5._8_4_ = fVar22;
    auVar5._12_4_ = fVar23;
    auVar26 = NEON_ext(auVar29,auVar5,8,1);
    if (fVar20 + fVar21 + auVar26._0_4_ <= (float)*(undefined8 *)pfVar12) {
      uVar16 = (int)local_90;
      uVar17 = (int)((ulong)local_90 >> 0x20);
      uVar18 = (int)pauStack_88;
      pauStack_98 = auVar15._8_8_;
LAB_008710b0:
      while( true ) {
        uVar2 = *(uint *)(local_80[2] + 4);
        if (uVar2 == 0) break;
        local_d8[0] = uVar2;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        local_100[4] = (undefined1 (*) [16])(lVar10 + (ulong)uVar2 * 0x30);
        auVar15 = *local_100[4];
        local_100[1] = auVar15._8_8_;
        local_100[0] = auVar15._0_8_;
        local_100[3] = *(undefined1 (**) [16])(local_100[4][1] + 8);
        uVar18 = SUB84(local_100[3],0);
        uVar19 = (undefined4)((ulong)local_100[3] >> 0x20);
        local_100[2] = *(undefined1 (**) [16])local_100[4][1];
        uVar16 = SUB84(local_100[2],0);
        uVar17 = (undefined4)((ulong)local_100[2] >> 0x20);
        local_a8 = *(uint *)(local_80[2] + 8);
        local_b0 = (undefined1 (*) [16])(lVar10 + (ulong)local_a8 * 0x30);
        pauStack_c8 = *(undefined1 (**) [16])(*local_b0 + 8);
        local_d0 = *(undefined1 (**) [16])*local_b0;
        pauStack_b8 = *(undefined1 (**) [16])(local_b0[1] + 8);
        uVar24 = (undefined4)((ulong)pauStack_b8 >> 0x20);
        local_c0 = *(undefined1 (**) [16])local_b0[1];
        auVar26 = *(undefined1 (*) [16])(param_3 + 2);
        auVar25 = NEON_fmax(auVar15,auVar26,4);
        auVar3._12_4_ = uVar19;
        auVar3._0_12_ = *(undefined1 (*) [12])local_100[4][1];
        auVar25 = NEON_fmin(auVar3,auVar25,4);
        auVar29 = NEON_fmax(*local_b0,auVar26,4);
        fVar20 = auVar26._0_4_ - auVar25._0_4_;
        fVar21 = auVar26._4_4_ - auVar25._4_4_;
        fVar22 = auVar26._8_4_ - auVar25._8_4_;
        fVar23 = auVar26._12_4_ - auVar25._12_4_;
        auVar6._12_4_ = uVar24;
        auVar6._0_12_ = *(undefined1 (*) [12])local_b0[1];
        auVar29 = NEON_fmin(auVar6,auVar29,4);
        auVar28._0_4_ = fVar20 * fVar20;
        auVar28._4_4_ = fVar21 * fVar21;
        auVar28._8_4_ = fVar22 * fVar22;
        auVar28._12_4_ = fVar23 * fVar23;
        auVar25 = NEON_ext(auVar28,auVar28,8,1);
        fVar20 = auVar26._0_4_ - auVar29._0_4_;
        fVar21 = auVar26._4_4_ - auVar29._4_4_;
        fVar22 = auVar26._8_4_ - auVar29._8_4_;
        fVar23 = auVar26._12_4_ - auVar29._12_4_;
        auVar27._0_4_ = fVar20 * fVar20;
        auVar27._4_4_ = fVar21 * fVar21;
        auVar27._8_4_ = fVar22 * fVar22;
        auVar27._12_4_ = fVar23 * fVar23;
        fVar21 = auVar28._0_4_ + auVar28._4_4_ + auVar25._0_4_;
        auVar26 = NEON_ext(auVar27,auVar27,8,1);
        fVar20 = auVar27._0_4_ + auVar27._4_4_ + auVar26._0_4_;
        bVar1 = fVar21 <= (float)param_3[4] | (fVar20 <= (float)param_3[4]) << 1;
        if (bVar1 == 1) {
          local_a0 = auVar15._0_8_;
          pauStack_98 = auVar15._8_8_;
          local_90 = local_100[2];
          pauStack_88 = local_100[3];
          local_80 = local_100[4];
          local_78 = uVar2;
        }
        else if (bVar1 == 2) {
          local_a0 = *(undefined1 (**) [16])*local_b0;
          auVar15 = *local_b0;
          uVar16 = (int)local_c0;
          uVar17 = (int)((ulong)local_c0 >> 0x20);
          uVar18 = (int)pauStack_b8;
          uVar19 = uVar24;
          pauStack_98 = *(undefined1 (**) [16])(*local_b0 + 8);
          local_90 = local_c0;
          pauStack_88 = pauStack_b8;
          local_80 = local_b0;
          local_78 = local_a8;
        }
        else {
          if (bVar1 != 3) goto LAB_00871254;
          *(uint *)(param_3 + 5) = (uint)(fVar20 < fVar21);
          iVar9 = (int)param_2[1];
          lVar10 = (long)iVar9;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar9) {
            FUN_02eb1f88(param_2,PTR_PTR_047d1a50,lVar10 + 1);
            iVar9 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar10 + 1);
          uVar11 = (ulong)(fVar20 < fVar21);
          *(uint *)(*param_2 + (long)iVar9 * 4) = local_d8[(ulong)(fVar20 >= fVar21) * 0xc];
          auVar15._8_8_ = local_100[uVar11 * 6 + 1];
          auVar15._0_8_ = local_100[uVar11 * 6];
          pauStack_88 = local_100[uVar11 * 6 + 3];
          local_90 = local_100[uVar11 * 6 + 2];
          local_a0 = auVar15._0_8_;
          uVar16 = (int)local_90;
          uVar17 = (int)((ulong)local_90 >> 0x20);
          uVar18 = (int)pauStack_88;
          uVar19 = (int)((ulong)pauStack_88 >> 0x20);
          pauStack_98 = auVar15._8_8_;
          local_80 = local_100[uVar11 * 6 + 4];
          local_78 = local_d8[uVar11 * 0xc];
        }
      }
      local_100[0] = *(undefined1 (**) [16])*pauVar13;
      local_100[1] = (undefined1 (*) [16])param_3[3];
      puVar14 = (undefined4 *)*param_3;
      plVar8 = *(long **)(puVar14 + 8);
      if (plVar8 == (long *)0x0) {
        auVar26 = NEON_fmax(*pauVar13,auVar15,4);
        auVar4._4_4_ = uVar17;
        auVar4._0_4_ = uVar16;
        auVar4._8_4_ = uVar18;
        auVar4._12_4_ = uVar19;
        auVar26 = NEON_fmin(auVar26,auVar4,4);
        local_100[1] = auVar26._8_8_;
        local_100[0] = auVar26._0_8_;
        fVar22 = auVar26._0_4_ - (float)*(undefined8 *)*pauVar13;
        fVar23 = auVar26._4_4_ - (float)((ulong)*(undefined8 *)*pauVar13 >> 0x20);
        fVar21 = auVar26._8_4_ - (float)param_3[3];
        fVar22 = fVar22 * fVar22;
        fVar23 = fVar23 * fVar23;
        fVar21 = fVar21 * fVar21;
        fVar20 = fVar22 + fVar23 + fVar21;
        fVar21 = fVar22 + fVar23 + fVar21;
        if (fVar20 < (float)*(undefined8 *)pfVar12) goto LAB_0087123c;
      }
      else {
        (**(code **)(*plVar8 + 0x10))
                  (plVar8,*(undefined4 *)(local_80[2] + 8),&local_a0,pauVar13,local_100,pfVar12);
        fVar20 = extraout_s0;
        fVar21 = extraout_var;
        if (extraout_s0 < (float)*(undefined8 *)pfVar12) {
LAB_0087123c:
          *pfVar12 = fVar20;
          *(float *)((long)param_3 + 0x24) = fVar21;
          *(undefined1 (**) [16])(puVar14 + 6) = local_100[1];
          *(undefined1 (**) [16])(puVar14 + 4) = local_100[0];
          *puVar14 = *(undefined4 *)(local_80[2] + 8);
        }
      }
LAB_00871254:
      if ((int)lVar7 < (int)param_2[1]) {
        uVar2 = (int)param_2[1] - 1;
        uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
        *(uint *)(param_2 + 1) = uVar2;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        local_80 = (undefined1 (*) [16])(lVar10 + (ulong)*(uint *)(*param_2 + uVar11) * 0x30);
        auVar15 = *local_80;
        local_a0 = auVar15._0_8_;
        pauStack_88 = *(undefined1 (**) [16])(local_80[1] + 8);
        local_90 = *(undefined1 (**) [16])local_80[1];
        uVar16 = (int)local_90;
        uVar17 = (int)((ulong)local_90 >> 0x20);
        uVar18 = (int)pauStack_88;
        uVar19 = (int)((ulong)pauStack_88 >> 0x20);
        pauStack_98 = auVar15._8_8_;
        local_78 = *(uint *)(*param_2 + uVar11);
        goto LAB_008710b0;
      }
    }
  }
  return;
}


