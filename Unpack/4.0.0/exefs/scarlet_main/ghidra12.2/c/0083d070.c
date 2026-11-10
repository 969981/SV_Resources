/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0083d070; name: FUN_0083d070
 */


void FUN_0083d070(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  float fVar31;
  float fVar35;
  float fVar36;
  undefined1 auVar32 [16];
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fStack_cc;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong local_a0;
  byte *local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  byte *local_68;
  
  if ((int)param_1[1] != 0) {
    uStack_b8 = param_1[3];
    local_c0 = param_1[2];
    local_a8 = param_1[5];
    local_b0 = param_1[4];
    auVar33 = *(undefined1 (*) [16])(param_3 + 6);
    auVar40._0_4_ = (float)local_c0 - *(float *)(param_3 + 8);
    auVar40._4_4_ = (float)(local_c0 >> 0x20) - *(float *)((long)param_3 + 0x44);
    auVar40._8_4_ = (float)uStack_b8 - *(float *)(param_3 + 9);
    auVar40._12_4_ = (float)(uStack_b8 >> 0x20) - *(float *)((long)param_3 + 0x4c);
    auVar32._0_4_ = (float)local_b0 + *(float *)(param_3 + 8);
    auVar32._4_4_ = (float)(local_b0 >> 0x20) + *(float *)((long)param_3 + 0x44);
    auVar32._8_4_ = (float)local_a8 + *(float *)(param_3 + 9);
    auVar32._12_4_ = (float)(local_a8 >> 0x20) + *(float *)((long)param_3 + 0x4c);
    auVar40 = NEON_fmax(auVar40,auVar33,4);
    auVar32 = NEON_fmin(auVar32,auVar40,4);
    fVar31 = auVar33._0_4_ - auVar32._0_4_;
    fVar35 = auVar33._4_4_ - auVar32._4_4_;
    fVar36 = auVar33._8_4_ - auVar32._8_4_;
    fVar37 = auVar33._12_4_ - auVar32._12_4_;
    auVar33._0_4_ = fVar31 * fVar31;
    auVar33._4_4_ = fVar35 * fVar35;
    auVar33._8_4_ = fVar36 * fVar36;
    auVar33._12_4_ = fVar37 * fVar37;
    auVar32 = NEON_ext(auVar33,auVar33,8,1);
    if (auVar33._0_4_ + auVar33._4_4_ + auVar32._0_4_ <= (float)param_3[10]) {
      lVar16 = param_2[1];
      auVar33 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x1e0);
      fVar31 = auVar33._0_4_;
      uVar18 = 0;
      pbVar19 = (byte *)(*param_1 + (long)param_1);
LAB_0083d144:
      while( true ) {
        uVar17 = (uint)uVar18;
        if (-1 < (char)pbVar19[3]) break;
        uVar18 = (long)(int)uVar17 + 1;
        fStack_cc = auVar33._4_4_;
        local_80 = (float)local_b0;
        local_90 = (float)local_c0;
        fStack_7c = (float)(local_b0 >> 0x20);
        fStack_8c = (float)(local_c0 >> 0x20);
        fStack_78 = (float)local_a8;
        fStack_88 = (float)uStack_b8;
        local_a0._0_4_ = (int)uVar18;
        fVar35 = (local_80 - local_90) * fVar31;
        fStack_cc = (fStack_7c - fStack_8c) * fStack_cc;
        fVar36 = (fStack_78 - fStack_88) * fVar31;
        uVar21 = ((ulong)pbVar19[4] << 1 | ((ulong)pbVar19[3] & 0x7f) << 9) + (long)(int)uVar17;
        local_70 = (int)uVar21;
        local_98 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
        local_68 = (byte *)((long)param_1 + uVar21 * 5 + *param_1);
        bVar10 = *local_98 >> 4;
        bVar2 = *local_98 & 0xf;
        bVar11 = local_98[1] >> 4;
        bVar3 = local_98[1] & 0xf;
        bVar12 = local_98[2] >> 4;
        bVar4 = local_98[2] & 0xf;
        bVar13 = *local_68 >> 4;
        bVar5 = *local_68 & 0xf;
        bVar14 = local_68[1] >> 4;
        bVar15 = local_68[2] >> 4;
        bVar6 = local_68[1] & 0xf;
        bVar7 = local_68[2] & 0xf;
        fVar38 = local_90 + (float)(byte)(bVar10 * bVar10) * fVar35;
        fVar44 = fStack_8c + (float)(byte)(bVar11 * bVar11) * fStack_cc;
        local_c0 = CONCAT44(fVar44,fVar38);
        fVar45 = fStack_88 + (float)(byte)(bVar12 * bVar12) * fVar36;
        uStack_b8 = (ulong)(uint)fVar45;
        fVar46 = local_80 - (float)(byte)(bVar2 * bVar2) * fVar35;
        fVar47 = fStack_7c - (float)(byte)(bVar3 * bVar3) * fStack_cc;
        local_b0 = CONCAT44(fVar47,fVar46);
        fVar48 = fStack_78 - (float)(byte)(bVar4 * bVar4) * fVar36;
        local_a8 = (ulong)(uint)fVar48;
        uStack_84 = 0;
        local_90 = local_90 + (float)(byte)(bVar13 * bVar13) * fVar35;
        fStack_8c = fStack_8c + (float)(byte)(bVar14 * bVar14) * fStack_cc;
        uStack_74 = 0;
        fStack_88 = fStack_88 + (float)(byte)(bVar15 * bVar15) * fVar36;
        local_80 = local_80 - (float)(byte)(bVar5 * bVar5) * fVar35;
        fStack_78 = fStack_78 - (float)(byte)(bVar7 * bVar7) * fVar36;
        fStack_7c = fStack_7c - (float)(byte)(bVar6 * bVar6) * fStack_cc;
        auVar32 = *(undefined1 (*) [16])(param_3 + 6);
        fVar35 = *(float *)(param_3 + 8);
        fVar36 = *(float *)((long)param_3 + 0x44);
        fVar37 = *(float *)(param_3 + 9);
        fVar43 = *(float *)((long)param_3 + 0x4c);
        auVar39._0_4_ = fVar35 + fVar46;
        auVar39._4_4_ = fVar36 + fVar47;
        auVar39._8_4_ = fVar37 + fVar48;
        auVar39._12_4_ = fVar43 + 0.0;
        auVar34._0_4_ = fVar38 - fVar35;
        auVar34._4_4_ = fVar44 - fVar36;
        auVar34._8_4_ = fVar45 - fVar37;
        auVar34._12_4_ = 0.0 - fVar43;
        auVar40 = NEON_fmax(auVar34,auVar32,4);
        auVar40 = NEON_fmin(auVar39,auVar40,4);
        fVar38 = auVar32._0_4_ - auVar40._0_4_;
        fVar44 = auVar32._4_4_ - auVar40._4_4_;
        fVar45 = auVar32._8_4_ - auVar40._8_4_;
        fVar46 = auVar32._12_4_ - auVar40._12_4_;
        fVar38 = fVar38 * fVar38;
        fVar44 = fVar44 * fVar44;
        fVar45 = fVar45 * fVar45;
        fVar46 = fVar46 * fVar46;
        auVar49._0_4_ = local_90 - fVar35;
        auVar49._4_4_ = fStack_8c - fVar36;
        auVar49._8_4_ = fStack_88 - fVar37;
        auVar49._12_4_ = 0.0 - fVar43;
        auVar41._0_4_ = fVar35 + local_80;
        auVar41._4_4_ = fVar36 + fStack_7c;
        auVar41._8_4_ = fVar37 + fStack_78;
        auVar41._12_4_ = fVar43 + 0.0;
        auVar40 = NEON_fmax(auVar49,auVar32,4);
        auVar40 = NEON_fmin(auVar41,auVar40,4);
        auVar50._4_4_ = fVar44;
        auVar50._0_4_ = fVar38;
        auVar50._8_4_ = fVar45;
        auVar50._12_4_ = fVar46;
        auVar9._4_4_ = fVar44;
        auVar9._0_4_ = fVar38;
        auVar9._8_4_ = fVar45;
        auVar9._12_4_ = fVar46;
        auVar50 = NEON_ext(auVar50,auVar9,8,1);
        fVar35 = auVar32._0_4_ - auVar40._0_4_;
        fVar36 = auVar32._4_4_ - auVar40._4_4_;
        fVar37 = auVar32._8_4_ - auVar40._8_4_;
        fVar43 = auVar32._12_4_ - auVar40._12_4_;
        auVar42._0_4_ = fVar35 * fVar35;
        auVar42._4_4_ = fVar36 * fVar36;
        auVar42._8_4_ = fVar37 * fVar37;
        auVar42._12_4_ = fVar43 * fVar43;
        auVar32 = NEON_ext(auVar42,auVar42,8,1);
        fVar36 = fVar38 + fVar44 + auVar50._0_4_;
        fVar35 = auVar42._0_4_ + auVar42._4_4_ + auVar32._0_4_;
        bVar2 = fVar36 <= (float)param_3[10] | (fVar35 <= (float)param_3[10]) << 1;
        if (bVar2 == 1) {
          pbVar19 = local_98;
        }
        else if (bVar2 == 2) {
          uVar18 = uVar21 & 0xffffffff;
          local_a8 = (ulong)(uint)fStack_78;
          uStack_b8 = (ulong)(uint)fStack_88;
          pbVar19 = local_68;
          local_b0 = CONCAT44(fStack_7c,local_80);
          local_c0 = CONCAT44(fStack_8c,local_90);
        }
        else {
          if (bVar2 != 3) goto LAB_0083d2e4;
          *(uint *)(param_3 + 0xb) = (uint)(fVar35 < fVar36);
          iVar23 = (int)param_2[1];
          lVar20 = (long)iVar23;
          uVar18 = (ulong)(fVar35 >= fVar36);
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar23) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar20 + 1);
            iVar23 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar20 + 1);
          uVar21 = (&local_a0)[uVar18 * 6 + -4];
          puVar22 = (ulong *)(*param_2 + (long)iVar23 * 0x30);
          puVar22[1] = (&local_a0)[uVar18 * 6 + -3];
          *puVar22 = uVar21;
          uVar30 = (&local_a0)[uVar18 * 6 + -2];
          uVar21 = (ulong)(fVar35 < fVar36);
          puVar22[3] = (&local_a0)[uVar18 * 6 + -1];
          puVar22[2] = uVar30;
          *(int *)(puVar22 + 4) = (int)(&local_a0)[uVar18 * 6];
          uStack_b8 = (&local_a0)[uVar21 * 6 + -3];
          local_a8 = (&local_a0)[uVar21 * 6 + -1];
          uVar18 = (ulong)(uint)(&local_a0)[uVar21 * 6];
          pbVar19 = (byte *)(&local_a0)[uVar21 * 6 + 1];
          local_b0 = (&local_a0)[uVar21 * 6 + -2];
          local_c0 = (&local_a0)[uVar21 * 6 + -4];
        }
      }
      lVar20 = *param_3;
      lVar24 = *(long *)(lVar20 + 0xa8);
      if (lVar24 != 0) {
        lVar27 = *(long *)(lVar24 + 0x20);
        lVar1 = 0;
        if (lVar27 != 0) {
          lVar1 = lVar27 + lVar24 + 0x20;
        }
        lVar28 = *(long *)(lVar1 + 0x48);
        lVar27 = 0;
        if (lVar28 != 0) {
          lVar27 = lVar28 + lVar1 + 0x48;
        }
        uVar8 = uVar17 + 0x1f;
        if (-1 < (int)uVar17) {
          uVar8 = uVar17;
        }
        if ((*(uint *)(lVar24 + 0x28 +
                      (long)((int)uVar8 >> 5) * 4 +
                      (long)(*(int *)(lVar27 + 0x68) << 3) * 4 + *(long *)(lVar24 + 0x28)) >>
             (ulong)(uVar17 & 0x1f) & 1) == 0) goto LAB_0083d2e4;
      }
      lVar28 = *(long *)(lVar20 + 0x50);
      lVar27 = (long)(param_1 + 8) + (ulong)CONCAT11(pbVar19[3],pbVar19[4]) * 0x60 + param_1[8];
      lVar25 = *(long *)(lVar28 + 0x40);
      lVar24 = lVar25 + lVar28 + 0x40;
      lVar1 = 0;
      if (lVar25 != 0) {
        lVar1 = lVar24;
      }
      iVar23 = (int)(lVar27 - lVar1 >> 5) * -0x55555555;
      if ((*(int *)(lVar20 + 0x94) != iVar23) || (*(int *)(lVar20 + 0x98) != iVar23)) {
        lVar24 = lVar24 + (long)iVar23 * 0x60;
        *(long *)(lVar20 + 0x60) = lVar24;
        *(int *)(lVar20 + 0x94) = iVar23;
        *(int *)(lVar20 + 0x98) = iVar23;
        lVar25 = *(long *)(lVar28 + 0x70);
        lVar1 = 0;
        if (lVar25 != 0) {
          lVar1 = lVar25 + lVar28 + 0x70;
        }
        *(ulong *)(lVar20 + 0x70) = lVar1 + (ulong)*(uint *)(lVar24 + 0x48) * 4;
        lVar25 = *(long *)(lVar28 + 0x80);
        lVar1 = 0;
        if (lVar25 != 0) {
          lVar1 = lVar25 + lVar28 + 0x80;
        }
        *(ulong *)(lVar20 + 0x78) = lVar1 + (ulong)*(byte *)(lVar24 + 0x5b) * 0x80000;
        lVar25 = *(long *)(lVar28 + 0x60);
        lVar1 = 0;
        if (lVar25 != 0) {
          lVar1 = lVar25 + lVar28 + 0x60;
        }
        lVar1 = lVar1 + (ulong)*(uint *)(lVar24 + 0x4c) * 2;
        *(long *)(lVar20 + 0x80) = lVar1;
        lVar26 = *(long *)(lVar28 + 0x90);
        lVar25 = 0;
        if (lVar26 != 0) {
          lVar25 = lVar26 + lVar28 + 0x90;
        }
        *(ulong *)(lVar20 + 0x88) = lVar25 + (ulong)*(uint *)(lVar24 + 0x54) * 4;
        *(uint *)(lVar20 + 0x90) = (uint)*(byte *)(lVar24 + 0x58);
        lVar26 = *(long *)(lVar28 + 0x50);
        lVar25 = 0;
        if (lVar26 != 0) {
          lVar25 = lVar26 + lVar28 + 0x50;
        }
        *(ulong *)(lVar20 + 0x68) = lVar25 + (ulong)*(uint *)(lVar24 + 0x50) * 4;
        uVar29 = *(undefined8 *)(lVar24 + 0x30);
        *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)(lVar24 + 0x38);
        *(undefined8 *)(lVar20 + 0x30) = uVar29;
        uVar29 = *(undefined8 *)(lVar24 + 0x3c);
        *(ulong *)(lVar20 + 0x48) = (ulong)*(uint *)(lVar24 + 0x44);
        *(undefined8 *)(lVar20 + 0x40) = uVar29;
        *(ulong *)(lVar20 + 0x80) = lVar1 + (ulong)*(byte *)(lVar24 + 0x58) * -2;
      }
      FUN_0083d5e4(lVar27,param_2,param_3);
LAB_0083d2e4:
      if ((int)lVar16 < (int)param_2[1]) {
        iVar23 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar23;
        puVar22 = (ulong *)(*param_2 + (long)iVar23 * 0x30);
        uVar18 = (ulong)(int)puVar22[4];
        uStack_b8 = puVar22[1];
        local_a8 = puVar22[3];
        pbVar19 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
        local_b0 = puVar22[2];
        local_c0 = *puVar22;
        goto LAB_0083d144;
      }
    }
  }
  return;
}


