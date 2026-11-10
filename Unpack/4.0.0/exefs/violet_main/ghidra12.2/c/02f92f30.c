/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f92f30; name: FUN_02f92f30
 */


undefined8
FUN_02f92f30(long param_1,long param_2,undefined1 (*param_3) [16],long param_4,
            undefined1 (*param_5) [16])

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  float *pfVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  float *pfVar26;
  ushort *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  undefined8 uVar51;
  undefined1 auVar52 [12];
  undefined8 uVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar55 [16];
  int iVar58;
  undefined1 auVar56 [16];
  float fVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  byte bVar66;
  undefined1 auVar65 [16];
  float fVar67;
  float fVar68;
  int iVar69;
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  float local_290;
  float fStack_28c;
  undefined8 local_250;
  undefined8 uStack_248;
  float fStack_218;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  long local_e0;
  float local_c0;
  float fStack_bc;
  ulong local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 local_93;
  undefined4 local_8c [3];
  long local_78;
  
  uVar15 = *(undefined8 *)(param_3[7] + 8);
  auVar55 = param_3[0xc];
  auVar65 = param_3[0xd];
  auVar64 = param_3[0xe];
  bVar66 = *(byte *)(param_4 + 0x2b);
  uVar29 = (ulong)bVar66;
  fVar36 = auVar55._0_4_;
  fVar38 = auVar65._0_4_;
  auVar73._0_12_ = SUB1612(*param_5,0);
  auVar73._12_4_ = (int)uVar15;
  fVar67 = auVar55._4_4_;
  fVar39 = auVar65._4_4_;
  auVar44 = NEON_ext(auVar55,auVar55,8,1);
  auVar62 = NEON_ext(auVar65,auVar65,8,1);
  fVar60 = auVar64._4_4_;
  lVar22 = uVar29 << 4;
  uVar35 = (ulong)((int)lVar22 + 0x3f) & 0x1fc0;
  auVar45 = NEON_ext(auVar64,auVar64,8,1);
  lVar30 = uVar29 * 0x60;
  uVar23 = (ulong)((int)lVar30 + 0x3f) & 0xffc0;
  uVar31 = uVar29 - 1;
  uVar1 = ((uint)((lVar30 - 0x60U) / 0x60) & 0x3ffffff) + 1;
  fVar41 = *(float *)param_3[4];
  fVar49 = *(float *)(param_3[4] + 4);
  fVar68 = *(float *)(param_3[4] + 8);
  fVar72 = *(float *)(param_3[4] + 0xc);
  uVar43 = 0;
  iVar69 = 0;
  local_290 = 0.0;
  fStack_28c = 0.0;
  local_c0 = 0.0;
  fStack_bc = 0.0;
  puVar32 = (undefined8 *)PTR_DAT_047d1a08;
  fVar81 = (float)*(undefined8 *)*param_5;
  fVar82 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
  fVar57 = (float)*(undefined8 *)(*param_5 + 8);
  fVar50 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
  while( true ) {
    uVar59 = auVar73._8_8_;
    uVar51 = auVar73._0_8_;
    if (iVar69 == 6) break;
    fVar40 = auVar73._0_4_;
    auVar54._0_4_ = fVar40 * fVar41;
    fVar48 = auVar73._4_4_;
    auVar54._4_4_ = fVar48 * fVar49;
    fVar78 = auVar73._8_4_;
    auVar54._8_4_ = fVar78 * fVar68;
    fVar79 = auVar73._12_4_;
    auVar54._12_4_ = fVar79 * fVar72;
    fVar37 = auVar54._0_4_ + auVar54._4_4_;
    if (-(auVar54._8_4_ + fVar37) * (float)*(undefined8 *)param_3[6] <
        (float)*(undefined8 *)param_3[9]) {
      if (iVar69 == 0) {
        return 0x80040200;
      }
      goto LAB_02f93b94;
    }
    uVar61 = NEON_fmax(uVar15,0,4);
    uVar42 = *(undefined8 *)(param_3[0x10] + 8);
    uVar15 = *(undefined8 *)param_3[5];
    uVar8 = *(undefined8 *)(param_3[5] + 8);
    uVar80 = *(undefined8 *)(param_3[6] + 8);
    lVar33 = *(long *)(param_1 + 0x28);
    auVar46 = param_3[0xf];
    lVar16 = *(long *)(param_2 + 0x28);
    iVar10 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar33 + 0x18) * 0x200 + 0x58
                         ))(lVar33);
    lVar34 = tpidr_el0;
    lVar17 = *(long *)(lVar34 + 0x1000b8);
    if (lVar17 == 0) {
      lVar17 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar17;
    }
    uVar43 = NEON_fmin(CONCAT44(((float)((ulong)uVar43 >> 0x20) + (float)((ulong)uVar42 >> 0x20)) -
                                (float)((ulong)uVar61 >> 0x20) /
                                (auVar54._8_4_ + auVar54._0_4_ + auVar54._4_4_),
                                ((float)uVar43 + (float)uVar42) -
                                (float)uVar61 / (auVar54._8_4_ + fVar37)),uVar80,4);
    lVar17 = *(long *)(*(long *)(lVar17 + 0x3d0) + 0x10);
    if (*(long *)(lVar17 + 8) == 0) {
      local_e0 = (long)iVar10 * 0xc;
      local_78 = local_e0;
      if (lVar17 == 0) goto LAB_02f931dc;
      local_a8 = local_e0 + 0x3fU & 0xffffffffffffffc0;
      if (*(ulong *)(lVar17 + 0x28) < local_a8) {
LAB_02f93194:
        lVar11 = FUN_031cf3b4(lVar17,&local_a8);
      }
      else {
        lVar11 = *(long *)(lVar17 + 0x38);
        if (*(ulong *)(lVar17 + 0x40) < local_a8 + lVar11) goto LAB_02f93194;
        *(ulong *)(lVar17 + 0x38) = local_a8 + lVar11;
      }
    }
    else {
      local_78 = (long)iVar10 * 0xc;
LAB_02f931dc:
      local_e0 = local_78;
      lVar11 = (*(code *)*puVar32)(1,&local_78,0x40);
      lVar17 = 0;
    }
    lVar33 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar33 + 0x18) * 0x200 + 0x60
                         ))(lVar33,lVar11,iVar10,local_8c);
    lVar18 = *(long *)(lVar34 + 0x1000b8);
    if (lVar18 == 0) {
      lVar18 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar18;
    }
    lVar18 = *(long *)(*(long *)(lVar18 + 0x3d0) + 0x10);
    local_78 = lVar22;
    if ((*(long *)(lVar18 + 8) == 0) && (lVar18 != 0)) {
      local_a8 = uVar35;
      if (uVar35 <= *(ulong *)(lVar18 + 0x28)) {
        uVar12 = *(ulong *)(lVar18 + 0x38);
        if (uVar35 + uVar12 <= *(ulong *)(lVar18 + 0x40)) {
          *(ulong *)(lVar18 + 0x38) = uVar35 + uVar12;
          goto LAB_02f932f8;
        }
      }
      uVar12 = FUN_031cf3b4(lVar18,&local_a8);
    }
    else {
      uVar12 = (*(code *)*puVar32)(1,&local_78,0x40);
      lVar18 = 0;
    }
