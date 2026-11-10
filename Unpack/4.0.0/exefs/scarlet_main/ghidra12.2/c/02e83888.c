/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e83888; name: FUN_02e83888
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e83888(long param_1,long param_2,long param_3,float *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  float *pfVar24;
  uint uVar25;
  code *pcVar26;
  float *pfVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  
  if (1 < *(int *)(param_2 + 0x18) - 1U) {
    if (*(int *)(param_2 + 0x18) != 0) {
      return;
    }
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,PTR_DAT_047d19b0 + 0x200,&local_160);
    uVar7 = _DAT_03cabe50;
    fVar34 = (float)((ulong)uStack_158 >> 0x20);
    fVar32 = (float)(local_160 >> 0x20);
    fVar60 = ((float)local_150 - (float)local_160) * 0.5;
    fVar37 = (local_150._4_4_ - fVar32) * 0.5;
    fVar31 = ((float)uStack_148 - (float)uStack_158) * 0.5;
    fVar28 = (uStack_148._4_4_ - fVar34) * 0.5;
    auVar50._8_8_ = _UNK_03cab388;
    auVar50._0_8_ = _DAT_03cab380;
    uVar17 = CONCAT44(-(uint)(fVar37 == 0.0),-(uint)(fVar60 == 0.0)) >> 0x18 & 0xffffffff35;
    uVar22 = CONCAT17((char)(uVar17 >> 0x20),(uint7)(uint)(uVar17 << 0x18)) & 0x35ffffffffffffff;
    uVar17 = CONCAT44(-(uint)(fVar28 == 0.0),-(uint)(fVar31 == 0.0)) >> 0x18 & 0xffffffff35;
    uVar17 = CONCAT17((char)(uVar17 >> 0x20),(uint7)(uint)(uVar17 << 0x18)) & 0x35ffffffffffffff;
    auVar43._0_4_ = fVar60 + (float)uVar22;
    auVar43._4_4_ = fVar37 + (float)(uVar22 >> 0x20);
    auVar43._8_4_ = fVar31 + (float)uVar17;
    auVar43._12_4_ = fVar28 + (float)(uVar17 >> 0x20);
    *(undefined8 *)(param_4 + 0xe) = _UNK_03cabe58;
    *(undefined8 *)(param_4 + 0xc) = uVar7;
    auVar49._8_8_ = _UNK_03cabbe8;
    auVar49._0_8_ = _DAT_03cabbe0;
    fVar60 = auVar43._4_4_ * auVar43._4_4_;
    uVar51 = (undefined1)((uint)fVar60 >> 8);
    uVar52 = (undefined1)((uint)fVar60 >> 0x10);
    uVar53 = (undefined1)((uint)fVar60 >> 0x18);
    fVar37 = auVar43._8_4_ * auVar43._8_4_;
    uVar54 = (undefined1)((uint)fVar37 >> 8);
    uVar55 = (undefined1)((uint)fVar37 >> 0x10);
    uVar56 = (undefined1)((uint)fVar37 >> 0x18);
    fVar31 = auVar43._12_4_ * auVar43._12_4_;
    uVar57 = (undefined1)((uint)fVar31 >> 8);
    uVar58 = (undefined1)((uint)fVar31 >> 0x10);
    uVar59 = (undefined1)((uint)fVar31 >> 0x18);
    auVar41[4] = SUB41(fVar60,0);
    auVar41._0_4_ = auVar43._0_4_ * auVar43._0_4_;
    auVar41[5] = uVar51;
    auVar41[6] = uVar52;
    auVar41[7] = uVar53;
    auVar41[8] = SUB41(fVar37,0);
    auVar41[9] = uVar54;
    auVar41[10] = uVar55;
    auVar41[0xb] = uVar56;
    auVar41[0xc] = SUB41(fVar31,0);
    auVar41[0xd] = uVar57;
    auVar41[0xe] = uVar58;
    auVar41[0xf] = uVar59;
    auVar41 = a64_TBL(ZEXT816(0),auVar41,auVar50);
    auVar44[4] = SUB41(fVar60,0);
    auVar44._0_4_ = auVar43._0_4_ * auVar43._0_4_;
    auVar44[5] = uVar51;
    auVar44[6] = uVar52;
    auVar44[7] = uVar53;
    auVar44[8] = SUB41(fVar37,0);
    auVar44[9] = uVar54;
    auVar44[10] = uVar55;
    auVar44[0xb] = uVar56;
    auVar44[0xc] = SUB41(fVar31,0);
    auVar44[0xd] = uVar57;
    auVar44[0xe] = uVar58;
    auVar44[0xf] = uVar59;
    auVar50 = a64_TBL(ZEXT816(0),auVar44,auVar49);
    auVar44 = NEON_ext(auVar43,auVar43,8,1);
    fVar60 = auVar44._0_4_ * auVar43._0_4_ * auVar43._4_4_ * 8.0;
    fVar31 = (auVar41._0_4_ + auVar50._0_4_) * 0.33333334;
    fVar28 = (auVar41._4_4_ + auVar50._4_4_) * 0.33333334;
    fVar36 = (auVar41._8_4_ + auVar50._8_4_) * 0.33333334;
    *param_4 = fVar60;
    param_4[6] = (float)uStack_148 + ((float)uStack_158 - (float)uStack_148) * 0.5;
    param_4[7] = uStack_148._4_4_ + (fVar34 - uStack_148._4_4_) * 0.5;
    param_4[4] = (float)local_150 + ((float)local_160 - (float)local_150) * 0.5;
    param_4[5] = local_150._4_4_ + (fVar32 - local_150._4_4_) * 0.5;
    param_4[10] = fVar36;
    param_4[0xb] = 1.0;
    param_4[8] = fVar31;
    param_4[9] = fVar28;
    fVar37 = *(float *)(param_2 + 0x20);
    fVar60 = fVar60 * -fVar37;
    if (0.0 <= fVar37) {
      fVar60 = fVar37;
    }
    fVar37 = *(float *)(param_2 + 0x1c) * fVar60;
    *(ulong *)(param_4 + 10) = CONCAT44(fVar37 * 1.0,fVar36 * fVar37);
    *(ulong *)(param_4 + 8) = CONCAT44(fVar28 * fVar37,fVar31 * fVar37);
    param_4[1] = fVar60;
    return;
  }
  iVar19 = *(int *)(param_1 + 0x50);
  local_108 = 0;
  local_100 = 0x8000000000000000;
  lVar21 = tpidr_el0;
  lVar20 = *(long *)(lVar21 + 0x1000b8);
  if (lVar20 == 0) {
    lVar20 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar20;
  }
  local_f8 = *(long *)(*(long *)(lVar20 + 0x3d0) + 0x10);
  if (*(long *)(local_f8 + 8) != 0) {
    local_f8 = 0;
  }
  local_e8 = (long)iVar19 * 0x90;
  local_b0 = local_e8;
  if (local_f8 == 0) {
    local_f0 = (**(code **)PTR_DAT_047d1a08)(1,&local_b0,0x40);
  }
  else {
    local_160 = local_e8 + 0x3fU & 0xffffffffffffffc0;
    if (local_160 <= *(ulong *)(local_f8 + 0x28)) {
      local_f0 = *(long *)(local_f8 + 0x38);
      if (local_160 + local_f0 <= *(ulong *)(local_f8 + 0x40)) {
        *(ulong *)(local_f8 + 0x38) = local_160 + local_f0;
        goto LAB_02e83a58;
      }
    }
    local_f0 = FUN_031cf3b4(local_f8,&local_160);
  }
