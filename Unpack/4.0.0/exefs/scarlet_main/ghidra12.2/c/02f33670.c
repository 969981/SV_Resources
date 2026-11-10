/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f33670; name: FUN_02f33670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f33670(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  long *plVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  long lVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [16];
  int iVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar41;
  undefined1 auVar42 [12];
  int iVar49;
  undefined1 auVar43 [16];
  byte bVar48;
  byte bVar50;
  undefined1 auVar44 [16];
  int iVar51;
  int iVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar53;
  undefined8 uVar54;
  float fVar56;
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fStack_448;
  float fStack_444;
  undefined1 uStack_428;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined8 local_370;
  undefined8 uStack_368;
  uint local_360;
  uint uStack_35c;
  uint uStack_358;
  undefined4 uStack_354;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 *local_340;
  undefined8 local_338;
  undefined1 auStack_330 [576];
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined1 auStack_c0 [24];
  float fStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  
  lVar5 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar20 = (long *)0x0;
    iVar28 = -1;
    bVar19 = false;
  }
  else {
    lVar29 = (long)DAT_0486b380;
    lVar21 = *(long *)(lVar5 + 0x1000b8);
    if (lVar21 == 0) {
      lVar21 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar21;
      iVar41 = DAT_0486b380;
      iVar28 = (int)*(undefined8 *)(lVar21 + lVar29 * 8 + 1000);
      if (lVar21 == 0) {
        lVar21 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar21;
      }
    }
    else {
      iVar28 = (int)*(undefined8 *)(lVar21 + lVar29 * 8 + 1000);
      iVar41 = DAT_0486b380;
    }
    *(long *)(lVar21 + (long)iVar41 * 8 + 1000) = (long)(iVar28 + 1);
    plVar20 = *(long **)(param_1 + 0x800);
    bVar19 = iVar28 == 0;
  }
  bVar19 = (bool)(bVar19 & plVar20 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar19)) {
    local_338 = CONCAT44(local_338._4_4_,param_2);
    local_340 = (undefined1 *)0x3a02000010;
    if (bVar19) {
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_340);
    }
  }
  uVar18 = _UNK_03cabe68;
  uVar17 = _DAT_03cabe60;
  uVar16 = _UNK_03cabe58;
  uVar15 = _DAT_03cabe50;
  uVar14 = DAT_03cab628;
  uVar13 = DAT_03cab620;
  uVar54 = _UNK_03caa5b8;
  uVar73 = _DAT_03caa5b0;
  pauVar3 = (undefined1 (*) [16])(*(long *)(param_1 + 0x150) + (ulong)param_2 * 0x80);
  uVar4 = *(uint *)(pauVar3[4] + 8);
  uVar30 = (ulong)uVar4 & 0xffffff;
  if ((int)uVar30 != 0xffffff) {
    lVar21 = *(long *)(param_1 + 0x38);
    pauVar22 = pauVar3 + 7;
    uVar9 = *(undefined8 *)*pauVar22;
    auVar12 = *(undefined1 (*) [12])*pauVar22;
    auVar11 = *(undefined1 (*) [12])*pauVar22;
    dVar67 = *(double *)pauVar3[1];
    auVar45 = *pauVar3;
    dVar68 = *(double *)(pauVar3[1] + 8);
    dVar66 = *(double *)pauVar3[2];
    fStack_448 = (float)*(undefined8 *)(pauVar3[7] + 8);
    fStack_444 = (float)((ulong)*(undefined8 *)(pauVar3[7] + 8) >> 0x20);
    uStack_428 = auVar45[8];
    if (*(uint *)(lVar21 + uVar30 * 0xc0 + 0x84) == uVar4) {
      pauVar27 = (undefined1 (*) [16])(lVar21 + uVar30 * 0xc0);
      FUN_02f09dd4(*(undefined8 *)(pauVar27[7] + 8),
                   *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar30 * 8),&local_340);
      fVar70 = (float)*(undefined8 *)(pauVar27[2] + 8);
      fVar53 = (float)*(undefined8 *)pauVar27[2];
      fVar56 = (float)((ulong)*(undefined8 *)pauVar27[2] >> 0x20);
      auVar55 = *pauVar27;
      fVar39 = (float)*(undefined8 *)(pauVar27[1] + 8);
      fVar34 = (float)((ulong)*(undefined8 *)pauVar27[1] >> 0x20);
      fVar60 = (float)*(undefined8 *)pauVar27[1];
      fVar32 = auVar55._0_4_;
      fVar33 = auVar55._8_4_;
      if (fVar70 < 0.0) {
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar60 = auVar55._4_4_ + fVar60;
        fVar38 = (float)uVar73 - fVar70;
        if (fVar32 <= fVar34) {
          fVar38 = fVar38 - (fVar32 - fVar34);
          fVar40 = fVar39 + fVar56;
          fVar70 = fVar53 - fVar33;
          fVar35 = fVar60;
        }
        else {
          fVar40 = fVar33 + fVar53;
          fVar70 = fVar39 - fVar56;
          fVar35 = (fVar32 - fVar34) + fVar38;
          fVar38 = fVar60;
        }
      }
      else {
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar60 = auVar55._4_4_ - fVar60;
        fVar70 = fVar70 + (float)uVar73;
        if (-fVar34 <= fVar32) {
          fVar70 = fVar32 + fVar34 + fVar70;
          fVar35 = fVar39 - fVar56;
          fVar38 = fVar53 - fVar33;
          fVar40 = fVar60;
        }
        else {
          fVar35 = fVar33 + fVar53;
          fVar38 = fVar39 + fVar56;
          fVar40 = fVar70 - (fVar32 + fVar34);
          fVar70 = fVar60;
        }
      }
      fVar60 = fVar35 * fVar35 + fVar38 * fVar38;
      fVar33 = fVar40 * fVar40 + fVar70 * fVar70;
      fVar32 = fVar60 + fVar33;
      if (fVar32 == 0.0) {
        fVar35 = 0.0;
        fVar38 = 0.0;
        fVar40 = 0.0;
        fVar70 = 0.0;
      }
      else {
        fVar32 = SQRT(fVar32);
        fVar60 = SQRT(fVar60 + fVar33);
        fVar35 = fVar35 / fVar32;
        fVar38 = fVar38 / fVar60;
        fVar40 = fVar40 / fVar32;
        fVar70 = fVar70 / fVar60;
      }
      uStack_3c8 = CONCAT44(fVar70,fVar40);
      local_3d0 = CONCAT44(fVar38,fVar35);
      auVar55 = *(undefined1 (*) [16])(lVar21 + uVar30 * 0xc0 + 0x30);
      uStack_3b8 = auVar55._8_8_;
      local_3c0 = auVar55._0_8_;
      FUN_02f1e124(pauVar3,&local_340,&local_3d0);
    }
    else {
      local_340 = auStack_330;
      local_338._0_4_ = 0;
      local_338._4_4_ = 0x80000004;
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      lVar29 = lVar21;
      uVar25 = uVar4;
      while( true ) {
        uVar31 = (ulong)(uVar25 & 0xffffff);
        FUN_02f09dd4(*(undefined8 *)(lVar29 + uVar31 * 0xc0 + 0x78),
                     *(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar31 * 8),&local_3d0);
        lVar23 = (long)(int)local_338;
        if ((int)(local_338._4_4_ & 0x7fffffff) <= (int)local_338) {
          FUN_02e8dd20(&local_340,puVar1,lVar23 + 1);
        }
        puVar24 = (undefined4 *)(local_340 + (long)(int)local_338 * 0x90);
        local_338._0_4_ = (int)(lVar23 + 1);
        *(undefined8 *)(puVar24 + 8) = 0;
        *(undefined8 *)(puVar24 + 10) = 0;
        puVar24[1] = 0;
        *(undefined8 *)(puVar24 + 0xc) = 0;
        *(undefined8 *)(puVar24 + 0xe) = 0;
        *(undefined8 *)(puVar24 + 0x16) = uVar14;
        *(undefined8 *)(puVar24 + 0x14) = uVar13;
        *(undefined8 *)(puVar24 + 0x1a) = uVar18;
        *(undefined8 *)(puVar24 + 0x18) = uVar17;
        *(undefined8 *)(puVar24 + 0x10) = 0;
        *(undefined8 *)(puVar24 + 0x12) = 0;
        *(undefined8 *)(puVar24 + 0x1e) = uVar54;
        *(undefined8 *)(puVar24 + 0x1c) = uVar73;
        *(undefined8 *)(puVar24 + 0x22) = uVar16;
        *(undefined8 *)(puVar24 + 0x20) = uVar15;
        fVar60 = local_3a0._4_4_ + local_3a0._4_4_;
        fVar70 = (float)uStack_398 + (float)uStack_398;
        fVar33 = ((float)local_3a0 + (float)local_3a0) * (float)local_3a0;
        fVar32 = ((float)local_3a0 + (float)local_3a0) * uStack_398._4_4_;
        fVar61 = 1.0 - (float)uStack_398 * fVar70;
        fVar75 = fVar70 * local_3a0._4_4_ - fVar32;
        fVar69 = fVar61 - fVar60 * local_3a0._4_4_;
        fVar61 = fVar61 - fVar33;
        fVar72 = fVar60 * (float)local_3a0 + fVar70 * uStack_398._4_4_;
        fVar71 = fVar60 * (float)local_3a0 - fVar70 * uStack_398._4_4_;
        fVar32 = fVar70 * local_3a0._4_4_ + fVar32;
        fVar56 = fVar70 * (float)local_3a0 + fVar60 * uStack_398._4_4_;
        fVar74 = fVar70 * (float)local_3a0 - fVar60 * uStack_398._4_4_;
        fVar38 = (1.0 - fVar33) - fVar60 * local_3a0._4_4_;
        fVar62 = fVar71 * local_3b0._4_4_;
        fVar63 = fVar61 * local_3b0._4_4_;
        fVar64 = fVar32 * local_3b0._4_4_;
        fVar65 = fVar56 * local_3b0._4_4_;
        fVar35 = fVar69 * (float)local_3b0;
        fVar40 = fVar72 * (float)local_3b0;
        fVar58 = fVar74 * (float)local_3b0;
        fVar59 = fVar75 * (float)local_3b0;
        fVar33 = fVar56 * (float)uStack_3a8;
        fVar34 = fVar75 * (float)uStack_3a8;
        fVar39 = fVar38 * (float)uStack_3a8;
        fVar53 = (float)uStack_3a8 * 0.0;
        fVar60 = fVar34 * fVar38 + fVar63 * fVar32 + fVar40 * fVar74;
        fVar70 = fVar53 * fVar38 + fVar65 * fVar32 + fVar59 * fVar74;
        auVar55._0_8_ =
             CONCAT44(fVar34 * fVar56 + fVar63 * fVar71 + fVar40 * fVar69,
                      fVar33 * fVar56 + fVar62 * fVar71 + fVar35 * fVar69);
        auVar55._8_4_ = fVar39 * fVar56 + fVar64 * fVar71 + fVar58 * fVar69;
        auVar55._12_4_ = fVar53 * fVar56 + fVar65 * fVar71 + fVar59 * fVar69;
        puVar24[0xe] = fVar39 * fVar75 + fVar64 * fVar61 + fVar58 * fVar72;
        puVar24[0xf] = fVar53 * fVar75 + fVar65 * fVar61 + fVar59 * fVar72;
        puVar24[0xc] = fVar33 * fVar75 + fVar62 * fVar61 + fVar35 * fVar72;
        puVar24[0xd] = fVar34 * fVar75 + fVar63 * fVar61 + fVar40 * fVar72;
        *(ulong *)(puVar24 + 0x12) =
             CONCAT17((char)((uint)fVar70 >> 0x18),
                      CONCAT16((char)((uint)fVar70 >> 0x10),
                               CONCAT15((char)((uint)fVar70 >> 8),
                                        CONCAT14(SUB41(fVar70,0),
                                                 fVar39 * fVar38 + fVar64 * fVar32 + fVar58 * fVar74
                                                ))));
        *(ulong *)(puVar24 + 0x10) =
             CONCAT17((char)((uint)fVar60 >> 0x18),
                      CONCAT16((char)((uint)fVar60 >> 0x10),
                               CONCAT15((char)((uint)fVar60 >> 8),
                                        CONCAT14(SUB41(fVar60,0),
                                                 fVar33 * fVar38 + fVar62 * fVar32 + fVar35 * fVar74
                                                ))));
        *(long *)(puVar24 + 10) = auVar55._8_8_;
        *(undefined8 *)(puVar24 + 8) = auVar55._0_8_;
        *puVar24 = (undefined4)local_3d0;
        *(undefined8 *)(puVar24 + 6) = uStack_3b8;
        *(undefined8 *)(puVar24 + 4) = local_3c0;
        puVar24[1] = local_3d0._4_4_;
        puVar26 = (undefined8 *)(lVar29 + uVar31 * 0xc0);
        uVar10 = *puVar26;
        *(undefined8 *)(puVar24 + 0x16) = puVar26[1];
        *(undefined8 *)(puVar24 + 0x14) = uVar10;
        uVar10 = puVar26[2];
        *(undefined8 *)(puVar24 + 0x1a) = puVar26[3];
        *(undefined8 *)(puVar24 + 0x18) = uVar10;
        uVar10 = puVar26[4];
        *(undefined8 *)(puVar24 + 0x1e) = puVar26[5];
        *(undefined8 *)(puVar24 + 0x1c) = uVar10;
        auVar55 = *(undefined1 (*) [16])(puVar26 + 6);
        *(long *)(puVar24 + 0x22) = auVar55._8_8_;
        *(long *)(puVar24 + 0x20) = auVar55._0_8_;
        uVar25 = *(uint *)((long)puVar26 + 0x84);
        if (uVar25 == uVar4) break;
        lVar29 = *(long *)(param_1 + 0x38);
      }
      local_3d0 = 0;
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_3b0 = 0;
      uStack_3a8 = 0;
      local_3a0 = 0;
      uStack_398 = 0;
      local_390 = 0;
      uStack_388 = 0;
      FUN_03191a34(&local_340,&local_3d0);
      local_380 = (undefined4)local_3d0;
      uStack_37c = local_3d0._4_4_;
      uStack_368 = uStack_3b8;
      local_370 = local_3c0;
      memcpy(&local_f0,&local_3b0,0x30);
      FUN_031921bc(&local_f0,auStack_c0);
      local_360 = local_f0 ^ (local_f0 ^ uStack_e0) & *(uint *)(PTR_DAT_047d19e0 + 0x20);
      uStack_35c = uStack_ec ^ (uStack_ec ^ uStack_dc) & *(uint *)(PTR_DAT_047d19e0 + 0x24);
      uStack_358 = uStack_e8 ^ (uStack_e8 ^ uStack_d8) & *(uint *)(PTR_DAT_047d19e0 + 0x28);
      fVar60 = auStack_c0._0_4_;
      local_360 = local_360 ^ (local_360 ^ local_d0) & *(uint *)(PTR_DAT_047d19e0 + 0x40);
      uStack_35c = uStack_35c ^ (uStack_35c ^ uStack_cc) & *(uint *)(PTR_DAT_047d19e0 + 0x44);
      uStack_358 = uStack_358 ^ (uStack_358 ^ uStack_c8) & *(uint *)(PTR_DAT_047d19e0 + 0x48);
      fVar70 = auStack_c0._8_4_;
      fVar32 = auStack_c0._20_4_;
      fVar34 = (float)((ulong)uStack_a0 >> 0x20);
      uStack_354 = (undefined4)local_3d0;
      fVar33 = (float)uStack_a0;
      if (fStack_98 < 0.0) {
        fVar39 = auStack_c0._4_4_ + auStack_c0._16_4_;
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar53 = (float)uVar73 - fStack_98;
        if (fVar60 <= fVar32) {
          fVar53 = fVar53 - (fVar60 - fVar32);
          fVar38 = fStack_a8 + fVar34;
          fStack_98 = fVar33 - fVar70;
          fVar56 = fVar39;
        }
        else {
          fVar38 = fVar70 + fVar33;
          fStack_98 = fStack_a8 - fVar34;
          fVar56 = (fVar60 - fVar32) + fVar53;
          fVar53 = fVar39;
        }
      }
      else {
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar39 = auStack_c0._4_4_ - auStack_c0._16_4_;
        fStack_98 = fStack_98 + (float)uVar73;
        if (-fVar32 <= fVar60) {
          fStack_98 = fVar60 + fVar32 + fStack_98;
          fVar56 = fStack_a8 - fVar34;
          fVar53 = fVar33 - fVar70;
          fVar38 = fVar39;
        }
        else {
          fVar56 = fVar70 + fVar33;
          fVar53 = fStack_a8 + fVar34;
          fVar38 = fStack_98 - (fVar60 + fVar32);
          fStack_98 = fVar39;
        }
      }
      fVar60 = fVar56 * fVar56 + fVar53 * fVar53;
      fVar32 = fVar38 * fVar38 + fStack_98 * fStack_98;
      auVar57 = ZEXT816(0);
      fVar70 = fVar60 + fVar32;
      if (fVar70 != 0.0) {
        fVar70 = SQRT(fVar70);
        fVar60 = SQRT(fVar60 + fVar32);
        auVar57._0_4_ = fVar56 / fVar70;
        auVar57._4_4_ = fVar53 / fVar60;
        auVar57._8_4_ = fVar38 / fVar70;
        auVar57._12_4_ = fStack_98 / fVar60;
      }
      uStack_348 = auVar57._8_8_;
      local_350 = auVar57._0_8_;
      FUN_02f1e124(pauVar3,&local_380,PTR_DAT_047ddaf0);
      uVar25 = local_338._4_4_;
      uVar31 = (ulong)local_338._4_4_;
      local_338 = (ulong)local_338._4_4_ << 0x20;
      if ((-1 < (int)uVar25) && (local_340 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_340,uVar31 * 0x90);
      }
    }
    if ((*(byte *)(lVar21 + uVar30 * 0xc0 + 0x54) >> 2 & 1) != 0) {
      *(undefined8 *)pauVar3[4] = 0;
    }
    puVar1 = PTR_DAT_047d19f0;
    fVar60 = auVar45._0_4_;
    auVar43._0_4_ = fVar60 * *(float *)*pauVar3;
    fVar70 = auVar45._4_4_;
    auVar43._4_4_ = fVar70 * *(float *)(*pauVar3 + 4);
    fVar32 = auVar45._8_4_;
    auVar43._8_4_ = fVar32 * *(float *)(*pauVar3 + 8);
    fVar33 = auVar45._12_4_;
    auVar43._12_4_ = fVar33 * *(float *)(*pauVar3 + 0xc);
    auVar55 = NEON_ext(auVar43,auVar43,8,1);
    fVar34 = auVar55._0_4_ + auVar55._4_4_;
    bVar48 = (byte)(-(uint)(auVar43._0_4_ + auVar43._4_4_ + fVar34 < 0.0) >> 0x18);
    bVar50 = (byte)(-(uint)(auVar43._0_4_ + auVar43._4_4_ + fVar34 < 0.0) >> 0x18);
    uVar30 = CONCAT17(bVar50,(uint7)(bVar48 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar34 = (float)CONCAT13((byte)(uVar30 >> 0x18) ^ auVar45[3],auVar45._0_3_);
    auVar42._0_8_ =
         CONCAT17((byte)(uVar30 >> 0x38) ^ auVar45[7],
                  CONCAT16(auVar45[6],CONCAT15(auVar45[5],CONCAT14(auVar45[4],fVar34))));
    auVar42[8] = uStack_428;
    auVar42[9] = auVar45[9];
    auVar42[10] = auVar45[10];
    auVar42[0xb] = bVar48 & 0x80 ^ auVar45[0xb];
    auVar44[0xc] = auVar45[0xc];
    auVar44._0_12_ = auVar42;
    auVar44[0xd] = auVar45[0xd];
    auVar44[0xe] = auVar45[0xe];
    auVar44[0xf] = bVar50 & 0x80 ^ auVar45[0xf];
    iVar41 = -(uint)(ABS(*(float *)*pauVar3 - fVar34) <= 0.001);
    iVar49 = -(uint)(ABS(*(float *)(*pauVar3 + 4) - (float)((ulong)auVar42._0_8_ >> 0x20)) <= 0.001)
    ;
    iVar51 = -(uint)(ABS(*(float *)(*pauVar3 + 8) - auVar42._8_4_) <= 0.001);
    iVar52 = -(uint)(ABS(*(float *)(*pauVar3 + 0xc) - auVar44._12_4_) <= 0.001);
    if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                 (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar52 >> 0x18),
                 CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                          (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar52 >> 0x10),
                          CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar41 >> 8) &
                                   (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar52 >> 8),
                                   (byte)iVar49 & (byte)iVar41 & (byte)iVar51 & (byte)iVar52))) != 0
       ) {
      iVar41 = -(uint)(ABS((float)*(double *)pauVar3[1] - (float)dVar67) <= 0.001);
      iVar49 = -(uint)(ABS((float)*(double *)(pauVar3[1] + 8) - (float)dVar68) <= 0.001);
      iVar51 = -(uint)(ABS((float)*(double *)pauVar3[2] - (float)dVar66) <= 0.001);
      if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                   (byte)((uint)iVar51 >> 0x18),
                   CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                            (byte)((uint)iVar51 >> 0x10),
                            CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar41 >> 8) &
                                     (byte)((uint)iVar51 >> 8),
                                     (byte)iVar49 & (byte)iVar41 & (byte)iVar51))) != 0)
      goto LAB_02f34008;
    }
    fVar38 = (float)uVar9;
    fVar35 = (float)((ulong)uVar9 >> 0x20);
    auVar55 = NEON_ext(auVar45,auVar45,8,1);
    uVar54 = NEON_ext(auVar45._0_8_,auVar55._0_8_,4,1);
    auVar45._12_4_ = fStack_444;
    auVar45._0_12_ = auVar11;
    auVar6._12_4_ = fStack_444;
    auVar6._0_12_ = auVar12;
    auVar45 = NEON_ext(auVar45,auVar6,8,1);
    uVar73 = NEON_ext(uVar9,auVar45._0_8_,4,1);
    fVar39 = auVar55._4_4_ * auVar55._4_4_;
    auVar46._0_4_ = fVar60 * (float)uVar73 - fVar38 * (float)uVar54;
    auVar46._4_4_ =
         fVar70 * (float)((ulong)uVar73 >> 0x20) - fVar35 * (float)((ulong)uVar54 >> 0x20);
    auVar46._8_4_ = fVar32 * fVar38 - fStack_448 * fVar60;
    auVar46._12_4_ = fVar33 * fVar35 - fStack_444 * fVar70;
    fVar34 = fVar39 + -0.5;
    fVar39 = fVar39 + -0.5;
    auVar45 = NEON_ext(auVar46,auVar46,4,1);
    fVar53 = fVar60 * fVar38 + fVar70 * fVar35 + fVar32 * fStack_448;
    fVar56 = fVar60 * fVar38 + fVar70 * fVar35 + fVar32 * fStack_448;
    lVar21 = *(long *)(param_1 + 0x38);
    fVar60 = fVar38 * fVar34 + fVar60 * fVar53 + auVar45._0_4_ * fVar33;
    fVar70 = fVar35 * fVar39 + fVar70 * fVar56 + auVar45._4_4_ * fVar33;
    fVar32 = fStack_448 * fVar34 + fVar32 * fVar53 + auVar46._0_4_ * fVar33;
    fVar33 = fStack_444 * fVar39 + fVar33 * fVar56 + fVar33 * 0.0;
    fVar60 = fVar60 + fVar60;
    fVar70 = fVar70 + fVar70;
    fVar32 = fVar32 + fVar32;
    fVar33 = fVar33 + fVar33;
    puVar2 = PTR_DAT_047d19b0 + 0x200;
    uVar25 = uVar4;
    do {
      lVar21 = lVar21 + (ulong)(uVar25 & 0xffffff) * 0xc0;
      FUN_02f085e8(lVar21,pauVar3,0);
      (**(code **)(*(long *)puVar1 + (ulong)*(byte *)(*(long *)(lVar21 + 0x78) + 0x18) * 0x200 +
                  0x18))(*(long *)(lVar21 + 0x78),puVar2,&local_340);
      local_3d0 = CONCAT44(*(undefined4 *)(lVar21 + 0x1c),*(undefined4 *)(lVar21 + 0xc));
      uStack_3c8 = (ulong)*(uint *)(lVar21 + 0x2c);
      (**(code **)(*(long *)puVar1 + (ulong)*(byte *)(*(long *)(lVar21 + 0x78) + 0x18) * 0x200 +
                  0x28))(*(long *)(lVar21 + 0x78),&local_3d0,&local_380);
      *(short *)(lVar21 + 0x94) = (short)((uint)local_380 >> 0x10) + 1;
      lVar21 = *(long *)(param_1 + 0x38);
      uVar25 = *(uint *)(lVar21 + (ulong)(uVar25 & 0xffffff) * 0xc0 + 0x84);
    } while (uVar25 != uVar4);
    auVar45 = *pauVar3;
    auVar55 = NEON_ext(auVar45,auVar45,8,1);
    auVar8._8_4_ = fVar32;
    auVar8._0_8_ = CONCAT44(fVar70,fVar60);
    auVar7._8_4_ = fVar32;
    auVar7._0_8_ = CONCAT44(fVar70,fVar60);
    fVar34 = auVar45._0_4_;
    fVar39 = auVar45._4_4_;
    fVar53 = auVar45._8_4_;
    fVar56 = auVar45._12_4_;
    fVar35 = auVar55._4_4_ * auVar55._4_4_;
    uVar73 = NEON_ext(auVar45._0_8_,auVar55._0_8_,4,1);
    fVar40 = fVar60 * fVar34 + fVar70 * fVar39 + fVar32 * fVar53;
    fVar38 = fVar35 + -0.5;
    auVar7._12_4_ = fVar33;
    auVar8._12_4_ = fVar33;
    auVar45 = NEON_ext(auVar7,auVar8,4,1);
    auVar47._0_4_ = fVar60 * (float)uVar73 - auVar45._0_4_ * fVar34;
    auVar47._4_4_ = fVar70 * (float)((ulong)uVar73 >> 0x20) - auVar45._4_4_ * fVar39;
    auVar47._8_4_ = fVar32 * fVar34 - fVar60 * fVar53;
    auVar47._12_4_ = fVar33 * fVar39 - fVar70 * fVar56;
    auVar45 = NEON_ext(auVar47,auVar47,4,1);
    fVar33 = fVar60 * fVar38 + fVar34 * fVar40 + auVar45._0_4_ * fVar56;
    fVar60 = fVar70 * (fVar35 + -0.5) +
             fVar39 * (fVar60 * fVar34 + fVar70 * fVar39 + fVar32 * fVar53) + auVar45._4_4_ * fVar56
    ;
    fVar70 = fVar32 * fVar38 + fVar53 * fVar40 + auVar47._0_4_ * fVar56;
    fVar33 = fVar33 + fVar33;
    fVar60 = fVar60 + fVar60;
    auVar36._0_8_ = CONCAT44(fVar60,fVar33);
    auVar36._8_4_ = fVar70 + fVar70;
    fVar32 = fVar33 * fVar33 + fVar60 * fVar60 + auVar36._8_4_ * auVar36._8_4_;
    fVar34 = fVar33 * fVar33 + fVar60 * fVar60 + auVar36._8_4_ * auVar36._8_4_;
    auVar45 = *pauVar22;
    auVar55 = NEON_ext(auVar45,auVar45,8,1);
    fVar70 = auVar55._4_4_ * auVar55._4_4_;
    iVar41 = -(uint)(fVar32 <= fVar70);
    iVar49 = -(uint)(fVar34 <= fVar70);
    fVar70 = auVar45._12_4_;
    if (CONCAT13((byte)((uint)iVar49 >> 0x18) | (byte)((uint)iVar41 >> 0x18),
                 CONCAT12((byte)((uint)iVar49 >> 0x10) | (byte)((uint)iVar41 >> 0x10),
                          CONCAT11((byte)((uint)iVar49 >> 8) | (byte)((uint)iVar41 >> 8),
                                   (byte)iVar49 | (byte)iVar41))) == 0) {
      if ((~(uint)fVar32 & 0x7fc00000) != 0) {
        uVar73 = NEON_fmov(0x3f800000,4);
        fVar32 = (float)uVar73 / SQRT(fVar32);
        if ((~(uint)fVar32 & 0x7fc00000) != 0) {
          fVar32 = fVar70 * fVar32 * 0.99999976;
          auVar37._0_8_ =
               CONCAT44(fVar60 * fVar70 * ((float)((ulong)uVar73 >> 0x20) / SQRT(fVar34)) *
                                 0.99999976,fVar33 * fVar32);
          auVar37._8_4_ = auVar36._8_4_ * fVar32;
          auVar37._12_4_ = fVar70;
          *(long *)(pauVar3[7] + 8) = auVar37._8_8_;
          *(undefined8 *)*pauVar22 = auVar37._0_8_;
        }
      }
    }
    else {
      auVar36._12_4_ = fVar70;
      *(long *)(pauVar3[7] + 8) = auVar36._8_8_;
      *(undefined8 *)*pauVar22 = auVar36._0_8_;
    }
  }
LAB_02f34008:
  if (iVar28 != -1) {
    lVar29 = (long)DAT_0486b380;
    lVar21 = *(long *)(lVar5 + 0x1000b8);
    if (lVar21 == 0) {
      lVar21 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar21;
    }
    *(long *)(lVar21 + lVar29 * 8 + 1000) = (long)iVar28;
  }
  return;
}


