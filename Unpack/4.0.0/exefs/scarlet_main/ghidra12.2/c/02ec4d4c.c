/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec4d4c; name: FUN_02ec4d4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02ec4d4c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  char cVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
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
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    uStack_c8 = param_1[3];
    local_d0 = param_1[2];
    local_b8 = param_1[5];
    local_c0 = param_1[4];
    fVar33 = (((float)local_d0 - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
             *(float *)(param_3 + 6);
    fVar35 = (((float)((ulong)local_d0 >> 0x20) - *(float *)((long)param_3 + 0x44)) -
             *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    fVar37 = (((float)uStack_c8 - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
             *(float *)(param_3 + 7);
    fVar39 = (((float)(uStack_c8 >> 0x20) - *(float *)((long)param_3 + 0x4c)) -
             *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar28._0_4_ =
         *(float *)(param_3 + 6) *
         (((float)local_c0 + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2));
    auVar28._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         (((float)((ulong)local_c0 >> 0x20) + *(float *)((long)param_3 + 0x44)) -
         *(float *)((long)param_3 + 0x14));
    auVar28._8_4_ =
         *(float *)(param_3 + 7) *
         (((float)local_b8 + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3));
    auVar28._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)(local_b8 >> 0x20) + *(float *)((long)param_3 + 0x4c)) -
         *(float *)((long)param_3 + 0x1c));
    auVar29._4_4_ = fVar35;
    auVar29._0_4_ = fVar33;
    auVar29._8_4_ = fVar37;
    auVar29._12_4_ = fVar39;
    auVar32 = NEON_fmin(auVar29,auVar28,4);
    auVar56._4_4_ = fVar35;
    auVar56._0_4_ = fVar33;
    auVar56._8_4_ = fVar37;
    auVar56._12_4_ = fVar39;
    auVar29 = NEON_fmax(auVar56,auVar28,4);
    uVar27 = NEON_fmaxp(auVar32._0_8_,auVar32._0_8_,4);
    uVar31 = NEON_fmax(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar27,4);
    uVar27 = NEON_fminp(auVar29._0_8_,auVar29._0_8_,4);
    uVar27 = NEON_fmin(CONCAT44(auVar29._8_4_,auVar29._8_4_),uVar27,4);
    uVar31 = NEON_fmax(uVar31,0,4);
    uVar27 = NEON_fmin(uVar27,*(undefined8 *)(*(long *)(*param_3 + 0x128) + 0x10),4);
    if (!(bool)(~((float)uVar31 <= (float)uVar27) & 1)) {
      pbVar18 = (byte *)(*param_1 + (long)param_1);
      lVar12 = param_2[1];
      uVar13 = 0;
LAB_02ec4e54:
      while( true ) {
        uVar26 = (uint)uVar13;
        if (-1 < (char)pbVar18[3]) break;
        uVar15 = (long)(int)uVar26 + 1;
        local_a0 = (float)local_d0;
        local_90 = (float)local_c0;
        fStack_9c = (float)((ulong)local_d0 >> 0x20);
        fStack_8c = (float)((ulong)local_c0 >> 0x20);
        fStack_98 = (float)uStack_c8;
        local_88 = (float)local_b8;
        local_b0._0_4_ = (int)uVar15;
        fVar33 = (local_90 - local_a0) * 0.0044247787;
        fVar35 = (fStack_8c - fStack_9c) * 0.0044247787;
        fVar37 = (local_88 - fStack_98) * 0.0044247787;
        uVar13 = ((ulong)pbVar18[4] << 1 | ((ulong)pbVar18[3] & 0x7f) << 9) + (long)(int)uVar26;
        local_80 = (int)uVar13;
        pbVar18 = (byte *)((long)param_1 + uVar15 * 5 + *param_1);
        local_78 = (byte *)((long)param_1 + uVar13 * 5 + *param_1);
        local_a8 = pbVar18;
        bVar8 = *pbVar18 >> 4;
        bVar2 = *pbVar18 & 0xf;
        bVar9 = pbVar18[1] >> 4;
        fVar30 = local_a0 + (float)(byte)(bVar8 * bVar8) * fVar33;
        fVar41 = fStack_9c + (float)(byte)(bVar9 * bVar9) * fVar35;
        bVar10 = pbVar18[2] >> 4;
        bVar8 = pbVar18[2] & 0xf;
        bVar9 = pbVar18[1] & 0xf;
        bVar11 = *local_78 >> 4;
        bVar3 = *local_78 & 0xf;
        local_d0 = CONCAT44(fVar41,fVar30);
        fVar42 = fStack_98 + (float)(byte)(bVar10 * bVar10) * fVar37;
        uStack_c8 = (ulong)(uint)fVar42;
        bVar10 = local_78[1] >> 4;
        fVar43 = local_90 - (float)(byte)(bVar2 * bVar2) * fVar33;
        fVar48 = fStack_8c - (float)(byte)(bVar9 * bVar9) * fVar35;
        local_c0 = CONCAT44(fVar48,fVar43);
        bVar9 = local_78[2] >> 4;
        fVar49 = local_88 - (float)(byte)(bVar8 * bVar8) * fVar37;
        local_b8 = (ulong)(uint)fVar49;
        uStack_94 = 0;
        local_a0 = local_a0 + (float)(byte)(bVar11 * bVar11) * fVar33;
        fStack_9c = fStack_9c + (float)(byte)(bVar10 * bVar10) * fVar35;
        bVar2 = local_78[1] & 0xf;
        uStack_84 = 0;
        fStack_98 = fStack_98 + (float)(byte)(bVar9 * bVar9) * fVar37;
        bVar8 = local_78[2] & 0xf;
        local_90 = local_90 - (float)(byte)(bVar3 * bVar3) * fVar33;
        fStack_8c = fStack_8c - (float)(byte)(bVar2 * bVar2) * fVar35;
        local_88 = local_88 - (float)(byte)(bVar8 * bVar8) * fVar37;
        fVar33 = *(float *)(param_3 + 6);
        fVar35 = *(float *)((long)param_3 + 0x34);
        fVar37 = *(float *)(param_3 + 7);
        fVar39 = *(float *)((long)param_3 + 0x3c);
        fVar38 = (float)param_3[9];
        fVar40 = (float)((ulong)param_3[9] >> 0x20);
        fVar34 = (float)param_3[8];
        fVar36 = (float)((ulong)param_3[8] >> 0x20);
        uVar55 = *(undefined8 *)(*(long *)(*param_3 + 0x128) + 0x10);
        fVar51 = (float)param_3[2];
        fVar52 = (float)((ulong)param_3[2] >> 0x20);
        fVar53 = (float)param_3[3];
        fVar54 = (float)((ulong)param_3[3] >> 0x20);
        fVar43 = fVar33 * ((fVar34 + fVar43) - fVar51);
        fVar48 = fVar35 * ((fVar36 + fVar48) - fVar52);
        fVar49 = fVar37 * ((fVar38 + fVar49) - fVar53);
        fVar50 = fVar39 * ((fVar40 + 0.0) - fVar54);
        auVar47._0_4_ = ((fVar30 - fVar34) - fVar51) * fVar33;
        auVar47._4_4_ = ((fVar41 - fVar36) - fVar52) * fVar35;
        auVar47._8_4_ = ((fVar42 - fVar38) - fVar53) * fVar37;
        auVar47._12_4_ = ((0.0 - fVar40) - fVar54) * fVar39;
        auVar32._4_4_ = fVar48;
        auVar32._0_4_ = fVar43;
        auVar32._8_4_ = fVar49;
        auVar32._12_4_ = fVar50;
        auVar56 = NEON_fmin(auVar47,auVar32,4);
        auVar5._4_4_ = fVar48;
        auVar5._0_4_ = fVar43;
        auVar5._8_4_ = fVar49;
        auVar5._12_4_ = fVar50;
        auVar29 = NEON_fmax(auVar47,auVar5,4);
        uVar27 = NEON_fmaxp(auVar56._0_8_,auVar56._0_8_,4);
        uVar27 = NEON_fmax(CONCAT44(auVar56._8_4_,auVar56._8_4_),uVar27,4);
        uVar31 = NEON_fminp(auVar29._0_8_,auVar29._0_8_,4);
        uVar31 = NEON_fmin(CONCAT44(auVar29._8_4_,auVar29._8_4_),uVar31,4);
        uVar27 = NEON_fmax(uVar27,0,4);
        fVar30 = ((local_a0 - fVar34) - fVar51) * fVar33;
        fVar41 = ((fStack_9c - fVar36) - fVar52) * fVar35;
        fVar42 = ((fStack_98 - fVar38) - fVar53) * fVar37;
        fVar43 = ((0.0 - fVar40) - fVar54) * fVar39;
        uVar45 = NEON_fmin(uVar31,uVar55,4);
        auVar44._0_4_ = fVar33 * ((fVar34 + local_90) - fVar51);
        auVar44._4_4_ = fVar35 * ((fVar36 + fStack_8c) - fVar52);
        auVar44._8_4_ = fVar37 * ((fVar38 + local_88) - fVar53);
        auVar44._12_4_ = fVar39 * ((fVar40 + 0.0) - fVar54);
        auVar6._4_4_ = fVar41;
        auVar6._0_4_ = fVar30;
        auVar6._8_4_ = fVar42;
        auVar6._12_4_ = fVar43;
        auVar56 = NEON_fmin(auVar6,auVar44,4);
        auVar7._4_4_ = fVar41;
        auVar7._0_4_ = fVar30;
        auVar7._8_4_ = fVar42;
        auVar7._12_4_ = fVar43;
        auVar29 = NEON_fmax(auVar7,auVar44,4);
        uVar31 = NEON_fmaxp(auVar56._0_8_,auVar56._0_8_,4);
        uVar46 = NEON_fmax(CONCAT44(auVar56._8_4_,auVar56._8_4_),uVar31,4);
        uVar31 = NEON_fminp(auVar29._0_8_,auVar29._0_8_,4);
        uVar31 = NEON_fmin(CONCAT44(auVar29._8_4_,auVar29._8_4_),uVar31,4);
        uVar46 = NEON_fmax(uVar46,0,4);
        uVar31 = NEON_fmin(uVar31,uVar55,4);
        cVar25 = '\0';
        if (!(bool)(~((float)uVar46 <= (float)uVar31) & 1)) {
          cVar25 = '\x02';
        }
        cVar25 = cVar25 + ((float)uVar27 <= (float)uVar45);
        if (cVar25 == '\x01') {
          uVar13 = uVar15 & 0xffffffff;
        }
        else if (cVar25 == '\x02') {
          local_b8 = (ulong)(uint)local_88;
          uStack_c8 = (ulong)(uint)fStack_98;
          pbVar18 = local_78;
          local_d0 = CONCAT44(fStack_9c,local_a0);
          local_c0 = CONCAT44(fStack_8c,local_90);
        }
        else {
          if (cVar25 != '\x03') goto LAB_02ec4ff4;
          uVar26 = -(uint)((float)uVar46 < (float)uVar27);
          *(uint *)(param_3 + 10) = uVar26 & 1;
          uVar13 = (ulong)~uVar26 & 1;
          iVar19 = (int)param_2[1];
          lVar16 = (long)iVar19;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar19) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar16 + 1);
            iVar19 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar16 + 1);
          uVar27 = (&local_b0)[uVar13 * 6 + -4];
          puVar14 = (undefined8 *)(*param_2 + (long)iVar19 * 0x30);
          puVar14[1] = (&local_b0)[uVar13 * 6 + -3];
          *puVar14 = uVar27;
          uVar27 = (&local_b0)[uVar13 * 6 + -2];
          puVar14[3] = (&local_b0)[uVar13 * 6 + -1];
          puVar14[2] = uVar27;
          *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(&local_b0 + uVar13 * 6);
          uVar15 = (ulong)uVar26 & 1;
          uVar13 = (ulong)*(uint *)(&local_b0 + uVar15 * 6);
          uStack_c8 = (&local_b0)[uVar15 * 6 + -3];
          local_d0 = (&local_b0)[uVar15 * 6 + -4];
          local_b8 = (&local_b0)[uVar15 * 6 + -1];
          local_c0 = (&local_b0)[uVar15 * 6 + -2];
          pbVar18 = (byte *)(&local_b0)[uVar15 * 6 + 1];
        }
      }
      lVar16 = *param_3;
      lVar20 = *(long *)(lVar16 + 0xa8);
      if (lVar20 != 0) {
        lVar23 = *(long *)(lVar20 + 0x20);
        lVar1 = 0;
        if (lVar23 != 0) {
          lVar1 = lVar23 + lVar20 + 0x20;
        }
        lVar24 = *(long *)(lVar1 + 0x48);
        lVar23 = 0;
        if (lVar24 != 0) {
          lVar23 = lVar24 + lVar1 + 0x48;
        }
        uVar4 = uVar26 + 0x1f;
        if (-1 < (int)uVar26) {
          uVar4 = uVar26;
        }
        if ((*(uint *)(lVar20 + 0x28 +
                      (long)((int)uVar4 >> 5) * 4 +
                      (long)(*(int *)(lVar23 + 0x68) << 3) * 4 + *(long *)(lVar20 + 0x28)) >>
             (ulong)(uVar26 & 0x1f) & 1) == 0) goto LAB_02ec4ff4;
      }
      lVar24 = *(long *)(lVar16 + 0x50);
      lVar23 = (long)(param_1 + 8) + (ulong)CONCAT11(pbVar18[3],pbVar18[4]) * 0x60 + param_1[8];
      lVar21 = *(long *)(lVar24 + 0x40);
      lVar20 = lVar21 + lVar24 + 0x40;
      lVar1 = 0;
      if (lVar21 != 0) {
        lVar1 = lVar20;
      }
      iVar19 = (int)(lVar23 - lVar1 >> 5) * -0x55555555;
      if ((*(int *)(lVar16 + 0x94) != iVar19) || (*(int *)(lVar16 + 0x98) != iVar19)) {
        lVar20 = lVar20 + (long)iVar19 * 0x60;
        *(long *)(lVar16 + 0x60) = lVar20;
        *(int *)(lVar16 + 0x94) = iVar19;
        *(int *)(lVar16 + 0x98) = iVar19;
        lVar21 = *(long *)(lVar24 + 0x70);
        lVar1 = 0;
        if (lVar21 != 0) {
          lVar1 = lVar21 + lVar24 + 0x70;
        }
        *(ulong *)(lVar16 + 0x70) = lVar1 + (ulong)*(uint *)(lVar20 + 0x48) * 4;
        lVar21 = *(long *)(lVar24 + 0x80);
        lVar1 = 0;
        if (lVar21 != 0) {
          lVar1 = lVar21 + lVar24 + 0x80;
        }
        *(ulong *)(lVar16 + 0x78) = lVar1 + (ulong)*(byte *)(lVar20 + 0x5b) * 0x80000;
        lVar21 = *(long *)(lVar24 + 0x60);
        lVar1 = 0;
        if (lVar21 != 0) {
          lVar1 = lVar21 + lVar24 + 0x60;
        }
        lVar1 = lVar1 + (ulong)*(uint *)(lVar20 + 0x4c) * 2;
        *(long *)(lVar16 + 0x80) = lVar1;
        lVar22 = *(long *)(lVar24 + 0x90);
        lVar21 = 0;
        if (lVar22 != 0) {
          lVar21 = lVar22 + lVar24 + 0x90;
        }
        *(ulong *)(lVar16 + 0x88) = lVar21 + (ulong)*(uint *)(lVar20 + 0x54) * 4;
        *(uint *)(lVar16 + 0x90) = (uint)*(byte *)(lVar20 + 0x58);
        lVar22 = *(long *)(lVar24 + 0x50);
        lVar21 = 0;
        if (lVar22 != 0) {
          lVar21 = lVar22 + lVar24 + 0x50;
        }
        *(ulong *)(lVar16 + 0x68) = lVar21 + (ulong)*(uint *)(lVar20 + 0x50) * 4;
        uVar27 = *(undefined8 *)(lVar20 + 0x30);
        *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(lVar20 + 0x38);
        *(undefined8 *)(lVar16 + 0x30) = uVar27;
        uVar27 = *(undefined8 *)(lVar20 + 0x3c);
        *(ulong *)(lVar16 + 0x48) = (ulong)*(uint *)(lVar20 + 0x44);
        *(undefined8 *)(lVar16 + 0x40) = uVar27;
        *(ulong *)(lVar16 + 0x80) = lVar1 + (ulong)*(byte *)(lVar20 + 0x58) * -2;
      }
      FUN_02ec535c(lVar23,param_2,param_3);
LAB_02ec4ff4:
      if ((int)lVar12 < (int)param_2[1]) {
        iVar19 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar19;
        plVar17 = (long *)(*param_2 + (long)iVar19 * 0x30);
        uVar13 = (ulong)(int)plVar17[4];
        uStack_c8 = plVar17[1];
        local_b8 = plVar17[3];
        pbVar18 = (byte *)((long)param_1 + uVar13 * 5 + *param_1);
        local_d0 = *plVar17;
        local_c0 = plVar17[2];
        goto LAB_02ec4e54;
      }
    }
  }
  return;
}