LAB_02e83a58:
  uVar14 = _UNK_03cabe68;
  uVar13 = _DAT_03cabe60;
  uVar12 = _UNK_03cabe58;
  uVar11 = _DAT_03cabe50;
  uVar10 = DAT_03cab628;
  uVar9 = DAT_03cab620;
  uVar8 = _UNK_03caa5b8;
  uVar7 = _DAT_03caa5b0;
  plVar1 = (long *)(param_1 + 0x48);
  local_100 = CONCAT44(iVar19,(int)local_100) | 0x8000000000000000;
  if (param_3 == 0) {
    pcVar26 = (code *)0x0;
  }
  else {
    pcVar26 = *(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_3 + 0x18) * 0x40 +
                        0x4040);
  }
  fVar60 = 0.0;
  uVar16 = 0;
  do {
    uVar25 = uVar16;
    local_108 = local_f0;
    if ((*(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) ==
        uVar25) goto LAB_02e83e8c;
    lVar21 = *plVar1;
    uVar16 = uVar25 + 1;
  } while ((*(byte *)((long)plVar1 + (ulong)(uVar25 & 0xffff) * 0x40 + lVar21 + 0x1e) & 1) != 0);
  if (uVar25 + 1 != 0) {
    fVar60 = 0.0;
    do {
      puVar2 = (undefined8 *)((long)plVar1 + (ulong)(uVar25 & 0xffff) * 0x40 + lVar21);
      if (((*(byte *)((long)puVar2 + 0x1e) >> 6 & 1) != 0) &&
         ((param_3 == 0 || (uVar17 = (*pcVar26)(param_3), (uVar17 & 1) != 0)))) {
        lVar21 = (long)(int)local_100;
        iVar19 = (int)local_100;
        if ((int)(local_100._4_4_ & 0x7fffffff) <= (int)local_100) {
          FUN_02e8dd20(&local_108,PTR_PTR_047d1a50,lVar21 + 1);
          iVar19 = (int)local_100;
        }
        lVar20 = local_108;
        pfVar27 = (float *)(local_108 + (long)iVar19 * 0x90);
        local_100 = CONCAT44(local_100._4_4_,(int)(lVar21 + 1));
        pfVar27[0] = 0.0;
        pfVar27[1] = 0.0;
        pfVar27[0x12] = 0.0;
        pfVar27[0x13] = 0.0;
        pfVar24 = pfVar27 + 4;
        pfVar24[0] = 0.0;
        pfVar24[1] = 0.0;
        pfVar27[6] = 0.0;
        pfVar27[7] = 0.0;
        pfVar27[8] = 0.0;
        pfVar27[9] = 0.0;
        *(undefined8 *)(pfVar27 + 0x16) = uVar10;
        *(undefined8 *)(pfVar27 + 0x14) = uVar9;
        *(undefined8 *)(pfVar27 + 0x1a) = uVar14;
        *(undefined8 *)(pfVar27 + 0x18) = uVar13;
        pfVar27[10] = 0.0;
        pfVar27[0xb] = 0.0;
        pfVar27[0xc] = 0.0;
        pfVar27[0xd] = 0.0;
        *(undefined8 *)(pfVar27 + 0x1e) = uVar8;
        *(undefined8 *)(pfVar27 + 0x1c) = uVar7;
        *(undefined8 *)(pfVar27 + 0x22) = uVar12;
        *(undefined8 *)(pfVar27 + 0x20) = uVar11;
        pfVar27[0xe] = 0.0;
        pfVar27[0xf] = 0.0;
        pfVar27[0x10] = 0.0;
        pfVar27[0x11] = 0.0;
        fVar32 = (float)puVar2[1];
        fVar28 = (float)((ulong)puVar2[1] >> 0x20);
        fVar37 = (float)*puVar2;
        fVar34 = (float)((ulong)*puVar2 >> 0x20);
        auVar41 = *(undefined1 (*) [16])(puVar2 + 2);
        fVar36 = fVar34 + fVar34;
        fVar38 = fVar32 + fVar32;
        fVar39 = (fVar37 + fVar37) * fVar37;
        fVar31 = (fVar37 + fVar37) * fVar28;
        fVar47 = 1.0 - fVar32 * fVar38;
        fVar61 = fVar38 * fVar34 - fVar31;
        fVar32 = fVar38 * fVar37 + fVar36 * fVar28;
        *(ulong *)(pfVar27 + 0x16) = CONCAT44(fVar61,fVar38 * fVar37 - fVar36 * fVar28);
        *(ulong *)(pfVar27 + 0x14) =
             CONCAT44(fVar36 * fVar37 + fVar38 * fVar28,fVar47 - fVar36 * fVar34);
        *(ulong *)(pfVar27 + 0x1a) = CONCAT44(fVar32,fVar38 * fVar34 + fVar31);
        *(ulong *)(pfVar27 + 0x18) = CONCAT44(fVar47 - fVar39,fVar36 * fVar37 - fVar38 * fVar28);
        *(ulong *)(pfVar27 + 0x1e) = (ulong)(uint)((1.0 - fVar39) - fVar36 * fVar34);
        *(ulong *)(pfVar27 + 0x1c) = CONCAT44(fVar61,fVar32);
        *(ulong *)(pfVar27 + 0x22) = (ulong)auVar41._8_4_;
        *(long *)(pfVar27 + 0x20) = auVar41._0_8_;
        lVar23 = puVar2[6];
        lVar21 = 0;
        if (lVar23 != 0) {
          lVar21 = lVar23 + (long)(puVar2 + 6);
        }
        lVar23 = *(long *)(lVar21 + 0x30);
        plVar18 = (long *)0x0;
        if (lVar23 != 0) {
          plVar18 = (long *)(lVar23 + lVar21 + 0x30);
        }
        if (*(int *)(lVar21 + 0x38) != 0) {
          lVar23 = (long)*(int *)(lVar21 + 0x38) << 3;
          do {
            lVar3 = *plVar18 + (long)plVar18;
            if ((*plVar18 != 0 && lVar3 != 0) && (*(short *)(lVar3 + 0x18) == -0xf00)) {
              FUN_03190410(lVar3 + 0x20,pfVar27);
              goto LAB_02e83e04;
            }
            plVar18 = plVar18 + 1;
            lVar23 = lVar23 + -8;
          } while (lVar23 != 0);
        }
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar21 + 0x18) * 0x200 + 0x38))
                  (lVar21,param_2,&local_160);
        fVar47 = (float)uStack_138;
        fVar36 = (float)local_140;
        fVar34 = (float)((ulong)local_140 >> 0x20);
        fVar37 = local_130._4_4_ + local_130._4_4_;
        fVar31 = (float)uStack_128 + (float)uStack_128;
        fVar32 = ((float)local_130 + (float)local_130) * (float)local_130;
        fVar28 = ((float)local_130 + (float)local_130) * uStack_128._4_4_;
        fVar48 = 1.0 - (float)uStack_128 * fVar31;
        fVar66 = fVar31 * local_130._4_4_ - fVar28;
        fVar62 = fVar48 - fVar37 * local_130._4_4_;
        fVar48 = fVar48 - fVar32;
        fVar64 = fVar37 * (float)local_130 + fVar31 * uStack_128._4_4_;
        fVar63 = fVar37 * (float)local_130 - fVar31 * uStack_128._4_4_;
        fVar28 = fVar31 * local_130._4_4_ + fVar28;
        fVar35 = fVar31 * (float)local_130 + fVar37 * uStack_128._4_4_;
        fVar65 = fVar31 * (float)local_130 - fVar37 * uStack_128._4_4_;
        fVar40 = (1.0 - fVar32) - fVar37 * local_130._4_4_;
        lVar20 = lVar20 + (long)iVar19 * 0x90;
        fVar37 = fVar63 * fVar34;
        fVar31 = fVar48 * fVar34;
        fVar32 = fVar28 * fVar34;
        fVar34 = fVar35 * fVar34;
        fVar42 = fVar62 * fVar36;
        fVar45 = fVar64 * fVar36;
        fVar46 = fVar65 * fVar36;
        fVar36 = fVar66 * fVar36;
        fVar38 = fVar35 * fVar47;
        fVar39 = fVar66 * fVar47;
        fVar61 = fVar40 * fVar47;
        fVar47 = fVar47 * 0.0;
        *(float *)(lVar20 + 0x38) = fVar61 * fVar66 + fVar32 * fVar48 + fVar46 * fVar64;
        *(float *)(lVar20 + 0x3c) = fVar47 * fVar66 + fVar34 * fVar48 + fVar36 * fVar64;
        *(float *)(lVar20 + 0x30) = fVar38 * fVar66 + fVar37 * fVar48 + fVar42 * fVar64;
        *(float *)(lVar20 + 0x34) = fVar39 * fVar66 + fVar31 * fVar48 + fVar45 * fVar64;
        *(ulong *)(lVar20 + 0x48) =
             CONCAT44(fVar47 * fVar40 + fVar34 * fVar28 + fVar36 * fVar65,
                      fVar61 * fVar40 + fVar32 * fVar28 + fVar46 * fVar65);
        *(ulong *)(lVar20 + 0x40) =
             CONCAT44(fVar39 * fVar40 + fVar31 * fVar28 + fVar45 * fVar65,
                      fVar38 * fVar40 + fVar37 * fVar28 + fVar42 * fVar65);
        *(ulong *)(lVar20 + 0x28) =
             CONCAT44(fVar47 * fVar35 + fVar34 * fVar63 + fVar36 * fVar62,
                      fVar61 * fVar35 + fVar32 * fVar63 + fVar46 * fVar62);
        *(ulong *)(lVar20 + 0x20) =
             CONCAT44(fVar39 * fVar35 + fVar31 * fVar63 + fVar45 * fVar62,
                      fVar38 * fVar35 + fVar37 * fVar63 + fVar42 * fVar62);
        *pfVar27 = (float)local_160;
        *(undefined8 *)(pfVar27 + 6) = uStack_148;
        *(undefined8 *)pfVar24 = local_150;
        pfVar27[1] = local_160._4_4_;
LAB_02e83e04:
        if ((*(byte *)((long)puVar2 + 0x1e) >> 3 & 1) != 0) {
          auVar41 = *(undefined1 (*) [16])(puVar2 + 4);
          uVar33 = auVar41._0_4_;
          uStack_158 = CONCAT44(0x3f800000,auVar41._8_4_);
          local_160 = auVar41._0_8_;
          if (*(byte *)(lVar21 + 0x18) - 1 < 2) {
            auVar29._0_8_ = CONCAT44(uVar33,uVar33);
            auVar29._8_4_ = uVar33;
            auVar29._12_4_ = uVar33;
            uStack_a8 = auVar29._8_8_;
            plVar18 = &local_b0;
            local_b0 = auVar29._0_8_;
          }
          else {
            plVar18 = &local_160;
          }
          FUN_0319206c(pfVar27,plVar18);
        }
        fVar60 = fVar60 + *pfVar27;
      }
      uVar16 = uVar25 + 1;
      do {
        uVar25 = uVar16;
        if (*(int *)(param_1 + 0x50) <= (int)uVar25) goto LAB_02e83e8c;
        lVar21 = *plVar1;
        uVar16 = uVar25 + 1;
      } while ((*(byte *)((long)plVar1 + (ulong)(uVar25 & 0xffff) * 0x40 + lVar21 + 0x1e) & 1) != 0)
      ;
    } while (uVar25 + 1 != 0);
  }
