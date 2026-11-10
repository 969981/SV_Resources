/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341664c; name: FUN_0341664c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0341664c(long param_1,long param_2,float *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ushort *puVar25;
  float *pfVar26;
  ushort *puVar27;
  ulong uVar28;
  uint uVar29;
  long *plVar30;
  ushort *puVar31;
  long lVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  ulong local_200;
  ulong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  
  puVar7 = PTR_DAT_047e2fd0;
  lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(9,(ulong)*(ushort *)(param_1 + 0x30) << 6,0x10);
  *(long *)(param_1 + 0x20) = lVar14;
  if (lVar14 == 0) {
    return 0x34;
  }
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  if (*(char *)(param_1 + 0x61) == '\0') {
LAB_034166e8:
    if (*(short *)(param_1 + 0x30) != 0) {
      uVar28 = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x10);
        puVar25 = (ushort *)(*(long *)(param_1 + 8) + uVar28 * 8);
        puVar18 = (undefined8 *)(lVar14 + (ulong)*puVar25 * 0xc);
        local_c8 = *puVar18;
        local_c0 = *(float *)(puVar18 + 1);
        puVar18 = (undefined8 *)(lVar14 + (ulong)puVar25[1] * 0xc);
        local_d8 = *puVar18;
        local_d0 = *(float *)(puVar18 + 1);
        puVar18 = (undefined8 *)(lVar14 + (ulong)puVar25[2] * 0xc);
        local_e8 = *puVar18;
        local_e0 = *(float *)(puVar18 + 1);
        lVar14 = 0;
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar14 = *(long *)(param_1 + 0x20) + uVar28 * 0x40;
          *(long *)(lVar14 + 0x30) = param_1;
          *(undefined8 *)(lVar14 + 0x38) = 0;
          lVar14 = *(long *)(param_1 + 0x20);
        }
        iVar13 = FUN_034177fc(lVar14 + uVar28 * 0x40,&local_c8,&local_d8,&local_e8);
        if (iVar13 == 1) {
          lVar14 = *(long *)(param_1 + 0x20) + uVar28 * 0x40;
          lVar21 = *(long *)(param_1 + 8);
          cVar3 = *(char *)(param_1 + 0x61);
          if (*(uint *)(param_1 + 0x58) != 0) {
            plVar30 = *(long **)(param_1 + 0x50);
            lVar32 = (ulong)*(uint *)(param_1 + 0x58) << 3;
            do {
              fVar35 = ((float)local_d8 - (float)local_c8) * ((float)local_d8 - (float)local_c8) +
                       (local_d8._4_4_ - local_c8._4_4_) * (local_d8._4_4_ - local_c8._4_4_) +
                       (local_d0 - local_c0) * (local_d0 - local_c0);
              fVar37 = ((float)local_e8 - (float)local_d8) * ((float)local_e8 - (float)local_d8) +
                       (local_e8._4_4_ - local_d8._4_4_) * (local_e8._4_4_ - local_d8._4_4_) +
                       (local_e0 - local_d0) * (local_e0 - local_d0);
              fVar43 = ((float)local_e8 - (float)local_c8) * ((float)local_e8 - (float)local_c8) +
                       (local_e8._4_4_ - local_c8._4_4_) * (local_e8._4_4_ - local_c8._4_4_) +
                       (local_e0 - local_c0) * (local_e0 - local_c0);
              if (fVar37 <= fVar43) {
                fVar37 = fVar43;
              }
              if (fVar35 <= fVar37) {
                fVar35 = fVar37;
              }
              pfVar26 = (float *)*plVar30;
              fVar43 = SQRT(fVar35) * 0.005;
              fVar38 = *pfVar26;
              fVar44 = pfVar26[1];
              fVar35 = pfVar26[2];
              fVar47 = pfVar26[3];
              fVar37 = ABS((fVar38 * (float)local_d8 + local_d8._4_4_ * fVar44 + local_d0 * fVar35)
                           - fVar47);
              bVar9 = false;
              bVar11 = false;
              if (ABS((fVar38 * (float)local_c8 + local_c8._4_4_ * fVar44 + local_c0 * fVar35) -
                      fVar47) < fVar43) {
                bVar9 = false;
                bVar11 = true;
                if (!NAN(fVar37) && !NAN(fVar43)) {
                  bVar9 = fVar37 < fVar43;
                  bVar11 = false;
                }
              }
              fVar37 = ABS((fVar38 * (float)local_e8 + local_e8._4_4_ * fVar44 + local_e0 * fVar35)
                           - fVar47);
              bVar10 = false;
              bVar12 = false;
              if (bVar9 != bVar11) {
                bVar10 = false;
                bVar12 = true;
                if (!NAN(fVar37) && !NAN(fVar43)) {
                  bVar10 = fVar37 < fVar43;
                  bVar12 = false;
                }
              }
              if (bVar10 != bVar12) {
                fVar35 = pfVar26[6];
                fVar37 = pfVar26[7];
                if ((uint)fVar37 <= (uint)fVar35) {
                  iVar13 = (int)fVar37 + ((uint)fVar37 >> 1);
                  if (fVar37 == 0.0) {
                    iVar13 = 1;
                  }
                  fVar37 = (float)(iVar13 + (int)fVar37);
                  lVar15 = (**(code **)(puVar7 + 0x20))
                                     (9,*(undefined8 *)(pfVar26 + 4),(ulong)(uint)fVar37 << 3);
                  if (lVar15 == 0) goto LAB_03416890;
                  *(long *)(pfVar26 + 4) = lVar15;
                  pfVar26[7] = fVar37;
                }
                if ((uint)fVar35 < (uint)fVar37) {
                  fVar37 = pfVar26[6];
                  pfVar26[6] = (float)((int)fVar37 + 1);
                  if (*(long *)(pfVar26 + 4) != 0) {
                    *(long *)(*(long *)(pfVar26 + 4) + (ulong)(uint)fVar37 * 8) = lVar14;
                    *(float **)(lVar14 + 0x38) = pfVar26;
                    goto LAB_03417270;
                  }
                }
              }
LAB_03416890:
              plVar30 = plVar30 + 1;
              lVar32 = lVar32 + -8;
            } while (lVar32 != 0);
          }
          fVar8 = local_c0;
          fVar47 = local_d0;
          fVar43 = local_e0;
          fVar36 = (float)local_c8;
          fVar48 = local_c8._4_4_;
          fVar38 = (float)local_d8;
          fVar44 = local_d8._4_4_;
          fVar37 = (float)local_e8;
          fVar35 = local_e8._4_4_;
          for (puVar18 = *(undefined8 **)param_3; puVar18 != (undefined8 *)0x0;
              puVar18 = (undefined8 *)puVar18[0x400]) {
            if (puVar18[0x402] != 0) goto LAB_03416ee0;
          }
          puVar18 = (undefined8 *)(**(code **)(puVar7 + 0x18))(9,0x2018,0x10);
          if (puVar18 != (undefined8 *)0x0) {
            puVar18[0x400] = 0;
            *(undefined4 *)(puVar18 + 0x401) = 0;
            *puVar18 = 0;
            puVar18[8] = puVar18;
            puVar18[0x10] = puVar18 + 8;
            puVar18[0x18] = puVar18 + 0x10;
            puVar18[0x20] = puVar18 + 0x18;
            puVar18[0x28] = puVar18 + 0x20;
            puVar18[0x30] = puVar18 + 0x28;
            puVar18[0x38] = puVar18 + 0x30;
            puVar18[0x40] = puVar18 + 0x38;
            puVar18[0x48] = puVar18 + 0x40;
            puVar18[0x50] = puVar18 + 0x48;
            puVar18[0x58] = puVar18 + 0x50;
            puVar18[0x60] = puVar18 + 0x58;
            puVar18[0x68] = puVar18 + 0x60;
            puVar18[0x70] = puVar18 + 0x68;
            puVar18[0x78] = puVar18 + 0x70;
            puVar18[0x80] = puVar18 + 0x78;
            puVar18[0x88] = puVar18 + 0x80;
            puVar18[0x90] = puVar18 + 0x88;
            puVar18[0x98] = puVar18 + 0x90;
            puVar18[0xa0] = puVar18 + 0x98;
            puVar18[0xa8] = puVar18 + 0xa0;
            puVar18[0xb0] = puVar18 + 0xa8;
            puVar18[0xb8] = puVar18 + 0xb0;
            puVar18[0xc0] = puVar18 + 0xb8;
            puVar18[200] = puVar18 + 0xc0;
            puVar18[0xd0] = puVar18 + 200;
            puVar18[0xd8] = puVar18 + 0xd0;
            puVar18[0xe0] = puVar18 + 0xd8;
            puVar18[0xe8] = puVar18 + 0xe0;
            puVar18[0xf0] = puVar18 + 0xe8;
            puVar18[0xf8] = puVar18 + 0xf0;
            puVar18[0x100] = puVar18 + 0xf8;
            puVar18[0x108] = puVar18 + 0x100;
            puVar18[0x110] = puVar18 + 0x108;
            puVar18[0x118] = puVar18 + 0x110;
            puVar18[0x120] = puVar18 + 0x118;
            puVar18[0x128] = puVar18 + 0x120;
            puVar18[0x130] = puVar18 + 0x128;
            puVar18[0x138] = puVar18 + 0x130;
            puVar18[0x140] = puVar18 + 0x138;
            puVar18[0x148] = puVar18 + 0x140;
            puVar18[0x150] = puVar18 + 0x148;
            puVar18[0x158] = puVar18 + 0x150;
            puVar18[0x160] = puVar18 + 0x158;
            puVar18[0x168] = puVar18 + 0x160;
            puVar18[0x170] = puVar18 + 0x168;
            puVar18[0x178] = puVar18 + 0x170;
            puVar18[0x180] = puVar18 + 0x178;
            puVar18[0x188] = puVar18 + 0x180;
            puVar18[400] = puVar18 + 0x188;
            puVar18[0x198] = puVar18 + 400;
            puVar18[0x1a0] = puVar18 + 0x198;
            puVar18[0x1a8] = puVar18 + 0x1a0;
            puVar18[0x1b0] = puVar18 + 0x1a8;
            puVar18[0x1b8] = puVar18 + 0x1b0;
            puVar18[0x1c0] = puVar18 + 0x1b8;
            puVar18[0x1c8] = puVar18 + 0x1c0;
            puVar18[0x1d0] = puVar18 + 0x1c8;
            puVar18[0x1d8] = puVar18 + 0x1d0;
            puVar18[0x1e0] = puVar18 + 0x1d8;
            puVar18[0x1e8] = puVar18 + 0x1e0;
            puVar18[0x1f0] = puVar18 + 0x1e8;
            puVar18[0x1f8] = puVar18 + 0x1f0;
            puVar18[0x200] = puVar18 + 0x1f8;
            puVar18[0x208] = puVar18 + 0x200;
            puVar18[0x210] = puVar18 + 0x208;
            puVar18[0x218] = puVar18 + 0x210;
            puVar18[0x220] = puVar18 + 0x218;
            puVar18[0x228] = puVar18 + 0x220;
            puVar18[0x230] = puVar18 + 0x228;
            puVar18[0x238] = puVar18 + 0x230;
            puVar18[0x240] = puVar18 + 0x238;
            puVar18[0x248] = puVar18 + 0x240;
            puVar18[0x250] = puVar18 + 0x248;
            puVar18[600] = puVar18 + 0x250;
            puVar18[0x260] = puVar18 + 600;
            puVar18[0x268] = puVar18 + 0x260;
            puVar18[0x270] = puVar18 + 0x268;
            puVar18[0x278] = puVar18 + 0x270;
            puVar18[0x280] = puVar18 + 0x278;
            puVar18[0x288] = puVar18 + 0x280;
            puVar18[0x290] = puVar18 + 0x288;
            puVar18[0x298] = puVar18 + 0x290;
            puVar18[0x2a0] = puVar18 + 0x298;
            puVar18[0x2a8] = puVar18 + 0x2a0;
            puVar18[0x2b0] = puVar18 + 0x2a8;
            puVar18[0x2b8] = puVar18 + 0x2b0;
            puVar18[0x2c0] = puVar18 + 0x2b8;
            puVar18[0x2c8] = puVar18 + 0x2c0;
            puVar18[0x2d0] = puVar18 + 0x2c8;
            puVar18[0x2d8] = puVar18 + 0x2d0;
            puVar18[0x2e0] = puVar18 + 0x2d8;
            puVar18[0x2e8] = puVar18 + 0x2e0;
            puVar18[0x2f0] = puVar18 + 0x2e8;
            puVar18[0x2f8] = puVar18 + 0x2f0;
            puVar18[0x300] = puVar18 + 0x2f8;
            puVar18[0x308] = puVar18 + 0x300;
            puVar18[0x310] = puVar18 + 0x308;
            puVar18[0x318] = puVar18 + 0x310;
            puVar18[800] = puVar18 + 0x318;
            puVar18[0x328] = puVar18 + 800;
            puVar18[0x330] = puVar18 + 0x328;
            puVar18[0x338] = puVar18 + 0x330;
            puVar18[0x340] = puVar18 + 0x338;
            puVar18[0x348] = puVar18 + 0x340;
            puVar18[0x350] = puVar18 + 0x348;
            puVar18[0x358] = puVar18 + 0x350;
            puVar18[0x360] = puVar18 + 0x358;
            puVar18[0x368] = puVar18 + 0x360;
            puVar18[0x370] = puVar18 + 0x368;
            puVar18[0x378] = puVar18 + 0x370;
            puVar18[0x380] = puVar18 + 0x378;
            puVar18[0x388] = puVar18 + 0x380;
            puVar18[0x390] = puVar18 + 0x388;
            puVar18[0x398] = puVar18 + 0x390;
            puVar18[0x3a0] = puVar18 + 0x398;
            puVar18[0x3a8] = puVar18 + 0x3a0;
            puVar18[0x3b0] = puVar18 + 0x3a8;
            puVar18[0x3b8] = puVar18 + 0x3b0;
            puVar18[0x3c0] = puVar18 + 0x3b8;
            puVar18[0x3c8] = puVar18 + 0x3c0;
            puVar18[0x3d0] = puVar18 + 0x3c8;
            puVar18[0x3d8] = puVar18 + 0x3d0;
            puVar18[0x3e0] = puVar18 + 0x3d8;
            puVar18[1000] = puVar18 + 0x3e0;
            puVar18[0x3f0] = puVar18 + 1000;
            puVar18[0x3f8] = puVar18 + 0x3f0;
            puVar18[0x402] = puVar18 + 0x3f8;
            *(undefined4 *)(puVar18 + 0x401) = 0x80;
            if (*(long *)param_3 == 0) {
              *(undefined8 **)param_3 = puVar18;
              puVar18[0x400] = 0;
            }
            else {
              puVar18[0x400] = *(long *)param_3;
              *(undefined8 **)param_3 = puVar18;
            }
LAB_03416ee0:
            pfVar26 = (float *)puVar18[0x402];
            if (pfVar26 != (float *)0x0) {
              if (*(long *)pfVar26 == 0) {
                puVar18[0x402] = 0;
              }
              else {
                puVar18[0x402] = *(long *)pfVar26;
              }
              *(int *)(puVar18 + 0x401) = *(int *)(puVar18 + 0x401) + -1;
              pfVar26[0xc] = 0.0;
              pfVar26[0xd] = 0.0;
              pfVar26[0xe] = 0.0;
              pfVar26[0xf] = 0.0;
              pfVar26[8] = 0.0;
              pfVar26[9] = 0.0;
              pfVar26[10] = 0.0;
              pfVar26[0xb] = 0.0;
              pfVar26[4] = 0.0;
              pfVar26[5] = 0.0;
              pfVar26[6] = 0.0;
              pfVar26[7] = 0.0;
              fVar34 = (fVar43 - fVar8) * (fVar44 - fVar48) - (fVar35 - fVar48) * (fVar47 - fVar8);
              fVar47 = (fVar37 - fVar36) * (fVar47 - fVar8) - (fVar43 - fVar8) * (fVar38 - fVar36);
              fVar44 = (fVar35 - fVar48) * (fVar38 - fVar36) - (fVar37 - fVar36) * (fVar44 - fVar48)
              ;
              fVar43 = SQRT(fVar44 * fVar44 + fVar34 * fVar34 + fVar47 * fVar47);
              fVar38 = 0.0;
              fVar37 = 0.0;
              fVar35 = 0.0;
              if (fVar43 != 0.0) {
                fVar43 = 1.0 / fVar43;
                fVar37 = fVar34 * fVar43;
                fVar35 = fVar47 * fVar43;
                fVar38 = fVar44 * fVar43;
              }
              fVar47 = fVar37 * fVar36 + fVar48 * fVar35 + fVar8 * fVar38;
              *pfVar26 = fVar37;
              pfVar26[1] = fVar35;
              pfVar26[2] = fVar38;
              pfVar26[3] = fVar47;
              fVar43 = ((float)local_d8 - (float)local_c8) * ((float)local_d8 - (float)local_c8) +
                       (local_d8._4_4_ - local_c8._4_4_) * (local_d8._4_4_ - local_c8._4_4_) +
                       (local_d0 - local_c0) * (local_d0 - local_c0);
              fVar36 = ABS(((float)local_d8 * fVar37 - fVar47) + fVar35 * local_d8._4_4_ +
                           fVar38 * local_d0);
              fVar44 = ((float)local_e8 - (float)local_d8) * ((float)local_e8 - (float)local_d8) +
                       (local_e8._4_4_ - local_d8._4_4_) * (local_e8._4_4_ - local_d8._4_4_) +
                       (local_e0 - local_d0) * (local_e0 - local_d0);
              fVar48 = ((float)local_e8 - (float)local_c8) * ((float)local_e8 - (float)local_c8) +
                       (local_e8._4_4_ - local_c8._4_4_) * (local_e8._4_4_ - local_c8._4_4_) +
                       (local_e0 - local_c0) * (local_e0 - local_c0);
              if (fVar44 <= fVar48) {
                fVar44 = fVar48;
              }
              if (fVar43 <= fVar44) {
                fVar43 = fVar44;
              }
              fVar44 = SQRT(fVar43) * 0.005;
              fVar43 = ABS(((float)local_e8 * fVar37 - fVar47) + fVar35 * local_e8._4_4_ +
                           fVar38 * local_e0);
              bVar9 = false;
              bVar11 = false;
              if (ABS(((float)local_c8 * fVar37 - fVar47) + fVar35 * local_c8._4_4_ +
                      fVar38 * local_c0) < fVar44) {
                bVar9 = false;
                bVar11 = true;
                if (!NAN(fVar36) && !NAN(fVar44)) {
                  bVar9 = fVar36 < fVar44;
                  bVar11 = false;
                }
              }
              bVar10 = false;
              bVar12 = false;
              if (bVar9 != bVar11) {
                bVar10 = false;
                bVar12 = true;
                if (!NAN(fVar43) && !NAN(fVar44)) {
                  bVar10 = fVar43 < fVar44;
                  bVar12 = false;
                }
              }
              if ((bVar10 != bVar12) && (lVar32 = (**(code **)(puVar7 + 0x20))(9,0,8), lVar32 != 0))
              {
                fVar37 = pfVar26[6];
                pfVar26[6] = (float)((int)fVar37 + 1);
                pfVar26[7] = 1.4013e-45;
                *(long *)(pfVar26 + 4) = lVar32;
                *(long *)(lVar32 + (ulong)(uint)fVar37 * 8) = lVar14;
                *(float **)(lVar14 + 0x38) = pfVar26;
              }
              if (*(long *)(lVar14 + 0x38) == 0) {
                plVar16 = *(long **)(pfVar26 + 4);
                plVar30 = plVar16;
                if (pfVar26[6] != 0.0) {
                  do {
                    plVar17 = plVar30 + 1;
                    *(undefined8 *)(*plVar30 + 0x38) = 0;
                    plVar16 = *(long **)(pfVar26 + 4);
                    plVar30 = plVar17;
                  } while (plVar17 != plVar16 + (uint)pfVar26[6]);
                }
                if (plVar16 != (long *)0x0) {
                  pfVar26[6] = 0.0;
                  (**(code **)(puVar7 + 0x30))(9);
                  pfVar26[4] = 0.0;
                  pfVar26[5] = 0.0;
                  pfVar26[7] = 0.0;
                }
                plVar16 = *(long **)(pfVar26 + 8);
                plVar30 = plVar16;
                if (pfVar26[10] != 0.0) {
                  do {
                    plVar17 = plVar30 + 1;
                    *(undefined8 *)(*plVar30 + 0x38) = 0;
                    plVar16 = *(long **)(pfVar26 + 8);
                    plVar30 = plVar17;
                  } while (plVar17 != plVar16 + (uint)pfVar26[10]);
                }
                if (plVar16 != (long *)0x0) {
                  pfVar26[10] = 0.0;
                  (**(code **)(puVar7 + 0x30))(9);
                  pfVar26[8] = 0.0;
                  pfVar26[9] = 0.0;
                  pfVar26[0xb] = 0.0;
                }
                if (*(long *)(pfVar26 + 0xc) != 0) {
                  pfVar26[0xe] = 0.0;
                  (**(code **)(puVar7 + 0x30))(9);
                  pfVar26[0xc] = 0.0;
                  pfVar26[0xd] = 0.0;
                  pfVar26[0xf] = 0.0;
                }
                pfVar20 = *(float **)param_3;
                if (pfVar20 == (float *)0x0) {
LAB_034171c0:
                  if (_DAT_00002010 == (float *)0x0) {
                    _DAT_00002010 = pfVar26;
                    pfVar26[0] = 0.0;
                    pfVar26[1] = 0.0;
                  }
                  else {
                    *(float **)pfVar26 = _DAT_00002010;
                    _DAT_00002010 = pfVar26;
                  }
                  _DAT_00002008 = _DAT_00002008 + 1;
                }
                else {
                  if ((pfVar26 < pfVar20) || (pfVar20 + 0x800 <= pfVar26)) {
                    do {
                      pfVar19 = pfVar20;
                      pfVar20 = *(float **)(pfVar19 + 0x800);
                      if (pfVar20 == (float *)0x0) goto LAB_034171c0;
                    } while ((pfVar26 < pfVar20) || (pfVar20 + 0x800 <= pfVar26));
                  }
                  else {
                    pfVar19 = (float *)0x0;
                  }
                  if (*(long *)(pfVar20 + 0x804) == 0) {
                    *(float **)(pfVar20 + 0x804) = pfVar26;
                    pfVar26[0] = 0.0;
                    pfVar26[1] = 0.0;
                  }
                  else {
                    *(long *)pfVar26 = *(long *)(pfVar20 + 0x804);
                    *(float **)(pfVar20 + 0x804) = pfVar26;
                  }
                  fVar37 = pfVar20[0x802];
                  pfVar20[0x802] = (float)((int)fVar37 + 1);
                  if ((float)((int)fVar37 + 1) == 1.79366e-43) {
                    pfVar26 = param_3;
                    if (*(float **)param_3 != pfVar20) {
                      pfVar26 = pfVar19 + 0x800;
                    }
                    *(long *)pfVar26 = *(long *)(pfVar20 + 0x800);
                    (**(code **)(puVar7 + 0x30))(9);
                  }
                }
              }
              else {
                uVar1 = *(uint *)(param_1 + 0x58);
                uVar29 = *(uint *)(param_1 + 0x5c);
                if (uVar29 <= uVar1) {
                  iVar13 = uVar29 + (uVar29 >> 1);
                  if (uVar29 == 0) {
                    iVar13 = 1;
                  }
                  uVar29 = iVar13 + uVar29;
                  lVar32 = (**(code **)(puVar7 + 0x20))
                                     (9,*(undefined8 *)(param_1 + 0x50),(ulong)uVar29 << 3);
                  if (lVar32 == 0) goto LAB_03417270;
                  *(long *)(param_1 + 0x50) = lVar32;
                  *(uint *)(param_1 + 0x5c) = uVar29;
                }
                if (uVar1 < uVar29) {
                  uVar29 = *(uint *)(param_1 + 0x58);
                  *(uint *)(param_1 + 0x58) = uVar29 + 1;
                  if (*(long *)(param_1 + 0x50) != 0) {
                    *(float **)(*(long *)(param_1 + 0x50) + (ulong)uVar29 * 8) = pfVar26;
                  }
                }
              }
            }
          }
LAB_03417270:
          plVar30 = (long *)(lVar14 + 0x38);
          if (*plVar30 == 0) {
            iVar13 = 2;
          }
          else {
            puVar25 = (ushort *)(lVar21 + uVar28 * 8);
            lVar21 = *(long *)(param_1 + 0x10);
            pfVar26 = (float *)(lVar21 + (ulong)*puVar25 * 0xc);
            fVar43 = *pfVar26;
            fVar37 = pfVar26[1];
            fVar35 = pfVar26[2];
            puVar31 = puVar25 + 1;
            pfVar26 = (float *)(lVar21 + (ulong)*puVar31 * 0xc);
            fVar38 = *pfVar26;
            puVar27 = puVar25 + 2;
            if (*(long *)(param_2 + 0x10) != 0) {
              pfVar20 = (float *)(lVar21 + (ulong)*puVar27 * 0xc);
              uVar46 = NEON_fminnm(fVar37,0x7f7fffff);
              uVar45 = NEON_fminnm(fVar43,0x7f7fffff);
              uVar41 = NEON_fminnm(fVar35,0x7f7fffff);
              if (fVar43 <= -3.4028235e+38) {
                fVar43 = -3.4028235e+38;
              }
              if (fVar37 <= -3.4028235e+38) {
                fVar37 = -3.4028235e+38;
              }
              if (fVar35 <= -3.4028235e+38) {
                fVar35 = -3.4028235e+38;
              }
              uVar45 = NEON_fminnm(uVar45,fVar38);
              uVar46 = NEON_fminnm(uVar46,pfVar26[1]);
              if (fVar43 <= fVar38) {
                fVar43 = fVar38;
              }
              fVar38 = *pfVar20;
              fVar44 = pfVar20[1];
              uVar45 = NEON_fminnm(uVar45,fVar38);
              if (fVar43 <= fVar38) {
                fVar43 = fVar38;
              }
              auVar39 = NEON_fmov(0x3f800000,4);
              if (fVar37 <= fVar44) {
                fVar37 = fVar44;
              }
              fVar38 = pfVar20[2];
              uVar42 = NEON_fminnm(uVar41,pfVar26[2]);
              uVar41 = NEON_fminnm(uVar46,fVar44);
              uStack_1e0 = CONCAT44(fVar37,fVar43);
              if (fVar35 <= fVar38) {
                fVar35 = fVar38;
              }
              auVar40._0_8_ = CONCAT44(uVar41,uVar45);
              uStack_1d8 = CONCAT44(auVar39._12_4_,fVar35);
              uVar41 = NEON_fminnm(uVar42,fVar38);
              local_1d0 = 0;
              auVar40._8_4_ = uVar41;
              auVar40._12_4_ = auVar39._12_4_;
              local_1f8 = CONCAT44(local_1f8._4_4_,1);
              uStack_1e8 = auVar40._8_8_;
              local_1f0 = auVar40._0_8_;
              lStack_1c8 = lVar14;
              FUN_03418500(param_2 + 8,&local_1f0,(long *)(param_2 + 0x10),0,&local_1f8);
            }
            if (cVar3 != '\0') {
              uVar33 = (ulong)((long)puVar25 - *(long *)(param_1 + 8)) >> 3;
              FUN_03418260(*puVar25,*puVar31,uVar33 & 0xffffffff,*plVar30,&local_b8);
              FUN_03418260(*puVar31,*puVar27,uVar33 & 0xffffffff,*plVar30,&local_b8);
              FUN_03418260(*puVar27,*puVar25,uVar33 & 0xffffffff,*plVar30,&local_b8);
            }
            iVar13 = 1;
          }
        }
        else {
          snprintf((char *)&local_1f0,0x100,
                   "AK::SpatialAudio::SetGeometry - Triangle %i formed by vertices [%i, %i, %i] is too large.\n"
                   ,(int)uVar28,(uint)*puVar25,(uint)puVar25[1],(uint)puVar25[2]);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < *(ushort *)(param_1 + 0x30));
      if (iVar13 != 1) {
        FUN_0341791c(param_1,param_3);
        goto LAB_034177a8;
      }
    }