LAB_02f932f8:
    local_110 = (float)uVar15;
    fStack_10c = (float)((ulong)uVar15 >> 0x20);
    fStack_108 = (float)uVar8;
    fStack_104 = (float)((ulong)uVar8 >> 0x20);
    fVar37 = (float)uVar43;
    fVar41 = (float)((ulong)uVar43 >> 0x20);
    uVar14 = (uint)bVar66;
    if (uVar14 != 0) {
      if (uVar14 == 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        puVar24 = (undefined8 *)(uVar12 + 0x10);
        puVar27 = (ushort *)(param_4 + 0x82);
        do {
          uVar4 = puVar27[-1];
          puVar28 = (undefined8 *)(lVar33 + (ulong)uVar4 * 0xc);
          uVar5 = *(undefined4 *)(puVar28 + 1);
          uVar15 = *puVar28;
          puVar24[-1] = CONCAT44(uVar5,uVar5);
          puVar24[-2] = uVar15;
          *(uint *)((long)puVar24 + -4) = uVar4 | 0x3f000000;
          uVar4 = *puVar27;
          puVar28 = (undefined8 *)(lVar33 + (ulong)uVar4 * 0xc);
          uVar15 = *puVar28;
          uVar5 = *(undefined4 *)(puVar28 + 1);
          uVar19 = uVar19 + 2;
          puVar24[1] = CONCAT44(uVar5,uVar5);
          *puVar24 = uVar15;
          *(uint *)((long)puVar24 + 0xc) = uVar4 | 0x3f000000;
          puVar24 = puVar24 + 4;
          puVar27 = puVar27 + 2;
        } while ((uVar29 & 0xfe) != uVar19);
      }
      if ((bVar66 & 1) != 0) {
        puVar24 = (undefined8 *)(uVar12 + uVar19 * 0x10);
        uVar4 = *(ushort *)(param_4 + uVar19 * 2 + 0x80);
        puVar28 = (undefined8 *)(lVar33 + (ulong)uVar4 * 0xc);
        uVar5 = *(undefined4 *)(puVar28 + 1);
        uVar15 = *puVar28;
        puVar24[1] = CONCAT44(uVar5,uVar5);
        *puVar24 = uVar15;
        *(uint *)((long)puVar24 + 0xc) = uVar4 | 0x3f000000;
      }
    }
    local_100 = auVar46._0_4_;
    fStack_fc = auVar46._4_4_;
    fStack_f8 = auVar46._8_4_;
    fStack_f4 = auVar46._12_4_;
    local_100 = local_100 + fVar37 * local_110;
    fStack_fc = fStack_fc + fVar41 * fStack_10c;
    fStack_f8 = fStack_f8 + fVar37 * fStack_108;
    uVar19 = uVar31;
    do {
      pfVar13 = (float *)(uVar12 + uVar19 * 0x10);
      fVar49 = *pfVar13;
      fVar68 = pfVar13[1];
      fVar72 = pfVar13[2];
      lVar33 = uVar19 + 1;
      fVar71 = auVar64._0_4_;
      auVar46._0_8_ =
           CONCAT44(fStack_fc + fVar60 * fVar72 + fVar67 * fVar49 + fVar39 * fVar68,
                    local_100 + fVar71 * fVar72 + fVar36 * fVar49 + fVar38 * fVar68);
      auVar46._8_4_ =
           fStack_f8 + auVar64._8_4_ * fVar72 + auVar55._8_4_ * fVar49 + auVar65._8_4_ * fVar68;
      auVar46._12_4_ =
           fStack_f4 + fVar41 * fStack_104 +
           auVar64._12_4_ * fVar72 + auVar55._12_4_ * fVar49 + auVar65._12_4_ * fVar68;
      puVar24 = (undefined8 *)(uVar12 + uVar19 * 0x10);
      puVar24[1] = auVar46._8_8_;
      *puVar24 = auVar46._0_8_;
      uVar19 = uVar19 - 1;
    } while (1 < lVar33);
    lVar33 = *(long *)(lVar34 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar34 + 0x1000b8) = lVar33;
    }
    lVar34 = *(long *)(*(long *)(lVar33 + 0x3d0) + 0x10);
    local_78 = lVar30;
    if ((*(long *)(lVar34 + 8) == 0) && (lVar34 != 0)) {
      if (uVar23 <= *(ulong *)(lVar34 + 0x28)) {
        pfVar13 = *(float **)(lVar34 + 0x38);
        if (uVar23 + (long)pfVar13 <= *(ulong *)(lVar34 + 0x40)) {
          *(ulong *)(lVar34 + 0x38) = uVar23 + (long)pfVar13;
          goto LAB_02f934bc;
        }
      }
      local_a8 = uVar23;
      pfVar13 = (float *)FUN_031cf3b4(lVar34,&local_a8);
    }
    else {
      pfVar13 = (float *)(*(code *)*puVar32)(1,&local_78,0x40);
      lVar34 = 0;
    }
