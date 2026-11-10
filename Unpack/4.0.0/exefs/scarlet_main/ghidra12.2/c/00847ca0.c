/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00847ca0; name: FUN_00847ca0
 */


void FUN_00847ca0(long *param_1,long *param_2,long *param_3)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  float fVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  ulong uVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  byte *local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulong uStack_88;
  undefined4 local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    uVar59 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uStack_c8 = param_1[3];
    local_d0 = param_1[2];
    local_b8 = param_1[5];
    local_c0 = param_1[4];
    fVar40 = ((float)local_d0 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    fVar42 = ((float)(local_d0 >> 0x20) - *(float *)((long)param_3 + 0x14)) *
             *(float *)((long)param_3 + 0x34);
    fVar43 = ((float)uStack_c8 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    fVar44 = ((float)(uStack_c8 >> 0x20) - *(float *)((long)param_3 + 0x1c)) *
             *(float *)((long)param_3 + 0x3c);
    auVar57._0_4_ = *(float *)(param_3 + 6) * ((float)local_c0 - *(float *)(param_3 + 2));
    auVar57._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         ((float)(local_c0 >> 0x20) - *(float *)((long)param_3 + 0x14));
    auVar57._8_4_ = *(float *)(param_3 + 7) * ((float)local_b8 - *(float *)(param_3 + 3));
    auVar57._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         ((float)(local_b8 >> 0x20) - *(float *)((long)param_3 + 0x1c));
    auVar37._4_4_ = fVar42;
    auVar37._0_4_ = fVar40;
    auVar37._8_4_ = fVar43;
    auVar37._12_4_ = fVar44;
    auVar46 = NEON_fmin(auVar37,auVar57,4);
    auVar39._4_4_ = fVar42;
    auVar39._0_4_ = fVar40;
    auVar39._8_4_ = fVar43;
    auVar39._12_4_ = fVar44;
    auVar37 = NEON_fmax(auVar39,auVar57,4);
    uVar34 = NEON_fmaxp(auVar46._0_8_,auVar46._0_8_,4);
    uVar34 = NEON_fmax(CONCAT44(auVar46._8_4_,auVar46._8_4_),uVar34,4);
    uVar45 = NEON_fminp(auVar37._0_8_,auVar37._0_8_,4);
    uVar45 = NEON_fmin(CONCAT44(auVar37._8_4_,auVar37._8_4_),uVar45,4);
    uVar34 = NEON_fmax(uVar34,uVar59,4);
    uVar45 = NEON_fmin(uVar45,*(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10),4);
    if ((float)uVar34 <= (float)uVar45) {
      auVar37 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x1e0);
      fVar40 = auVar37._0_4_;
      lVar19 = param_2[1];
      uVar21 = 0;
      pbVar22 = (byte *)(*param_1 + (long)param_1);
LAB_00847da0:
      while( true ) {
        uVar20 = (uint)uVar21;
        if (-1 < (char)pbVar22[3]) break;
        uVar21 = (long)(int)uVar20 + 1;
        fVar32 = (float)local_c0;
        local_a0 = (float)local_d0;
        fVar33 = (float)(local_c0 >> 0x20);
        fStack_9c = (float)(local_d0 >> 0x20);
        fVar36 = (float)local_b8;
        fStack_98 = (float)uStack_c8;
        local_b0._0_4_ = (int)uVar21;
        fVar42 = (fVar32 - local_a0) * fVar40;
        fVar43 = (fVar33 - fStack_9c) * auVar37._4_4_;
        fVar44 = (fVar36 - fStack_98) * fVar40;
        uVar24 = ((ulong)pbVar22[4] << 1 | ((ulong)pbVar22[3] & 0x7f) << 9) + (long)(int)uVar20;
        local_80 = (int)uVar24;
        local_a8 = (byte *)((long)param_1 + uVar21 * 5 + *param_1);
        local_78 = (byte *)((long)param_1 + uVar24 * 5 + *param_1);
        bVar12 = *local_a8 >> 4;
        bVar2 = *local_a8 & 0xf;
        bVar13 = local_a8[1] >> 4;
        bVar3 = local_a8[1] & 0xf;
        bVar14 = local_a8[2] >> 4;
        bVar4 = local_a8[2] & 0xf;
        bVar15 = *local_78 >> 4;
        bVar5 = *local_78 & 0xf;
        bVar16 = local_78[1] >> 4;
        bVar17 = local_78[2] >> 4;
        bVar6 = local_78[1] & 0xf;
        bVar7 = local_78[2] & 0xf;
        fVar41 = local_a0 + (float)(byte)(bVar12 * bVar12) * fVar42;
        fVar48 = fStack_9c + (float)(byte)(bVar13 * bVar13) * fVar43;
        local_d0 = CONCAT44(fVar48,fVar41);
        fVar49 = fStack_98 + (float)(byte)(bVar14 * bVar14) * fVar44;
        uStack_c8 = (ulong)(uint)fVar49;
        fVar50 = fVar32 - (float)(byte)(bVar2 * bVar2) * fVar42;
        fVar58 = fVar33 - (float)(byte)(bVar3 * bVar3) * fVar43;
        local_c0 = CONCAT44(fVar58,fVar50);
        fVar51 = fVar36 - (float)(byte)(bVar4 * bVar4) * fVar44;
        local_b8 = (ulong)(uint)fVar51;
        uStack_94 = 0;
        local_a0 = local_a0 + (float)(byte)(bVar15 * bVar15) * fVar42;
        fStack_9c = fStack_9c + (float)(byte)(bVar16 * bVar16) * fVar43;
        fStack_98 = fStack_98 + (float)(byte)(bVar17 * bVar17) * fVar44;
        fVar32 = fVar32 - (float)(byte)(bVar5 * bVar5) * fVar42;
        fVar33 = fVar33 - (float)(byte)(bVar6 * bVar6) * fVar43;
        fVar36 = fVar36 - (float)(byte)(bVar7 * bVar7) * fVar44;
        local_90 = CONCAT44(fVar33,fVar32);
        uStack_88 = (ulong)(uint)fVar36;
        fVar42 = *(float *)(param_3 + 2);
        fVar43 = *(float *)((long)param_3 + 0x14);
        fVar44 = *(float *)(param_3 + 3);
        fVar18 = *(float *)((long)param_3 + 0x1c);
        fVar52 = (float)param_3[6];
        auVar38._0_4_ = (fVar41 - fVar42) * fVar52;
        fVar53 = (float)((ulong)param_3[6] >> 0x20);
        auVar38._4_4_ = (fVar48 - fVar43) * fVar53;
        fVar54 = (float)param_3[7];
        auVar38._8_4_ = (fVar49 - fVar44) * fVar54;
        fVar55 = (float)((ulong)param_3[7] >> 0x20);
        auVar38._12_4_ = (0.0 - fVar18) * fVar55;
        fVar41 = fVar52 * (fVar50 - fVar42);
        fVar48 = fVar53 * (fVar58 - fVar43);
        fVar49 = fVar54 * (fVar51 - fVar44);
        fVar50 = fVar55 * (0.0 - fVar18);
        auVar46._4_4_ = fVar48;
        auVar46._0_4_ = fVar41;
        auVar46._8_4_ = fVar49;
        auVar46._12_4_ = fVar50;
        auVar57 = NEON_fmin(auVar38,auVar46,4);
        auVar9._4_4_ = fVar48;
        auVar9._0_4_ = fVar41;
        auVar9._8_4_ = fVar49;
        auVar9._12_4_ = fVar50;
        auVar39 = NEON_fmax(auVar38,auVar9,4);
        uVar34 = NEON_fmaxp(auVar57._0_8_,auVar57._0_8_,4);
        uVar45 = NEON_fmax(CONCAT44(auVar57._8_4_,auVar57._8_4_),uVar34,4);
        uVar34 = NEON_fminp(auVar39._0_8_,auVar39._0_8_,4);
        uVar34 = NEON_fmin(CONCAT44(auVar39._8_4_,auVar39._8_4_),uVar34,4);
        uVar60 = NEON_fmax(uVar45,uVar59,4);
        fVar41 = fVar52 * (local_a0 - fVar42);
        fVar48 = fVar53 * (fStack_9c - fVar43);
        fVar49 = fVar54 * (fStack_98 - fVar44);
        fVar50 = fVar55 * (0.0 - fVar18);
        auVar47._0_4_ = fVar52 * (fVar32 - fVar42);
        auVar47._4_4_ = fVar53 * (fVar33 - fVar43);
        auVar47._8_4_ = fVar54 * (fVar36 - fVar44);
        auVar47._12_4_ = fVar55 * (0.0 - fVar18);
        uVar45 = *(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10);
        uVar56 = NEON_fmin(uVar34,uVar45,4);
        fVar43 = (float)uVar60;
        auVar10._4_4_ = fVar48;
        auVar10._0_4_ = fVar41;
        auVar10._8_4_ = fVar49;
        auVar10._12_4_ = fVar50;
        auVar57 = NEON_fmin(auVar10,auVar47,4);
        uVar34 = NEON_fmaxp(auVar57._0_8_,auVar57._0_8_,4);
        auVar11._4_4_ = fVar48;
        auVar11._0_4_ = fVar41;
        auVar11._8_4_ = fVar49;
        auVar11._12_4_ = fVar50;
        auVar39 = NEON_fmax(auVar11,auVar47,4);
        uVar60 = NEON_fmax(CONCAT44(auVar57._8_4_,auVar57._8_4_),uVar34,4);
        uVar34 = NEON_fminp(auVar39._0_8_,auVar39._0_8_,4);
        uVar34 = NEON_fmin(CONCAT44(auVar39._8_4_,auVar39._8_4_),uVar34,4);
        uVar60 = NEON_fmax(uVar60,uVar59,4);
        fVar42 = (float)uVar60;
        uVar34 = NEON_fmin(uVar34,uVar45,4);
        bVar2 = fVar43 <= (float)uVar56 | (fVar42 <= (float)uVar34) << 1;
        if (bVar2 == 1) {
          pbVar22 = local_a8;
        }
        else if (bVar2 == 2) {
          uVar21 = uVar24 & 0xffffffff;
          uStack_c8 = (ulong)(uint)fStack_98;
          pbVar22 = local_78;
          local_c0 = local_90;
          local_b8 = uStack_88;
          local_d0 = CONCAT44(fStack_9c,local_a0);
        }
        else {
          if (bVar2 != 3) goto LAB_00847f40;
          *(uint *)(param_3 + 8) = (uint)(fVar42 < fVar43);
          iVar26 = (int)param_2[1];
          lVar23 = (long)iVar26;
          uVar21 = (ulong)(fVar42 >= fVar43);
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar26) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar23 + 1);
            iVar26 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar23 + 1);
          uVar24 = (&local_b0)[uVar21 * 6 + -4];
          puVar25 = (ulong *)(*param_2 + (long)iVar26 * 0x30);
          puVar25[1] = (&local_b0)[uVar21 * 6 + -3];
          *puVar25 = uVar24;
          uVar35 = (&local_b0)[uVar21 * 6 + -2];
          uVar24 = (ulong)(fVar42 < fVar43);
          puVar25[3] = (&local_b0)[uVar21 * 6 + -1];
          puVar25[2] = uVar35;
          *(int *)(puVar25 + 4) = (int)(&local_b0)[uVar21 * 6];
          uStack_c8 = (&local_b0)[uVar24 * 6 + -3];
          uVar21 = (ulong)(uint)(&local_b0)[uVar24 * 6];
          pbVar22 = (byte *)(&local_b0)[uVar24 * 6 + 1];
          local_c0 = (&local_b0)[uVar24 * 6 + -2];
          local_b8 = (&local_b0)[uVar24 * 6 + -1];
          local_d0 = (&local_b0)[uVar24 * 6 + -4];
        }
      }
      lVar23 = *param_3;
      lVar27 = *(long *)(lVar23 + 0xa8);
      if (lVar27 != 0) {
        lVar30 = *(long *)(lVar27 + 0x20);
        lVar1 = 0;
        if (lVar30 != 0) {
          lVar1 = lVar30 + lVar27 + 0x20;
        }
        lVar31 = *(long *)(lVar1 + 0x48);
        lVar30 = 0;
        if (lVar31 != 0) {
          lVar30 = lVar31 + lVar1 + 0x48;
        }
        uVar8 = uVar20 + 0x1f;
        if (-1 < (int)uVar20) {
          uVar8 = uVar20;
        }
        if ((*(uint *)(lVar27 + 0x28 +
                      (long)((int)uVar8 >> 5) * 4 +
                      (long)(*(int *)(lVar30 + 0x68) << 3) * 4 + *(long *)(lVar27 + 0x28)) >>
             (ulong)(uVar20 & 0x1f) & 1) == 0) goto LAB_00847f40;
      }
      lVar31 = *(long *)(lVar23 + 0x50);
      lVar30 = (long)(param_1 + 8) + (ulong)CONCAT11(pbVar22[3],pbVar22[4]) * 0x60 + param_1[8];
      lVar28 = *(long *)(lVar31 + 0x40);
      lVar27 = lVar28 + lVar31 + 0x40;
      lVar1 = 0;
      if (lVar28 != 0) {
        lVar1 = lVar27;
      }
      iVar26 = (int)(lVar30 - lVar1 >> 5) * -0x55555555;
      if ((*(int *)(lVar23 + 0x94) != iVar26) || (*(int *)(lVar23 + 0x98) != iVar26)) {
        lVar27 = lVar27 + (long)iVar26 * 0x60;
        *(long *)(lVar23 + 0x60) = lVar27;
        *(int *)(lVar23 + 0x94) = iVar26;
        *(int *)(lVar23 + 0x98) = iVar26;
        lVar28 = *(long *)(lVar31 + 0x70);
        lVar1 = 0;
        if (lVar28 != 0) {
          lVar1 = lVar28 + lVar31 + 0x70;
        }
        *(ulong *)(lVar23 + 0x70) = lVar1 + (ulong)*(uint *)(lVar27 + 0x48) * 4;
        lVar28 = *(long *)(lVar31 + 0x80);
        lVar1 = 0;
        if (lVar28 != 0) {
          lVar1 = lVar28 + lVar31 + 0x80;
        }
        *(ulong *)(lVar23 + 0x78) = lVar1 + (ulong)*(byte *)(lVar27 + 0x5b) * 0x80000;
        lVar28 = *(long *)(lVar31 + 0x60);
        lVar1 = 0;
        if (lVar28 != 0) {
          lVar1 = lVar28 + lVar31 + 0x60;
        }
        lVar1 = lVar1 + (ulong)*(uint *)(lVar27 + 0x4c) * 2;
        *(long *)(lVar23 + 0x80) = lVar1;
        lVar29 = *(long *)(lVar31 + 0x90);
        lVar28 = 0;
        if (lVar29 != 0) {
          lVar28 = lVar29 + lVar31 + 0x90;
        }
        *(ulong *)(lVar23 + 0x88) = lVar28 + (ulong)*(uint *)(lVar27 + 0x54) * 4;
        *(uint *)(lVar23 + 0x90) = (uint)*(byte *)(lVar27 + 0x58);
        lVar29 = *(long *)(lVar31 + 0x50);
        lVar28 = 0;
        if (lVar29 != 0) {
          lVar28 = lVar29 + lVar31 + 0x50;
        }
        *(ulong *)(lVar23 + 0x68) = lVar28 + (ulong)*(uint *)(lVar27 + 0x50) * 4;
        uVar34 = *(undefined8 *)(lVar27 + 0x30);
        *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(lVar27 + 0x38);
        *(undefined8 *)(lVar23 + 0x30) = uVar34;
        uVar34 = *(undefined8 *)(lVar27 + 0x3c);
        *(ulong *)(lVar23 + 0x48) = (ulong)*(uint *)(lVar27 + 0x44);
        *(undefined8 *)(lVar23 + 0x40) = uVar34;
        *(ulong *)(lVar23 + 0x80) = lVar1 + (ulong)*(byte *)(lVar27 + 0x58) * -2;
      }
      FUN_00848274(lVar30,param_2,param_3);
LAB_00847f40:
      if ((int)lVar19 < (int)param_2[1]) {
        iVar26 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar26;
        puVar25 = (ulong *)(*param_2 + (long)iVar26 * 0x30);
        uVar21 = (ulong)(int)puVar25[4];
        uStack_c8 = puVar25[1];
        pbVar22 = (byte *)((long)param_1 + uVar21 * 5 + *param_1);
        local_c0 = puVar25[2];
        local_b8 = puVar25[3];
        local_d0 = *puVar25;
        goto LAB_00847da0;
      }
    }
  }
  return;
}


