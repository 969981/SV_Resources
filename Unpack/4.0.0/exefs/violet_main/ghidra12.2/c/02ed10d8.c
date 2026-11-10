/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed10d8; name: FUN_02ed10d8
 */


void FUN_02ed10d8(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  float *pfVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  undefined1 uVar30;
  char cVar31;
  undefined4 uVar32;
  float *pfVar33;
  float *pfVar34;
  ulong *puVar35;
  long *plVar36;
  ulong uVar37;
  float *pfVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [12];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  ulong uStack_188;
  undefined8 local_180;
  byte *local_178;
  float local_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  float fStack_15c;
  float local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  uint local_140;
  undefined1 local_13c;
  undefined2 local_138;
  undefined4 local_134;
  ulong uStack_130;
  undefined4 local_128;
  int local_124;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  uint local_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90 [8];
  
  fVar49 = (float)CONCAT22(local_160._2_2_,(undefined2)local_160);
  if ((int)param_1[1] != 0) {
    lVar17 = param_2[1];
    fVar40 = *(float *)(param_3 + 2);
    fVar46 = (float)param_1[3];
    fVar41 = (float)param_1[2];
    fVar43 = (float)((ulong)param_1[2] >> 0x20);
    uVar37 = param_1[5];
    lVar39 = param_1[4];
    auVar58._0_4_ = (fVar41 - fVar40) * *(float *)(param_3 + 6);
    auVar58._4_4_ = (fVar43 - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar58._8_4_ = (fVar46 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar58._12_4_ =
         ((float)((ulong)param_1[3] >> 0x20) - *(float *)((long)param_3 + 0x1c)) *
         *(float *)((long)param_3 + 0x3c);
    auVar50._0_4_ = *(float *)(param_3 + 6) * ((float)lVar39 - fVar40);
    auVar50._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         ((float)((ulong)lVar39 >> 0x20) - *(float *)((long)param_3 + 0x14));
    auVar50._8_4_ = *(float *)(param_3 + 7) * ((float)uVar37 - *(float *)(param_3 + 3));
    auVar50._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         ((float)(uVar37 >> 0x20) - *(float *)((long)param_3 + 0x1c));
    auVar57 = NEON_fmin(auVar58,auVar50,4);
    auVar50 = NEON_fmax(auVar58,auVar50,4);
    uVar53 = NEON_fmaxp(auVar57._0_8_,auVar57._0_8_,4);
    uVar54 = NEON_fmax(CONCAT44(auVar57._8_4_,auVar57._8_4_),uVar53,4);
    uVar53 = NEON_fminp(auVar50._0_8_,auVar50._0_8_,4);
    uVar53 = NEON_fmin(CONCAT44(auVar50._8_4_,auVar50._8_4_),uVar53,4);
    uVar54 = NEON_fmax(uVar54,0,4);
    uVar53 = NEON_fmin(uVar53,*(undefined8 *)(*(long *)(*param_3 + 0x28) + 0x10),4);
    if (!(bool)(~((float)uVar54 <= (float)uVar53) & 1)) {
      uVar53 = NEON_fmov(0x3f800000,4);
      puVar35 = (ulong *)((ulong)&local_d0 | 4);
      uVar23 = 0;
      pbVar29 = (byte *)(*param_1 + (long)param_1);
LAB_02ed1210:
      while ((char)pbVar29[3] < '\0') {
        uVar26 = (long)(int)uVar23 + 1;
        fVar49 = (float)lVar39;
        fStack_15c = (float)((ulong)lVar39 >> 0x20);
        local_158 = (float)uVar37;
        local_180 = CONCAT44(local_180._4_4_,(int)uVar26);
        uVar18 = ((uint)*(ushort *)(pbVar29 + 4) << 1 | (pbVar29[3] & 0x7f) << 0x11) + (int)uVar23;
        uVar23 = (ulong)uVar18;
        local_150 = CONCAT44(local_150._4_4_,uVar18);
        local_178 = (byte *)((long)param_1 + uVar26 * 6 + *param_1);
        local_148 = (byte *)((long)param_1 + (long)(int)uVar18 * 6 + *param_1);
        fVar40 = (fVar49 - fVar41) * 0.0044247787;
        fVar42 = (fStack_15c - fVar43) * 0.0044247787;
        fVar44 = (local_158 - fVar46) * 0.0044247787;
        bVar13 = *local_178 >> 4;
        bVar1 = *local_178 & 0xf;
        bVar14 = local_178[1] >> 4;
        fVar47 = fVar41 + (float)(byte)(bVar13 * bVar13) * fVar40;
        fVar59 = fVar43 + (float)(byte)(bVar14 * bVar14) * fVar42;
        bVar15 = local_178[2] >> 4;
        bVar13 = local_178[2] & 0xf;
        bVar14 = local_178[1] & 0xf;
        bVar16 = *local_148 >> 4;
        bVar2 = *local_148 & 0xf;
        local_1a0 = CONCAT44(fVar59,fVar47);
        fVar60 = fVar46 + (float)(byte)(bVar15 * bVar15) * fVar44;
        uStack_198 = (ulong)(uint)fVar60;
        bVar15 = local_148[1] >> 4;
        fVar61 = fVar49 - (float)(byte)(bVar1 * bVar1) * fVar40;
        fVar66 = fStack_15c - (float)(byte)(bVar14 * bVar14) * fVar42;
        local_190 = CONCAT44(fVar66,fVar61);
        fVar62 = local_158 - (float)(byte)(bVar13 * bVar13) * fVar44;
        uStack_188 = (ulong)(uint)fVar62;
        uStack_154 = 0;
        uStack_164 = 0;
        local_170 = fVar41 + (float)(byte)(bVar16 * bVar16) * fVar40;
        fStack_16c = fVar43 + (float)(byte)(bVar15 * bVar15) * fVar42;
        bVar14 = local_148[2] >> 4;
        bVar1 = local_148[1] & 0xf;
        bVar13 = local_148[2] & 0xf;
        fStack_168 = fVar46 + (float)(byte)(bVar14 * bVar14) * fVar44;
        fVar49 = fVar49 - (float)(byte)(bVar2 * bVar2) * fVar40;
        local_158 = local_158 - (float)(byte)(bVar13 * bVar13) * fVar44;
        fStack_15c = fStack_15c - (float)(byte)(bVar1 * bVar1) * fVar42;
        local_160._0_2_ = SUB42(fVar49,0);
        local_160._2_2_ = (undefined2)((uint)fVar49 >> 0x10);
        auVar50 = *(undefined1 (*) [16])(param_3 + 2);
        fVar42 = auVar50._0_4_;
        fVar44 = auVar50._4_4_;
        fVar48 = auVar50._8_4_;
        fVar45 = auVar50._12_4_;
        fVar40 = *(float *)(param_3 + 6);
        fVar41 = *(float *)((long)param_3 + 0x34);
        fVar43 = *(float *)(param_3 + 7);
        fVar46 = *(float *)((long)param_3 + 0x3c);
        auVar57._0_4_ = (fVar47 - fVar42) * fVar40;
        auVar57._4_4_ = (fVar59 - fVar44) * fVar41;
        auVar57._8_4_ = (fVar60 - fVar48) * fVar43;
        auVar57._12_4_ = (0.0 - fVar45) * fVar46;
        auVar55._0_4_ = fVar40 * (fVar61 - fVar42);
        auVar55._4_4_ = fVar41 * (fVar66 - fVar44);
        auVar55._8_4_ = fVar43 * (fVar62 - fVar48);
        auVar55._12_4_ = fVar46 * (0.0 - fVar45);
        uVar67 = *(undefined8 *)(*(long *)(*param_3 + 0x28) + 0x10);
        auVar58 = NEON_fmin(auVar57,auVar55,4);
        auVar50 = NEON_fmax(auVar57,auVar55,4);
        uVar54 = NEON_fmaxp(auVar58._0_8_,auVar58._0_8_,4);
        uVar64 = NEON_fmax(CONCAT44(auVar58._8_4_,auVar58._8_4_),uVar54,4);
        uVar54 = NEON_fminp(auVar50._0_8_,auVar50._0_8_,4);
        uVar54 = NEON_fmin(CONCAT44(auVar50._8_4_,auVar50._8_4_),uVar54,4);
        uVar68 = NEON_fmin(uVar54,uVar67,4);
        uVar54 = NEON_fmax(uVar64,0,4);
        auVar65._0_4_ = fVar40 * (local_170 - fVar42);
        auVar65._4_4_ = fVar41 * (fStack_16c - fVar44);
        auVar65._8_4_ = fVar43 * (fStack_168 - fVar48);
        auVar65._12_4_ = fVar46 * (0.0 - fVar45);
        auVar63._0_4_ = fVar40 * (fVar49 - fVar42);
        auVar63._4_4_ = fVar41 * (fStack_15c - fVar44);
        auVar63._8_4_ = fVar43 * (local_158 - fVar48);
        auVar63._12_4_ = fVar46 * (0.0 - fVar45);
        auVar58 = NEON_fmin(auVar65,auVar63,4);
        auVar50 = NEON_fmax(auVar65,auVar63,4);
        uVar64 = NEON_fmaxp(auVar58._0_8_,auVar58._0_8_,4);
        uVar64 = NEON_fmax(CONCAT44(auVar58._8_4_,auVar58._8_4_),uVar64,4);
        uVar69 = NEON_fminp(auVar50._0_8_,auVar50._0_8_,4);
        uVar69 = NEON_fmin(CONCAT44(auVar50._8_4_,auVar50._8_4_),uVar69,4);
        uVar64 = NEON_fmax(uVar64,0,4);
        uVar67 = NEON_fmin(uVar69,uVar67,4);
        cVar31 = '\0';
        if (!(bool)(~((float)uVar64 <= (float)uVar67) & 1)) {
          cVar31 = '\x02';
        }
        cVar31 = cVar31 + ((float)uVar54 <= (float)uVar68);
        if (cVar31 == '\x01') {
          uVar23 = uVar26 & 0xffffffff;
          pbVar29 = local_178;
          lVar39 = local_190;
          uVar37 = uStack_188;
          fVar41 = fVar47;
          fVar43 = fVar59;
          fVar46 = fVar60;
        }
        else if (cVar31 == '\x02') {
          pbVar29 = local_148;
          lVar39 = CONCAT44(fStack_15c,fVar49);
          uVar37 = (ulong)(uint)local_158;
          fVar41 = local_170;
          fVar43 = fStack_16c;
          fVar46 = fStack_168;
        }
        else {
          if (cVar31 != '\x03') goto LAB_02ed17c8;
          uVar18 = -(uint)((float)uVar64 < (float)uVar54);
          *(uint *)(param_3 + 8) = uVar18 & 1;
          uVar37 = (ulong)~uVar18 & 1;
          iVar19 = (int)param_2[1];
          lVar39 = (long)iVar19;
          if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar19) {
            local_160 = fVar49;
            FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar39 + 1);
            iVar19 = (int)param_2[1];
            fVar49 = local_160;
          }
          *(int *)(param_2 + 1) = (int)(lVar39 + 1);
          puVar28 = (undefined8 *)(*param_2 + (long)iVar19 * 0x30);
          uVar54 = (&local_1a0)[uVar37 * 6];
          puVar28[1] = (&uStack_198)[uVar37 * 6];
          *puVar28 = uVar54;
          uVar54 = (&local_190)[uVar37 * 6];
          puVar28[3] = (&uStack_188)[uVar37 * 6];
          puVar28[2] = uVar54;
          *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(&local_180 + uVar37 * 6);
          uVar26 = (ulong)uVar18 & 1;
          uVar23 = (ulong)*(uint *)(&local_180 + uVar26 * 6);
          pbVar29 = (&local_178)[uVar26 * 6];
          lVar39 = (&local_190)[uVar26 * 6];
          uVar37 = (&uStack_188)[uVar26 * 6];
          fVar41 = (float)(&local_1a0)[uVar26 * 6];
          fVar43 = (float)((ulong)(&local_1a0)[uVar26 * 6] >> 0x20);
          fVar46 = (float)(&uStack_198)[uVar26 * 6];
        }
      }
      uVar3 = (uint)CONCAT12(pbVar29[3],*(undefined2 *)(pbVar29 + 4));
      plVar36 = (long *)*param_3;
      local_160 = fVar49;
      (**(code **)(**(long **)(*plVar36 + 0x50) + 0x68))
                (*(long **)(*plVar36 + 0x50),uVar3,&local_c0);
      uVar18 = (**(code **)(**(long **)(*plVar36 + 0x50) + 0x78))(*(long **)(*plVar36 + 0x50),uVar3)
      ;
      uVar18 = uVar18 & 7;
      iVar19 = (**(code **)(**(long **)(*plVar36 + 0x50) + 0x20))();
      uVar22 = 1;
      if (iVar19 <= (int)uVar3 && uVar18 != 7) {
        uVar22 = 2;
      }
      uVar20 = (**(code **)(**(long **)(*plVar36 + 0x50) + 0x70))(*(long **)(*plVar36 + 0x50),uVar3)
      ;
      uVar37 = 0;
      if (uVar22 < 2) {
        uVar22 = 1;
      }
      pfVar38 = &local_a0;
      do {
        iVar19 = *(int *)(plVar36[3] + 0x1c);
        uVar12 = ((uVar3 << 1 | (uint)uVar37) + 1 <<
                 (ulong)(-((uint)*(byte *)(*plVar36 + 0x1c) + iVar19) & 0x1f)) - 1 |
                 *(uint *)(PTR_DAT_047d1a60 + (long)iVar19 * 4) & *(uint *)(plVar36[3] + 0x18);
        local_d0 = *(undefined8 *)plVar36[4];
        uStack_c8 = ((undefined8 *)plVar36[4])[1];
        if (*(long *)plVar36[2] == 0) {
LAB_02ed15d0:
          local_118 = *(undefined8 *)(plVar36[5] + 0x10);
          if (uVar18 == 7) {
            iVar21 = FUN_0086ef00(plVar36[2] + 0x40,&local_c0,*(undefined4 *)(plVar36[2] + 0x70),
                                  &local_118,&local_110);
            iVar19 = local_124;
          }
          else {
            iVar21 = FUN_0086eb50(param_3 + 2,&local_c0,pfVar38 + -4,pfVar38,
                                  *(undefined4 *)(plVar36[2] + 0x70),&local_118,&local_110);
            iVar19 = local_124;
          }
          local_124 = iVar21;
          if (local_124 != 0) {
            fVar49 = (float)local_110;
            fVar40 = (float)((ulong)local_110 >> 0x20);
            fVar41 = (float)uStack_108;
            uVar32 = 0xffffff;
            fStack_168 = -NAN;
            local_178 = (byte *)0xffffffffffffffff;
            local_170 = 2.3509886e-38;
            fVar43 = SQRT(fVar49 * fVar49 + fVar40 * fVar40 + fVar41 * fVar41);
            fVar46 = SQRT(fVar49 * fVar49 + fVar40 * fVar40 + fVar41 * fVar41);
            fVar49 = fVar49 / fVar43;
            fVar40 = fVar40 / fVar46;
            local_110 = CONCAT44(fVar40,fVar49);
            fVar41 = fVar41 / fVar43;
            uStack_108 = CONCAT44((float)((ulong)uStack_108 >> 0x20) / fVar46,fVar41);
            local_128 = 1;
            lVar39 = plVar36[2];
            local_160._0_2_ = *(undefined2 *)(lVar39 + 0x10);
            uStack_154 = *(undefined4 *)(lVar39 + 0x1c);
            fStack_15c = (float)*(undefined8 *)(lVar39 + 0x14);
            local_158 = (float)((ulong)*(undefined8 *)(lVar39 + 0x14) >> 0x20);
            uStack_164 = CONCAT31((int3)((uint)uStack_164 >> 8),0xf);
            lVar24 = *(long *)plVar36[3];
            if (lVar24 == 0) {
              local_150 = 0xffffffffffffffff;
            }
            else {
              local_150 = *(undefined8 *)(lVar24 + 0xb0);
              uVar32 = *(undefined4 *)(lVar24 + 0x50);
            }
            fVar43 = (float)local_118;
            local_148 = (byte *)CONCAT44((int)((ulong)local_148 >> 0x20),uVar32);
            local_138 = (undefined2)local_d0;
            local_134 = (undefined4)*puVar35;
            uStack_130 = *puVar35 >> 0x20;
            local_13c = *(undefined1 *)(lVar39 + 0x20);
            pfVar25 = (float *)((long *)plVar36[3])[4];
            fVar46 = *(float *)(lVar39 + 0x40) + fVar43 * *(float *)(lVar39 + 0x50);
            fVar42 = *(float *)(lVar39 + 0x44) +
                     (float)((ulong)local_118 >> 0x20) * *(float *)(lVar39 + 0x54);
            fVar44 = *(float *)(lVar39 + 0x48) + fVar43 * *(float *)(lVar39 + 0x58);
            local_190 = CONCAT44(pfVar25[9] * fVar41 + pfVar25[1] * fVar49 + pfVar25[5] * fVar40,
                                 pfVar25[8] * fVar41 + *pfVar25 * fVar49 + pfVar25[4] * fVar40);
            uStack_188 = CONCAT44(pfVar25[0xb] * fVar41 + pfVar25[3] * fVar49 + pfVar25[7] * fVar40,
                                  pfVar25[10] * fVar41 + pfVar25[2] * fVar49 + pfVar25[6] * fVar40);
            puVar28 = *(undefined8 **)(plVar36[3] + 0x20);
            auVar50 = *(undefined1 (*) [16])(puVar28 + 4);
            auVar58 = *(undefined1 (*) [16])(puVar28 + 6);
            local_180 = CONCAT44((int)((ulong)local_180 >> 0x20),fVar43);
            local_1a0 = CONCAT44(auVar58._4_4_ +
                                 auVar50._4_4_ * fVar44 +
                                 (float)((ulong)*puVar28 >> 0x20) * fVar46 +
                                 *(float *)((long)puVar28 + 0x14) * fVar42,
                                 auVar58._0_4_ +
                                 auVar50._0_4_ * fVar44 +
                                 (float)*puVar28 * fVar46 + *(float *)(puVar28 + 2) * fVar42);
            uStack_198 = CONCAT44(auVar58._12_4_ +
                                  auVar50._12_4_ * fVar44 +
                                  (float)((ulong)puVar28[1] >> 0x20) * fVar46 +
                                  *(float *)((long)puVar28 + 0x1c) * fVar42,
                                  auVar58._8_4_ +
                                  auVar50._8_4_ * fVar44 +
                                  (float)puVar28[1] * fVar46 + *(float *)(puVar28 + 3) * fVar42);
            local_140 = uVar12;
            (**(code **)(*(long *)plVar36[5] + 0x28))((long *)plVar36[5],&local_1a0);
            iVar19 = local_124;
          }
        }
        else {
          lVar39 = *(long *)(plVar36[1] + 0x10);
          fVar46 = (float)((ulong)uVar53 >> 0x20);
          fVar49 = (float)local_c0;
          fVar40 = (float)((ulong)local_c0 >> 0x20);
          fVar41 = (float)uStack_b8;
          fVar43 = (float)((ulong)uStack_b8 >> 0x20);
          if (uVar18 == 7) {
            iVar19 = *(int *)(lVar39 + 0x40);
            iVar21 = *(int *)(lVar39 + 0x48);
            puVar28 = (undefined8 *)0x0;
            if (iVar19 != 0) {
              puVar28 = (undefined8 *)((long)iVar19 + lVar39 + 0x40);
            }
            fVar42 = (float)local_b0 - fVar49;
            fVar44 = (float)((ulong)local_b0 >> 0x20) - fVar40;
            fVar47 = (float)uStack_a8 - fVar41;
            fVar48 = (float)((ulong)uStack_a8 >> 0x20) - fVar43;
            auVar4._4_4_ = fVar44;
            auVar4._0_4_ = fVar42;
            auVar4._8_4_ = fVar47;
            auVar4._12_4_ = fVar48;
            auVar5._4_4_ = fVar44;
            auVar5._0_4_ = fVar42;
            auVar5._8_4_ = fVar47;
            auVar5._12_4_ = fVar48;
            auVar50 = NEON_ext(auVar4,auVar5,4,1);
            auVar51._0_4_ = local_a0 - fVar49;
            auVar51._4_4_ = fStack_9c - fVar40;
            auVar51._8_4_ = fStack_98 - fVar41;
            auVar51._12_4_ = fStack_94 - fVar43;
            auVar58 = NEON_ext(auVar51,auVar51,4,1);
            puVar27 = (undefined8 *)0x0;
            if (iVar21 != 0) {
              puVar27 = (undefined8 *)((long)iVar21 + lVar39 + 0x48);
            }
            fVar43 = fVar42 * auVar58._0_4_ - auVar51._0_4_ * auVar50._0_4_;
            fVar45 = fVar44 * auVar58._4_4_ - auVar51._4_4_ * auVar50._4_4_;
            fVar42 = fVar47 * auVar51._0_4_ - auVar51._8_4_ * fVar42;
            fVar44 = fVar48 * auVar51._4_4_ - auVar51._12_4_ * fVar44;
            auVar6._4_4_ = fVar45;
            auVar6._0_4_ = fVar43;
            auVar6._8_4_ = fVar42;
            auVar6._12_4_ = fVar44;
            auVar7._4_4_ = fVar45;
            auVar7._0_4_ = fVar43;
            auVar7._8_4_ = fVar42;
            auVar7._12_4_ = fVar44;
            auVar50 = NEON_ext(auVar6,auVar7,4,1);
            fVar42 = auVar50._0_4_;
            fVar44 = auVar50._4_4_;
            fVar47 = fVar42 * fVar42 + fVar44 * fVar44 + fVar43 * fVar43;
            uVar54 = 0;
            if (fVar47 != 0.0) {
              uVar54 = CONCAT44(fVar46 / SQRT(fVar42 * fVar42 + fVar44 * fVar44 + fVar43 * fVar43),
                                (float)uVar53 / SQRT(fVar47));
            }
            auVar56._0_4_ = fVar49 * fVar42;
            auVar56._4_4_ = fVar40 * fVar44;
            auVar56._8_4_ = fVar41 * fVar43;
            uVar30 = 3;
            uVar32 = 4;
            pfVar25 = (float *)&local_b0;
            pfVar33 = local_90;
            pfVar34 = &local_a0;
          }
          else {
            iVar19 = *(int *)(lVar39 + 0x40);
            puVar28 = (undefined8 *)0x0;
            if (iVar19 != 0) {
              puVar28 = (undefined8 *)((long)iVar19 + lVar39 + 0x40);
            }
            iVar19 = *(int *)(lVar39 + 0x48);
            pfVar25 = pfVar38 + -4;
            fVar42 = (float)*(undefined8 *)pfVar25 - fVar49;
            fVar44 = (float)((ulong)*(undefined8 *)pfVar25 >> 0x20) - fVar40;
            fVar47 = (float)*(undefined8 *)(pfVar38 + -2) - fVar41;
            fVar48 = (float)((ulong)*(undefined8 *)(pfVar38 + -2) >> 0x20) - fVar43;
            auVar52._0_4_ = *pfVar38 - fVar49;
            auVar52._4_4_ = pfVar38[1] - fVar40;
            auVar52._8_4_ = pfVar38[2] - fVar41;
            auVar52._12_4_ = pfVar38[3] - fVar43;
            auVar8._4_4_ = fVar44;
            auVar8._0_4_ = fVar42;
            auVar8._8_4_ = fVar47;
            auVar8._12_4_ = fVar48;
            auVar9._4_4_ = fVar44;
            auVar9._0_4_ = fVar42;
            auVar9._8_4_ = fVar47;
            auVar9._12_4_ = fVar48;
            auVar50 = NEON_ext(auVar8,auVar9,4,1);
            auVar58 = NEON_ext(auVar52,auVar52,4,1);
            puVar27 = (undefined8 *)0x0;
            if (iVar19 != 0) {
              puVar27 = (undefined8 *)((long)iVar19 + lVar39 + 0x48);
            }
            fVar43 = fVar42 * auVar58._0_4_ - auVar52._0_4_ * auVar50._0_4_;
            fVar45 = fVar44 * auVar58._4_4_ - auVar52._4_4_ * auVar50._4_4_;
            fVar42 = fVar47 * auVar52._0_4_ - auVar52._8_4_ * fVar42;
            fVar44 = fVar48 * auVar52._4_4_ - auVar52._12_4_ * fVar44;
            auVar10._4_4_ = fVar45;
            auVar10._0_4_ = fVar43;
            auVar10._8_4_ = fVar42;
            auVar10._12_4_ = fVar44;
            auVar11._4_4_ = fVar45;
            auVar11._0_4_ = fVar43;
            auVar11._8_4_ = fVar42;
            auVar11._12_4_ = fVar44;
            auVar50 = NEON_ext(auVar10,auVar11,4,1);
            fVar42 = auVar50._0_4_;
            fVar44 = auVar50._4_4_;
            fVar47 = fVar42 * fVar42 + fVar44 * fVar44 + fVar43 * fVar43;
            uVar54 = 0;
            if (fVar47 != 0.0) {
              uVar54 = CONCAT44(fVar46 / SQRT(fVar42 * fVar42 + fVar44 * fVar44 + fVar43 * fVar43),
                                (float)uVar53 / SQRT(fVar47));
            }
            auVar56._0_4_ = fVar49 * fVar42;
            auVar56._4_4_ = fVar40 * fVar44;
            auVar56._8_4_ = fVar41 * fVar43;
            uVar30 = 0;
            uVar32 = 3;
            pfVar33 = pfVar38;
            pfVar34 = pfVar38;
          }
          *puVar28 = local_c0;
          *(float *)(puVar28 + 1) = fVar41;
          uVar64 = *(undefined8 *)(pfVar25 + 2);
          *(undefined8 *)((long)puVar28 + 0xc) = *(undefined8 *)pfVar25;
          *(int *)((long)puVar28 + 0x14) = (int)uVar64;
          uVar64 = *(undefined8 *)(pfVar34 + 2);
          puVar28[3] = *(undefined8 *)pfVar34;
          *(int *)(puVar28 + 4) = (int)uVar64;
          uVar64 = *(undefined8 *)(pfVar33 + 2);
          fVar42 = (float)uVar54 * fVar42;
          fVar49 = (float)((ulong)uVar54 >> 0x20);
          fVar44 = fVar49 * fVar44;
          fVar43 = (float)uVar54 * fVar43;
          fVar49 = fVar49 * -(auVar56._8_4_ + auVar56._0_4_ + auVar56._4_4_);
          *(undefined8 *)((long)puVar28 + 0x24) = *(undefined8 *)pfVar33;
          *(int *)((long)puVar28 + 0x2c) = (int)uVar64;
          *(undefined4 *)(lVar39 + 0x44) = uVar32;
          iVar19 = *(int *)(lVar39 + 0x58);
          lVar24 = 0;
          if (iVar19 != 0) {
            lVar24 = (long)iVar19 + lVar39 + 0x58;
          }
          *(undefined1 *)(lVar24 + 3) = uVar30;
          *(undefined1 *)(lVar24 + 7) = uVar30;
          puVar27[1] = CONCAT44(fVar49,fVar43);
          *puVar27 = CONCAT44(fVar44,fVar42);
          puVar27[3] = CONCAT44(-fVar49,-fVar43);
          puVar27[2] = CONCAT44(-fVar44,-fVar42);
          puVar27[5] = CONCAT44(fVar49,fVar43);
          puVar27[4] = CONCAT44(fVar44,fVar42);
          puVar27[7] = CONCAT44(fVar49,fVar43);
          puVar27[6] = CONCAT44(fVar44,fVar42);
          *(undefined4 *)(lVar39 + 0x20) = *(undefined4 *)(*plVar36 + 0x20);
          (**(code **)(**(long **)plVar36[2] + 0x40))
                    (*(long **)plVar36[2],uVar20,1,*(undefined8 *)plVar36[3],
                     ((undefined8 *)plVar36[3])[1],*plVar36,uVar12,lVar39,&local_d0);
          lVar24 = plVar36[2];
          if (*(long *)(lVar24 + 8) == 0) goto LAB_02ed15d0;
          local_1a0 = CONCAT62(local_1a0._2_6_,*(undefined2 *)(lVar24 + 0x10));
          uVar32 = *(undefined4 *)(lVar24 + 0x1c);
          *(undefined8 *)((ulong)&local_1a0 | 4) = *(undefined8 *)(lVar24 + 0x14);
          *(undefined4 *)((undefined8 *)((ulong)&local_1a0 | 4) + 1) = uVar32;
          local_190 = 0;
          uStack_188 = 0;
          local_180 = 0;
          local_178 = (byte *)CONCAT44(local_178._4_4_,0xffffffff);
          local_110 = CONCAT62(local_110._2_6_,(undefined2)local_d0);
          uVar23 = *puVar35;
          local_170 = 0.0;
          fStack_16c = 0.0;
          *(int *)((ulong *)((ulong)&local_110 | 4) + 1) = (int)puVar35[1];
          *(ulong *)((ulong)&local_110 | 4) = uVar23;
          local_100 = *(undefined8 *)plVar36[3];
          local_f8 = ((undefined8 *)plVar36[3])[1];
          local_f0 = *plVar36;
          local_e8 = uVar12;
          local_e0 = lVar39;
          uVar23 = (**(code **)(**(long **)(lVar24 + 8) + 0x40))
                             (*(long **)(lVar24 + 8),1,1,&local_1a0,&local_110);
          iVar19 = local_124;
          if ((uVar23 & 1) != 0) goto LAB_02ed15d0;
        }
        local_124 = iVar19;
        uVar37 = uVar37 + 1;
        pfVar38 = pfVar38 + 4;
        fVar49 = local_160;
      } while (uVar22 != uVar37);
LAB_02ed17c8:
      if ((int)lVar17 < (int)param_2[1]) {
        iVar19 = (int)param_2[1] + -1;
        puVar28 = (undefined8 *)(*param_2 + (long)iVar19 * 0x30);
        *(int *)(param_2 + 1) = iVar19;
        uVar23 = (ulong)*(int *)(puVar28 + 4);
        pbVar29 = (byte *)((long)param_1 + uVar23 * 6 + *param_1);
        lVar39 = puVar28[2];
        uVar37 = puVar28[3];
        fVar41 = (float)*puVar28;
        fVar43 = (float)((ulong)*puVar28 >> 0x20);
        fVar46 = (float)puVar28[1];
        goto LAB_02ed1210;
      }
    }
  }
  return;
}


