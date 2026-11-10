/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008727fc; name: FUN_008727fc
 */


void FUN_008727fc(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  ulong local_f8;
  ulong local_f0;
  byte *local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  byte *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  uint local_90;
  byte *local_88;
  
  if ((int)param_1[1] != 0) {
    uStack_a8 = param_1[3];
    local_b0 = param_1[2];
    uStack_98 = param_1[5];
    local_a0 = param_1[4];
    lVar18 = param_2[1];
    fVar27 = (float)local_b0;
    fVar28 = (float)(local_b0 >> 0x20);
    local_90 = 0;
    local_88 = (byte *)(*param_1 + (long)param_1);
    fVar32 = (float)local_a0;
    fVar29 = (float)(local_a0 >> 0x20);
    auVar45._0_4_ = (fVar27 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar45._4_4_ = (fVar28 - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar45._8_4_ = ((float)uStack_a8 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar45._12_4_ =
         ((float)(uStack_a8 >> 0x20) - *(float *)((long)param_3 + 0x1c)) *
         *(float *)((long)param_3 + 0x3c);
    auVar38._0_4_ = *(float *)(param_3 + 6) * (fVar32 - *(float *)(param_3 + 2));
    auVar38._4_4_ = *(float *)((long)param_3 + 0x34) * (fVar29 - *(float *)((long)param_3 + 0x14));
    auVar38._8_4_ = *(float *)(param_3 + 7) * ((float)uStack_98 - *(float *)(param_3 + 3));
    auVar38._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         ((float)(uStack_98 >> 0x20) - *(float *)((long)param_3 + 0x1c));
    uVar47 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    auVar43 = NEON_fmin(auVar45,auVar38,4);
    auVar38 = NEON_fmax(auVar45,auVar38,4);
    uVar40 = NEON_fmaxp(auVar43._0_8_,auVar43._0_8_,4);
    uVar41 = NEON_fmax(CONCAT44(auVar43._8_4_,auVar43._8_4_),uVar40,4);
    uVar40 = NEON_fminp(auVar38._0_8_,auVar38._0_8_,4);
    uVar40 = NEON_fmin(CONCAT44(auVar38._8_4_,auVar38._8_4_),uVar40,4);
    uVar41 = NEON_fmax(uVar41,uVar47,4);
    uVar40 = NEON_fmin(uVar40,CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),
                                       *(undefined4 *)((long)param_3 + 0x2c)),4);
    if ((float)uVar41 <= (float)uVar40) {
      fVar13 = *(float *)(PTR_DAT_047d19b0 + 0x1e0);
      fVar14 = *(float *)(PTR_DAT_047d19b0 + 0x1e4);
      uVar23 = 0;
      uVar26 = (ulong)(uint)fVar29;
      auVar43 = ZEXT416((uint)fVar28);
      do {
        if ((char)local_88[3] < '\0') {
          uVar21 = (long)(int)uVar23 + 1;
          local_f0._0_4_ = (uint)uVar21;
          fStack_d8 = (float)uStack_a8;
          local_c8 = (float)uStack_98;
          local_c0 = ((uint)*(ushort *)(local_88 + 4) << 1 | (local_88[3] & 0x7f) << 0x11) +
                     (int)uVar23;
          fVar28 = ((float)local_a0 - (float)local_b0) * fVar13;
          fVar29 = ((float)(local_a0 >> 0x20) - (float)(local_b0 >> 0x20)) * fVar14;
          fVar30 = (local_c8 - fStack_d8) * fVar13;
          local_e8 = (byte *)((long)param_1 + uVar21 * 6 + *param_1);
          local_b8 = (byte *)((long)param_1 + (long)(int)local_c0 * 6 + *param_1);
          bVar8 = *local_e8 >> 4;
          bVar1 = *local_e8 & 0xf;
          bVar9 = local_e8[1] >> 4;
          bVar2 = local_e8[1] & 0xf;
          bVar10 = local_e8[2] >> 4;
          bVar3 = local_e8[2] & 0xf;
          bVar11 = *local_b8 >> 4;
          bVar4 = *local_b8 & 0xf;
          bVar12 = local_b8[2] >> 4;
          bVar5 = local_b8[2] & 0xf;
          fVar33 = (float)(byte)(bVar8 * bVar8) * fVar28 + fVar27;
          fVar48 = (float)(byte)(bVar9 * bVar9) * fVar29 + auVar43._0_4_;
          local_110 = CONCAT44(fVar48,fVar33);
          fVar34 = (float)(byte)(bVar10 * bVar10) * fVar30 + fStack_d8;
          uStack_108 = (ulong)(uint)fVar34;
          bVar9 = local_b8[1] >> 4;
          bVar8 = local_b8[1] & 0xf;
          fVar35 = fVar32 - (float)(byte)(bVar1 * bVar1) * fVar28;
          fVar49 = (float)uVar26 - (float)(byte)(bVar2 * bVar2) * fVar29;
          local_100 = CONCAT44(fVar49,fVar35);
          fVar36 = local_c8 - (float)(byte)(bVar3 * bVar3) * fVar30;
          local_f8 = (ulong)(uint)fVar36;
          local_e0 = (float)(byte)(bVar11 * bVar11) * fVar28 + fVar27;
          uStack_d4 = 0;
          fStack_dc = (float)(byte)(bVar9 * bVar9) * fVar29 + auVar43._0_4_;
          uStack_c4 = 0;
          fStack_d8 = (float)(byte)(bVar12 * bVar12) * fVar30 + fStack_d8;
          fStack_cc = (float)uVar26 - (float)(byte)(bVar8 * bVar8) * fVar29;
          local_d0 = fVar32 - (float)(byte)(bVar4 * bVar4) * fVar28;
          local_c8 = local_c8 - (float)(byte)(bVar5 * bVar5) * fVar30;
          fVar27 = *(float *)(param_3 + 2);
          fVar32 = *(float *)((long)param_3 + 0x14);
          fVar28 = *(float *)(param_3 + 3);
          fVar29 = *(float *)((long)param_3 + 0x1c);
          fVar30 = *(float *)(param_3 + 6);
          fVar15 = *(float *)((long)param_3 + 0x34);
          fVar16 = *(float *)(param_3 + 7);
          fVar17 = *(float *)((long)param_3 + 0x3c);
          auVar37._0_4_ = (fVar33 - fVar27) * fVar30;
          auVar37._4_4_ = (fVar48 - fVar32) * fVar15;
          auVar37._8_4_ = (fVar34 - fVar28) * fVar16;
          auVar37._12_4_ = (0.0 - fVar29) * fVar17;
          auVar39._0_4_ = fVar30 * (fVar35 - fVar27);
          auVar39._4_4_ = fVar15 * (fVar49 - fVar32);
          auVar39._8_4_ = fVar16 * (fVar36 - fVar28);
          auVar39._12_4_ = fVar17 * (0.0 - fVar29);
          auVar45 = NEON_fmin(auVar37,auVar39,4);
          auVar38 = NEON_fmax(auVar37,auVar39,4);
          uVar40 = NEON_fmaxp(auVar45._0_8_,auVar45._0_8_,4);
          uVar40 = NEON_fmax(CONCAT44(auVar45._8_4_,auVar45._8_4_),uVar40,4);
          uVar41 = NEON_fminp(auVar38._0_8_,auVar38._0_8_,4);
          uVar46 = NEON_fmin(CONCAT44(auVar38._8_4_,auVar38._8_4_),uVar41,4);
          fVar33 = fVar30 * (local_e0 - fVar27);
          fVar34 = fVar15 * (fStack_dc - fVar32);
          fVar35 = fVar16 * (fStack_d8 - fVar28);
          fVar36 = fVar17 * (0.0 - fVar29);
          uVar40 = NEON_fmax(uVar40,uVar47,4);
          auVar42._0_4_ = fVar30 * (local_d0 - fVar27);
          auVar42._4_4_ = fVar15 * (fStack_cc - fVar32);
          auVar42._8_4_ = fVar16 * (local_c8 - fVar28);
          auVar42._12_4_ = fVar17 * (0.0 - fVar29);
          uVar31 = (undefined4)((ulong)param_3[5] >> 0x20);
          uVar41 = CONCAT44(uVar31,uVar31);
          uVar46 = NEON_fmin(uVar46,uVar41,4);
          fVar32 = (float)uVar40;
          auVar6._4_4_ = fVar34;
          auVar6._0_4_ = fVar33;
          auVar6._8_4_ = fVar35;
          auVar6._12_4_ = fVar36;
          auVar45 = NEON_fmin(auVar6,auVar42,4);
          auVar7._4_4_ = fVar34;
          auVar7._0_4_ = fVar33;
          auVar7._8_4_ = fVar35;
          auVar7._12_4_ = fVar36;
          auVar38 = NEON_fmax(auVar7,auVar42,4);
          uVar40 = NEON_fmaxp(auVar45._0_8_,auVar45._0_8_,4);
          uVar44 = NEON_fmax(CONCAT44(auVar45._8_4_,auVar45._8_4_),uVar40,4);
          uVar40 = NEON_fminp(auVar38._0_8_,auVar38._0_8_,4);
          uVar40 = NEON_fmin(CONCAT44(auVar38._8_4_,auVar38._8_4_),uVar40,4);
          uVar44 = NEON_fmax(uVar44,uVar47,4);
          fVar27 = (float)uVar44;
          uVar40 = NEON_fmin(uVar40,uVar41,4);
          bVar1 = fVar32 <= (float)uVar46 | (fVar27 <= (float)uVar40) << 1;
          if (bVar1 == 1) {
            local_b0 = local_110;
            local_88 = local_e8;
            local_a0 = local_100;
            uStack_98 = local_f8;
            uStack_a8 = uStack_108;
            local_90 = (uint)uVar21;
            goto LAB_00872918;
          }
          if (bVar1 == 2) {
            uVar21 = (ulong)local_c0;
            uStack_a8 = (ulong)(uint)fStack_d8;
            uStack_98 = (ulong)(uint)local_c8;
            local_b0 = CONCAT44(fStack_dc,local_e0);
            local_a0 = CONCAT44(fStack_cc,local_d0);
            local_90 = local_c0;
            local_88 = local_b8;
          }
          else {
            if (bVar1 != 3) goto LAB_00872990;
            *(uint *)(param_3 + 8) = (uint)(fVar27 < fVar32);
            iVar20 = (int)param_2[1];
            lVar22 = (long)iVar20;
            uVar26 = (ulong)(fVar27 >= fVar32);
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar20) {
              FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar22 + 1);
              iVar20 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar22 + 1);
            puVar24 = (ulong *)(*param_2 + (long)iVar20 * 0x30);
            uVar23 = (&local_f0)[uVar26 * 6 + -4];
            puVar24[1] = (&local_f0)[uVar26 * 6 + -3];
            *puVar24 = uVar23;
            uVar21 = (&local_f0)[uVar26 * 6 + -2];
            uVar23 = (ulong)(fVar27 < fVar32);
            puVar24[3] = (&local_f0)[uVar26 * 6 + -1];
            puVar24[2] = uVar21;
            *(int *)(puVar24 + 4) = (int)(&local_f0)[uVar26 * 6];
            uVar21 = (ulong)(uint)(&local_f0)[uVar23 * 6];
            uStack_a8 = (&local_f0)[uVar23 * 6 + -3];
            uStack_98 = (&local_f0)[uVar23 * 6 + -1];
            local_b0 = (&local_f0)[uVar23 * 6 + -4];
            local_a0 = (&local_f0)[uVar23 * 6 + -2];
            local_90 = (uint)(&local_f0)[uVar23 * 6];
            local_88 = (byte *)(&local_f0)[uVar23 * 6 + 1];
          }
        }
        else {
          uVar31 = (undefined4)((ulong)param_3[5] >> 0x20);
          local_110 = CONCAT44(uVar31,uVar31);
          puVar25 = (undefined8 *)*param_3;
          uVar19 = (**(code **)(*(long *)*puVar25 + 0x10))
                             ((long *)*puVar25,
                              (ulong)CONCAT12(local_88[3],*(undefined2 *)(local_88 + 4)),&local_b0,
                              &local_110);
          *(uint *)(puVar25 + 1) = *(uint *)(puVar25 + 1) | uVar19;
          param_3[5] = CONCAT44((int)local_110,(int)param_3[5]);
          param_3[4] = param_3[4];
LAB_00872990:
          if ((int)param_2[1] <= (int)lVar18) {
            return;
          }
          iVar20 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar20;
          puVar24 = (ulong *)(*param_2 + (long)iVar20 * 0x30);
          uVar21 = (ulong)(uint)puVar24[4];
          local_110 = *puVar24;
          local_b0 = local_110;
          local_88 = (byte *)((long)param_1 + (long)(int)puVar24[4] * 6 + *param_1);
          local_a0 = puVar24[2];
          uStack_98 = puVar24[3];
          uStack_a8 = puVar24[1];
          local_90 = (uint)puVar24[4];
LAB_00872918:
          local_b0 = local_110;
        }
        auVar43._8_8_ = 0;
        auVar43._0_8_ = local_b0 >> 0x20;
        uVar23 = uVar21 & 0xffffffff;
        fVar27 = (float)local_b0;
        fVar32 = (float)local_a0;
        uVar26 = local_a0 >> 0x20;
      } while( true );
    }
  }
  return;
}