LAB_02e83e8c:
  fVar37 = *(float *)(param_2 + 0x20);
  if (fVar37 <= 0.0) {
    fVar37 = -fVar37;
  }
  else {
    fVar37 = fVar37 / fVar60;
  }
  if (0 < (int)local_100) {
    lVar21 = 0;
    lVar20 = 0;
    do {
      pfVar24 = (float *)(local_108 + lVar21);
      lVar21 = lVar21 + 0x90;
      fVar60 = (fVar37 * *pfVar24) / pfVar24[1];
      pfVar24[1] = fVar37 * *pfVar24;
      lVar20 = lVar20 + 1;
      pfVar24[10] = pfVar24[10] * fVar60;
      pfVar24[0xb] = pfVar24[0xb] * fVar60;
      pfVar24[8] = pfVar24[8] * fVar60;
      pfVar24[9] = pfVar24[9] * fVar60;
      *(ulong *)(pfVar24 + 0xe) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 0xe) >> 0x20) * fVar60,
                    (float)*(undefined8 *)(pfVar24 + 0xe) * fVar60);
      *(ulong *)(pfVar24 + 0xc) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 0xc) >> 0x20) * fVar60,
                    (float)*(undefined8 *)(pfVar24 + 0xc) * fVar60);
      *(ulong *)(pfVar24 + 0x12) = CONCAT44(pfVar24[0x13] * fVar60,pfVar24[0x12] * fVar60);
      *(ulong *)(pfVar24 + 0x10) = CONCAT44(pfVar24[0x11] * fVar60,pfVar24[0x10] * fVar60);
    } while (lVar20 < (int)local_100);
  }
  local_160 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_03191a34(&local_108,&local_160);
  *(undefined8 *)(param_4 + 6) = uStack_148;
  *(undefined8 *)(param_4 + 4) = local_150;
  *param_4 = (float)local_160;
  param_4[1] = local_160._4_4_;
  memcpy(local_e0,&local_140,0x30);
  FUN_031921bc(local_e0,&local_b0);
  auVar5._8_4_ = uStack_c8;
  auVar5._0_8_ = uStack_d0;
  *(long *)(param_4 + 10) = local_e0._8_8_;
  *(long *)(param_4 + 8) = local_e0._0_8_;
  puVar15 = PTR_DAT_047d19e0;
  auVar5._12_4_ = uStack_c4;
  auVar4._12_4_ = (int)((ulong)*(undefined8 *)(PTR_DAT_047d19e0 + 0x28) >> 0x20);
  auVar4._0_12_ = *(undefined1 (*) [12])(PTR_DAT_047d19e0 + 0x20);
  local_e0 = local_e0 ^ (local_e0 ^ auVar5) & auVar4;
  *(long *)(param_4 + 10) = local_e0._8_8_;
  *(long *)(param_4 + 8) = local_e0._0_8_;
  auVar6._8_4_ = uStack_b8;
  auVar6._0_8_ = local_c0;
  auVar30._0_12_ =
       local_e0._0_12_ ^ (local_e0._0_12_ ^ auVar6) & *(undefined1 (*) [12])(puVar15 + 0x40);
  auVar30._12_4_ = (float)local_160;
  *(long *)(param_4 + 10) = auVar30._8_8_;
  *(long *)(param_4 + 8) = auVar30._0_8_;
  FUN_022013ec(param_4 + 0xc,&local_b0);
  if (local_f0 == local_108) {
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02e84064;
  }
  uVar17 = local_e8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_f8 + 0x28) < uVar17) || (*(long *)(local_f8 + 0x38) != uVar17 + local_f0)) {
    if (local_f0 == 0) goto LAB_02e84064;
    if (*(ulong *)(local_f8 + 0x28) < uVar17 + 0x40) {
      *(int *)(*(long *)(local_f8 + 0x30) + 0x20) = *(int *)(*(long *)(local_f8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_f8 + 0x10) + 0x18))
                (*(long **)(local_f8 + 0x10),local_f0 - *(int *)(local_f0 + -4),uVar17 + 0x44);
      goto LAB_02e84064;
    }
    if (*(long *)(local_f8 + 0x38) != uVar17 + local_f0) {
      FUN_031cf778();
      goto LAB_02e84064;
    }
    *(long *)(local_f8 + 0x38) = local_f0;
  }
  else {
    *(long *)(local_f8 + 0x38) = local_f0;
    if (*(long *)(local_f8 + 0x48) != local_f0) goto LAB_02e84064;
  }
  FUN_031cf578();
LAB_02e84064:
  uVar17 = local_100;
  uVar22 = (ulong)local_100._4_4_;
  local_100 = (ulong)local_100._4_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_108 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_108,uVar22 * 0x90);
  }
  return;
}


