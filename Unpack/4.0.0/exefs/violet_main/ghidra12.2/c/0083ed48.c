/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0083ed48; name: FUN_0083ed48
 */


void FUN_0083ed48(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined1 auVar5 [12];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar31;
  undefined1 auVar25 [16];
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar24;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  uint local_110;
  byte *local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  uint local_e0;
  byte *local_d8;
  long local_d0;
  long lStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint local_b0;
  byte *local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar13 = PTR_DAT_047d19b0;
  if ((int)param_1[1] != 0) {
    lVar12 = param_2[1];
    lVar1 = param_3 + 0x140;
    local_d0 = param_1[2];
    lStack_c8 = param_1[3];
    fStack_b8 = (float)param_1[5];
    fStack_b4 = (float)((ulong)param_1[5] >> 0x20);
    local_c0 = (float)param_1[4];
    fStack_bc = (float)((ulong)param_1[4] >> 0x20);
    auVar25 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x150);
    local_b0 = 0;
    auVar34 = NEON_ext(auVar25,auVar25,8,1);
    local_a8 = (byte *)(*param_1 + (long)param_1);
    auVar25 = NEON_ext(auVar34,auVar25,8,1);
    uVar45 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    uVar23 = NEON_fmax(uVar45,*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x10),4);
    FUN_03241a80(lVar1,&local_d0,&local_130);
    fVar41 = auVar25._0_4_;
    auVar38._0_4_ = (*(float *)(param_3 + 0x180) + *(float *)(param_3 + 400)) * fVar41;
    fVar42 = auVar25._4_4_;
    auVar38._4_4_ = (*(float *)(param_3 + 0x184) + *(float *)(param_3 + 0x194)) * fVar42;
    fVar43 = auVar25._8_4_;
    auVar38._8_4_ = (*(float *)(param_3 + 0x188) + *(float *)(param_3 + 0x198)) * fVar43;
    fVar44 = auVar25._12_4_;
    auVar38._12_4_ = (*(float *)(param_3 + 0x18c) + *(float *)(param_3 + 0x19c)) * fVar44;
    fVar22 = (*(float *)(param_3 + 400) - *(float *)(param_3 + 0x180)) * fVar41;
    fVar30 = (*(float *)(param_3 + 0x194) - *(float *)(param_3 + 0x184)) * fVar42;
    fVar31 = (*(float *)(param_3 + 0x198) - *(float *)(param_3 + 0x188)) * fVar43;
    fVar32 = (*(float *)(param_3 + 0x19c) - *(float *)(param_3 + 0x18c)) * fVar44;
    auVar36._0_4_ = local_130 - fVar22;
    auVar36._4_4_ = fStack_12c - fVar30;
    auVar36._8_4_ = fStack_128 - fVar31;
    auVar36._12_4_ = fStack_124 - fVar32;
    auVar25._0_4_ = local_120 + fVar22;
    auVar25._4_4_ = fStack_11c + fVar30;
    auVar25._8_4_ = local_118 + fVar31;
    auVar25._12_4_ = fStack_114 + fVar32;
    auVar34 = NEON_fmax(auVar36,auVar38,4);
    auVar25 = NEON_fmin(auVar25,auVar34,4);
    fVar22 = auVar38._0_4_ - auVar25._0_4_;
    fVar30 = auVar38._4_4_ - auVar25._4_4_;
    fVar31 = auVar38._8_4_ - auVar25._8_4_;
    fVar32 = auVar38._12_4_ - auVar25._12_4_;
    auVar34._0_4_ = fVar22 * fVar22;
    auVar34._4_4_ = fVar30 * fVar30;
    auVar34._8_4_ = fVar31 * fVar31;
    auVar34._12_4_ = fVar32 * fVar32;
    auVar25 = NEON_ext(auVar34,auVar34,8,1);
    if (auVar34._0_4_ + auVar34._4_4_ + auVar25._0_4_ <= (float)uVar23 * (float)uVar23) {
      auVar25 = *(undefined1 (*) [16])(puVar13 + 0x1e0);
      fVar22 = auVar25._0_4_;
LAB_0083eebc:
      while ((char)local_a8[3] < '\0') {
        lVar17 = (long)(int)local_b0 + 1;
        local_100 = (float)local_d0;
        fStack_fc = (float)((ulong)local_d0 >> 0x20);
        fStack_f8 = (float)lStack_c8;
        local_110 = (uint)lVar17;
        lVar2 = ((ulong)local_a8[4] << 1 | ((ulong)local_a8[3] & 0x7f) << 9) + (long)(int)local_b0;
        local_e0 = (uint)lVar2;
        local_108 = (byte *)((long)param_1 + lVar17 * 5 + *param_1);
        local_d8 = (byte *)((long)param_1 + lVar2 * 5 + *param_1);
        bVar6 = local_108[1] >> 4;
        bVar7 = *local_108 >> 4;
        bVar3 = *local_108 & 0xf;
        fVar30 = (local_c0 - local_100) * fVar22;
        fVar31 = (fStack_bc - fStack_fc) * auVar25._4_4_;
        fVar32 = (fStack_b8 - fStack_f8) * fVar22;
        bVar8 = local_108[2] >> 4;
        local_130 = (float)(byte)(bVar7 * bVar7) * fVar30 + local_100;
        bVar7 = local_108[2] & 0xf;
        fStack_12c = (float)(byte)(bVar6 * bVar6) * fVar31 + fStack_fc;
        bVar6 = local_108[1] & 0xf;
        fStack_124 = 0.0;
        local_120 = local_c0 - (float)(byte)(bVar3 * bVar3) * fVar30;
        fStack_114 = 0.0;
        bVar9 = local_d8[2] >> 4;
        bVar3 = local_d8[2] & 0xf;
        fStack_128 = (float)(byte)(bVar8 * bVar8) * fVar32 + fStack_f8;
        fStack_11c = fStack_bc - (float)(byte)(bVar6 * bVar6) * fVar31;
        bVar6 = *local_d8 >> 4;
        local_118 = fStack_b8 - (float)(byte)(bVar7 * bVar7) * fVar32;
        bVar7 = local_d8[1] >> 4;
        local_100 = local_100 + (float)(byte)(bVar6 * bVar6) * fVar30;
        fStack_e4 = 0.0;
        fStack_fc = (float)(byte)(bVar7 * bVar7) * fVar31 + fStack_fc;
        uStack_f4 = 0;
        bVar7 = *local_d8 & 0xf;
        fStack_f8 = (float)(byte)(bVar9 * bVar9) * fVar32 + fStack_f8;
        local_f0 = local_c0 - (float)(byte)(bVar7 * bVar7) * fVar30;
        bVar7 = local_d8[1] & 0xf;
        fStack_ec = fStack_bc - (float)(byte)(bVar7 * bVar7) * fVar31;
        fStack_e8 = fStack_b8 - (float)(byte)(bVar3 * bVar3) * fVar32;
        uVar23 = NEON_fmax(uVar45,*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x10),4);
        FUN_03241a80(lVar1,&local_130,&local_a0);
        auVar35._0_4_ = fVar41 * (*(float *)(param_3 + 0x180) + *(float *)(param_3 + 400));
        auVar35._4_4_ = fVar42 * (*(float *)(param_3 + 0x184) + *(float *)(param_3 + 0x194));
        auVar35._8_4_ = fVar43 * (*(float *)(param_3 + 0x188) + *(float *)(param_3 + 0x198));
        auVar35._12_4_ = fVar44 * (*(float *)(param_3 + 0x18c) + *(float *)(param_3 + 0x19c));
        fVar30 = fVar41 * (*(float *)(param_3 + 400) - *(float *)(param_3 + 0x180));
        fVar31 = fVar42 * (*(float *)(param_3 + 0x194) - *(float *)(param_3 + 0x184));
        fVar32 = fVar43 * (*(float *)(param_3 + 0x198) - *(float *)(param_3 + 0x188));
        fVar33 = fVar44 * (*(float *)(param_3 + 0x19c) - *(float *)(param_3 + 0x18c));
        auVar39._0_4_ = local_a0 - fVar30;
        auVar39._4_4_ = fStack_9c - fVar31;
        auVar39._8_4_ = fStack_98 - fVar32;
        auVar39._12_4_ = fStack_94 - fVar33;
        auVar26._0_4_ = (float)uStack_90 + fVar30;
        auVar26._4_4_ = (float)((ulong)uStack_90 >> 0x20) + fVar31;
        auVar26._8_4_ = (float)uStack_88 + fVar32;
        auVar26._12_4_ = (float)((ulong)uStack_88 >> 0x20) + fVar33;
        auVar34 = NEON_fmax(auVar39,auVar35,4);
        auVar34 = NEON_fmin(auVar26,auVar34,4);
        fVar30 = auVar35._0_4_ - auVar34._0_4_;
        fVar31 = auVar35._4_4_ - auVar34._4_4_;
        fVar32 = auVar35._8_4_ - auVar34._8_4_;
        fVar33 = auVar35._12_4_ - auVar34._12_4_;
        auVar27._0_4_ = fVar30 * fVar30;
        auVar27._4_4_ = fVar31 * fVar31;
        auVar27._8_4_ = fVar32 * fVar32;
        auVar27._12_4_ = fVar33 * fVar33;
        auVar36 = NEON_ext(auVar27,auVar27,8,1);
        uVar24 = NEON_fmax(uVar45,*(undefined8 *)(*(long *)(param_3 + 0x138) + 0x10),4);
        FUN_03241a80(lVar1,&local_100,&local_a0);
        auVar40._0_4_ = fVar41 * (*(float *)(param_3 + 0x180) + *(float *)(param_3 + 400));
        auVar40._4_4_ = fVar42 * (*(float *)(param_3 + 0x184) + *(float *)(param_3 + 0x194));
        auVar40._8_4_ = fVar43 * (*(float *)(param_3 + 0x188) + *(float *)(param_3 + 0x198));
        auVar40._12_4_ = fVar44 * (*(float *)(param_3 + 0x18c) + *(float *)(param_3 + 0x19c));
        fVar30 = fVar41 * (*(float *)(param_3 + 400) - *(float *)(param_3 + 0x180));
        fVar31 = fVar42 * (*(float *)(param_3 + 0x194) - *(float *)(param_3 + 0x184));
        fVar32 = fVar43 * (*(float *)(param_3 + 0x198) - *(float *)(param_3 + 0x188));
        fVar33 = fVar44 * (*(float *)(param_3 + 0x19c) - *(float *)(param_3 + 0x18c));
        auVar37._0_4_ = local_a0 - fVar30;
        auVar37._4_4_ = fStack_9c - fVar31;
        auVar37._8_4_ = fStack_98 - fVar32;
        auVar37._12_4_ = fStack_94 - fVar33;
        auVar28._0_4_ = (float)uStack_90 + fVar30;
        auVar28._4_4_ = (float)((ulong)uStack_90 >> 0x20) + fVar31;
        auVar28._8_4_ = (float)uStack_88 + fVar32;
        auVar28._12_4_ = (float)((ulong)uStack_88 >> 0x20) + fVar33;
        auVar34 = NEON_fmax(auVar37,auVar40,4);
        auVar34 = NEON_fmin(auVar28,auVar34,4);
        fVar30 = auVar40._0_4_ - auVar34._0_4_;
        fVar31 = auVar40._4_4_ - auVar34._4_4_;
        fVar32 = auVar40._8_4_ - auVar34._8_4_;
        fVar33 = auVar40._12_4_ - auVar34._12_4_;
        auVar29._0_4_ = fVar30 * fVar30;
        auVar29._4_4_ = fVar31 * fVar31;
        auVar29._8_4_ = fVar32 * fVar32;
        auVar29._12_4_ = fVar33 * fVar33;
        auVar34 = NEON_ext(auVar29,auVar29,8,1);
        bVar3 = auVar27._0_4_ + auVar27._4_4_ + auVar36._0_4_ <= (float)uVar23 * (float)uVar23 |
                (auVar29._0_4_ + auVar29._4_4_ + auVar34._0_4_ <= (float)uVar24 * (float)uVar24) <<
                1;
        if (bVar3 == 3) {
          iVar16 = (int)param_2[1];
          lVar17 = (long)iVar16;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar16) {
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar17 + 1);
            iVar16 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = (int)(lVar17 + 1);
          puVar14 = (undefined8 *)(*param_2 + (long)iVar16 * 0x30);
          puVar14[1] = CONCAT44(uStack_f4,fStack_f8);
          *puVar14 = CONCAT44(fStack_fc,local_100);
          puVar14[3] = CONCAT44(fStack_e4,fStack_e8);
          puVar14[2] = CONCAT44(fStack_ec,local_f0);
          *(uint *)(puVar14 + 4) = local_e0;
LAB_0083eea4:
          local_b0 = local_110;
          local_d0 = CONCAT44(fStack_12c,local_130);
          auVar10._8_4_ = fStack_128;
          auVar10._0_8_ = local_d0;
          auVar10._12_4_ = fStack_124;
          lStack_c8 = auVar10._8_8_;
          fStack_b8 = local_118;
          fStack_b4 = fStack_114;
          local_c0 = local_120;
          fStack_bc = fStack_11c;
          local_a8 = local_108;
        }
        else {
          if (bVar3 != 2) {
            if (bVar3 != 1) goto LAB_0083f064;
            goto LAB_0083eea4;
          }
          local_b0 = local_e0;
          local_d0 = CONCAT44(fStack_fc,local_100);
          auVar11._8_4_ = fStack_f8;
          auVar11._0_8_ = local_d0;
          auVar11._12_4_ = uStack_f4;
          lStack_c8 = auVar11._8_8_;
          fStack_b8 = fStack_e8;
          fStack_b4 = fStack_e4;
          local_c0 = local_f0;
          fStack_bc = fStack_ec;
          local_a8 = local_d8;
        }
      }
      lVar17 = *(long *)(param_3 + 0xa8);
      if (lVar17 == 0) {
LAB_0083ef28:
        lVar21 = *(long *)(param_3 + 0x50);
        lVar18 = (long)(param_1 + 8) + (ulong)CONCAT11(local_a8[3],local_a8[4]) * 0x60 + param_1[8];
        lVar19 = *(long *)(lVar21 + 0x40);
        lVar17 = lVar19 + lVar21 + 0x40;
        lVar2 = 0;
        if (lVar19 != 0) {
          lVar2 = lVar17;
        }
        iVar16 = (int)(lVar18 - lVar2 >> 5) * -0x55555555;
        if ((*(int *)(param_3 + 0x94) != iVar16) || (*(int *)(param_3 + 0x98) != iVar16)) {
          lVar17 = lVar17 + (long)iVar16 * 0x60;
          *(long *)(param_3 + 0x60) = lVar17;
          *(int *)(param_3 + 0x94) = iVar16;
          *(int *)(param_3 + 0x98) = iVar16;
          lVar19 = *(long *)(lVar21 + 0x70);
          lVar2 = 0;
          if (lVar19 != 0) {
            lVar2 = lVar19 + lVar21 + 0x70;
          }
          *(ulong *)(param_3 + 0x70) = lVar2 + (ulong)*(uint *)(lVar17 + 0x48) * 4;
          lVar19 = *(long *)(lVar21 + 0x80);
          lVar2 = 0;
          if (lVar19 != 0) {
            lVar2 = lVar19 + lVar21 + 0x80;
          }
          *(ulong *)(param_3 + 0x78) = lVar2 + (ulong)*(byte *)(lVar17 + 0x5b) * 0x80000;
          lVar19 = *(long *)(lVar21 + 0x60);
          lVar2 = 0;
          if (lVar19 != 0) {
            lVar2 = lVar19 + lVar21 + 0x60;
          }
          lVar2 = lVar2 + (ulong)*(uint *)(lVar17 + 0x4c) * 2;
          *(long *)(param_3 + 0x80) = lVar2;
          lVar20 = *(long *)(lVar21 + 0x90);
          lVar19 = 0;
          if (lVar20 != 0) {
            lVar19 = lVar20 + lVar21 + 0x90;
          }
          *(ulong *)(param_3 + 0x88) = lVar19 + (ulong)*(uint *)(lVar17 + 0x54) * 4;
          *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar17 + 0x58);
          lVar20 = *(long *)(lVar21 + 0x50);
          lVar19 = 0;
          if (lVar20 != 0) {
            lVar19 = lVar20 + lVar21 + 0x50;
          }
          *(ulong *)(param_3 + 0x68) = lVar19 + (ulong)*(uint *)(lVar17 + 0x50) * 4;
          uVar23 = *(undefined8 *)(lVar17 + 0x30);
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar17 + 0x38);
          *(undefined8 *)(param_3 + 0x30) = uVar23;
          auVar5 = *(undefined1 (*) [12])(lVar17 + 0x3c);
          *(ulong *)(param_3 + 0x48) = (ulong)auVar5._8_4_;
          *(long *)(param_3 + 0x40) = auVar5._0_8_;
          *(ulong *)(param_3 + 0x80) = lVar2 + (ulong)*(byte *)(lVar17 + 0x58) * -2;
        }
        FUN_0083f39c(lVar18,param_2,param_3);
      }
      else {
        lVar18 = *(long *)(lVar17 + 0x20);
        lVar2 = 0;
        if (lVar18 != 0) {
          lVar2 = lVar18 + lVar17 + 0x20;
        }
        lVar21 = *(long *)(lVar2 + 0x48);
        lVar18 = 0;
        if (lVar21 != 0) {
          lVar18 = lVar21 + lVar2 + 0x48;
        }
        uVar4 = local_b0 + 0x1f;
        if (-1 < (int)local_b0) {
          uVar4 = local_b0;
        }
        if ((*(uint *)(lVar17 + 0x28 +
                      (long)((int)uVar4 >> 5) * 4 +
                      (long)(*(int *)(lVar18 + 0x68) << 3) * 4 + *(long *)(lVar17 + 0x28)) >>
             (ulong)(local_b0 & 0x1f) & 1) != 0) goto LAB_0083ef28;
      }
LAB_0083f064:
      if ((int)lVar12 < (int)param_2[1]) {
        iVar16 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar16;
        plVar15 = (long *)(*param_2 + (long)iVar16 * 0x30);
        local_b0 = *(uint *)(plVar15 + 4);
        local_a8 = (byte *)((long)param_1 + (long)(int)plVar15[4] * 5 + *param_1);
        local_d0 = *plVar15;
        lStack_c8 = plVar15[1];
        auVar34 = *(undefined1 (*) [16])(plVar15 + 2);
        fStack_b8 = auVar34._8_4_;
        fStack_b4 = auVar34._12_4_;
        local_c0 = auVar34._0_4_;
        fStack_bc = auVar34._4_4_;
        goto LAB_0083eebc;
      }
    }
  }
  return;
}


