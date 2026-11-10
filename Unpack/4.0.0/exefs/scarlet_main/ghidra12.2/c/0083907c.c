/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0083907c; name: FUN_0083907c
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0083907c(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort *puVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [12];
  uint uVar33;
  undefined2 *puVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  uint *puVar38;
  long lVar39;
  byte *pbVar40;
  uint uVar41;
  long *plVar42;
  long lVar43;
  ulong *puVar44;
  long *plVar45;
  ulong *puVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar65;
  ulong uVar66;
  ulong uVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  uint uVar83;
  float local_ff0;
  float local_fc0;
  float fStack_fbc;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined4 local_f88;
  undefined8 local_f80;
  undefined8 local_f70;
  undefined8 uStack_f68;
  long local_f60;
  long lStack_f58;
  undefined1 auStack_f50 [128];
  long *local_ed0;
  long *local_ec8;
  long local_ec0;
  long local_eb8;
  long local_eb0;
  undefined8 local_ea8;
  float *local_ea0;
  undefined8 uStack_e98;
  undefined1 local_e90;
  undefined4 local_e8c;
  undefined4 local_e88;
  long local_e80;
  long lStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  long local_e60;
  long local_e58;
  long local_e50;
  undefined8 local_e48;
  long local_e40;
  undefined8 local_e38;
  undefined1 local_e30;
  undefined4 local_e2c;
  undefined4 local_e28;
  long local_e20;
  long lStack_e18;
  long local_e10;
  long lStack_e08;
  long *local_df8 [2];
  long local_de8 [2];
  int local_dd8 [2];
  long local_dd0 [2];
  uint local_dc0 [2];
  undefined8 *local_db8;
  uint local_db0 [2];
  undefined8 local_da8 [5];
  uint local_d80 [2];
  undefined1 *local_d78;
  undefined8 local_d70;
  undefined8 local_d68;
  undefined8 local_d60;
  undefined8 local_d40;
  float local_d38;
  undefined8 local_d34;
  float local_d2c;
  undefined8 local_d28;
  float local_d20;
  undefined8 local_d1c;
  float local_d14;
  undefined8 local_d10;
  float local_d08;
  undefined8 local_d04;
  float local_cfc;
  undefined8 local_cf8;
  float local_cf0;
  undefined8 local_cec;
  float local_ce4 [313];
  undefined1 local_800 [1348];
  undefined2 local_2bc [2];
  uint local_2b8 [2];
  undefined1 local_2b0 [16];
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  long local_290;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  float fStack_248;
  float fStack_244;
  undefined2 local_240;
  undefined4 local_23c;
  ulong uStack_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  ulong uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  uint local_68 [2];
  
  bVar7 = *(byte *)(*(long *)(param_2 + 0x28) + 3) >> 1;
  bVar8 = *(byte *)(*(long *)(param_3 + 0x28) + 3) >> 1;
  local_68[0] = (uint)bVar7;
  local_68[1] = (uint)bVar8;
  lVar43 = *(long *)(param_1 + 0x68) + (ulong)bVar7 * 4;
  uVar41 = (uint)*(byte *)(lVar43 + 2);
  if (uVar41 != 3) {
    uVar41 = 0;
  }
  uVar21 = (uint)*(byte *)(lVar43 + 2);
  local_2b8[0] = uVar21;
  if (uVar21 != 4) {
    local_2b8[0] = uVar41;
  }
  uVar41 = 1;
  if (uVar21 != *(byte *)(lVar43 + 3)) {
    uVar41 = 2;
  }
  if ((uint)*(byte *)(lVar43 + 1) != (uint)*(byte *)(lVar43 + 3)) {
    local_2b8[0] = uVar41;
  }
  lVar43 = *(long *)(param_1 + 0xf8) + (ulong)bVar8 * 4;
  uVar41 = (uint)*(byte *)(lVar43 + 2);
  if (uVar41 != 3) {
    uVar41 = 0;
  }
  uVar21 = (uint)*(byte *)(lVar43 + 2);
  local_2b8[1] = uVar21;
  if (uVar21 != 4) {
    local_2b8[1] = uVar41;
  }
  uVar41 = 1;
  if (uVar21 != *(byte *)(lVar43 + 3)) {
    uVar41 = 2;
  }
  if ((uint)*(byte *)(lVar43 + 1) != (uint)*(byte *)(lVar43 + 3)) {
    local_2b8[1] = uVar41;
  }
  if (local_2b8[0] == 0 || local_2b8[1] == 0) {
    return;
  }
  local_d68 = 0;
  local_d60 = 0;
  local_da8[1] = 0;
  local_da8[0] = 0;
  lVar43 = 0;
  local_db0[0] = 0;
  local_db0[1] = 0;
  local_ed0 = &local_e60;
  local_db8 = &local_d40;
  local_dc0[0] = 3;
  local_d80[0] = 3;
  local_d70 = 0;
  local_d78 = local_800;
  uVar64 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
  uVar82 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x1e0);
  fVar63 = (float)uVar82;
  local_de8[0] = *(long *)(param_1 + 0x148);
  local_df8[1] = *(long **)(param_1 + 0x160);
  local_de8[1] = *(undefined8 *)(param_1 + 0x158);
  local_df8[0] = *(long **)(param_1 + 0x150);
  local_e60 = *local_df8[0];
  local_e58 = local_df8[0][1];
  local_e50 = local_df8[0][2];
  local_e48 = local_df8[0][3];
  local_e40 = local_df8[0][4];
  local_e38 = 0;
  local_e30 = (char)local_df8[0][6];
  local_e2c = *(undefined4 *)((long)local_df8[0] + 0x34);
  lStack_e18 = local_df8[0][9];
  local_e20 = local_df8[0][8];
  lStack_e08 = local_df8[0][0xb];
  local_e10 = local_df8[0][10];
  local_e28 = (int)local_df8[0][7];
  local_ec0 = *local_df8[1];
  local_eb8 = local_df8[1][1];
  local_eb0 = local_df8[1][2];
  local_ea8 = local_df8[1][3];
  local_ea0 = (float *)local_df8[1][4];
  uStack_e98 = 0;
  local_e90 = (char)local_df8[1][6];
  local_e8c = *(undefined4 *)((long)local_df8[1] + 0x34);
  lStack_e78 = local_df8[1][9];
  local_e80 = local_df8[1][8];
  uStack_e68 = SUB168(*(undefined1 (*) [16])(local_df8[1] + 10),8);
  local_e70 = SUB168(*(undefined1 (*) [16])(local_df8[1] + 10),0);
  local_ec8 = &local_ec0;
  local_e88 = (int)local_df8[1][7];
  plVar25 = local_ed0;
  do {
    puVar3 = local_dc0 + lVar43 * 0x10;
    lVar27 = local_de8[lVar43];
    uVar41 = local_2b8[lVar43];
    if (uVar41 == 4) {
      plVar42 = local_df8[lVar43];
      lVar24 = param_1 + lVar43 * 0x90;
      lVar30 = *(long *)(lVar24 + 0x80);
      uVar22 = (ulong)*(byte *)(*(long *)(lVar24 + 0x68) + (long)(int)local_68[lVar43] * 4);
      puVar4 = (ushort *)
               (lVar30 + (((ulong)(*(ushort *)(lVar30 + uVar22 * 2) >> 6) & 3) + uVar22) * 2);
      plVar28 = (long *)(lVar27 + 0x70);
      local_ff0 = (float)uVar64;
      puVar26 = (undefined8 *)
                ((long)plVar28 +
                ((long)(int)((uint)puVar4[1] << 0x10) | (ulong)*puVar4) * 0x40 + *plVar28);
      auVar54._0_8_ = puVar26[5];
      auVar74._0_8_ = *(undefined8 *)*(undefined1 (*) [12])(puVar26 + 4);
      auVar47 = *(undefined1 (*) [12])(puVar26 + 4);
      local_fc0 = (float)auVar74._0_8_;
      fStack_fbc = (float)((ulong)auVar74._0_8_ >> 0x20);
      bVar7 = *(byte *)((long)puVar26 + 0x1e);
      local_fb0 = *puVar26;
      uStack_fa8 = puVar26[1];
      uStack_f98 = (ulong)SUB164(*(undefined1 (*) [16])(puVar26 + 2),8);
      local_fa0 = SUB168(*(undefined1 (*) [16])(puVar26 + 2),0);
      FUN_031cc2c4(&local_280,&local_fb0);
      fStack_248 = (float)uStack_f98;
      fStack_244 = uStack_f98._4_4_;
      local_250 = local_fa0;
      if ((char)plVar42[6] == '\0') {
        auVar50._12_4_ = local_ff0;
        auVar50._0_12_ = auVar47;
        if ((bVar7 >> 3 & 1) != 0) goto LAB_00839634;
      }
      else {
        fVar61 = (float)plVar42[8];
        fVar62 = (float)((ulong)plVar42[8] >> 0x20);
        fVar69 = (float)plVar42[9];
        fStack_248 = (float)uStack_f98 * fVar69;
        fVar79 = (float)((ulong)plVar42[9] >> 0x20);
        fStack_244 = uStack_f98._4_4_ * fVar79;
        auVar50._0_4_ = local_fc0 * fVar61;
        auVar50._4_4_ = fStack_fbc * fVar62;
        auVar50._8_4_ = (float)auVar54._0_8_ * fVar69;
        auVar50._12_4_ = local_ff0 * fVar79;
        local_250 = CONCAT44(local_fa0._4_4_ * fVar62,(float)local_fa0 * fVar61);
LAB_00839634:
        plVar25[9] = auVar50._8_8_;
        plVar25[8] = auVar50._0_8_;
        *(undefined1 *)(plVar25 + 6) = 1;
        *(undefined4 *)(plVar25 + 10) = 0;
        plVar25[0xb] = 0;
        *(undefined4 *)((long)plVar25 + 0x54) = 0;
        bVar7 = *(byte *)((long)puVar26 + 0x1e);
        if ((bVar7 >> 3 & 1) == 0) {
          uVar41 = *(uint *)((long)plVar42 + 0x34);
        }
        else {
          uVar41 = (bVar7 >> 5 ^ 0xffffffff) & 1;
        }
        *(uint *)((long)plVar25 + 0x34) = uVar41;
        lVar24 = puVar26[6];
        lVar27 = 0;
        if (lVar24 != 0) {
          lVar27 = lVar24 + (long)(puVar26 + 6);
        }
        *(undefined4 *)(plVar25 + 7) = *(undefined4 *)(lVar27 + 0x20);
        if (lVar27 != 0 && (*(ushort *)(lVar27 + 0x1a) & 1) != 0) {
          iVar18 = *(int *)(lVar27 + 0x40);
          lVar24 = 0;
          if (iVar18 != 0) {
            lVar24 = (long)iVar18 + lVar27 + 0x40;
          }
          FUN_00cb0560(lVar24,*(undefined4 *)(lVar27 + 0x44));
        }
      }
      FUN_031cc5e4(auStack_f50 + lVar43 * 0x40,plVar42[4],&local_280);
      plVar25[4] = (long)(auStack_f50 + lVar43 * 0x40);
      lVar24 = puVar26[6];
      lVar27 = 0;
      if (lVar24 != 0) {
        lVar27 = lVar24 + (long)(puVar26 + 6);
      }
      lVar24 = 0;
      if ((*(ushort *)(lVar27 + 0x1a) & 1) != 0) {
        lVar24 = lVar27;
      }
      iVar18 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar24 + 0x18) * 0x200 +
                           0xa8))(lVar24,puVar3,local_ce4 + lVar43 * 0x150 + -0x17,
                                  local_800 + lVar43 * 0x540);
      if ((-1 < iVar18) && ((char)plVar25[6] != '\0')) {
        uVar41 = local_db0[lVar43 * 0x10];
        if (0 < (int)uVar41) {
          auVar74 = *(undefined1 (*) [16])(plVar25 + 10);
          lVar27 = 0;
          lVar24 = *(long *)(local_dc0 + lVar43 * 0x10 + 2);
          fVar79 = (float)plVar25[8];
          fVar80 = (float)((ulong)plVar25[8] >> 0x20);
          fVar81 = (float)plVar25[9];
          fVar61 = auVar74._0_4_;
          fVar62 = auVar74._4_4_;
          fVar69 = auVar74._8_4_;
          if (uVar41 != 1) {
            pauVar32 = (undefined1 (*) [12])(lVar24 + 0xc);
            pfVar35 = local_ce4 + lVar43 * 0x150 + -0x14;
            do {
              lVar27 = lVar27 + 2;
              auVar47 = pauVar32[-1];
              *(ulong *)(pfVar35 + -3) =
                   CONCAT44(fVar62 + fVar80 * auVar47._4_4_,fVar61 + fVar79 * auVar47._0_4_);
              pfVar35[-1] = fVar69 + fVar81 * auVar47._8_4_;
              auVar47 = *pauVar32;
              pauVar32 = pauVar32 + 2;
              *(ulong *)pfVar35 =
                   CONCAT44(fVar62 + fVar80 * auVar47._4_4_,fVar61 + fVar79 * auVar47._0_4_);
              pfVar35[2] = fVar69 + fVar81 * auVar47._8_4_;
              pfVar35 = pfVar35 + 6;
            } while ((ulong)uVar41 - ((ulong)uVar41 & 1) != lVar27);
          }
          if ((uVar41 & 1) != 0) {
            auVar47 = *(undefined1 (*) [12])(lVar24 + lVar27 * 0xc);
            *(ulong *)(local_ce4 + lVar43 * 0x150 + lVar27 * 3 + -0x17) =
                 CONCAT44(fVar62 + fVar80 * auVar47._4_4_,fVar61 + fVar79 * auVar47._0_4_);
            (local_ce4 + lVar43 * 0x150 + lVar27 * 3 + -0x17)[2] = fVar69 + fVar81 * auVar47._8_4_;
          }
        }
        *(float **)((ulong)puVar3 | 8) = local_ce4 + lVar43 * 0x150 + -0x17;
        local_db0[lVar43 * 0x10 + 1] = *(uint *)(plVar25 + 7);
        local_da8[lVar43 * 8] = 0;
        local_da8[lVar43 * 8 + 1] = 0;
      }
      local_dd0[lVar43] = *(long *)(local_dc0 + lVar43 * 0x10 + 2);
      local_dd8[lVar43] = 1;
      local_2bc[lVar43] = *(undefined2 *)((long)puVar26 + 0x2c);
    }
    else {
      lVar24 = param_1 + lVar43 * 0x90;
      plVar28 = *(long **)(lVar24 + 0x60);
      uVar21 = local_68[lVar43];
      lVar19 = (long)(int)uVar21;
      lVar30 = *(long *)(lVar24 + 0x88);
      if (*(byte *)((long)plVar28 + 0x5a) < 5) {
        iVar18 = 0;
      }
      else {
        iVar18 = 0;
        iVar37 = *(byte *)((long)plVar28 + 0x5a) - 1;
        do {
          while( true ) {
            iVar6 = iVar18 + iVar37 >> 1;
            iVar10 = uVar21 - *(byte *)(lVar30 + (long)iVar6 * 4 + 2);
            if (iVar10 < 0) break;
            puVar34 = (undefined2 *)
                      (lVar30 + ((long)((ulong)(uint)(iVar18 + iVar37) << 0x20) >> 0x21) * 4);
            if (iVar10 < (int)(uint)*(byte *)((long)puVar34 + 3)) goto LAB_00839444;
            iVar18 = iVar6 + 1;
            if (iVar37 - iVar18 < 4) goto LAB_00839420;
          }
          iVar37 = iVar6;
        } while (3 < iVar6 - iVar18);
      }
LAB_00839420:
      for (puVar34 = (undefined2 *)(lVar30 + (long)iVar18 * 4);
          ((int)(uVar21 - *(byte *)(puVar34 + 1)) < 0 ||
          ((int)(uint)*(byte *)((long)puVar34 + 3) <= (int)(uVar21 - *(byte *)(puVar34 + 1))));
          puVar34 = puVar34 + 2) {
      }
LAB_00839444:
      puVar26 = (undefined8 *)(lVar24 + 0x10);
      local_2bc[lVar43] = *puVar34;
      pfVar35 = local_ce4 + lVar43 * 0x150 + -0x17;
      uVar83 = *(uint *)(lVar27 + 0x20);
      puVar1 = local_db0 + lVar43 * 0x10;
      puVar2 = local_db0 + lVar43 * 0x10 + 1;
      if ((int)uVar41 < 3) {
        lVar30 = param_1 + lVar43 * 0x90;
        *puVar1 = 3;
        lVar27 = *(long *)(lVar30 + 0x68);
        uVar21 = *(uint *)(lVar30 + 0x90);
        bVar7 = *(byte *)(lVar27 + lVar19 * 4);
        lVar30 = param_1 + lVar43 * 0x90;
        if ((int)(uint)bVar7 < (int)uVar21) {
          fVar61 = (float)*(undefined8 *)(lVar30 + 0x48);
          auVar74._0_8_ = *(undefined8 *)(lVar30 + 0x40);
          uVar29 = *(uint *)(*(long *)(lVar30 + 0x70) + (ulong)bVar7 * 4);
          auVar47._0_8_ = CONCAT44(uVar29 >> 0xb,uVar29) & 0x7ff000007ff;
          auVar47._8_4_ = uVar29 >> 0x16;
          puVar31 = (undefined8 *)(lVar30 + 0x30);
        }
        else {
          fVar61 = (float)*(undefined8 *)(lVar30 + 0x28);
          auVar74._0_8_ = *(undefined8 *)(lVar30 + 0x20);
          uVar22 = *(ulong *)(*(long *)(lVar30 + 0x78) +
                             (ulong)*(ushort *)(*(long *)(lVar30 + 0x80) + (ulong)bVar7 * 2) * 8);
          auVar47._0_8_ = CONCAT44((int)(uVar22 >> 0x15),(int)uVar22) & 0x1fffff001fffff;
          auVar47._8_4_ = (uint)(uVar22 >> 0x2a);
          puVar31 = puVar26;
        }
        auVar49._12_4_ = 0;
        auVar49._0_12_ = auVar47;
        auVar51 = NEON_scvtf(auVar49,4);
        auVar54._0_8_ = puVar31[1];
        lVar27 = lVar27 + lVar19 * 4;
        *(ulong *)pfVar35 =
             CONCAT44((float)((ulong)*puVar31 >> 0x20) +
                      (float)((ulong)auVar74._0_8_ >> 0x20) * auVar51._4_4_,
                      (float)*puVar31 + (float)auVar74._0_8_ * auVar51._0_4_);
        local_ce4[lVar43 * 0x150 + -0x15] = (float)auVar54._0_8_ + fVar61 * auVar51._8_4_;
        lVar30 = param_1 + lVar43 * 0x90;
        bVar7 = *(byte *)(lVar27 + 1);
        if ((int)(uint)bVar7 < (int)uVar21) {
          fVar61 = (float)*(undefined8 *)(lVar30 + 0x48);
          auVar74._0_8_ = *(undefined8 *)(lVar30 + 0x40);
          uVar29 = *(uint *)(*(long *)(lVar30 + 0x70) + (ulong)bVar7 * 4);
          auVar48._0_8_ = CONCAT44(uVar29 >> 0xb,uVar29) & 0x7ff000007ff;
          auVar48._8_4_ = uVar29 >> 0x16;
          puVar31 = (undefined8 *)(lVar30 + 0x30);
        }
        else {
          fVar61 = (float)*(undefined8 *)(lVar30 + 0x28);
          auVar74._0_8_ = *(undefined8 *)(lVar30 + 0x20);
          uVar22 = *(ulong *)(*(long *)(lVar30 + 0x78) +
                             (ulong)*(ushort *)(*(long *)(lVar30 + 0x80) + (ulong)bVar7 * 2) * 8);
          auVar48._0_8_ = CONCAT44((int)(uVar22 >> 0x15),(int)uVar22) & 0x1fffff001fffff;
          auVar48._8_4_ = (uint)(uVar22 >> 0x2a);
          puVar31 = puVar26;
        }
        auVar52._12_4_ = 0;
        auVar52._0_12_ = auVar48;
        auVar51 = NEON_scvtf(auVar52,4);
        auVar54._0_8_ = puVar31[1];
        *(ulong *)(local_ce4 + lVar43 * 0x150 + -0x14) =
             CONCAT44((float)((ulong)*puVar31 >> 0x20) +
                      (float)((ulong)auVar74._0_8_ >> 0x20) * auVar51._4_4_,
                      (float)*puVar31 + (float)auVar74._0_8_ * auVar51._0_4_);
        local_ce4[lVar43 * 0x150 + -0x12] = (float)auVar54._0_8_ + fVar61 * auVar51._8_4_;
        bVar7 = *(byte *)(lVar27 + 2);
        pfVar36 = local_ce4 + lVar43 * 0x150 + -0x11;
        if ((int)(uint)bVar7 < (int)uVar21) {
          lVar30 = param_1 + lVar43 * 0x90;
          uVar29 = *(uint *)(*(long *)(lVar30 + 0x70) + (ulong)bVar7 * 4);
          auVar53._0_8_ = CONCAT44(uVar29 >> 0xb,uVar29) & 0x7ff000007ff;
          auVar53._8_4_ = uVar29 >> 0x16;
          auVar53._12_4_ = 0;
          fVar61 = (float)*(undefined8 *)(lVar30 + 0x48);
          auVar74._0_8_ = *(undefined8 *)(lVar30 + 0x40);
          auVar54 = NEON_scvtf(auVar53,4);
          auVar47 = auVar54._0_12_;
          puVar31 = (undefined8 *)(lVar30 + 0x30);
        }
        else {
          lVar30 = param_1 + lVar43 * 0x90;
          uVar22 = *(ulong *)(*(long *)(lVar30 + 0x78) +
                             (ulong)*(ushort *)(*(long *)(lVar30 + 0x80) + (ulong)bVar7 * 2) * 8);
          auVar55._0_8_ = CONCAT44((int)(uVar22 >> 0x15),(int)uVar22) & 0x1fffff001fffff;
          auVar55._8_4_ = (uint)(uVar22 >> 0x2a);
          auVar55._12_4_ = 0;
          fVar61 = (float)*(undefined8 *)(lVar30 + 0x28);
          auVar74._0_8_ = *(undefined8 *)(lVar30 + 0x20);
          auVar54 = NEON_scvtf(auVar55,4);
          auVar47 = auVar54._0_12_;
          puVar31 = puVar26;
        }
        auVar54._0_8_ = puVar31[1];
        *(ulong *)pfVar36 =
             CONCAT44((float)((ulong)*puVar31 >> 0x20) +
                      (float)((ulong)auVar74._0_8_ >> 0x20) * auVar47._4_4_,
                      (float)*puVar31 + (float)auVar74._0_8_ * auVar47._0_4_);
        local_ce4[lVar43 * 0x150 + -0xf] = (float)auVar54._0_8_ + fVar61 * auVar47._8_4_;
        bVar8 = *(byte *)(lVar27 + 3);
        if ((uint)bVar7 == (uint)bVar8) {
          local_ce4[lVar43 * 0x150 + -0xc] = local_ce4[lVar43 * 0x150 + -0xf];
          *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -0xe) = *(undefined8 *)pfVar36;
          if (uVar41 == 2) goto LAB_00839b9c;
LAB_008399e8:
          iVar18 = 1;
        }
        else {
          if (uVar21 == bVar8 || (int)uVar21 < (int)(uint)bVar8) {
            lVar30 = param_1 + lVar43 * 0x90;
            uVar22 = *(ulong *)(*(long *)(lVar30 + 0x78) +
                               (ulong)*(ushort *)(*(long *)(lVar30 + 0x80) + (ulong)bVar8 * 2) * 8);
            auVar57._0_8_ = CONCAT44((int)(uVar22 >> 0x15),(int)uVar22) & 0x1fffff001fffff;
            auVar57._8_4_ = (uint)(uVar22 >> 0x2a);
            auVar57._12_4_ = 0;
            auVar54 = NEON_scvtf(auVar57,4);
            auVar74._0_8_ =
                 CONCAT44((float)((ulong)*puVar26 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar30 + 0x20) >> 0x20) * auVar54._4_4_,
                          (float)*puVar26 + (float)*(undefined8 *)(lVar30 + 0x20) * auVar54._0_4_);
            fVar61 = (float)*(undefined8 *)(lVar24 + 0x18) +
                     (float)*(undefined8 *)(lVar30 + 0x28) * auVar54._8_4_;
          }
          else {
            lVar24 = param_1 + lVar43 * 0x90;
            uVar21 = *(uint *)(*(long *)(lVar24 + 0x70) + (ulong)(uint)bVar8 * 4);
            auVar54 = *(undefined1 (*) [16])(lVar24 + 0x30);
            auVar56._0_8_ = CONCAT44(uVar21 >> 0xb,uVar21) & 0x7ff000007ff;
            auVar56._8_4_ = uVar21 >> 0x16;
            auVar56._12_4_ = 0;
            auVar51 = NEON_scvtf(auVar56,4);
            auVar74._0_8_ =
                 CONCAT44(auVar54._4_4_ +
                          (float)((ulong)*(undefined8 *)(lVar24 + 0x40) >> 0x20) * auVar51._4_4_,
                          auVar54._0_4_ + (float)*(undefined8 *)(lVar24 + 0x40) * auVar51._0_4_);
            fVar61 = auVar54._8_4_ + (float)*(undefined8 *)(lVar24 + 0x48) * auVar51._8_4_;
          }
          *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -0xe) = auVar74._0_8_;
          local_ce4[lVar43 * 0x150 + -0xc] = fVar61;
          if (uVar41 != 2) goto LAB_008399e8;
