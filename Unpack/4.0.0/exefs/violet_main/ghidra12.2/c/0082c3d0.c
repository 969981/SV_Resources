/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082c3d0; name: FUN_0082c3d0
 */


void FUN_0082c3d0(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  long *plVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined1 auVar9 [16];
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puVar18;
  int iVar19;
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  uint uVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  float fVar32;
  uint uVar33;
  uint uVar34;
  float fVar40;
  uint uVar41;
  float fVar42;
  uint uVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [12];
  float fVar53;
  float fVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [12];
  undefined1 auVar57 [16];
  undefined1 auVar61 [12];
  undefined8 uVar60;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined8 uVar67;
  long lVar68;
  ulong uVar69;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  long local_150;
  long lStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  long local_128;
  long local_120;
  long local_118;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a3;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  
  local_b0 = 0;
  local_c0 = PTR_DAT_047d1a40 + 0x10;
  local_a8 = 1;
  local_a4 = 1;
  local_a3 = 0;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  local_78 = 0;
  local_b8 = 0x200000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  auVar9 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar37 = *(undefined1 (*) [16])(param_1 + 0x20);
  auVar48 = *(undefined1 (*) [16])PTR_DAT_047d1a48;
  local_d0 = 0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0x80000000;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_118 = 0;
    fVar32 = (auVar37._0_4_ - auVar9._0_4_) * auVar48._0_4_;
    fVar40 = (auVar37._4_4_ - auVar9._4_4_) * auVar48._4_4_;
    fVar42 = (auVar37._8_4_ - auVar9._8_4_) * auVar48._8_4_;
    local_128 = 0;
    local_120 = 0;
    plVar30 = (long *)0x0;
    lVar26 = 0;
    uVar25 = 0;
    auVar37 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x150);
    uVar67 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0);
    fVar66 = (float)uVar67;
    uVar24 = 0xffffffff;
    uVar27 = 0xffffffff;
    lStack_148 = 0;
    local_150 = 0;
    fStack_138 = 0.0;
    local_140 = 0.0;
    fStack_13c = 0.0;
    auVar48 = NEON_ext(auVar37,auVar37,8,1);
    auVar37 = NEON_ext(auVar48,auVar37,8,1);
    uVar20 = 0;
    plVar2 = (long *)(param_1 + 0x40);
    fStack_168 = auVar37._8_4_;
    fStack_164 = auVar37._12_4_;
    local_170 = auVar37._0_4_;
    fStack_16c = auVar37._4_4_;
    plVar3 = (long *)(param_1 + 0x50);
    do {
      uVar34 = uVar20 >> 8;
      uVar29 = (ulong)uVar34;
      uVar33 = uVar20 >> 1 & 0x7f;
      uVar31 = (ulong)uVar33;
      if ((uVar27 == uVar34) && (uVar24 == uVar34)) {
        lVar21 = *plVar3;
        lVar68 = lVar21 + (long)plVar3;
        uVar69 = (ulong)uVar24;
      }
      else {
        plVar30 = (long *)((long)plVar2 + uVar29 * 0x60 + *plVar2);
        local_150 = plVar30[6];
        lStack_148 = plVar30[7];
        lVar26 = *(long *)(param_1 + 0x70);
        local_118 = 0;
        if (lVar26 != 0) {
          local_118 = lVar26 + param_1 + 0x70;
        }
        local_118 = local_118 + (ulong)*(uint *)(plVar30 + 9) * 4;
        lVar26 = *(long *)(param_1 + 0x80);
        fStack_138 = *(float *)((long)plVar30 + 0x44);
        local_120 = 0;
        if (lVar26 != 0) {
          local_120 = lVar26 + param_1 + 0x80;
        }
        local_120 = local_120 + (ulong)*(byte *)((long)plVar30 + 0x5b) * 0x80000;
        lVar26 = *(long *)(param_1 + 0x60);
        local_140 = (float)*(undefined8 *)((long)plVar30 + 0x3c);
        fStack_13c = (float)((ulong)*(undefined8 *)((long)plVar30 + 0x3c) >> 0x20);
        lVar22 = 0;
        if (lVar26 != 0) {
          lVar22 = lVar26 + param_1 + 0x60;
        }
        lVar21 = *plVar3;
        uVar25 = (ulong)*(byte *)(plVar30 + 0xb);
        lVar68 = lVar21 + (long)plVar3;
        lVar26 = 0;
        if (lVar21 != 0) {
          lVar26 = lVar68;
        }
        lVar26 = lVar26 + (ulong)*(uint *)(plVar30 + 10) * 4;
        local_128 = lVar22 + (ulong)*(uint *)((long)plVar30 + 0x4c) * 2 + uVar25 * -2;
        uVar69 = uVar29;
        uVar24 = uVar34;
        uVar27 = uVar34;
      }
      auVar35 = auVar9._0_12_;
      lVar22 = 0;
      if (lVar21 != 0) {
        lVar22 = lVar68;
      }
      lVar22 = lVar22 + (ulong)*(uint *)((long)plVar2 + uVar69 * 0x60 + *plVar2 + 0x50) * 4 +
               uVar31 * 4;
      if (*(char *)(lVar22 + 1) == *(char *)(lVar22 + 3)) {
        if (*(byte *)(lVar22 + 2) - 3 < 2) {
          lVar22 = lVar26 + uVar31 * 4;
          bVar6 = *(byte *)(lVar22 + 1);
          fVar46 = (float)((ulong)uVar67 >> 0x20);
          if ((bVar6 == *(byte *)(lVar22 + 3)) && (*(char *)(lVar22 + 2) == '\x03')) {
            auVar49 = *(undefined1 (*) [16])(plVar30 + 2);
            auVar38 = *(undefined1 (*) [16])(plVar30 + 4);
            if (bVar6 == 0) {
              uVar69 = auVar49._8_8_;
              lVar68 = auVar49._0_8_;
            }
            else {
              lVar22 = 0;
              do {
                local_6c = (int)lVar22;
                local_70 = local_6c + 1;
                fVar53 = auVar38._0_4_;
                fVar54 = auVar38._8_4_;
                local_6c = local_6c +
                           (*(byte *)((long)plVar30 + (long)local_6c * 4 + *plVar30 + 3) & 0xfe);
                fVar55 = fVar66 * (fVar53 - auVar49._0_4_);
                fVar58 = fVar46 * (auVar38._4_4_ - auVar49._4_4_);
                fVar59 = fVar66 * (fVar54 - auVar49._8_4_);
                uVar34 = *(uint *)((ulong)&local_70 | (ulong)(local_6c <= (int)(uint)bVar6) << 2);
                lVar22 = (long)(int)uVar34;
                pbVar23 = (byte *)((long)plVar30 + lVar22 * 4 + *plVar30);
                bVar10 = *pbVar23 >> 4;
                bVar7 = *pbVar23 & 0xf;
                bVar11 = pbVar23[1] >> 4;
                bVar14 = pbVar23[1] & 0xf;
                bVar12 = pbVar23[2] >> 4;
                bVar13 = pbVar23[2] & 0xf;
                lVar68 = CONCAT44(auVar49._4_4_ + (float)(byte)(bVar11 * bVar11) * fVar58,
                                  auVar49._0_4_ + (float)(byte)(bVar10 * bVar10) * fVar55);
                fVar45 = auVar49._8_4_ + (float)(byte)(bVar12 * bVar12) * fVar59;
                uVar69 = (ulong)(uint)fVar45;
                auVar38._4_4_ = auVar38._4_4_ - (float)(byte)(bVar14 * bVar14) * fVar58;
                auVar38._0_4_ = fVar53 - (float)(byte)(bVar7 * bVar7) * fVar55;
                auVar49._8_4_ = fVar45;
                auVar49._0_8_ = lVar68;
                auVar49._12_4_ = 0;
                auVar38._8_4_ = fVar54 - (float)(byte)(bVar13 * bVar13) * fVar59;
                auVar38._12_4_ = 0;
              } while (uVar34 != bVar6);
            }
          }
          else {
            lVar22 = *plVar30;
            if (0 < (int)*(uint *)(plVar30 + 1)) {
              uVar31 = 0;
              pbVar23 = (byte *)((long)plVar30 + lVar22 + 3);
              do {
                if (((*pbVar23 & 1) == 0) && (uVar33 == *pbVar23 >> 1)) {
                  uVar69 = plVar30[3];
                  lVar68 = plVar30[2];
                  auVar38 = *(undefined1 (*) [16])(plVar30 + 4);
                  if ((int)uVar31 == 0) goto LAB_0082cc08;
                  goto LAB_0082caf0;
                }
                uVar31 = uVar31 + 1;
                pbVar23 = pbVar23 + 4;
              } while (*(uint *)(plVar30 + 1) != uVar31);
            }
            uVar69 = plVar30[3];
            lVar68 = plVar30[2];
            auVar38 = *(undefined1 (*) [16])(plVar30 + 4);
            uVar31 = 0xffffffff;
LAB_0082caf0:
            auVar52._8_8_ = uVar69;
            auVar52._0_8_ = lVar68;
            lVar21 = 0;
            do {
              local_6c = (int)lVar21;
              local_70 = local_6c + 1;
              fVar53 = auVar38._0_4_;
              fVar54 = auVar38._8_4_;
              local_6c = local_6c +
                         (*(byte *)((long)plVar30 + (long)local_6c * 4 + lVar22 + 3) & 0xfe);
              fVar55 = fVar66 * (fVar53 - auVar52._0_4_);
              fVar58 = fVar46 * (auVar38._4_4_ - auVar52._4_4_);
              fVar59 = fVar66 * (fVar54 - auVar52._8_4_);
              iVar28 = *(int *)((ulong)&local_70 | (ulong)(local_6c <= (int)uVar31) << 2);
              lVar21 = (long)iVar28;
              pbVar23 = (byte *)((long)plVar30 + lVar21 * 4 + lVar22);
              bVar13 = *pbVar23 >> 4;
              bVar6 = *pbVar23 & 0xf;
              bVar10 = pbVar23[1] >> 4;
              bVar7 = pbVar23[1] & 0xf;
              bVar11 = pbVar23[2] >> 4;
              bVar14 = pbVar23[2] & 0xf;
              lVar68 = CONCAT44(auVar52._4_4_ + (float)(byte)(bVar10 * bVar10) * fVar58,
                                auVar52._0_4_ + (float)(byte)(bVar13 * bVar13) * fVar55);
              fVar45 = auVar52._8_4_ + (float)(byte)(bVar11 * bVar11) * fVar59;
              uVar69 = (ulong)(uint)fVar45;
              auVar38._4_4_ = auVar38._4_4_ - (float)(byte)(bVar7 * bVar7) * fVar58;
              auVar38._0_4_ = fVar53 - (float)(byte)(bVar6 * bVar6) * fVar55;
              auVar52._8_4_ = fVar45;
              auVar52._0_8_ = lVar68;
              auVar52._12_4_ = 0;
              auVar38._8_4_ = fVar54 - (float)(byte)(bVar14 * bVar14) * fVar59;
              auVar38._12_4_ = 0;
            } while (iVar28 != (int)uVar31);
          }
LAB_0082cc08:
          if ((int)local_c8 <= (int)uVar20) {
            do {
              iVar1 = (int)local_c8;
              iVar28 = (int)local_c8 + 1;
              if ((int)(local_c8._4_4_ & 0x7fffffff) <= (int)local_c8) {
                FUN_02ebb550(&local_d0,PTR_PTR_047d1a50 + 0x20,(long)iVar28);
              }
              local_c8._0_4_ = iVar28;
            } while (iVar1 < (int)uVar20);
          }
          plVar5 = (long *)(local_d0 + (long)(int)uVar20 * 0x20);
          fVar46 = (auVar38._0_4_ + (float)lVar68) * local_170;
          fVar53 = (auVar38._4_4_ + (float)((ulong)lVar68 >> 0x20)) * fStack_16c;
          fVar54 = (auVar38._8_4_ + (float)uVar69) * fStack_168;
          fVar45 = (auVar38._12_4_ + (float)(uVar69 >> 0x20)) * fStack_164;
          plVar5[1] = uVar69;
          *plVar5 = lVar68;
          plVar5[3] = auVar38._8_8_;
          plVar5[2] = auVar38._0_8_;
          lVar22 = (long)(int)local_90;
          if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
            FUN_02eaf0f8(&local_98,PTR_PTR_047d1a50,lVar22 + 1);
          }
          pbVar23 = (byte *)(local_98 + (long)(int)local_90 * 0x10);
          uVar34 = (uint)((int)fVar46 >> 0x1f) >> 1;
          uVar41 = (uint)((int)fVar53 >> 0x1f) >> 1;
          uVar43 = (uint)((int)fVar54 >> 0x1f) >> 1;
          uVar44 = (uint)((int)fVar45 >> 0x1f) >> 1;
          bVar14 = (byte)((uint)fVar46 >> 0x18);
          bVar13 = (byte)((uint)fVar53 >> 0x18);
          bVar7 = (byte)((uint)fVar54 >> 0x18);
          bVar6 = (byte)((uint)fVar45 >> 0x18);
          pbVar23[8] = (byte)uVar43 ^ SUB41(fVar54,0);
          pbVar23[9] = (byte)(uVar43 >> 8) ^ (byte)((uint)fVar54 >> 8);
          pbVar23[10] = (byte)(uVar43 >> 0x10) ^ (byte)((uint)fVar54 >> 0x10);
          pbVar23[0xb] = (byte)((char)bVar7 >> 7) >> 1 ^ bVar7;
          pbVar23[0xc] = (byte)uVar44 ^ SUB41(fVar45,0);
          pbVar23[0xd] = (byte)(uVar44 >> 8) ^ (byte)((uint)fVar45 >> 8);
          pbVar23[0xe] = (byte)((uint3)((uint3)((int)fVar45 >> 0x1f) >> 1) >> 8) ^
                         (byte)((uint)fVar45 >> 0x10);
          pbVar23[0xf] = (byte)((char)bVar6 >> 7) >> 1 ^ bVar6;
          *pbVar23 = (byte)uVar34 ^ SUB41(fVar46,0);
          pbVar23[1] = (byte)(uVar34 >> 8) ^ (byte)((uint)fVar46 >> 8);
          pbVar23[2] = (byte)(uVar34 >> 0x10) ^ (byte)((uint)fVar46 >> 0x10);
          pbVar23[3] = (byte)((char)bVar14 >> 7) >> 1 ^ bVar14;
          pbVar23[4] = (byte)uVar41 ^ SUB41(fVar53,0);
          pbVar23[5] = (byte)(uVar41 >> 8) ^ (byte)((uint)fVar53 >> 8);
          pbVar23[6] = (byte)(uVar41 >> 0x10) ^ (byte)((uint)fVar53 >> 0x10);
          pbVar23[7] = (byte)((char)bVar13 >> 7) >> 1 ^ bVar13;
          *(uint *)(pbVar23 + 0xc) = uVar20;
          local_90 = CONCAT44(local_90._4_4_,(int)(lVar22 + 1));
        }
      }
      else {
        bVar6 = *(byte *)(lVar26 + uVar31 * 4);
        uVar33 = (uint)uVar25;
        if (bVar6 < uVar33) {
          uVar41 = *(uint *)(local_118 + (ulong)bVar6 * 4);
          auVar37._8_8_ = lStack_148;
          auVar37._0_8_ = local_150;
          auVar47._4_4_ = fStack_13c;
          auVar47._0_4_ = local_140;
          auVar47._8_4_ = fStack_138;
          uVar34 = uVar41 & 0x7ff;
          uVar43 = uVar41 >> 0xb & 0x7ff;
          uVar41 = uVar41 >> 0x16;
          auVar36 = auVar37._0_12_;
        }
        else {
          uVar29 = *(ulong *)(local_120 + (ulong)*(ushort *)(local_128 + (ulong)bVar6 * 2) * 8);
          auVar47._4_4_ = fVar40;
          auVar47._0_4_ = fVar32;
          auVar47._8_4_ = fVar42;
          uVar34 = (uint)uVar29 & 0x1fffff;
          uVar43 = (uint)(uVar29 >> 0x15) & 0x1fffff;
          uVar41 = (uint)(uVar29 >> 0x2a);
          auVar36 = auVar35;
        }
        lVar22 = lVar26 + uVar31 * 4;
        auVar48._4_4_ = uVar43;
        auVar48._0_4_ = uVar34;
        bVar6 = *(byte *)(lVar22 + 1);
        auVar48._8_4_ = uVar41;
        auVar48._12_4_ = 0;
        auVar37 = NEON_scvtf(auVar48,4);
        if (bVar6 < uVar33) {
          uVar41 = *(uint *)(local_118 + (ulong)bVar6 * 4);
          auVar15._8_8_ = lStack_148;
          auVar15._0_8_ = local_150;
          auVar56._4_4_ = fStack_13c;
          auVar56._0_4_ = local_140;
          auVar56._8_4_ = fStack_138;
          uVar34 = uVar41 & 0x7ff;
          uVar43 = uVar41 >> 0xb & 0x7ff;
          uVar41 = uVar41 >> 0x16;
          auVar61 = auVar15._0_12_;
        }
        else {
          uVar29 = *(ulong *)(local_120 + (ulong)*(ushort *)(local_128 + (ulong)bVar6 * 2) * 8);
          auVar56._4_4_ = fVar40;
          auVar56._0_4_ = fVar32;
          auVar56._8_4_ = fVar42;
          uVar34 = (uint)uVar29 & 0x1fffff;
          uVar43 = (uint)(uVar29 >> 0x15) & 0x1fffff;
          uVar41 = (uint)(uVar29 >> 0x2a);
          auVar61 = auVar35;
        }
        auVar39._0_4_ = auVar36._0_4_ + auVar47._0_4_ * auVar37._0_4_;
        auVar39._4_4_ = auVar36._4_4_ + auVar47._4_4_ * auVar37._4_4_;
        auVar39._8_4_ = auVar36._8_4_ + auVar47._8_4_ * auVar37._8_4_;
        bVar6 = *(byte *)(lVar22 + 2);
        auVar50._4_4_ = uVar43;
        auVar50._0_4_ = uVar34;
        auVar50._8_4_ = uVar41;
        auVar50._12_4_ = 0;
        auVar37 = NEON_scvtf(auVar50,4);
        auVar51._0_4_ = auVar61._0_4_ + auVar56._0_4_ * auVar37._0_4_;
        auVar51._4_4_ = auVar61._4_4_ + auVar56._4_4_ * auVar37._4_4_;
        auVar51._8_4_ = auVar61._8_4_ + auVar56._8_4_ * auVar37._8_4_;
        if (bVar6 < uVar33) {
          uVar41 = *(uint *)(local_118 + (ulong)bVar6 * 4);
          auVar16._8_8_ = lStack_148;
          auVar16._0_8_ = local_150;
          auVar36._4_4_ = fStack_13c;
          auVar36._0_4_ = local_140;
          auVar36._8_4_ = fStack_138;
          uVar34 = uVar41 & 0x7ff;
          uVar43 = uVar41 >> 0xb & 0x7ff;
          uVar41 = uVar41 >> 0x16;
          auVar47 = auVar16._0_12_;
        }
        else {
          auVar36._4_4_ = fVar40;
          auVar36._0_4_ = fVar32;
          auVar36._8_4_ = fVar42;
          uVar29 = *(ulong *)(local_120 + (ulong)*(ushort *)(local_128 + (ulong)bVar6 * 2) * 8);
          uVar34 = (uint)uVar29 & 0x1fffff;
          uVar43 = (uint)(uVar29 >> 0x15) & 0x1fffff;
          uVar41 = (uint)(uVar29 >> 0x2a);
          auVar47 = auVar35;
        }
        auVar65._4_4_ = uVar43;
        auVar65._0_4_ = uVar34;
        bVar7 = *(byte *)(lVar22 + 3);
        auVar65._8_4_ = uVar41;
        auVar65._12_4_ = 0;
        auVar37 = NEON_scvtf(auVar65,4);
        auVar57._0_8_ =
             CONCAT44(auVar47._4_4_ + auVar36._4_4_ * auVar37._4_4_,
                      auVar47._0_4_ + auVar36._0_4_ * auVar37._0_4_);
        auVar57._8_4_ = auVar47._8_4_ + auVar36._8_4_ * auVar37._8_4_;
        if ((uint)bVar6 == (uint)bVar7) {
          iVar28 = 1;
          uVar60 = auVar57._0_8_;
          fVar46 = auVar57._8_4_;
        }
        else {
          if (uVar33 == bVar7 || uVar33 < bVar7) {
            uVar29 = *(ulong *)(local_120 + (ulong)*(ushort *)(local_128 + (ulong)bVar7 * 2) * 8);
            auVar63._0_8_ = CONCAT44((int)(uVar29 >> 0x15),(int)uVar29) & 0x1fffff001fffff;
            auVar63._8_4_ = (uint)(uVar29 >> 0x2a);
            auVar63._12_4_ = 0;
            auVar37 = NEON_scvtf(auVar63,4);
            auVar61._0_4_ = fVar32 * auVar37._0_4_;
            auVar61._4_4_ = fVar40 * auVar37._4_4_;
            auVar61._8_4_ = fVar42 * auVar37._8_4_;
          }
          else {
            uVar33 = *(uint *)(local_118 + (ulong)bVar7 * 4);
            auVar62._0_8_ = CONCAT44(uVar33 >> 0xb,uVar33) & 0x7ff000007ff;
            auVar62._8_4_ = uVar33 >> 0x16;
            auVar62._12_4_ = 0;
            auVar37 = NEON_scvtf(auVar62,4);
            auVar61._0_4_ = local_140 * auVar37._0_4_;
            auVar61._4_4_ = fStack_13c * auVar37._4_4_;
            auVar61._8_4_ = fStack_138 * auVar37._8_4_;
            auVar17._8_8_ = lStack_148;
            auVar17._0_8_ = local_150;
            auVar35 = auVar17._0_12_;
          }
          uVar60 = CONCAT44(auVar35._4_4_ + auVar61._4_4_,auVar35._0_4_ + auVar61._0_4_);
          fVar46 = auVar35._8_4_ + auVar61._8_4_;
          iVar28 = 2;
        }
        auVar39._12_4_ = auVar39._8_4_;
        auVar51._12_4_ = auVar51._8_4_;
        auVar57._12_4_ = auVar57._8_4_;
        auVar64._12_4_ = fVar46;
        auVar64._8_4_ = fVar46;
        auVar64._0_8_ = uVar60;
        auVar48 = NEON_fmin(auVar39,auVar51,4);
        auVar37 = NEON_fmax(auVar39,auVar51,4);
        auVar48 = NEON_fmin(auVar48,auVar57,4);
        auVar37 = NEON_fmax(auVar37,auVar57,4);
        auVar48 = NEON_fmin(auVar48,auVar64,4);
        auVar37 = NEON_fmax(auVar37,auVar64,4);
        fStack_f8 = auVar37._8_4_;
        fStack_f4 = auVar37._12_4_;
        local_100 = auVar37._0_4_;
        fStack_fc = auVar37._4_4_;
        fStack_e8 = auVar48._8_4_;
        fStack_e4 = auVar48._12_4_;
        local_f0 = auVar48._0_4_;
        fStack_ec = auVar48._4_4_;
        if ((int)local_c8 <= (int)uVar20) {
          do {
            iVar19 = (int)local_c8;
            iVar1 = (int)local_c8 + 1;
            if ((int)(local_c8._4_4_ & 0x7fffffff) <= (int)local_c8) {
              FUN_02ebb550(&local_d0,PTR_PTR_047d1a50 + 0x20,(long)iVar1);
            }
            local_c8._0_4_ = iVar1;
          } while (iVar19 < (int)uVar20);
        }
        pfVar4 = (float *)(local_d0 + (long)(int)uVar20 * 0x20);
        pfVar4[2] = fStack_e8;
        pfVar4[3] = fStack_e4;
        *pfVar4 = local_f0;
        pfVar4[1] = fStack_ec;
        pfVar4[6] = fStack_f8;
        pfVar4[7] = fStack_f4;
        pfVar4[4] = local_100;
        pfVar4[5] = fStack_fc;
        lVar22 = (long)(int)local_90;
        fVar46 = (local_f0 + local_100) * local_170;
        fVar53 = (fStack_ec + fStack_fc) * fStack_16c;
        fVar54 = (fStack_e8 + fStack_f8) * fStack_168;
        fVar45 = (fStack_e4 + fStack_f4) * fStack_164;
        if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
          FUN_02eaf0f8(&local_98,PTR_PTR_047d1a50,lVar22 + 1);
        }
        pbVar23 = (byte *)(local_98 + (long)(int)local_90 * 0x10);
        uVar33 = (uint)((int)fVar46 >> 0x1f) >> 1;
        uVar34 = (uint)((int)fVar53 >> 0x1f) >> 1;
        uVar41 = (uint)((int)fVar54 >> 0x1f) >> 1;
        uVar43 = (uint)((int)fVar45 >> 0x1f) >> 1;
        bVar14 = (byte)((uint)fVar46 >> 0x18);
        bVar13 = (byte)((uint)fVar53 >> 0x18);
        bVar7 = (byte)((uint)fVar54 >> 0x18);
        bVar6 = (byte)((uint)fVar45 >> 0x18);
        pbVar23[8] = (byte)uVar41 ^ SUB41(fVar54,0);
        pbVar23[9] = (byte)(uVar41 >> 8) ^ (byte)((uint)fVar54 >> 8);
        pbVar23[10] = (byte)(uVar41 >> 0x10) ^ (byte)((uint)fVar54 >> 0x10);
        pbVar23[0xb] = (byte)((char)bVar7 >> 7) >> 1 ^ bVar7;
        pbVar23[0xc] = (byte)uVar43 ^ SUB41(fVar45,0);
        pbVar23[0xd] = (byte)(uVar43 >> 8) ^ (byte)((uint)fVar45 >> 8);
        pbVar23[0xe] = (byte)((uint3)((uint3)((int)fVar45 >> 0x1f) >> 1) >> 8) ^
                       (byte)((uint)fVar45 >> 0x10);
        pbVar23[0xf] = (byte)((char)bVar6 >> 7) >> 1 ^ bVar6;
        *pbVar23 = (byte)uVar33 ^ SUB41(fVar46,0);
        pbVar23[1] = (byte)(uVar33 >> 8) ^ (byte)((uint)fVar46 >> 8);
        pbVar23[2] = (byte)(uVar33 >> 0x10) ^ (byte)((uint)fVar46 >> 0x10);
        pbVar23[3] = (byte)((char)bVar14 >> 7) >> 1 ^ bVar14;
        pbVar23[4] = (byte)uVar34 ^ SUB41(fVar53,0);
        pbVar23[5] = (byte)(uVar34 >> 8) ^ (byte)((uint)fVar53 >> 8);
        pbVar23[6] = (byte)(uVar34 >> 0x10) ^ (byte)((uint)fVar53 >> 0x10);
        pbVar23[7] = (byte)((char)bVar13 >> 7) >> 1 ^ bVar13;
        *(uint *)(pbVar23 + 0xc) = uVar20;
        if (iVar28 == 2) {
          uVar20 = uVar20 + 1;
        }
        local_90 = CONCAT44(local_90._4_4_,(int)(lVar22 + 1));
        uVar29 = (ulong)(uVar20 >> 8);
        uVar33 = uVar20 >> 1 & 0x7f;
      }
      iVar28 = *(int *)((long)plVar2 + uVar29 * 0x60 + *plVar2 + 0x50) + uVar33;
      lVar22 = (long)iVar28 * 4 + *plVar3;
      cVar8 = *(char *)((long)plVar3 + lVar22 + 3);
      if ((cVar8 == *(char *)((long)plVar3 + lVar22 + 1)) ||
         ((uint)(*(char *)((long)plVar3 + (long)iVar28 * 4 + *plVar3 + 2) != cVar8) <= (uVar20 & 1))
         ) {
        uVar33 = uVar33 + 1;
        if (uVar33 < *(byte *)((long)plVar2 + uVar29 * 0x60 + *plVar2 + 0x59)) {
          uVar20 = 0;
        }
        else {
          uVar20 = (int)uVar29 + 1;
          uVar29 = (ulong)uVar20;
          if (*(int *)(param_1 + 0x48) <= (int)uVar20) break;
          uVar20 = 0;
          uVar33 = 0;
        }
      }
      else {
        uVar20 = (uVar20 & 1) + 1;
      }
      uVar20 = uVar20 | uVar33 << 1 | (int)uVar29 << 8;
    } while (uVar20 != 0xffffffff);
  }
  puVar18 = PTR_DAT_047d1a40;
  FUN_03252f48(param_2,&local_c0,local_d0);
  uVar20 = local_c8._4_4_;
  uVar25 = (ulong)local_c8._4_4_;
  local_c8 = (ulong)local_c8._4_4_ << 0x20;
  if ((-1 < (int)uVar20) && (local_d0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_d0,uVar25 << 5);
  }
  lVar26 = local_80;
  local_c0 = puVar18 + 0x10;
  uVar25 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar26) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar25 << 5);
  }
  lVar26 = local_90;
  local_80 = CONCAT44(0x80000000,(undefined4)local_80);
  uVar25 = (ulong)local_90._4_4_;
  local_88 = 0;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar26) && (local_98 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar25 << 4);
  }
  return;
}