LAB_034173f0:
    if (*(char *)(param_1 + 0x61) == '\0') {
LAB_03417788:
      *(undefined2 *)(param_1 + 0x36) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x62) == '\0') {
        uVar28 = local_b0 & 0xffffffff;
        if ((int)local_b0 == 0) goto LAB_03417788;
        puVar18 = local_b8;
        do {
          if (*(short *)((long)puVar18 + 6) == -1) {
            if (1 < (uint)uVar28) {
              puVar23 = local_b8 + uVar28 * 3 + -3;
              uVar2 = *puVar23;
              uVar22 = puVar23[2];
              puVar18[1] = puVar23[1];
              puVar18[2] = uVar22;
              *puVar18 = uVar2;
            }
            uVar29 = (uint)uVar28 - 1;
            uVar28 = (ulong)uVar29;
            local_b0 = CONCAT44(local_b0._4_4_,uVar29);
          }
          else {
            puVar18 = puVar18 + 3;
          }
        } while (puVar18 != local_b8 + uVar28 * 3);
      }
      else {
        uVar28 = local_b0 & 0xffffffff;
      }
      *(short *)(param_1 + 0x36) = (short)uVar28;
      if ((uVar28 & 0xffff) != 0) {
        lVar14 = (**(code **)(puVar7 + 0x18))(9,((uint)uVar28 & 0xffff) << 7,0x10);
        puVar18 = local_b8;
        *(long *)(param_1 + 0x28) = lVar14;
        if (lVar14 == 0) {
          *(undefined2 *)(param_1 + 0x36) = 0;
          goto LAB_03417798;
        }
        if (*(short *)(param_1 + 0x36) != 0) {
          uVar28 = 0;
          do {
            puVar25 = (ushort *)(puVar18 + uVar28 * 3);
            uVar4 = *puVar25;
            uVar5 = puVar25[1];
            uVar33 = (ulong)puVar25[2];
            uVar6 = puVar25[3];
            lVar21 = *(long *)(puVar25 + 4);
            lVar32 = *(long *)(puVar25 + 8);
            if (lVar14 != 0) {
              puVar23 = (undefined8 *)(lVar14 + uVar28 * 0x80);
              puVar23[4] = 0;
              puVar23[5] = 0;
              puVar23[2] = 0;
              puVar23[3] = 0;
              puVar23[8] = 0;
              *(undefined1 *)(puVar23 + 9) = 0;
              *(undefined1 *)(puVar23 + 0xc) = 0;
              *puVar23 = 0;
              puVar23[1] = 0;
              puVar23[6] = param_1;
              puVar23[7] = 0;
              puVar23[10] = 0;
              puVar23[0xb] = 0;
              puVar23[0xd] = 0;
              puVar23[0xe] = 0;
              *(undefined8 *)((long)puVar23 + 0x75) = 0;
            }
            lVar14 = *(long *)(param_1 + 0x10);
            puVar23 = (undefined8 *)(lVar14 + (ulong)uVar4 * 0xc);
            local_1f0 = *puVar23;
            uStack_1e8 = CONCAT44(uStack_1e8._4_4_,*(undefined4 *)(puVar23 + 1));
            puVar23 = (undefined8 *)(lVar14 + (ulong)uVar5 * 0xc);
            local_c8 = *puVar23;
            local_c0 = *(float *)(puVar23 + 1);
            local_1f8 = *(ulong *)(*(long *)(param_1 + 8) + uVar33 * 8);
            uVar29 = (uint)uVar5;
            if (((uint)uVar4 == ((uint)local_1f8 & 0xffff)) ||
               (uVar24 = local_1f8, uVar29 == ((uint)local_1f8 & 0xffff))) {
              puVar25 = (ushort *)((ulong)&local_1f8 | 2);
              do {
                do {
                  puVar27 = puVar25 + 1;
                  uVar5 = *puVar25;
                  uVar24 = (ulong)uVar5;
                  puVar25 = puVar27;
                } while ((uint)uVar5 == (uint)uVar4);
              } while (uVar5 == uVar29);
            }
            puVar23 = (undefined8 *)(lVar14 + (uVar24 & 0xffff) * 0xc);
            local_d8 = *puVar23;
            local_d0 = *(float *)(puVar23 + 1);
            if (uVar6 == 0xffff) {
              FUN_03419cb4(*(long *)(param_1 + 0x28) + uVar28 * 0x80,&local_1f0,&local_c8,&local_d8,
                           *(long *)(param_1 + 0x20) + uVar33 * 0x40);
              uVar1 = *(uint *)(lVar21 + 0x38);
              uVar29 = *(uint *)(lVar21 + 0x3c);
              lVar14 = *(long *)(param_1 + 0x28);
              if (uVar1 < uVar29) {
LAB_0341774c:
                if (uVar1 < uVar29) {
                  uVar29 = *(uint *)(lVar21 + 0x38);
                  lVar15 = *(long *)(lVar21 + 0x30);
                  *(uint *)(lVar21 + 0x38) = uVar29 + 1;
                  if (lVar15 == 0) goto LAB_03417770;
                  goto LAB_03417768;
                }
              }
              else {
                iVar13 = uVar29 + (uVar29 >> 1);
                if (uVar29 == 0) {
                  iVar13 = 1;
                }
                uVar29 = iVar13 + uVar29;
                lVar32 = (**(code **)(puVar7 + 0x20))
                                   (9,*(undefined8 *)(lVar21 + 0x30),(ulong)uVar29 << 3);
                if (lVar32 != 0) {
                  *(long *)(lVar21 + 0x30) = lVar32;
                  *(uint *)(lVar21 + 0x3c) = uVar29;
                  goto LAB_0341774c;
                }
              }
            }
            else {
              local_200 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar6 * 8);
              if (((uint)uVar4 == ((uint)local_200 & 0xffff)) ||
                 (uVar24 = local_200, uVar29 == ((uint)local_200 & 0xffff))) {
                puVar25 = (ushort *)((ulong)&local_200 | 2);
                do {
                  do {
                    puVar27 = puVar25 + 1;
                    uVar5 = *puVar25;
                    uVar24 = (ulong)uVar5;
                    puVar25 = puVar27;
                  } while ((uint)uVar5 == (uint)uVar4);
                } while (uVar5 == uVar29);
              }
              puVar23 = (undefined8 *)(lVar14 + (uVar24 & 0xffff) * 0xc);
              local_e8 = *puVar23;
              local_e0 = *(float *)(puVar23 + 1);
              FUN_03419dc4(*(long *)(param_1 + 0x28) + uVar28 * 0x80,&local_1f0,&local_c8,&local_d8,
                           *(long *)(param_1 + 0x20) + uVar33 * 0x40,&local_e8,
                           *(long *)(param_1 + 0x20) + (ulong)uVar6 * 0x40);
              uVar1 = *(uint *)(lVar21 + 0x38);
              uVar29 = *(uint *)(lVar21 + 0x3c);
              lVar14 = *(long *)(param_1 + 0x28);
              if (uVar1 < uVar29) {
LAB_0341766c:
                if (uVar1 < uVar29) {
                  uVar29 = *(uint *)(lVar21 + 0x38);
                  *(uint *)(lVar21 + 0x38) = uVar29 + 1;
                  if (*(long *)(lVar21 + 0x30) != 0) {
                    *(ulong *)(*(long *)(lVar21 + 0x30) + (ulong)uVar29 * 8) =
                         lVar14 + uVar28 * 0x80;
                  }
                }
              }
              else {
                iVar13 = uVar29 + (uVar29 >> 1);
                if (uVar29 == 0) {
                  iVar13 = 1;
                }
                uVar29 = iVar13 + uVar29;
                lVar15 = (**(code **)(puVar7 + 0x20))
                                   (9,*(undefined8 *)(lVar21 + 0x30),(ulong)uVar29 << 3);
                if (lVar15 != 0) {
                  *(long *)(lVar21 + 0x30) = lVar15;
                  *(uint *)(lVar21 + 0x3c) = uVar29;
                  goto LAB_0341766c;
                }
              }
              uVar1 = *(uint *)(lVar32 + 0x38);
              uVar29 = *(uint *)(lVar32 + 0x3c);
              lVar14 = *(long *)(param_1 + 0x28);
              if (uVar29 <= uVar1) {
                iVar13 = uVar29 + (uVar29 >> 1);
                if (uVar29 == 0) {
                  iVar13 = 1;
                }
                uVar29 = iVar13 + uVar29;
                lVar21 = (**(code **)(puVar7 + 0x20))
                                   (9,*(undefined8 *)(lVar32 + 0x30),(ulong)uVar29 << 3);
                if (lVar21 == 0) goto LAB_03417770;
                *(long *)(lVar32 + 0x30) = lVar21;
                *(uint *)(lVar32 + 0x3c) = uVar29;
              }
              if (uVar1 < uVar29) {
                uVar29 = *(uint *)(lVar32 + 0x38);
                lVar15 = *(long *)(lVar32 + 0x30);
                *(uint *)(lVar32 + 0x38) = uVar29 + 1;
                if (lVar15 != 0) {
LAB_03417768:
                  *(ulong *)(lVar15 + (ulong)uVar29 * 8) = lVar14 + uVar28 * 0x80;
                }
              }
            }
LAB_03417770:
            uVar28 = uVar28 + 1;
            if (*(ushort *)(param_1 + 0x36) <= uVar28) goto LAB_034177a0;
            lVar14 = *(long *)(param_1 + 0x28);
          } while( true );
        }
      }
    }
    iVar13 = 1;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0x30);
    if (uVar4 == 0) goto LAB_034173f0;
    local_b8 = (undefined8 *)(**(code **)(puVar7 + 0x10))(0,(ulong)uVar4 * 0x48);
    if (local_b8 != (undefined8 *)0x0) {
      local_b0 = CONCAT44((uint)uVar4 + (uint)uVar4 * 2,(int)local_b0);
      goto LAB_034166e8;
    }
    (**(code **)(puVar7 + 0x30))(9,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_03417798:
    iVar13 = 0x34;
  }
LAB_034177a8:
  if (local_b8 != (undefined8 *)0x0) {
    local_b0 = local_b0 & 0xffffffff00000000;
    (**(code **)(puVar7 + 0x30))(0);
  }
  return iVar13;
LAB_034177a0:
  iVar13 = 1;
  goto LAB_034177a8;
}


