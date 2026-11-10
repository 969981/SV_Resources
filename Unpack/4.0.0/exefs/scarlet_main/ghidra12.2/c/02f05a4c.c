/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f05a4c; name: FUN_02f05a4c
 */


/* WARNING: Removing unreachable block (ram,0x02f05abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02f05a4c(float param_1,long param_2,undefined8 *param_3,uint param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  float *pfVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  float *pfVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  uint uVar34;
  uint uVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
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
  float fVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float fStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  
  fVar38 = (float)*param_3;
  fVar54 = (float)((ulong)*param_3 >> 0x20);
  fVar36 = *(float *)(param_3 + 1);
  uVar26 = (ulong)param_4;
  fVar53 = fVar36;
  if (1 < (int)param_4) {
    if (param_4 == 2) {
      lVar23 = 1;
    }
    else {
      pfVar25 = (float *)((long)param_3 + 0x14);
      uVar22 = 0;
      do {
        uVar24 = uVar22;
        pfVar1 = pfVar25 + -2;
        pfVar2 = pfVar25 + 3;
        fVar43 = *pfVar25;
        pfVar17 = pfVar25 + 1;
        uVar22 = uVar24 + 2;
        pfVar25 = pfVar25 + 6;
        fVar38 = fVar38 + (float)*(undefined8 *)pfVar1 + (float)*(undefined8 *)pfVar17;
        fVar54 = fVar54 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                 (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
        fVar36 = fVar36 + fVar43 + *pfVar2;
        fVar53 = fVar53 + fVar43 + *pfVar2;
      } while ((uVar26 - 1 & 0xfffffffffffffffe) != uVar22);
      lVar23 = uVar24 + 3;
      if ((uVar26 - 1 & 1) == 0) goto LAB_02f05b28;
    }
    puVar20 = (undefined8 *)((long)param_3 + lVar23 * 0xc);
    fVar43 = *(float *)(puVar20 + 1);
    uVar51 = *puVar20;
    fVar38 = fVar38 + (float)uVar51;
    fVar54 = fVar54 + (float)((ulong)uVar51 >> 0x20);
    fVar36 = fVar36 + fVar43;
    fVar53 = fVar53 + fVar43;
  }
LAB_02f05b28:
  uVar51 = 0;
  local_128 = 0;
  local_120 = 0x8000000000000000;
  lVar23 = tpidr_el0;
  lVar19 = *(long *)(lVar23 + 0x1000b8);
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar23 + 0x1000b8) = lVar19;
  }
  fVar43 = 1.0 / (float)(int)param_4;
  local_118 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
  if (*(long *)(local_118 + 8) != 0) {
    local_118 = 0;
  }
  local_108 = ((-(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | uVar26 << 3) + (long)(int)param_4)
              * 0x10;
  local_d0 = local_108;
  if (local_118 == 0) {
    local_110 = (**(code **)PTR_DAT_047d1a08)(1,&local_d0,0x40);
  }
  else {
    local_180 = local_108 + 0x3fU & 0xffffffffffffffc0;
    if (local_180 <= *(ulong *)(local_118 + 0x28)) {
      local_110 = *(long *)(local_118 + 0x38);
      if (local_180 + local_110 <= *(ulong *)(local_118 + 0x40)) {
        *(ulong *)(local_118 + 0x38) = local_180 + local_110;
        goto LAB_02f05be4;
      }
    }
    local_110 = FUN_031cf3b4(local_118,&local_180);
  }
LAB_02f05be4:
  uVar14 = _UNK_03cabe68;
  uVar13 = _DAT_03cabe60;
  uVar12 = _UNK_03cabe58;
  uVar11 = _DAT_03cabe50;
  uVar10 = DAT_03cab628;
  uVar9 = DAT_03cab620;
  uVar8 = _UNK_03caa5b8;
  uVar52 = _DAT_03caa5b0;
  auVar30._0_8_ = CONCAT44(fVar54 * fVar43,fVar38 * fVar43);
  auVar30._8_4_ = fVar36 * fVar43;
  auVar30._12_4_ = fVar53 * fVar43;
  iVar18 = (int)local_120;
  lVar23 = (long)(int)local_120;
  local_120 = CONCAT44(param_4,(int)local_120) | 0x8000000000000000;
  if (iVar18 < (int)param_4) {
    puVar20 = (undefined8 *)(local_110 + lVar23 * 0x90);
    local_120 = CONCAT44(local_120._4_4_,param_4);
    do {
      *puVar20 = 0;
      puVar20[2] = 0;
      puVar20[3] = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
      puVar20[6] = 0;
      puVar20[7] = 0;
      puVar20[8] = 0;
      puVar20[9] = 0;
      puVar20[0xb] = uVar10;
      puVar20[10] = uVar9;
      puVar20[0xd] = uVar14;
      puVar20[0xc] = uVar13;
      puVar20[0xf] = uVar8;
      puVar20[0xe] = uVar52;
      puVar20[0x11] = uVar12;
      puVar20[0x10] = uVar11;
      puVar20 = puVar20 + 0x12;
    } while (puVar20 != (undefined8 *)(local_110 + (long)(int)param_4 * 0x90));
  }
  else if ((int)param_4 < iVar18) {
    local_120 = CONCAT44(local_120._4_4_,param_4);
  }
  fVar53 = *(float *)(param_2 + 0x1c);
  fVar36 = *(float *)(param_2 + 0x20);
  if (0.0 <= fVar36) {
    fVar36 = fVar43 * fVar36;
  }
  uVar52 = NEON_fmov(0x3f800000,4);
  uStack_f8 = auVar30._8_8_;
  fVar38 = (float)uVar52;
  local_128 = local_110;
  local_100 = auVar30._0_8_;
  if (0 < (int)param_4) {
    if (param_1 <= 0.0001) {
      param_1 = 0.0001;
    }
    lVar23 = 0;
    if (0.0 <= fVar36) {
      fVar53 = fVar53 * fVar36;
      puVar20 = param_3 + 1;
      lVar19 = 1;
      do {
        lVar16 = local_128;
        local_f0 = puVar20[-1];
        lVar3 = 0;
        if (uVar26 * 0x90 + -0x90 != lVar23) {
          lVar3 = lVar19;
        }
        puVar21 = (undefined8 *)((long)param_3 + lVar3 * 0xc);
        uStack_e8 = CONCAT44(*(undefined4 *)puVar20,*(undefined4 *)puVar20);
        uVar4 = *(undefined4 *)(puVar21 + 1);
        local_e0 = *puVar21;
        uStack_d8 = CONCAT44(uVar4,uVar4);
        auVar32._8_8_ = uVar51;
        auVar32._0_8_ = 0x3f800000;
        pfVar25 = (float *)(local_128 + lVar23);
        iVar18 = FUN_03190574(auVar32,param_1,&local_100,&local_f0,&local_e0,pfVar25);
        if ((iVar18 < 0) || (fVar54 = *(float *)(lVar16 + lVar23), fVar54 == 0.0))
        goto LAB_02f0636c;
        auVar30 = *(undefined1 (*) [16])(pfVar25 + 4);
        memcpy(&local_d0,pfVar25 + 8,0x30);
        FUN_031921bc(&local_d0,&local_180);
        uVar29 = (uint)local_d0 ^
                 ((uint)local_d0 ^ (uint)local_c0) & *(uint *)(PTR_DAT_047d19e0 + 0x20);
        uVar34 = local_d0._4_4_ ^
                 (local_d0._4_4_ ^ (uint)fStack_bc) & *(uint *)(PTR_DAT_047d19e0 + 0x24);
        uVar35 = (uint)fStack_c8 ^
                 ((uint)fStack_c8 ^ (uint)fStack_b8) & *(uint *)(PTR_DAT_047d19e0 + 0x28);
        uVar5 = *(uint *)(PTR_DAT_047d19e0 + 0x40);
        uVar6 = *(uint *)(PTR_DAT_047d19e0 + 0x44);
        uVar7 = *(uint *)(PTR_DAT_047d19e0 + 0x48);
        fVar43 = (float)uStack_158;
        fVar42 = (float)local_160;
        fVar37 = (float)((ulong)local_160 >> 0x20);
        fVar28 = (float)local_180;
        fVar41 = (float)((ulong)local_170 >> 0x20);
        fVar44 = (float)(local_180 >> 0x20);
        fVar39 = (float)uStack_178;
        fVar27 = (float)uStack_168;
        if (fVar43 < 0.0) {
          fVar44 = fVar44 + (float)local_170;
          if (fVar28 <= fVar41) {
            fVar45 = (fVar38 - fVar43) - (fVar28 - fVar41);
            fVar46 = fVar27 + fVar37;
            fVar47 = fVar42 - fVar39;
            fVar40 = fVar44;
          }
          else {
            fVar46 = fVar39 + fVar42;
            fVar47 = fVar27 - fVar37;
            fVar40 = (fVar28 - fVar41) + (fVar38 - fVar43);
            fVar45 = fVar44;
          }
        }
        else {
          fVar44 = fVar44 - (float)local_170;
          if (-fVar41 <= fVar28) {
            fVar47 = fVar28 + fVar41 + fVar43 + fVar38;
            fVar40 = fVar27 - fVar37;
            fVar45 = fVar42 - fVar39;
            fVar46 = fVar44;
          }
          else {
            fVar40 = fVar39 + fVar42;
            fVar45 = fVar27 + fVar37;
            fVar46 = (fVar43 + fVar38) - (fVar28 + fVar41);
            fVar47 = fVar44;
          }
        }
        fVar43 = fVar40 * fVar40 + fVar45 * fVar45;
        fVar28 = fVar46 * fVar46 + fVar47 * fVar47;
        fVar42 = 0.0;
        fVar44 = 0.0;
        fVar39 = 0.0;
        fVar41 = 0.0;
        fVar27 = fVar43 + fVar28;
        if (fVar27 != 0.0) {
          fVar27 = SQRT(fVar27);
          fVar44 = SQRT(fVar43 + fVar28);
          fVar39 = fVar40 / fVar27;
          fVar41 = fVar45 / fVar44;
          fVar42 = fVar46 / fVar27;
          fVar44 = fVar47 / fVar44;
        }
        fVar43 = fVar41 + fVar41;
        fVar27 = fVar42 + fVar42;
        lVar23 = lVar23 + 0x90;
        fVar28 = (fVar39 + fVar39) * fVar39;
        lVar19 = lVar19 + 1;
        puVar20 = (undefined8 *)((long)puVar20 + 0xc);
        fVar37 = (fVar39 + fVar39) * fVar44;
        fVar42 = 1.0 - fVar42 * fVar27;
        fVar57 = fVar27 * fVar41 - fVar37;
        fVar58 = fVar43 * fVar39 + fVar27 * fVar44;
        fVar55 = fVar43 * fVar39 - fVar27 * fVar44;
        fVar56 = fVar42 - fVar43 * fVar41;
        fVar42 = fVar42 - fVar28;
        fVar59 = fVar27 * fVar39 + fVar43 * fVar44;
        fVar37 = fVar27 * fVar41 + fVar37;
        fVar40 = fVar27 * fVar39 - fVar43 * fVar44;
        fVar41 = (1.0 - fVar28) - fVar43 * fVar41;
        *pfVar25 = fVar54;
        pfVar25[1] = fVar36;
        fVar54 = fVar53 * (float)(uVar29 ^ (uVar29 ^ (uint)local_b0) & uVar5);
        fVar27 = fVar53 * (float)(uVar34 ^ (uVar34 ^ (uint)fStack_ac) & uVar6);
        fVar44 = fVar53 * (float)(uVar35 ^ (uVar35 ^ (uint)fStack_a8) & uVar7);
        fVar45 = fVar59 * fVar44;
        fVar46 = fVar57 * fVar44;
        fVar47 = fVar41 * fVar44;
        fVar44 = fVar44 * 0.0;
        fVar48 = fVar55 * fVar27;
        fVar49 = fVar42 * fVar27;
        fVar50 = fVar37 * fVar27;
        fVar27 = fVar59 * fVar27;
        fVar43 = fVar56 * fVar54;
        fVar28 = fVar58 * fVar54;
        fVar39 = fVar40 * fVar54;
        fVar54 = fVar57 * fVar54;
        *(ulong *)(pfVar25 + 0xe) =
             CONCAT44(fVar44 * fVar57 + fVar27 * fVar42 + fVar54 * fVar58,
                      fVar47 * fVar57 + fVar50 * fVar42 + fVar39 * fVar58);
        *(ulong *)(pfVar25 + 0xc) =
             CONCAT44(fVar46 * fVar57 + fVar49 * fVar42 + fVar28 * fVar58,
                      fVar45 * fVar57 + fVar48 * fVar42 + fVar43 * fVar58);
        *(ulong *)(pfVar25 + 0x12) =
             CONCAT44(fVar44 * fVar41 + fVar27 * fVar37 + fVar54 * fVar40,
                      fVar47 * fVar41 + fVar50 * fVar37 + fVar39 * fVar40);
        *(ulong *)(pfVar25 + 0x10) =
             CONCAT44(fVar46 * fVar41 + fVar49 * fVar37 + fVar28 * fVar40,
                      fVar45 * fVar41 + fVar48 * fVar37 + fVar43 * fVar40);
        *(long *)(pfVar25 + 6) = auVar30._8_8_;
        *(long *)(pfVar25 + 4) = auVar30._0_8_;
        *(ulong *)(pfVar25 + 10) =
             CONCAT44(fVar44 * fVar59 + fVar27 * fVar55 + fVar54 * fVar56,
                      fVar47 * fVar59 + fVar50 * fVar55 + fVar39 * fVar56);
        *(ulong *)(pfVar25 + 8) =
             CONCAT44(fVar46 * fVar59 + fVar49 * fVar55 + fVar28 * fVar56,
                      fVar45 * fVar59 + fVar48 * fVar55 + fVar43 * fVar56);
      } while (uVar26 * 0x90 != lVar23);
    }
    else {
      puVar20 = param_3 + 1;
      lVar19 = 1;
      do {
        lVar16 = local_128;
        local_f0 = puVar20[-1];
        lVar3 = 0;
        if (uVar26 * 0x90 + -0x90 != lVar23) {
          lVar3 = lVar19;
        }
        puVar21 = (undefined8 *)((long)param_3 + lVar3 * 0xc);
        uStack_e8 = CONCAT44(*(undefined4 *)puVar20,*(undefined4 *)puVar20);
        uVar4 = *(undefined4 *)(puVar21 + 1);
        local_e0 = *puVar21;
        uStack_d8 = CONCAT44(uVar4,uVar4);
        auVar31._8_8_ = uVar51;
        auVar31._0_8_ = 0x3f800000;
        pfVar25 = (float *)(local_128 + lVar23);
        iVar18 = FUN_03190574(auVar31,param_1,&local_100,&local_f0,&local_e0,pfVar25);
        if ((iVar18 < 0) || (fVar54 = *(float *)(lVar16 + lVar23), fVar54 == 0.0))
        goto LAB_02f0636c;
        auVar30 = *(undefined1 (*) [16])(pfVar25 + 4);
        memcpy(&local_d0,pfVar25 + 8,0x30);
        FUN_031921bc(&local_d0,&local_180);
        uVar29 = (uint)local_d0 ^
                 ((uint)local_d0 ^ (uint)local_c0) & *(uint *)(PTR_DAT_047d19e0 + 0x20);
        uVar34 = local_d0._4_4_ ^
                 (local_d0._4_4_ ^ (uint)fStack_bc) & *(uint *)(PTR_DAT_047d19e0 + 0x24);
        uVar35 = (uint)fStack_c8 ^
                 ((uint)fStack_c8 ^ (uint)fStack_b8) & *(uint *)(PTR_DAT_047d19e0 + 0x28);
        uVar5 = *(uint *)(PTR_DAT_047d19e0 + 0x40);
        uVar6 = *(uint *)(PTR_DAT_047d19e0 + 0x44);
        uVar7 = *(uint *)(PTR_DAT_047d19e0 + 0x48);
        fVar43 = (float)uStack_158;
        fVar42 = (float)local_160;
        fVar37 = (float)((ulong)local_160 >> 0x20);
        fVar28 = (float)local_180;
        fVar41 = (float)((ulong)local_170 >> 0x20);
        fVar44 = (float)(local_180 >> 0x20);
        fVar39 = (float)uStack_178;
        fVar27 = (float)uStack_168;
        if (fVar43 < 0.0) {
          fVar44 = fVar44 + (float)local_170;
          if (fVar28 <= fVar41) {
            fVar45 = (fVar38 - fVar43) - (fVar28 - fVar41);
            fVar46 = fVar27 + fVar37;
            fVar47 = fVar42 - fVar39;
            fVar40 = fVar44;
          }
          else {
            fVar46 = fVar39 + fVar42;
            fVar47 = fVar27 - fVar37;
            fVar40 = (fVar28 - fVar41) + (fVar38 - fVar43);
            fVar45 = fVar44;
          }
        }
        else {
          fVar44 = fVar44 - (float)local_170;
          if (-fVar41 <= fVar28) {
            fVar47 = fVar28 + fVar41 + fVar43 + fVar38;
            fVar40 = fVar27 - fVar37;
            fVar45 = fVar42 - fVar39;
            fVar46 = fVar44;
          }
          else {
            fVar40 = fVar39 + fVar42;
            fVar45 = fVar27 + fVar37;
            fVar46 = (fVar43 + fVar38) - (fVar28 + fVar41);
            fVar47 = fVar44;
          }
        }
        fVar43 = fVar40 * fVar40 + fVar45 * fVar45;
        fVar28 = fVar46 * fVar46 + fVar47 * fVar47;
        fVar27 = fVar43 + fVar28;
        fVar42 = 0.0;
        fVar44 = 0.0;
        fVar39 = 0.0;
        fVar41 = 0.0;
        if (fVar27 != 0.0) {
          fVar27 = SQRT(fVar27);
          fVar44 = SQRT(fVar43 + fVar28);
          fVar39 = fVar40 / fVar27;
          fVar41 = fVar45 / fVar44;
          fVar42 = fVar46 / fVar27;
          fVar44 = fVar47 / fVar44;
        }
        fVar43 = fVar41 + fVar41;
        fVar27 = fVar42 + fVar42;
        lVar23 = lVar23 + 0x90;
        fVar28 = (fVar39 + fVar39) * fVar39;
        lVar19 = lVar19 + 1;
        puVar20 = (undefined8 *)((long)puVar20 + 0xc);
        fVar37 = (fVar39 + fVar39) * fVar44;
        fVar42 = 1.0 - fVar42 * fVar27;
        fVar57 = fVar27 * fVar41 - fVar37;
        fVar58 = fVar43 * fVar39 + fVar27 * fVar44;
        fVar55 = fVar43 * fVar39 - fVar27 * fVar44;
        fVar56 = fVar42 - fVar43 * fVar41;
        fVar42 = fVar42 - fVar28;
        fVar59 = fVar27 * fVar39 + fVar43 * fVar44;
        fVar37 = fVar27 * fVar41 + fVar37;
        fVar40 = fVar27 * fVar39 - fVar43 * fVar44;
        fVar41 = (1.0 - fVar28) - fVar43 * fVar41;
        fVar44 = fVar53 * fVar54 * -fVar36;
        *pfVar25 = fVar54;
        pfVar25[1] = fVar54 * -fVar36;
        fVar54 = (float)(uVar29 ^ (uVar29 ^ (uint)local_b0) & uVar5) * fVar44;
        fVar27 = (float)(uVar34 ^ (uVar34 ^ (uint)fStack_ac) & uVar6) * fVar44;
        fVar44 = (float)(uVar35 ^ (uVar35 ^ (uint)fStack_a8) & uVar7) * fVar44;
        fVar45 = fVar59 * fVar44;
        fVar46 = fVar57 * fVar44;
        fVar47 = fVar41 * fVar44;
        fVar44 = fVar44 * 0.0;
        fVar48 = fVar55 * fVar27;
        fVar49 = fVar42 * fVar27;
        fVar50 = fVar37 * fVar27;
        fVar27 = fVar59 * fVar27;
        fVar43 = fVar56 * fVar54;
        fVar28 = fVar58 * fVar54;
        fVar39 = fVar40 * fVar54;
        fVar54 = fVar57 * fVar54;
        pfVar25[0xe] = fVar47 * fVar57 + fVar50 * fVar42 + fVar39 * fVar58;
        pfVar25[0xf] = fVar44 * fVar57 + fVar27 * fVar42 + fVar54 * fVar58;
        pfVar25[0xc] = fVar45 * fVar57 + fVar48 * fVar42 + fVar43 * fVar58;
        pfVar25[0xd] = fVar46 * fVar57 + fVar49 * fVar42 + fVar28 * fVar58;
        *(ulong *)(pfVar25 + 0x12) =
             CONCAT44(fVar44 * fVar41 + fVar27 * fVar37 + fVar54 * fVar40,
                      fVar47 * fVar41 + fVar50 * fVar37 + fVar39 * fVar40);
        *(ulong *)(pfVar25 + 0x10) =
             CONCAT44(fVar46 * fVar41 + fVar49 * fVar37 + fVar28 * fVar40,
                      fVar45 * fVar41 + fVar48 * fVar37 + fVar43 * fVar40);
        *(long *)(pfVar25 + 6) = auVar30._8_8_;
        *(long *)(pfVar25 + 4) = auVar30._0_8_;
        *(ulong *)(pfVar25 + 10) =
             CONCAT44(fVar44 * fVar59 + fVar27 * fVar55 + fVar54 * fVar56,
                      fVar47 * fVar59 + fVar50 * fVar55 + fVar39 * fVar56);
        *(ulong *)(pfVar25 + 8) =
             CONCAT44(fVar46 * fVar59 + fVar49 * fVar55 + fVar28 * fVar56,
                      fVar45 * fVar59 + fVar48 * fVar55 + fVar43 * fVar56);
      } while (uVar26 * 0x90 != lVar23);
    }
  }
  local_180 = 0;
  uVar51 = 0x80040200;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  iVar18 = FUN_03191a34(&local_128,&local_180);
  if ((-1 < iVar18) && ((float)local_180 != 0.0)) {
    *(undefined8 *)(param_5 + 6) = uStack_168;
    *(undefined8 *)(param_5 + 4) = local_170;
    param_5[1] = local_180._4_4_;
    *param_5 = (float)local_180;
    memcpy(&local_100,&local_160,0x30);
    FUN_031921bc(&local_100,&local_d0);
    param_5[10] = (float)uStack_f8;
    param_5[0xb] = uStack_f8._4_4_;
    param_5[8] = (float)local_100;
    param_5[9] = local_100._4_4_;
    puVar15 = PTR_DAT_047d19e0;
    uVar51 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x28);
    fVar36 = (float)((uint)(float)local_100 ^
                    ((uint)(float)local_100 ^ (uint)local_f0) & *(uint *)(PTR_DAT_047d19e0 + 0x20));
    fVar53 = (float)((uint)local_100._4_4_ ^
                    ((uint)local_100._4_4_ ^ local_f0._4_4_) & *(uint *)(PTR_DAT_047d19e0 + 0x24));
    fVar54 = (float)((uint)(float)uStack_f8 ^
                    ((uint)(float)uStack_f8 ^ (uint)uStack_e8) & *(uint *)(PTR_DAT_047d19e0 + 0x28))
    ;
    param_5[10] = fVar54;
    param_5[0xb] = (float)((uint)uStack_f8._4_4_ ^
                          ((uint)uStack_f8._4_4_ ^ (uint)((ulong)uStack_e8 >> 0x20)) &
                          (uint)((ulong)uVar51 >> 0x20));
    param_5[8] = fVar36;
    param_5[9] = fVar53;
    uVar5 = *(uint *)(puVar15 + 0x40);
    uVar6 = *(uint *)(puVar15 + 0x44);
    fVar43 = (float)local_d0;
    fVar27 = (float)((ulong)local_d0 >> 0x20);
    param_5[10] = (float)((uint)fVar54 ^
                         ((uint)fVar54 ^ (uint)uStack_d8) & *(uint *)(puVar15 + 0x48));
    param_5[0xb] = (float)local_180;
    param_5[8] = (float)((uint)fVar36 ^ ((uint)fVar36 ^ (uint)local_e0) & uVar5);
    param_5[9] = (float)((uint)fVar53 ^ ((uint)fVar53 ^ local_e0._4_4_) & uVar6);
    if (fStack_a8 < 0.0) {
      fVar27 = fVar27 + local_c0;
      if (fVar43 <= fStack_bc) {
        fVar54 = (fVar38 - fStack_a8) - (fVar43 - fStack_bc);
        fVar36 = fStack_b8 + fStack_ac;
        fVar53 = local_b0 - fStack_c8;
        fVar38 = fVar27;
      }
      else {
        fVar36 = fStack_c8 + local_b0;
        fVar53 = fStack_b8 - fStack_ac;
        fVar38 = (fVar43 - fStack_bc) + (fVar38 - fStack_a8);
        fVar54 = fVar27;
      }
    }
    else {
      fVar27 = fVar27 - local_c0;
      if (-fStack_bc <= fVar43) {
        fVar53 = fVar43 + fStack_bc + fStack_a8 + fVar38;
        fVar36 = fVar27;
        fVar38 = fStack_b8 - fStack_ac;
        fVar54 = local_b0 - fStack_c8;
      }
      else {
        fVar36 = (fStack_a8 + fVar38) - (fVar43 + fStack_bc);
        fVar53 = fVar27;
        fVar38 = fStack_c8 + local_b0;
        fVar54 = fStack_b8 + fStack_ac;
      }
    }
    fVar43 = fVar38 * fVar38 + fVar54 * fVar54;
    fVar28 = fVar36 * fVar36 + fVar53 * fVar53;
    fVar27 = fVar43 + fVar28;
    if (fVar27 == 0.0) {
      auVar33 = ZEXT816(0);
    }
    else {
      fVar27 = SQRT(fVar27);
      fVar43 = SQRT(fVar43 + fVar28);
      auVar33._0_4_ = fVar38 / fVar27;
      auVar33._4_4_ = fVar54 / fVar43;
      auVar33._8_4_ = fVar36 / fVar27;
      auVar33._12_4_ = fVar53 / fVar43;
    }
    uVar51 = 0;
    *(long *)(param_5 + 0xe) = auVar33._8_8_;
    *(long *)(param_5 + 0xc) = auVar33._0_8_;
  }
  goto LAB_02f06414;
LAB_02f0636c:
  uVar51 = 0x80040200;
LAB_02f06414:
  if (local_110 == local_128) {
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_118 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02f064e0;
  }
  uVar26 = local_108 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_118 + 0x28) < uVar26) || (*(long *)(local_118 + 0x38) != uVar26 + local_110)
     ) {
    if (local_110 == 0) goto LAB_02f064e0;
    if (*(ulong *)(local_118 + 0x28) < uVar26 + 0x40) {
      *(int *)(*(long *)(local_118 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_118 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_118 + 0x10) + 0x18))
                (*(long **)(local_118 + 0x10),local_110 - *(int *)(local_110 + -4),uVar26 + 0x44);
      goto LAB_02f064e0;
    }
    if (*(long *)(local_118 + 0x38) != uVar26 + local_110) {
      FUN_031cf778();
      goto LAB_02f064e0;
    }
    *(long *)(local_118 + 0x38) = local_110;
  }
  else {
    *(long *)(local_118 + 0x38) = local_110;
    if (*(long *)(local_118 + 0x48) != local_110) goto LAB_02f064e0;
  }
  FUN_031cf578();
LAB_02f064e0:
  uVar26 = local_120;
  uVar22 = (ulong)local_120._4_4_;
  local_120 = (ulong)local_120._4_4_ << 0x20;
  if ((-1 < (long)uVar26) && (local_128 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_128,uVar22 * 0x90);
  }
  return uVar51;
}