LAB_02f934bc:
    if (uVar14 != 0) {
      pfVar20 = pfVar13;
      if ((uVar1 & 7) != 0) {
        lVar33 = -((ulong)uVar1 & 7);
        do {
          *(undefined2 *)(pfVar20 + 0x10) = 0xffff;
          bVar9 = lVar33 != -1;
          lVar33 = lVar33 + 1;
          pfVar20[0x11] = 0.0;
          pfVar20[0x12] = 0.0;
          pfVar20[0x13] = 0.0;
          pfVar20 = pfVar20 + 0x18;
        } while (bVar9);
      }
      if (0x29f < lVar30 - 0x60U) {
        lVar33 = 0;
        do {
          lVar2 = lVar33 + 0x300;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x40) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x44) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x48) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0xa0) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0xa4) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0xa8) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x100) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x104) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x108) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x160) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x164) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x168) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x1c0) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x1c4) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x1c8) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x220) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x224) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x228) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x280) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x284) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x288) = 0;
          *(undefined2 *)((long)pfVar20 + lVar33 + 0x2e0) = 0xffff;
          *(undefined4 *)((long)pfVar20 + lVar33 + 0x2e4) = 0;
          *(undefined8 *)((long)pfVar20 + lVar33 + 0x2e8) = 0;
          lVar33 = lVar2;
        } while ((long)pfVar13 + (lVar30 - (long)pfVar20) != lVar2);
      }
    }
    local_98 = 0x7f7fffee;
    uStack_9c = local_8c[0];
    local_93 = 1;
    local_a8 = uVar12;
    local_a0 = uVar14;
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar16 + 0x18) * 0x200 + 0xf0))
              (lVar16,&local_a8,pfVar13);
    puVar32 = (undefined8 *)PTR_DAT_047d1a08;
    uVar15 = CONCAT44(fStack_bc,local_c0);
    pfVar20 = pfVar13;
    if (1 < uVar14) {
      if (uVar29 - 2 < 3) {
        lVar16 = 1;
      }
      else {
        pfVar26 = pfVar13 + 0x3c;
        uVar19 = 0;
        do {
          uVar25 = uVar19;
          uVar19 = uVar25 + 4;
          pfVar21 = pfVar26 + -0x24;
          if (pfVar20[0xc] <= pfVar26[-0x18]) {
            pfVar21 = pfVar20;
          }
          pfVar20 = pfVar26 + -0xc;
          if (pfVar21[0xc] <= *pfVar26) {
            pfVar20 = pfVar21;
          }
          pfVar21 = pfVar26 + 0x30;
          pfVar3 = pfVar26 + 0xc;
          if (pfVar20[0xc] <= pfVar26[0x18]) {
            pfVar3 = pfVar20;
          }
          pfVar20 = pfVar26 + 0x24;
          pfVar26 = pfVar26 + 0x60;
          if (pfVar3[0xc] <= *pfVar21) {
            pfVar20 = pfVar3;
          }
        } while ((uVar31 & 0xfffffffffffffffc) != uVar19);
        lVar16 = uVar25 + 5;
      }
      if ((uVar31 & 3) != 0) {
        pfVar26 = pfVar13 + lVar16 * 0x18;
        pfVar21 = pfVar20;
        uVar19 = uVar31 & 3;
        do {
          pfVar20 = pfVar26;
          if (pfVar21[0xc] <= pfVar26[0xc]) {
            pfVar20 = pfVar21;
          }
          uVar19 = uVar19 - 1;
          pfVar26 = pfVar26 + 0x18;
          pfVar21 = pfVar20;
        } while (uVar19 != 0);
      }
    }
    if (3.40282e+38 <= pfVar20[0xc]) {
      bVar9 = true;
    }
    else {
      fVar41 = pfVar20[4];
      fVar49 = pfVar20[5];
      fVar68 = pfVar20[6];
      auVar53._0_4_ = fVar41 * (0.0 - *pfVar20);
      auVar53._4_4_ = fVar49 * (0.0 - pfVar20[1]);
      auVar53._8_4_ = fVar68 * (0.0 - pfVar20[2]);
      auVar53._12_4_ = pfVar20[7] * (0.0 - pfVar20[3]);
      auVar54 = NEON_ext(auVar53,auVar53,8,1);
      fVar72 = auVar53._0_4_ + auVar53._4_4_ + auVar54._0_4_;
      uVar15 = 0;
      pfVar20[6] = fVar68;
      pfVar20[7] = fVar72;
      pfVar20[4] = fVar41;
      pfVar20[5] = fVar49;
      if (uVar14 != 0) {
        uVar15 = 0;
        pfVar26 = pfVar13;
        uVar19 = uVar29;
        do {
          uVar19 = uVar19 - 1;
          fVar74 = fVar41 * (float)*(undefined8 *)pfVar26;
          fVar75 = fVar49 * (float)((ulong)*(undefined8 *)pfVar26 >> 0x20);
          fVar76 = fVar68 * (float)*(undefined8 *)(pfVar26 + 2);
          fVar77 = fVar72 * (float)((ulong)*(undefined8 *)(pfVar26 + 2) >> 0x20);
          auVar6._4_4_ = fVar75;
          auVar6._0_4_ = fVar74;
          auVar6._8_4_ = fVar76;
          auVar6._12_4_ = fVar77;
          auVar7._4_4_ = fVar75;
          auVar7._0_4_ = fVar74;
          auVar7._8_4_ = fVar76;
          auVar7._12_4_ = fVar77;
          auVar54 = NEON_ext(auVar6,auVar7,8,1);
          fVar76 = auVar54._0_4_ + fVar72;
          uVar15 = NEON_fmax(uVar15,CONCAT44(fVar74 + fVar75 + fVar76,fVar74 + fVar75 + fVar76),4);
          pfVar26 = pfVar26 + 0x18;
        } while (uVar19 != 0);
      }
      fVar75 = (float)uVar15;
      fStack_154 = pfVar20[0xc] - fVar75;
      fVar77 = (float)((ulong)uVar15 >> 0x20);
      fVar76 = *pfVar20 + fVar41 * fVar75;
      fVar74 = pfVar20[1] + fVar49 * fVar77;
      fVar75 = pfVar20[2] + fVar68 * fVar75;
      bVar9 = false;
      pfVar20[2] = fVar75;
      pfVar20[3] = pfVar20[3] + fVar72 * fVar77;
      *pfVar20 = fVar76;
      pfVar20[1] = fVar74;
      fStack_218 = auVar45._0_4_;
      pfVar20[0xc] = fStack_154;
      local_160 = auVar44._0_4_ * fVar68 + fVar36 * fVar41 + fVar67 * fVar49;
      fStack_15c = auVar62._0_4_ * fVar68 + fVar38 * fVar41 + fVar39 * fVar49;
      fStack_158 = fStack_218 * fVar68 + fVar71 * fVar41 + fVar60 * fVar49;
      local_100 = (fVar76 + fVar41 * fStack_154) - local_100;
      fStack_fc = (fVar74 + fVar49 * fStack_154) - fStack_fc;
      fStack_f8 = (fVar75 + fVar68 * fStack_154) - fStack_f8;
      uVar15 = CONCAT44(fStack_154,fStack_154);
      auVar47._0_8_ =
           CONCAT44(auVar62._0_4_ * fStack_f8 + fVar38 * local_100 + fVar39 * fStack_fc,
                    auVar44._0_4_ * fStack_f8 + fVar36 * local_100 + fVar67 * fStack_fc);
      auVar47._8_4_ = fStack_218 * fStack_f8 + fVar71 * local_100 + fVar60 * fStack_fc;
      auVar47._12_4_ = auVar45._4_4_ * fStack_f8 + fVar60 * local_100 + auVar45._4_4_ * fStack_fc;
      uStack_248 = auVar47._8_8_;
      local_250 = auVar47._0_8_;
    }
    local_c0 = (float)uVar15;
    fStack_bc = (float)((ulong)uVar15 >> 0x20);
    if (lVar34 == 0) {
      (**(code **)((long)puVar32 + 8))(1,pfVar13,lVar30);
joined_r0x02f93910:
      if (lVar18 == 0) goto LAB_02f93914;
LAB_02f93868:
      if ((*(ulong *)(lVar18 + 0x28) < uVar35) || (*(long *)(lVar18 + 0x38) != uVar35 + uVar12)) {
        if (uVar12 != 0) {
          if (uVar35 + 0x40 <= *(ulong *)(lVar18 + 0x28)) {
            if (*(long *)(lVar18 + 0x38) == uVar35 + uVar12) {
              *(ulong *)(lVar18 + 0x38) = uVar12;
              goto LAB_02f939c8;
            }
            FUN_031cf778(lVar18,uVar12,uVar35);
            goto joined_r0x02f939d0;
          }
          *(int *)(*(long *)(lVar18 + 0x30) + 0x20) = *(int *)(*(long *)(lVar18 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar18 + 0x10) + 0x18))
                    (*(long **)(lVar18 + 0x10),uVar12 - (long)*(int *)(uVar12 - 4),uVar35 + 0x44);
        }
        goto joined_r0x02f93928;
      }
      *(ulong *)(lVar18 + 0x38) = uVar12;
      if (*(ulong *)(lVar18 + 0x48) != uVar12) goto joined_r0x02f93928;
