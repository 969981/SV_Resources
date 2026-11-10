/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00872cd0; name: FUN_00872cd0
 */


void FUN_00872cd0(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar45;
  undefined8 uVar44;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
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
  undefined8 local_d0;
  ulong uStack_c8;
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
    lVar11 = param_2[1];
    local_90 = 0;
    local_88 = (byte *)(*param_1 + (long)param_1);
    uVar40 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uVar25 = (undefined4)((ulong)param_3[5] >> 0x20);
    fVar33 = (float)local_a0;
    fVar31 = (float)param_3[8];
    fVar30 = (float)(local_a0 >> 0x20);
    fVar22 = (float)((ulong)param_3[8] >> 0x20);
    fVar20 = (float)local_b0;
    fVar21 = (float)(local_b0 >> 0x20);
    auVar32._0_4_ = *(float *)(param_3 + 6) * ((fVar20 - fVar31) - *(float *)(param_3 + 2));
    auVar32._4_4_ =
         *(float *)((long)param_3 + 0x34) * ((fVar21 - fVar22) - *(float *)((long)param_3 + 0x14));
    auVar32._8_4_ =
         *(float *)(param_3 + 7) * (((float)uStack_a8 - fVar31) - *(float *)(param_3 + 3));
    auVar32._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)(uStack_a8 >> 0x20) - fVar22) - *(float *)((long)param_3 + 0x1c));
    auVar50._0_4_ = *(float *)(param_3 + 6) * ((fVar33 + fVar31) - *(float *)(param_3 + 2));
    auVar50._4_4_ =
         *(float *)((long)param_3 + 0x34) * ((fVar30 + fVar22) - *(float *)((long)param_3 + 0x14));
    auVar50._8_4_ =
         *(float *)(param_3 + 7) * (((float)uStack_98 + fVar31) - *(float *)(param_3 + 3));
    auVar50._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)(uStack_98 >> 0x20) + fVar22) - *(float *)((long)param_3 + 0x1c));
    auVar37 = NEON_fmin(auVar32,auVar50,4);
    auVar32 = NEON_fmax(auVar32,auVar50,4);
    uVar34 = NEON_fmaxp(auVar37._0_8_,auVar37._0_8_,4);
    uVar35 = NEON_fmax(CONCAT44(auVar37._8_4_,auVar37._8_4_),uVar34,4);
    uVar34 = NEON_fminp(auVar32._0_8_,auVar32._0_8_,4);
    uVar34 = NEON_fmin(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar34,4);
    uVar35 = NEON_fmax(uVar35,uVar40,4);
    uVar34 = NEON_fmin(uVar34,CONCAT44(uVar25,uVar25),4);
    if ((float)uVar35 <= (float)uVar34) {
      uVar34 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0);
      uVar16 = 0;
      fVar31 = (float)uVar34;
      auVar37 = ZEXT416((uint)fVar21);
      do {
        if ((char)local_88[3] < '\0') {
          uVar14 = (long)(int)uVar16 + 1;
          local_f0._0_4_ = (uint)uVar14;
          fStack_d8 = (float)uStack_a8;
          fVar22 = (float)uStack_98;
          local_c0 = ((uint)*(ushort *)(local_88 + 4) << 1 | (local_88[3] & 0x7f) << 0x11) +
                     (int)uVar16;
          fVar21 = ((float)local_a0 - (float)local_b0) * fVar31;
          fVar23 = ((float)(local_a0 >> 0x20) - (float)(local_b0 >> 0x20)) *
                   (float)((ulong)uVar34 >> 0x20);
          fVar24 = (fVar22 - fStack_d8) * fVar31;
          local_e8 = (byte *)((long)param_1 + uVar14 * 6 + *param_1);
          local_b8 = (byte *)((long)param_1 + (long)(int)local_c0 * 6 + *param_1);
          bVar6 = *local_e8 >> 4;
          bVar1 = *local_e8 & 0xf;
          bVar7 = local_e8[1] >> 4;
          bVar9 = local_e8[1] & 0xf;
          bVar8 = local_e8[2] >> 4;
          bVar10 = local_e8[2] & 0xf;
          fVar26 = (float)(byte)(bVar6 * bVar6) * fVar21 + fVar20;
          fVar41 = (float)(byte)(bVar7 * bVar7) * fVar23 + auVar37._0_4_;
          bVar7 = *local_b8 >> 4;
          bVar6 = *local_b8 & 0xf;
          local_110 = CONCAT44(fVar41,fVar26);
          fVar27 = (float)(byte)(bVar8 * bVar8) * fVar24 + fStack_d8;
          uStack_108 = (ulong)(uint)fVar27;
          fVar28 = fVar33 - (float)(byte)(bVar1 * bVar1) * fVar21;
          fVar42 = fVar30 - (float)(byte)(bVar9 * bVar9) * fVar23;
          local_100 = CONCAT44(fVar42,fVar28);
          fVar29 = fVar22 - (float)(byte)(bVar10 * bVar10) * fVar24;
          local_f8 = (ulong)(uint)fVar29;
          bVar9 = local_b8[1] >> 4;
          bVar1 = local_b8[1] & 0xf;
          uStack_d4 = 0;
          local_e0 = (float)(byte)(bVar7 * bVar7) * fVar21 + fVar20;
          fStack_dc = (float)(byte)(bVar9 * bVar9) * fVar23 + auVar37._0_4_;
          bVar10 = local_b8[2] >> 4;
          bVar9 = local_b8[2] & 0xf;
          fStack_d8 = (float)(byte)(bVar10 * bVar10) * fVar24 + fStack_d8;
          fVar33 = fVar33 - (float)(byte)(bVar6 * bVar6) * fVar21;
          fVar30 = fVar30 - (float)(byte)(bVar1 * bVar1) * fVar23;
          fVar22 = fVar22 - (float)(byte)(bVar9 * bVar9) * fVar24;
          local_d0 = CONCAT44(fVar30,fVar33);
          uStack_c8 = (ulong)(uint)fVar22;
          fVar20 = (float)param_3[8];
          fVar21 = (float)((ulong)param_3[8] >> 0x20);
          uVar25 = (undefined4)((ulong)param_3[5] >> 0x20);
          uVar48 = CONCAT44(uVar25,uVar25);
          fVar43 = (float)param_3[2];
          fVar45 = (float)((ulong)param_3[2] >> 0x20);
          fVar46 = (float)param_3[3];
          fVar47 = (float)((ulong)param_3[3] >> 0x20);
          fVar24 = (float)param_3[6];
          auVar38._0_4_ = fVar24 * ((fVar28 + fVar20) - fVar43);
          fVar28 = (float)((ulong)param_3[6] >> 0x20);
          auVar38._4_4_ = fVar28 * ((fVar42 + fVar21) - fVar45);
          fVar42 = (float)param_3[7];
          auVar38._8_4_ = fVar42 * ((fVar29 + fVar20) - fVar46);
          fVar39 = (float)((ulong)param_3[7] >> 0x20);
          auVar38._12_4_ = fVar39 * ((fVar21 + 0.0) - fVar47);
          fVar23 = ((fVar26 - fVar20) - fVar43) * fVar24;
          fVar26 = ((fVar41 - fVar21) - fVar45) * fVar28;
          fVar27 = ((fVar27 - fVar20) - fVar46) * fVar42;
          fVar29 = ((0.0 - fVar21) - fVar47) * fVar39;
          auVar2._4_4_ = fVar26;
          auVar2._0_4_ = fVar23;
          auVar2._8_4_ = fVar27;
          auVar2._12_4_ = fVar29;
          auVar50 = NEON_fmin(auVar2,auVar38,4);
          auVar3._4_4_ = fVar26;
          auVar3._0_4_ = fVar23;
          auVar3._8_4_ = fVar27;
          auVar3._12_4_ = fVar29;
          auVar32 = NEON_fmax(auVar3,auVar38,4);
          uVar35 = NEON_fmaxp(auVar50._0_8_,auVar50._0_8_,4);
          uVar35 = NEON_fmax(CONCAT44(auVar50._8_4_,auVar50._8_4_),uVar35,4);
          uVar49 = NEON_fminp(auVar32._0_8_,auVar32._0_8_,4);
          uVar44 = NEON_fmax(uVar35,uVar40,4);
          uVar35 = NEON_fmin(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar49,4);
          uVar49 = NEON_fmin(uVar35,uVar48,4);
          auVar36._0_4_ = ((local_e0 - fVar20) - fVar43) * fVar24;
          auVar36._4_4_ = ((fStack_dc - fVar21) - fVar45) * fVar28;
          auVar36._8_4_ = ((fStack_d8 - fVar20) - fVar46) * fVar42;
          auVar36._12_4_ = ((0.0 - fVar21) - fVar47) * fVar39;
          fVar23 = (float)uVar44;
          fVar24 = fVar24 * ((fVar20 + fVar33) - fVar43);
          fVar28 = fVar28 * ((fVar21 + fVar30) - fVar45);
          fVar42 = fVar42 * ((fVar20 + fVar22) - fVar46);
          fVar39 = fVar39 * ((fVar21 + 0.0) - fVar47);
          auVar4._4_4_ = fVar28;
          auVar4._0_4_ = fVar24;
          auVar4._8_4_ = fVar42;
          auVar4._12_4_ = fVar39;
          auVar50 = NEON_fmin(auVar36,auVar4,4);
          auVar5._4_4_ = fVar28;
          auVar5._0_4_ = fVar24;
          auVar5._8_4_ = fVar42;
          auVar5._12_4_ = fVar39;
          auVar32 = NEON_fmax(auVar36,auVar5,4);
          uVar35 = NEON_fmaxp(auVar50._0_8_,auVar50._0_8_,4);
          uVar44 = NEON_fmax(CONCAT44(auVar50._8_4_,auVar50._8_4_),uVar35,4);
          uVar35 = NEON_fminp(auVar32._0_8_,auVar32._0_8_,4);
          uVar35 = NEON_fmin(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar35,4);
          uVar44 = NEON_fmax(uVar44,uVar40,4);
          fVar20 = (float)uVar44;
          uVar35 = NEON_fmin(uVar35,uVar48,4);
          bVar1 = fVar23 <= (float)uVar49 | (fVar20 <= (float)uVar35) << 1;
          if (bVar1 == 1) {
            local_b0 = local_110;
            local_88 = local_e8;
            local_a0 = local_100;
            uStack_98 = local_f8;
            uStack_a8 = uStack_108;
            local_90 = (uint)uVar14;
            goto LAB_00872dfc;
          }
          if (bVar1 == 2) {
            uVar14 = (ulong)local_c0;
            uStack_a8 = (ulong)(uint)fStack_d8;
            local_b0 = CONCAT44(fStack_dc,local_e0);
            uStack_98 = uStack_c8;
            local_a0 = local_d0;
            local_90 = local_c0;
            local_88 = local_b8;
          }
          else {
            if (bVar1 != 3) goto LAB_00872e74;
            *(uint *)(param_3 + 9) = (uint)(fVar20 < fVar23);
            iVar13 = (int)param_2[1];
            lVar15 = (long)iVar13;
            uVar16 = (ulong)(fVar20 >= fVar23);
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar13) {
              FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar15 + 1);
              iVar13 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar15 + 1);
            puVar17 = (ulong *)(*param_2 + (long)iVar13 * 0x30);
            uVar14 = (&local_f0)[uVar16 * 6 + -4];
            puVar17[1] = (&local_f0)[uVar16 * 6 + -3];
            *puVar17 = uVar14;
            uVar14 = (&local_f0)[uVar16 * 6 + -2];
            uVar18 = (ulong)(fVar20 < fVar23);
            puVar17[3] = (&local_f0)[uVar16 * 6 + -1];
            puVar17[2] = uVar14;
            *(int *)(puVar17 + 4) = (int)(&local_f0)[uVar16 * 6];
            uVar14 = (ulong)(uint)(&local_f0)[uVar18 * 6];
            uStack_a8 = (&local_f0)[uVar18 * 6 + -3];
            uStack_98 = (&local_f0)[uVar18 * 6 + -1];
            local_a0 = (&local_f0)[uVar18 * 6 + -2];
            local_b0 = (&local_f0)[uVar18 * 6 + -4];
            local_90 = (uint)(&local_f0)[uVar18 * 6];
            local_88 = (byte *)(&local_f0)[uVar18 * 6 + 1];
          }
        }
        else {
          uVar25 = (undefined4)((ulong)param_3[5] >> 0x20);
          local_110 = CONCAT44(uVar25,uVar25);
          puVar19 = (undefined8 *)*param_3;
          uVar12 = (**(code **)(*(long *)*puVar19 + 0x10))
                             ((long *)*puVar19,
                              (ulong)CONCAT12(local_88[3],*(undefined2 *)(local_88 + 4)),&local_b0,
                              &local_110);
          *(uint *)(puVar19 + 1) = *(uint *)(puVar19 + 1) | uVar12;
          param_3[5] = CONCAT44((int)local_110,(int)param_3[5]);
          param_3[4] = param_3[4];
LAB_00872e74:
          if ((int)param_2[1] <= (int)lVar11) {
            return;
          }
          iVar13 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar13;
          puVar17 = (ulong *)(*param_2 + (long)iVar13 * 0x30);
          uVar14 = (ulong)(uint)puVar17[4];
          local_110 = *puVar17;
          local_b0 = local_110;
          local_88 = (byte *)((long)param_1 + (long)(int)puVar17[4] * 6 + *param_1);
          local_a0 = puVar17[2];
          uStack_98 = puVar17[3];
          uStack_a8 = puVar17[1];
          local_90 = (uint)puVar17[4];
LAB_00872dfc:
          local_b0 = local_110;
        }
        auVar37._8_8_ = 0;
        auVar37._0_8_ = local_b0 >> 0x20;
        uVar16 = uVar14 & 0xffffffff;
        fVar20 = (float)local_b0;
        fVar33 = (float)local_a0;
        fVar30 = (float)(local_a0 >> 0x20);
      } while( true );
    }
  }
  return;
}