LAB_00839b9c:
          if (*(byte *)(lVar27 + 3) <
              (*(byte *)(lVar27 + 1) & *(byte *)(param_1 + lVar43 * 0x90 + 0x58))) {
            *puVar1 = 4;
            iVar18 = 1;
          }
          else {
            local_ce4[lVar43 * 0x150 + -9] = local_ce4[lVar43 * 0x150 + -0x15];
            *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -0xb) = *(undefined8 *)pfVar35;
            *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -8) = *(undefined8 *)pfVar36;
            *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -5) =
                 *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -0xe);
            local_ce4[lVar43 * 0x150 + -6] = local_ce4[lVar43 * 0x150 + -0xf];
            local_ce4[lVar43 * 0x150 + -3] = local_ce4[lVar43 * 0x150 + -0xc];
            *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -2) = *(undefined8 *)pfVar35;
            local_ce4[lVar43 * 0x150] = local_ce4[lVar43 * 0x150 + -0x15];
            local_ce4[lVar43 * 0x150 + -0xc] = local_ce4[lVar43 * 0x150 + -0x15];
            iVar18 = 2;
            *(undefined8 *)(local_ce4 + lVar43 * 0x150 + -0xe) = *(undefined8 *)pfVar35;
          }
        }
        local_dd8[lVar43] = iVar18;
        plVar28 = local_dd0 + lVar43;
        *puVar2 = uVar83;
        *plVar28 = (long)pfVar35;
      }
      else {
        if (uVar41 != 3) goto LAB_008399e8;
        lVar27 = param_1 + lVar43 * 0x90;
        plVar42 = (long *)(lVar27 + 0x68);
        lVar30 = *plVar42;
        plVar45 = (long *)(lVar27 + 0x80);
        lVar27 = *plVar45;
        uVar22 = (ulong)*(byte *)(lVar30 + lVar19 * 4);
        uVar9 = *(ushort *)(lVar27 + uVar22 * 2);
        uVar11 = uVar9 >> 4 & 3;
        if (uVar11 == 0) {
          uVar22 = (ulong)*(ushort *)(lVar27 + uVar22 * 2 + 2);
          if (uVar9 < 0x7000) {
            uVar41 = (uint)(uVar9 >> 8);
LAB_00839df4:
            lVar23 = *(long *)(param_1 + lVar43 * 0x90 + 0x78) + uVar22 * 8;
            if (1 < uVar41) goto LAB_00839e10;
            uVar22 = 0;
            if (uVar41 == 0) goto LAB_0083a20c;
          }
          else {
            lVar23 = *(long *)(param_1 + lVar43 * 0x90 + 0x78) + uVar22 * 8;
            uVar41 = 0x70;
LAB_00839e10:
            auVar54._0_8_ = *(undefined8 *)(lVar24 + 0x18);
            auVar74._0_8_ = *puVar26;
            uVar22 = 0;
            auVar51 = *(undefined1 (*) [16])(param_1 + lVar43 * 0x90 + 0x20);
            lVar39 = 8;
            pfVar36 = local_ce4 + lVar43 * 0x150 + -0x14;
            do {
              puVar44 = (ulong *)(lVar23 + lVar39);
              lVar39 = lVar39 + 0x10;
              uVar20 = puVar44[-1];
              uVar22 = uVar22 + 2;
              auVar70._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
              auVar70._8_4_ = (uint)(uVar20 >> 0x2a);
              auVar70._12_4_ = 0;
              auVar71 = NEON_scvtf(auVar70,4);
              fVar61 = (float)auVar74._0_8_;
              fVar62 = (float)((ulong)auVar74._0_8_ >> 0x20);
              fVar69 = (float)auVar54._0_8_;
              *(ulong *)(pfVar36 + -3) =
                   CONCAT44(fVar62 + auVar51._4_4_ * auVar71._4_4_,
                            fVar61 + auVar51._0_4_ * auVar71._0_4_);
              pfVar36[-1] = fVar69 + auVar51._8_4_ * auVar71._8_4_;
              uVar20 = *puVar44;
              auVar72._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
              auVar72._8_4_ = (uint)(uVar20 >> 0x2a);
              auVar72._12_4_ = 0;
              auVar71 = NEON_scvtf(auVar72,4);
              *(ulong *)pfVar36 =
                   CONCAT44(fVar62 + auVar51._4_4_ * auVar71._4_4_,
                            fVar61 + auVar51._0_4_ * auVar71._0_4_);
              pfVar36[2] = fVar69 + auVar51._8_4_ * auVar71._8_4_;
              pfVar36 = pfVar36 + 6;
            } while ((long)uVar22 < (long)(int)(uVar41 - 1));
            if ((int)uVar41 <= (int)uVar22) goto LAB_0083a20c;
          }
          uVar20 = *(ulong *)(lVar23 + (uVar22 & 0xffffffff) * 8);
          pfVar36 = local_ce4 + lVar43 * 0x150 + (uVar22 & 0xffffffff) * 3 + -0x17;
          auVar58._0_8_ = CONCAT44((int)(uVar20 >> 0x15),(int)uVar20) & 0x1fffff001fffff;
          auVar58._8_4_ = (uint)(uVar20 >> 0x2a);
          auVar58._12_4_ = 0;
          lVar23 = param_1 + lVar43 * 0x90;
          auVar54._0_8_ = *(undefined8 *)(lVar23 + 0x28);
          auVar74._0_8_ = *(undefined8 *)(lVar23 + 0x20);
          auVar51 = NEON_scvtf(auVar58,4);
          auVar59._0_8_ =
               CONCAT44((float)((ulong)*puVar26 >> 0x20) +
                        (float)((ulong)auVar74._0_8_ >> 0x20) * auVar51._4_4_,
                        (float)*puVar26 + (float)auVar74._0_8_ * auVar51._0_4_);
          auVar59._8_4_ =
               (float)*(undefined8 *)(lVar24 + 0x18) + (float)auVar54._0_8_ * auVar51._8_4_;
          auVar59._12_4_ =
               (float)((ulong)*(undefined8 *)(lVar24 + 0x18) >> 0x20) +
               (float)((ulong)auVar54._0_8_ >> 0x20) * auVar51._12_4_;
          *(undefined8 *)pfVar36 = auVar59._0_8_;
LAB_0083a208:
          pfVar36[2] = auVar59._8_4_;
        }
        else {
          lVar23 = lVar30 + lVar19 * 4;
          bVar7 = *(byte *)(lVar23 + 1);
          fVar61 = (float)((ulong)uVar82 >> 0x20);
          if ((bVar7 == *(byte *)(lVar23 + 3)) && (*(char *)(lVar23 + 2) == '\x03')) {
            uVar20 = plVar28[3];
            auVar74 = *(undefined1 (*) [16])(plVar28 + 2);
            uVar66 = plVar28[5];
            auVar54._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(plVar28 + 4);
            if (bVar7 == 0) {
              auVar54 = *(undefined1 (*) [16])(plVar28 + 4);
            }
            else {
              lVar23 = 0;
              auVar74._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(plVar28 + 2);
              do {
                iVar37 = (int)lVar23;
                fVar62 = (float)((ulong)auVar54._0_8_ >> 0x20);
                fVar69 = (float)((ulong)auVar74._0_8_ >> 0x20);
                iVar18 = iVar37 + (*(byte *)((long)plVar28 + (long)iVar37 * 4 + *plVar28 + 3) & 0xfe
                                  );
                fVar79 = fVar63 * ((float)auVar54._0_8_ - (float)auVar74._0_8_);
                fVar80 = fVar61 * (fVar62 - fVar69);
                fVar81 = fVar63 * ((float)uVar66 - (float)uVar20);
                _local_280 = CONCAT44(iVar18,iVar37 + 1);
                uVar41 = *(uint *)((ulong)&local_280 | (ulong)(iVar18 <= (int)(uint)bVar7) << 2);
                lVar23 = (long)(int)uVar41;
                pbVar40 = (byte *)((long)plVar28 + lVar23 * 4 + *plVar28);
                bVar12 = *pbVar40 >> 4;
                bVar8 = *pbVar40 & 0xf;
                bVar13 = pbVar40[1] >> 4;
                bVar5 = pbVar40[1] & 0xf;
                bVar14 = pbVar40[2] >> 4;
                bVar15 = pbVar40[2] & 0xf;
                auVar74._0_8_ =
                     CONCAT44(fVar69 + (float)(byte)(bVar13 * bVar13) * fVar80,
                              (float)auVar74._0_8_ + (float)(byte)(bVar12 * bVar12) * fVar79);
                fVar69 = (float)uVar20 + (float)(byte)(bVar14 * bVar14) * fVar81;
                auVar74._8_4_ = fVar69;
                auVar74._12_4_ = 0;
                auVar54._0_8_ =
                     CONCAT44(fVar62 - (float)(byte)(bVar5 * bVar5) * fVar80,
                              (float)auVar54._0_8_ - (float)(byte)(bVar8 * bVar8) * fVar79);
                fVar62 = (float)uVar66 - (float)(byte)(bVar15 * bVar15) * fVar81;
                uVar20 = (ulong)(uint)fVar69;
                auVar54._8_4_ = fVar62;
                auVar54._12_4_ = 0;
                uVar66 = (ulong)(uint)fVar62;
              } while (uVar41 != bVar7);
            }
          }
          else {
            lVar23 = *plVar28;
            if (0 < (int)*(uint *)(plVar28 + 1)) {
              uVar20 = 0;
              pbVar40 = (byte *)((long)plVar28 + lVar23 + 3);
              do {
                if (((*pbVar40 & 1) == 0) && (uVar21 == *pbVar40 >> 1)) {
                  auVar74 = *(undefined1 (*) [16])(plVar28 + 2);
                  auVar54 = *(undefined1 (*) [16])(plVar28 + 4);
                  if ((int)uVar20 == 0) goto LAB_00839dc8;
                  goto LAB_00839c94;
                }
                uVar20 = uVar20 + 1;
                pbVar40 = pbVar40 + 4;
              } while (*(uint *)(plVar28 + 1) != uVar20);
            }
            auVar74 = *(undefined1 (*) [16])(plVar28 + 2);
            auVar54 = *(undefined1 (*) [16])(plVar28 + 4);
            uVar20 = 0xffffffff;
LAB_00839c94:
            uVar66 = auVar74._8_8_;
            uVar67 = auVar54._8_8_;
            lVar39 = 0;
            do {
              iVar37 = (int)lVar39;
              fVar62 = (float)((ulong)auVar54._0_8_ >> 0x20);
              fVar69 = (float)((ulong)auVar74._0_8_ >> 0x20);
              iVar18 = iVar37 + (*(byte *)((long)plVar28 + (long)iVar37 * 4 + lVar23 + 3) & 0xfe);
              fVar79 = fVar63 * ((float)auVar54._0_8_ - (float)auVar74._0_8_);
              fVar80 = fVar61 * (fVar62 - fVar69);
              fVar81 = fVar63 * ((float)uVar67 - (float)uVar66);
              _local_280 = CONCAT44(iVar18,iVar37 + 1);
              iVar18 = *(int *)((ulong)&local_280 | (ulong)(iVar18 <= (int)uVar20) << 2);
              lVar39 = (long)iVar18;
              pbVar40 = (byte *)((long)plVar28 + lVar39 * 4 + lVar23);
              bVar15 = *pbVar40 >> 4;
              bVar7 = *pbVar40 & 0xf;
              bVar12 = pbVar40[1] >> 4;
              bVar8 = pbVar40[1] & 0xf;
              bVar13 = pbVar40[2] >> 4;
              bVar5 = pbVar40[2] & 0xf;
              auVar74._0_8_ =
                   CONCAT44(fVar69 + (float)(byte)(bVar12 * bVar12) * fVar80,
                            (float)auVar74._0_8_ + (float)(byte)(bVar15 * bVar15) * fVar79);
              fVar69 = (float)uVar66 + (float)(byte)(bVar13 * bVar13) * fVar81;
              auVar74._8_4_ = fVar69;
              auVar74._12_4_ = 0;
              auVar54._0_8_ =
                   CONCAT44(fVar62 - (float)(byte)(bVar8 * bVar8) * fVar80,
                            (float)auVar54._0_8_ - (float)(byte)(bVar7 * bVar7) * fVar79);
              fVar62 = (float)uVar67 - (float)(byte)(bVar5 * bVar5) * fVar81;
              uVar66 = (ulong)(uint)fVar69;
              auVar54._8_4_ = fVar62;
              auVar54._12_4_ = 0;
              uVar67 = (ulong)(uint)fVar62;
            } while (iVar18 != (int)uVar20);
          }
LAB_00839dc8:
          uVar22 = (ulong)*(ushort *)(lVar27 + uVar22 * 2 + 2);
          uVar41 = (uint)(uVar9 >> 8);
          if (0x6f < uVar41) {
            uVar41 = 0x70;
          }
          fVar61 = auVar74._0_4_;
          fVar62 = auVar74._4_4_;
          fVar69 = auVar74._8_4_;
          fVar79 = auVar74._12_4_;
          if (uVar11 == 2) {
            auVar74 = *(undefined1 (*) [16])PTR_DAT_047d1a68;
            lVar24 = *(long *)(param_1 + lVar43 * 0x90 + 0x78) + uVar22 * 8;
            fVar80 = (auVar54._0_4_ - fVar61) * auVar74._0_4_;
            fVar81 = (auVar54._4_4_ - fVar62) * auVar74._4_4_;
            fVar65 = (auVar54._8_4_ - fVar69) * auVar74._8_4_;
            fVar68 = (auVar54._12_4_ - fVar79) * auVar74._12_4_;
            if (uVar41 < 2) {
              uVar22 = 0;
              if (uVar41 == 0) goto LAB_0083a20c;
LAB_0083a1c4:
              uVar9 = *(ushort *)(lVar24 + (ulong)((uint)uVar22 ^ 3) * 2);
              uVar21 = uVar9 & 0x1f;
              uVar33 = uVar9 >> 5 & 0x1f;
              uVar29 = (uint)(uVar9 >> 10);
LAB_0083a1e0:
              auVar76._4_4_ = uVar33;
              auVar76._0_4_ = uVar21;
              auVar76._8_4_ = uVar29;
              auVar76._12_4_ = 0;
              auVar74 = NEON_scvtf(auVar76,4);
              auVar59._0_8_ =
                   CONCAT44(fVar62 + fVar81 * auVar74._4_4_,fVar61 + fVar80 * auVar74._0_4_);
              auVar59._8_4_ = fVar69 + fVar65 * auVar74._8_4_;
              auVar59._12_4_ = fVar79 + fVar68 * auVar74._12_4_;
              pfVar36 = local_ce4 + lVar43 * 0x150 + (uVar22 & 0xffffffff) * 3 + -0x17;
              *(undefined8 *)pfVar36 = auVar59._0_8_;
              goto LAB_0083a208;
            }
            uVar22 = 0;
            pfVar36 = local_ce4 + lVar43 * 0x150 + -0x14;
            do {
              uVar9 = *(ushort *)(lVar24 + (uVar22 ^ 3) * 2);
              auVar51._0_8_ = (ulong)CONCAT24(uVar9 >> 5,(uint)uVar9) & 0x1f0000001f;
              uVar20 = uVar22 ^ 2;
              uVar22 = uVar22 + 2;
              auVar51._8_2_ = uVar9 >> 10;
              auVar51._10_6_ = 0;
              auVar74 = NEON_scvtf(auVar51,4);
              *(ulong *)(pfVar36 + -3) =
                   CONCAT44(fVar62 + fVar81 * auVar74._4_4_,fVar61 + fVar80 * auVar74._0_4_);
              pfVar36[-1] = fVar69 + fVar65 * auVar74._8_4_;
              uVar9 = *(ushort *)(lVar24 + uVar20 * 2);
              auVar71._0_8_ = (ulong)CONCAT24(uVar9 >> 5,(uint)uVar9) & 0x1f0000001f;
              auVar71._8_2_ = uVar9 >> 10;
              auVar71._10_6_ = 0;
              auVar74 = NEON_scvtf(auVar71,4);
              *(ulong *)pfVar36 =
                   CONCAT44(fVar62 + fVar81 * auVar74._4_4_,fVar61 + fVar80 * auVar74._0_4_);
              pfVar36[2] = fVar69 + fVar65 * auVar74._8_4_;
              pfVar36 = pfVar36 + 6;
            } while ((long)uVar22 < (long)(int)(uVar41 - 1));
            if ((int)uVar22 < (int)uVar41) goto LAB_0083a1c4;
          }
          else if (uVar11 == 1) {
            auVar74 = *(undefined1 (*) [16])PTR_DAT_047d1a70;
            lVar24 = *(long *)(param_1 + lVar43 * 0x90 + 0x78) + uVar22 * 8;
            fVar80 = (auVar54._0_4_ - fVar61) * auVar74._0_4_;
            fVar81 = (auVar54._4_4_ - fVar62) * auVar74._4_4_;
            fVar65 = (auVar54._8_4_ - fVar69) * auVar74._8_4_;
            fVar68 = (auVar54._12_4_ - fVar79) * auVar74._12_4_;
            if (uVar41 < 2) {
              uVar22 = 0;
              if (uVar41 != 0) goto LAB_0083a190;
            }
            else {
              uVar22 = 0;
              puVar38 = (uint *)(lVar24 + 4);
              pfVar36 = local_ce4 + lVar43 * 0x150 + -0x14;
              do {
                uVar21 = *puVar38;
                auVar73._0_8_ = CONCAT44(uVar21 >> 0xb,uVar21) & 0x7ff000007ff;
                auVar73._8_4_ = uVar21 >> 0x16;
                auVar73._12_4_ = 0;
                auVar74 = NEON_scvtf(auVar73,4);
                uVar22 = uVar22 + 2;
                *(ulong *)(pfVar36 + -3) =
                     CONCAT44(fVar62 + fVar81 * auVar74._4_4_,fVar61 + fVar80 * auVar74._0_4_);
                pfVar36[-1] = fVar69 + fVar65 * auVar74._8_4_;
                uVar21 = puVar38[-1];
                puVar38 = puVar38 + 2;
                auVar75._0_8_ = CONCAT44(uVar21 >> 0xb,uVar21) & 0x7ff000007ff;
                auVar75._8_4_ = uVar21 >> 0x16;
                auVar75._12_4_ = 0;
                auVar74 = NEON_scvtf(auVar75,4);
                *(ulong *)pfVar36 =
                     CONCAT44(fVar62 + fVar81 * auVar74._4_4_,fVar61 + fVar80 * auVar74._0_4_);
                pfVar36[2] = fVar69 + fVar65 * auVar74._8_4_;
                pfVar36 = pfVar36 + 6;
              } while ((long)uVar22 < (long)(int)(uVar41 - 1));
              if ((int)uVar22 < (int)uVar41) {
LAB_0083a190:
                uVar29 = *(uint *)(lVar24 + (ulong)((uint)uVar22 | 1) * 4);
                uVar21 = uVar29 & 0x7ff;
                uVar33 = uVar29 >> 0xb & 0x7ff;
                uVar29 = uVar29 >> 0x16;
                goto LAB_0083a1e0;
              }
            }
          }
          else {
            if (uVar11 == 0) goto LAB_00839df4;
            FUN_032260f8(&local_fb0,&local_280,0x200);
            auVar74._0_8_ = FUN_0322b1e0(&local_fb0,"Compression method #");
            auVar74._0_8_ =
                 FUN_0322b250(auVar74._0_8_,
                              *(ushort *)(*plVar45 + (ulong)*(byte *)(*plVar42 + lVar19 * 4) * 2) >>
                              4 & 3);
            FUN_0322b1e0(auVar74._0_8_," not implemented");
            iVar18 = FUN_03226f50(0x902f09ed,&local_280,
                                  "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                                  ,0x95);
            if (iVar18 != 0) {
              CallSupervisor(0x26);
            }
            FUN_032261b0(&local_fb0);
            lVar27 = *plVar45;
            lVar30 = *plVar42;
          }
        }
LAB_0083a20c:
        pbVar40 = (byte *)(lVar30 + lVar19 * 4);
        *puVar1 = uVar41;
        uVar22 = (ulong)*pbVar40;
        if ((*(ushort *)(lVar27 + uVar22 * 2) & 0xc0) != 0) {
          uVar83 = (uint)*(ushort *)(lVar27 + uVar22 * 2 + 4) << 0x10;
        }
        iVar18 = 1;
        *puVar2 = uVar83;
        local_dd8[lVar43] = 1;
        plVar28 = local_dd0 + lVar43;
        *plVar28 = (long)pfVar35;
        uVar41 = *(ushort *)(lVar27 + (ulong)*pbVar40 * 2) & 0xf;
        uVar21 = uVar41 << 1;
        if (2 < uVar41) {
          uVar21 = 7;
        }
        *puVar3 = uVar21;
        if ((char)plVar25[6] != '\0') {
          *(uint *)(plVar25 + 7) = uVar83;
          FUN_00cb0560(pfVar35,*puVar1,*(undefined4 *)((long)plVar25 + 0x34),plVar25 + 8,plVar25 + 7
                       ,plVar25 + 10);
          iVar18 = 1;
        }
      }
      if ((char)plVar25[6] != '\0') {
        *plVar28 = (long)pfVar35;
        if (iVar18 == 1) {
          uVar41 = *puVar1;
          if (0 < (int)uVar41) goto LAB_00839a2c;
        }
        else {
          uVar41 = 8;
LAB_00839a2c:
          auVar74 = *(undefined1 (*) [16])(plVar25 + 10);
          fVar79 = (float)plVar25[8];
          fVar80 = (float)((ulong)plVar25[8] >> 0x20);
          fVar81 = (float)plVar25[9];
          fVar61 = auVar74._0_4_;
          fVar62 = auVar74._4_4_;
          fVar69 = auVar74._8_4_;
          if (uVar41 == 1) {
            lVar27 = 0;
          }
          else {
            lVar27 = 0;
            pauVar32 = (undefined1 (*) [12])(local_ce4 + lVar43 * 0x150 + -0x14);
            do {
              lVar27 = lVar27 + 2;
              auVar47 = pauVar32[-1];
              *(ulong *)pauVar32[-1] =
                   CONCAT44(fVar62 + fVar80 * auVar47._4_4_,fVar61 + fVar79 * auVar47._0_4_);
              *(float *)(pauVar32[-1] + 8) = fVar69 + fVar81 * auVar47._8_4_;
              auVar47 = *pauVar32;
              *(ulong *)*pauVar32 =
                   CONCAT44(fVar62 + fVar80 * auVar47._4_4_,fVar61 + fVar79 * auVar47._0_4_);
              *(float *)(*pauVar32 + 8) = fVar69 + fVar81 * auVar47._8_4_;
              pauVar32 = pauVar32 + 2;
            } while ((ulong)uVar41 - ((ulong)uVar41 & 1) != lVar27);
          }
          if ((uVar41 & 1) != 0) {
            pauVar32 = (undefined1 (*) [12])(local_ce4 + lVar43 * 0x150 + lVar27 * 3 + -0x17);
            auVar47 = *pauVar32;
            *(ulong *)*pauVar32 =
                 CONCAT44(fVar62 + fVar80 * auVar47._4_4_,fVar61 + fVar79 * auVar47._0_4_);
            *(float *)(*pauVar32 + 8) = fVar69 + fVar81 * auVar47._8_4_;
          }
        }
        *puVar2 = *(uint *)(plVar25 + 7);
      }
    }
    if (lVar43 != 0) break;
    lVar43 = 1;
    plVar25 = local_ec8;
  } while( true );
  if (0 < local_dd8[0]) {
    puVar46 = (ulong *)((ulong)&local_f70 | 4);
    lVar43 = 0;
    puVar44 = (ulong *)((ulong)&local_f60 | 4);
    uVar41 = local_68[0] << 1;
    do {
      uVar21 = uVar41 | (uint)lVar43 | *(int *)(param_1 + 0x94) << 8;
      lVar24 = *(long *)(param_1 + 0x150);
      lVar27 = *(long *)(lVar24 + 0x28);
      if (lVar27 == 0) {
LAB_0083a378:
        lVar27 = local_dd0[1];
        local_db8 = (undefined8 *)(local_dd0[0] + (ulong)((uint)lVar43 << 2) * 0xc);
        lVar30 = (long)local_dd8[1];
        iVar18 = *(int *)(*(long *)(param_1 + 0x50) + 0x34) + *(int *)(lVar24 + 0x1c);
        local_e48 = CONCAT44(iVar18,(uVar21 + 1 << (ulong)(-iVar18 & 0x1f)) - 1 |
                                    *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)(lVar24 + 0x1c) * 4)
                                    & *(uint *)(lVar24 + 0x18));
        if (0 < local_dd8[1]) {
          uVar21 = local_68[1] << 1;
          bVar16 = local_2b8[0] == 4;
          bVar17 = local_2b8[1] == 4;
          uVar22 = 0;
          lVar24 = 0;
          do {
            uVar83 = uVar21 | (uint)lVar24 | *(int *)(param_1 + 0x124) << 8;
            lVar23 = *(long *)(param_1 + 0x160);
            lVar19 = *(long *)(lVar23 + 0x28);
            if (lVar19 == 0) {
LAB_0083a498:
              plVar25 = *(long **)(param_1 + 0x140);
              local_f60 = plVar25[2];
              lStack_f58 = plVar25[3];
              local_f70 = **(undefined8 **)(param_1 + 0x168);
              uStack_f68 = (*(undefined8 **)(param_1 + 0x168))[1];
              iVar18 = *(int *)(*(long *)(param_1 + 0xe0) + 0x34) + *(int *)(lVar23 + 0x1c);
              local_ea8 = CONCAT44(iVar18,(uVar83 + 1 << (ulong)(-iVar18 & 0x1f)) - 1 |
                                          *(uint *)(PTR_DAT_047d1a60 +
                                                   (long)*(int *)(lVar23 + 0x1c) * 4) &
                                          *(uint *)(lVar23 + 0x18));
              plVar25 = (long *)*plVar25;
              if (plVar25 != (long *)0x0) {
                (**(code **)(*plVar25 + 0x40))
                          (plVar25,local_2bc[0],5,**(undefined8 **)(param_1 + 0x150),
                           (*(undefined8 **)(param_1 + 0x150))[1],*(undefined8 *)(param_1 + 0x148),
                           local_e48 & 0xffffffff,0,&local_f60);
                (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x140) + 0x40))
                          ((long *)**(undefined8 **)(param_1 + 0x140),local_2bc[1],5,
                           **(undefined8 **)(param_1 + 0x160),(*(undefined8 **)(param_1 + 0x160))[1]
                           ,*(undefined8 *)(param_1 + 0x158),local_ea8 & 0xffffffff,0,&local_f70);
                lVar19 = *(long *)(param_1 + 0x140);
                if (*(long *)(lVar19 + 8) != 0) {
                  _local_280 = CONCAT62(stack0xfffffffffffffd82,(undefined2)local_f60);
                  uVar20 = *puVar44;
                  *(int *)((ulong *)((ulong)&local_280 | 4) + 1) = (int)puVar44[1];
                  *(ulong *)((ulong)&local_280 | 4) = uVar20;
                  puVar26 = *(undefined8 **)(param_1 + 0x150);
                  local_270 = *puVar26;
                  uStack_268 = puVar26[1];
                  local_260 = (undefined4)puVar26[2];
                  uStack_25c = (undefined4)((ulong)puVar26[2] >> 0x20);
                  uStack_258 = (float)local_e48;
                  local_fb0 = CONCAT62(local_fb0._2_6_,(undefined2)local_f70);
                  uVar20 = *puVar46;
                  local_250 = 0;
                  *(int *)((ulong *)((ulong)&local_fb0 | 4) + 1) = (int)puVar46[1];
                  *(ulong *)((ulong)&local_fb0 | 4) = uVar20;
                  local_fa0 = **(undefined8 **)(param_1 + 0x160);
                  uStack_f98 = (*(undefined8 **)(param_1 + 0x160))[1];
                  local_f90 = *(undefined8 *)(param_1 + 0x158);
                  local_f88 = (undefined4)local_ea8;
                  local_f80 = 0;
                  plVar25 = *(long **)(lVar19 + 8);
                  uVar20 = (**(code **)(*plVar25 + 0x40))
                                     (plVar25,5,*(char *)(param_1 + 0x1f0) == '\0',&local_280,
                                      &local_fb0);
                  if ((uVar20 & 1) == 0) goto LAB_0083a444;
                }
              }
              local_d78 = (undefined1 *)(lVar27 + (uVar22 & 0xfffffffc) * 0xc);
              puVar26 = (undefined8 *)(param_1 + 0x170);
              if (bVar16 || bVar17) {
                puVar26 = &local_fb0;
                FUN_031cc66c(&local_fb0,local_ea0,local_e40);
              }
              lVar19 = *(long *)(param_1 + 0x140);
              plVar25 = *(long **)(param_1 + 0x1f8);
              if ((*(byte *)(plVar25 + 1) >> 1 & 1) == 0) {
                local_290 = plVar25[2];
                uVar20 = (**(code **)(**(long **)(param_1 + 0x138) + (ulong)local_dc0[0] * 0x38 +
                                      (ulong)local_d80[0] * 8 + 0x3cb8))
                                   (local_dc0,local_d80,puVar26,*(byte *)(plVar25 + 1),local_2b0);
                if ((uVar20 & 1) != 0) {
                  local_204 = 0;
                  local_208 = 5;
                  local_260 = (undefined4)local_290;
                  fVar63 = local_2b0._0_4_;
                  fVar61 = local_2b0._4_4_;
                  fVar69 = (float)*(undefined8 *)(local_ea0 + 4);
                  fVar79 = (float)((ulong)*(undefined8 *)(local_ea0 + 4) >> 0x20);
                  fVar80 = (float)*(undefined8 *)(local_ea0 + 6);
                  fVar81 = (float)((ulong)*(undefined8 *)(local_ea0 + 6) >> 0x20);
                  fVar62 = local_2b0._8_4_;
                  fVar65 = (float)*(undefined8 *)(local_ea0 + 8);
                  fVar68 = (float)((ulong)*(undefined8 *)(local_ea0 + 8) >> 0x20);
                  fVar77 = (float)*(undefined8 *)(local_ea0 + 10);
                  fVar78 = (float)((ulong)*(undefined8 *)(local_ea0 + 10) >> 0x20);
                  _fStack_278 = CONCAT44((float)((ulong)*(undefined8 *)(local_ea0 + 0xe) >> 0x20) +
                                         fVar78 * fVar62 + local_ea0[3] * fVar63 + fVar81 * fVar61,
                                         (float)*(undefined8 *)(local_ea0 + 0xe) +
                                         fVar77 * fVar62 + local_ea0[2] * fVar63 + fVar80 * fVar61);
                  _local_280 = CONCAT44((float)((ulong)*(undefined8 *)(local_ea0 + 0xc) >> 0x20) +
                                        fVar68 * fVar62 + local_ea0[1] * fVar63 + fVar79 * fVar61,
                                        (float)*(undefined8 *)(local_ea0 + 0xc) +
                                        fVar65 * fVar62 + *local_ea0 * fVar63 + fVar69 * fVar61);
                  auVar60._0_8_ =
                       CONCAT44(fVar68 * fStack_298 +
                                (float)((ulong)*(undefined8 *)local_ea0 >> 0x20) * local_2a0 +
                                fVar79 * fStack_29c,
                                fVar65 * fStack_298 +
                                (float)*(undefined8 *)local_ea0 * local_2a0 + fVar69 * fStack_29c);
                  auVar60._8_4_ =
                       fVar77 * fStack_298 +
                       (float)*(undefined8 *)(local_ea0 + 2) * local_2a0 + fVar80 * fStack_29c;
                  auVar60._12_4_ =
                       fVar78 * fStack_298 +
                       (float)((ulong)*(undefined8 *)(local_ea0 + 2) >> 0x20) * local_2a0 +
                       fVar81 * fStack_29c;
                  uStack_268 = auVar60._8_8_;
                  fStack_248 = (float)local_e48;
                  local_240 = (undefined2)local_f60;
                  local_23c = (undefined4)*puVar44;
                  uStack_238 = *puVar44 >> 0x20;
                  fStack_244 = (float)CONCAT31(fStack_244._1_3_,0xf);
                  if (local_e60 == 0) {
                    uStack_258 = 0xffffffff;
                    uStack_254 = 0xffffffff;
                    local_250 = CONCAT44(local_250._4_4_,0xffffff);
                    if (local_ec0 == 0) goto LAB_0083a7ec;
LAB_0083a7c8:
                    local_230 = *(undefined8 *)(local_ec0 + 0xb0);
                    local_228 = *(undefined4 *)(local_ec0 + 0x50);
                  }
                  else {
                    uStack_258 = (undefined4)*(undefined8 *)(local_e60 + 0xb0);
                    uStack_254 = (undefined4)((ulong)*(undefined8 *)(local_e60 + 0xb0) >> 0x20);
                    local_250 = CONCAT44(local_250._4_4_,*(undefined4 *)(local_e60 + 0x50));
                    if (local_ec0 != 0) goto LAB_0083a7c8;
LAB_0083a7ec:
                    local_228 = 0xffffff;
                    local_230 = 0xffffffffffffffff;
                  }
                  local_220 = (undefined4)local_ea8;
                  local_218 = (undefined2)local_f70;
                  local_214 = (undefined4)*puVar46;
                  uStack_210 = *puVar46 >> 0x20;
                  local_21c = *(undefined1 *)(lVar19 + 0x20);
                  local_270 = auVar60._0_8_;
                  (**(code **)(*plVar25 + 0x28))(plVar25,&local_280);
                }
              }
              else {
                (**(code **)(*plVar25 + 0x30))
                          (plVar25,**(long **)(param_1 + 0x138),lVar19,local_dc0,&local_f60,
                           &local_e60,local_d80,&local_f70,&local_ec0,puVar26);
              }
            }
            else {
              uVar20 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar19 + 0x18) * 0x40 + 0x4020))
                                 (lVar19,uVar83 << (ulong)(*(uint *)(param_1 + 0x134) & 0x1f));
              if ((uVar20 & 1) != 0) {
                lVar23 = *(long *)(param_1 + 0x160);
                goto LAB_0083a498;
              }
            }
LAB_0083a444:
            lVar24 = lVar24 + 1;
            uVar22 = uVar22 + 4;
          } while (lVar24 < lVar30);
        }
      }
      else {
        uVar22 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x40 +
                             0x4020))(lVar27,uVar21 << (ulong)(*(uint *)(param_1 + 0x130) & 0x1f));
        if ((uVar22 & 1) != 0) {
          lVar24 = *(long *)(param_1 + 0x150);
          goto LAB_0083a378;
        }
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 < local_dd8[0]);
  }
  return;
}