LAB_02f939c8:
      FUN_031cf578(lVar18);
joined_r0x02f939d0:
      if (lVar17 != 0) goto LAB_02f9392c;
LAB_02f939d4:
      (**(code **)((long)puVar32 + 8))(1,lVar11,local_e0);
    }
    else {
      uVar19 = (ulong)((int)lVar30 + 0x3f) & 0xffc0;
      if ((*(ulong *)(lVar34 + 0x28) < uVar19) ||
         (*(long *)(lVar34 + 0x38) != uVar19 + (long)pfVar13)) {
        if (pfVar13 != (float *)0x0) {
          if (*(ulong *)(lVar34 + 0x28) < uVar19 + 0x40) {
            *(int *)(*(long *)(lVar34 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar34 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar34 + 0x10) + 0x18))
                      (*(long **)(lVar34 + 0x10),(long)pfVar13 - (long)(int)pfVar13[-1],
                       uVar19 + 0x44);
          }
          else {
            if (*(long *)(lVar34 + 0x38) == uVar19 + (long)pfVar13) {
              *(float **)(lVar34 + 0x38) = pfVar13;
              goto LAB_02f93908;
            }
            FUN_031cf778(lVar34,pfVar13);
          }
          goto joined_r0x02f93910;
        }
      }
      else {
        *(float **)(lVar34 + 0x38) = pfVar13;
        if (*(float **)(lVar34 + 0x48) == pfVar13) {
LAB_02f93908:
          FUN_031cf578(lVar34);
          goto joined_r0x02f93910;
        }
      }
      if (lVar18 != 0) goto LAB_02f93868;
LAB_02f93914:
      (**(code **)((long)puVar32 + 8))(1,uVar12,lVar22);
joined_r0x02f93928:
      if (lVar17 == 0) goto LAB_02f939d4;
LAB_02f9392c:
      uVar12 = local_e0 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar17 + 0x28) < uVar12) || (*(long *)(lVar17 + 0x38) != uVar12 + lVar11)) {
        if (lVar11 != 0) {
          if (*(ulong *)(lVar17 + 0x28) < uVar12 + 0x40) {
            *(int *)(*(long *)(lVar17 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar17 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar17 + 0x10) + 0x18))
                      (*(long **)(lVar17 + 0x10),lVar11 - *(int *)(lVar11 + -4),uVar12 + 0x44);
          }
          else {
            if (*(long *)(lVar17 + 0x38) == uVar12 + lVar11) {
              *(long *)(lVar17 + 0x38) = lVar11;
              goto LAB_02f939ec;
            }
            FUN_031cf778(lVar17);
          }
        }
      }
      else {
        *(long *)(lVar17 + 0x38) = lVar11;
        if (*(long *)(lVar17 + 0x48) == lVar11) {
LAB_02f939ec:
          FUN_031cf578(lVar17);
        }
      }
    }
    if (bVar9) {
      auVar55 = param_3[4];
      auVar64 = NEON_ext(auVar73,auVar73,4,1);
      fVar41 = auVar55._0_4_;
      fVar49 = auVar55._4_4_;
      auVar65 = NEON_ext(auVar55,auVar55,8,1);
      uVar15 = NEON_ext(auVar55._0_8_,auVar65._0_8_,4,1);
      fVar68 = (float)((ulong)uVar15 >> 0x20);
      fVar67 = auVar64._0_4_ * fVar41 - fVar40 * (float)uVar15;
      auVar64._0_8_ = CONCAT44(auVar64._4_4_ * fVar49 - fVar48 * fVar68,fVar67);
      auVar64._8_4_ = fVar40 * auVar55._8_4_ - fVar78 * fVar41;
      auVar64._12_4_ = fVar48 * auVar55._12_4_ - fVar79 * fVar49;
      auVar65 = NEON_ext(auVar64,auVar64,4,1);
      fVar72 = auVar65._0_4_;
      fVar36 = auVar65._4_4_;
      iVar69 = -(uint)(fVar72 * fVar72 + fVar36 * fVar36 + fVar67 * fVar67 < 1.1920929e-07);
      iVar10 = -(uint)(fVar72 * fVar72 + fVar36 * fVar36 + fVar67 * fVar67 < 1.1920929e-07);
      if (CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar69 >> 0x18),
                   CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar69 >> 0x10),
                            CONCAT11((byte)((uint)iVar10 >> 8) | (byte)((uint)iVar69 >> 8),
                                     (byte)iVar10 | (byte)iVar69))) == 0) {
        uVar43 = NEON_ext(auVar65._0_8_,auVar64._0_8_,4,1);
        auVar65._0_4_ = fVar41 * (float)uVar43 - (float)uVar15 * fVar72;
        auVar65._4_4_ = fVar49 * (float)((ulong)uVar43 >> 0x20) - fVar68 * fVar36;
        auVar65._8_4_ = auVar55._8_4_ * fVar72 - fVar41 * fVar67;
        auVar65._12_4_ = auVar55._12_4_ * fVar36 - fVar49 * 0.0;
        auVar55 = NEON_ext(auVar65,auVar65,4,1);
        fVar40 = fVar40 * auVar55._0_4_;
        fVar48 = fVar48 * auVar55._4_4_;
        fVar50 = fVar78 * auVar65._0_4_ + fVar40 + fVar48;
        bVar66 = (byte)(-(uint)(fVar50 < 0.0) >> 0x18);
        uVar23 = CONCAT17((char)(-(uint)(fVar78 * auVar65._0_4_ + fVar40 + fVar48 < 0.0) >> 0x18),
                          (uint7)(bVar66 & 0x80) << 0x18) & 0x80ffffffffffffff;
        fVar41 = (float)CONCAT13((byte)(uVar23 >> 0x18) ^ auVar55[3],auVar55._0_3_);
        auVar52._0_8_ =
             CONCAT17((byte)(uVar23 >> 0x38) ^ auVar55[7],
                      CONCAT16(auVar55[6],CONCAT15(auVar55[5],CONCAT14(auVar55[4],fVar41))));
        auVar52[8] = SUB41(auVar65._0_4_,0);
        auVar52[9] = (undefined1)((uint)auVar65._0_4_ >> 8);
        auVar52[10] = (undefined1)((uint)auVar65._0_4_ >> 0x10);
        auVar52[0xb] = bVar66 & 0x80 ^ (byte)((uint)auVar65._0_4_ >> 0x18);
        fVar49 = (float)((ulong)auVar52._0_8_ >> 0x20);
        fVar68 = auVar52._8_4_;
        fVar72 = fVar41 * fVar41 + fVar49 * fVar49 + fVar68 * fVar68;
        fVar57 = 0.0;
        if (fVar72 != 0.0) {
          fVar72 = SQRT(fVar72);
          local_290 = fVar41 / fVar72;
          fStack_28c = fVar49 / SQRT(fVar41 * fVar41 + fVar49 * fVar49 + fVar68 * fVar68);
          fVar57 = fVar68 / fVar72;
        }
        fVar50 = fVar50 * fVar79;
        fVar81 = local_290;
        fVar82 = fStack_28c;
      }
      goto LAB_02f93cec;
    }
    auVar73._0_4_ =
         *(float *)param_3[2] * fStack_158 +
         *(float *)*param_3 * local_160 + *(float *)param_3[1] * fStack_15c;
    auVar73._4_4_ =
         *(float *)(param_3[2] + 4) * fStack_158 +
         *(float *)(*param_3 + 4) * local_160 + *(float *)(param_3[1] + 4) * fStack_15c;
    auVar73._8_4_ =
         *(float *)(param_3[2] + 8) * fStack_158 +
         *(float *)(*param_3 + 8) * local_160 + *(float *)(param_3[1] + 8) * fStack_15c;
    fVar41 = *(float *)param_3[4];
    fVar49 = *(float *)(param_3[4] + 4);
    fVar68 = *(float *)(param_3[4] + 8);
    fVar72 = *(float *)(param_3[4] + 0xc);
    auVar63._0_4_ = fVar41 * auVar73._0_4_;
    auVar63._4_4_ = fVar49 * auVar73._4_4_;
    auVar63._8_4_ = fVar68 * auVar73._8_4_;
    auVar63._12_4_ =
         fVar72 * (*(float *)(param_3[2] + 0xc) * fStack_158 +
                  *(float *)(*param_3 + 0xc) * local_160 + *(float *)(param_3[1] + 0xc) * fStack_15c
                  );
    auVar54 = NEON_ext(auVar63,auVar63,8,1);
    auVar73._12_4_ = local_c0 - fVar37 * (auVar63._0_4_ + auVar63._4_4_ + auVar54._0_4_);
    if (local_c0 <= 0.0) goto LAB_02f93b84;
    iVar69 = iVar69 + 1;
    fVar81 = fVar40;
    fVar82 = fVar48;
    fVar57 = fVar78;
    fVar50 = fVar79;
    if ((float)*(undefined8 *)(param_3[6] + 8) <= fVar37) goto LAB_02f93b84;
  }
  uVar59 = CONCAT44(fVar50,fVar57);
  uVar51 = CONCAT44(fVar82,fVar81);
LAB_02f93b84:
  auVar54._0_4_ = fVar41 * auVar73._0_4_;
  auVar54._4_4_ = fVar49 * auVar73._4_4_;
  auVar54._8_4_ = fVar68 * auVar73._8_4_;
  auVar54._12_4_ = fVar72 * auVar73._12_4_;
  fVar57 = (float)uVar59;
  fVar50 = (float)((ulong)uVar59 >> 0x20);
  fVar81 = (float)uVar51;
  fVar82 = (float)((ulong)uVar51 >> 0x20);
  fVar37 = auVar54._0_4_ + auVar54._4_4_;
LAB_02f93b94:
  auVar55 = NEON_ext(auVar54,auVar54,8,1);
  fVar36 = auVar73._0_4_;
  fVar67 = auVar73._4_4_;
  fVar38 = auVar73._8_4_;
  fVar39 = auVar73._12_4_;
  if (1.1920929e-07 < fVar37 + auVar55._0_4_) {
    auVar55._4_4_ = fVar82;
    auVar55._0_4_ = fVar81;
    auVar55._8_4_ = fVar57;
    auVar55._12_4_ = fVar50;
    auVar44._4_4_ = fVar82;
    auVar44._0_4_ = fVar81;
    auVar44._8_4_ = fVar57;
    auVar44._12_4_ = fVar50;
    auVar55 = NEON_ext(auVar55,auVar44,4,1);
    auVar65 = NEON_ext(auVar73,auVar73,4,1);
    fVar60 = fVar81 * auVar65._0_4_ - fVar36 * auVar55._0_4_;
    fVar37 = fVar82 * auVar65._4_4_ - fVar67 * auVar55._4_4_;
    auVar45._0_8_ = CONCAT44(fVar37,fVar60);
    auVar45._8_4_ = fVar57 * fVar36 - fVar38 * fVar81;
    auVar45._12_4_ = fVar50 * fVar67 - fVar39 * fVar82;
    auVar55 = NEON_ext(auVar45,auVar45,4,1);
    auVar70._0_4_ = fVar41 * fVar60;
    auVar70._4_4_ = fVar49 * fVar37;
    auVar70._8_4_ = fVar68 * auVar45._8_4_;
    auVar70._12_4_ = fVar72 * auVar45._12_4_;
    uVar15 = NEON_ext(auVar55._0_8_,auVar45._0_8_,4,1);
    auVar65 = NEON_ext(auVar70,auVar70,4,1);
    auVar62._0_4_ = fVar41 * (float)uVar15 - auVar65._0_4_;
    auVar62._4_4_ = fVar49 * (float)((ulong)uVar15 >> 0x20) - auVar65._4_4_;
    auVar62._8_4_ = fVar68 * auVar55._0_4_ - fVar41 * fVar60;
    auVar62._12_4_ = fVar72 * auVar55._4_4_ - fVar49 * 0.0;
    auVar55 = NEON_ext(auVar62,auVar62,4,1);
    fVar41 = auVar55._0_4_;
    fVar49 = auVar55._4_4_;
    fVar68 = auVar62._0_4_ * auVar62._0_4_ + fVar41 * fVar41 + fVar49 * fVar49;
    fVar72 = auVar62._0_4_ * auVar62._0_4_ + fVar41 * fVar41 + fVar49 * fVar49;
    iVar69 = -(uint)(fVar68 < 1.1920929e-07);
    iVar10 = -(uint)(fVar72 < 1.1920929e-07);
    if (CONCAT13((byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar69 >> 0x18),
                 CONCAT12((byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar69 >> 0x10),
                          CONCAT11((byte)((uint)iVar10 >> 8) | (byte)((uint)iVar69 >> 8),
                                   (byte)iVar10 | (byte)iVar69))) == 0) {
      fVar68 = SQRT(fVar68);
      fVar41 = fVar41 / fVar68;
      fVar49 = fVar49 / SQRT(fVar72);
      fVar68 = auVar62._0_4_ / fVar68;
      iVar69 = -(uint)(ABS(fVar36 - fVar41) <= 1.1920929e-07);
      iVar10 = -(uint)(ABS(fVar67 - fVar49) <= 1.1920929e-07);
      iVar58 = -(uint)(ABS(fVar38 - fVar68) <= 1.1920929e-07);
      fVar81 = fVar36;
      fVar82 = fVar67;
      fVar57 = fVar38;
      fVar50 = fVar39;
      if (CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar69 >> 0x18) &
                   (byte)((uint)iVar58 >> 0x18),
                   CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar69 >> 0x10) &
                            (byte)((uint)iVar58 >> 0x10),
                            CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar69 >> 8) &
                                     (byte)((uint)iVar58 >> 8),
                                     (byte)iVar10 & (byte)iVar69 & (byte)iVar58))) == 0) {
        auVar55 = *param_3;
        auVar65 = param_3[1];
        auVar45 = NEON_ext(auVar65,auVar65,8,1);
        auVar64 = param_3[2];
        auVar44 = NEON_ext(auVar55,auVar55,8,1);
        auVar73 = NEON_ext(auVar64,auVar64,8,1);
        auVar56._0_4_ =
             ((float)local_250 - ((float)local_250 - local_160 * local_c0)) *
             (auVar44._0_4_ * fVar68 + auVar55._0_4_ * fVar41 + auVar55._4_4_ * fVar49);
        auVar56._4_4_ =
             (local_250._4_4_ - (local_250._4_4_ - fStack_15c * fStack_bc)) *
             (auVar45._0_4_ * fVar68 + auVar65._0_4_ * fVar41 + auVar65._4_4_ * fVar49);
        auVar56._8_4_ =
             ((float)uStack_248 - ((float)uStack_248 - fStack_158 * local_c0)) *
             (auVar73._0_4_ * fVar68 + auVar64._0_4_ * fVar41 + auVar64._4_4_ * fVar49);
        auVar56._12_4_ =
             (uStack_248._4_4_ - (uStack_248._4_4_ - fStack_154 * fStack_bc)) *
             (auVar73._4_4_ * fVar68 + auVar64._4_4_ * fVar41 + auVar73._4_4_ * fVar49);
        auVar55 = NEON_ext(auVar56,auVar56,8,1);
        fVar50 = auVar56._0_4_ + auVar56._4_4_ + auVar55._0_4_;
        fVar81 = fVar41;
        fVar82 = fVar49;
        fVar57 = fVar68;
      }
    }
  }
  else {
    fVar81 = fVar36;
    fVar82 = fVar67;
    fVar57 = fVar38;
    fVar50 = fVar39;
  }
LAB_02f93cec:
  *(ulong *)(*param_5 + 8) = CONCAT44(fVar50,fVar57);
  *(ulong *)*param_5 = CONCAT44(fVar82,fVar81);
  return 0;
}


