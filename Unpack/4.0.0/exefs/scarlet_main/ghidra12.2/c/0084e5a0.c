/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084e5a0; name: FUN_0084e5a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084e5a0(undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long local_3c0;
  int local_3b8;
  int local_3b4;
  undefined8 local_3b0 [4];
  undefined8 local_390;
  undefined1 *local_380;
  undefined4 local_378;
  uint local_374;
  undefined1 auStack_370 [64];
  undefined1 *local_330;
  undefined8 local_328;
  undefined1 auStack_320 [32];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined1 auStack_2c0 [64];
  undefined1 *local_280;
  undefined8 local_278;
  undefined1 auStack_270 [32];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined1 *local_220;
  undefined4 local_218;
  uint local_214;
  undefined1 auStack_210 [64];
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [32];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined1 *local_170;
  undefined4 local_168;
  uint local_164;
  undefined1 auStack_160 [64];
  undefined1 *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined1 *local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined1 auStack_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [32];
  
  puVar11 = PTR_DAT_047d1a08;
  puVar10 = PTR_DAT_047d19b0;
  local_3c0 = (long)(int)param_2[1] << 4;
  pauVar1 = (undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x240);
  auVar22 = *pauVar1;
  auVar28 = *pauVar1;
  uVar21 = CONCAT44(-(float)((ulong)*(undefined8 *)*pauVar1 >> 0x20),-(float)*(undefined8 *)*pauVar1
                   );
  uVar20 = CONCAT44(-(float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x248) >> 0x20),
                    -(float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x248));
  lVar12 = (**(code **)PTR_DAT_047d1a08)(0,&local_3c0,0x10);
  uVar13 = (ulong)*(uint *)(param_2 + 1);
  if ((int)*(uint *)(param_2 + 1) < 1) {
    auVar29._8_8_ = uVar20;
    auVar29._0_8_ = uVar21;
    auVar28 = auVar22;
  }
  else {
    iVar4 = *(int *)((long)param_2 + 0xc);
    auVar29._8_8_ = uVar20;
    auVar29._0_8_ = uVar21;
    iVar3 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    lVar14 = 0;
    lVar16 = 0;
    do {
      puVar2 = (undefined8 *)(*param_2 + lVar14);
      lVar14 = lVar14 + (-(ulong)((uint)(iVar3 >> 2) >> 0x1f) & 0xfffffffc00000000 |
                        (ulong)(uint)(iVar3 >> 2) << 2);
      uVar7 = *(undefined4 *)(puVar2 + 1);
      uVar21 = CONCAT44(uVar7,uVar7);
      auVar22._0_8_ = *puVar2;
      auVar22._8_8_ = uVar21;
      puVar2 = (undefined8 *)(lVar12 + lVar16 * 0x10);
      puVar2[1] = uVar21;
      *puVar2 = auVar22._0_8_;
      auVar28 = NEON_fmin(auVar28,auVar22,4);
      uVar13 = (ulong)(int)param_2[1];
      auVar29 = NEON_fmax(auVar29,auVar22,4);
      lVar16 = lVar16 + 1;
    } while (lVar16 < (long)uVar13);
  }
  auVar22 = *(undefined1 (*) [16])(puVar10 + 0x150);
  auVar23 = NEON_ext(auVar22,auVar22,8,1);
  auVar22 = NEON_ext(auVar23,auVar22,8,1);
  fVar25 = (auVar28._0_4_ + auVar29._0_4_) * auVar22._0_4_;
  fVar26 = (auVar28._4_4_ + auVar29._4_4_) * auVar22._4_4_;
  fVar27 = (auVar28._8_4_ + auVar29._8_4_) * auVar22._8_4_;
  uVar21 = CONCAT44(auVar29._4_4_ - auVar28._4_4_,auVar29._0_4_ - auVar28._0_4_);
  fVar19 = auVar29._8_4_ - auVar28._8_4_;
  uVar21 = NEON_fmaxp(uVar21,uVar21,4);
  uVar21 = NEON_fmax(CONCAT44(fVar19,fVar19),uVar21,4);
  uVar21 = NEON_fmax(uVar21,0x3727c5ac3727c5ac,4);
  fVar19 = (float)uVar21;
  fVar24 = (float)((ulong)uVar21 >> 0x20);
  if (0 < (int)uVar13) {
    fVar17 = (float)*(undefined8 *)(puVar10 + 0x60) / fVar19;
    fVar18 = (float)((ulong)*(undefined8 *)(puVar10 + 0x60) >> 0x20) / fVar24;
    lVar16 = 0;
    do {
      lVar14 = lVar16 * 0x10;
      lVar16 = lVar16 + 1;
      pfVar5 = (float *)(lVar12 + lVar14);
      fVar8 = *pfVar5;
      fVar9 = pfVar5[1];
      pfVar6 = (float *)(lVar12 + lVar14);
      pfVar6[2] = fVar17 * (pfVar5[2] - fVar27);
      pfVar6[3] = fVar18 * (pfVar5[3] - (auVar28._12_4_ + auVar29._12_4_) * auVar22._12_4_);
      *pfVar6 = fVar17 * (fVar8 - fVar25);
      pfVar6[1] = fVar18 * (fVar9 - fVar26);
      uVar13 = (ulong)(int)param_2[1];
    } while (lVar16 < (long)uVar13);
  }
  local_380 = auStack_370;
  local_2c8 = 0;
  local_330 = auStack_320;
  local_328 = -0x7ffffffe00000000;
  local_390 = *(undefined8 *)(puVar10 + 0x40);
  local_2d0 = auStack_2c0;
  local_280 = auStack_270;
  local_220 = auStack_210;
  local_3b8 = (int)uVar13;
  local_3b4 = 0;
  local_378 = 0;
  local_374 = 0x80000004;
  local_2c4 = 0x80000004;
  local_3b0[1] = _UNK_03cabf48;
  local_3b0[0] = _DAT_03cabf40;
  local_278 = -0x7ffffffe00000000;
  local_1d0 = auStack_1c0;
  uStack_2f8 = _UNK_03cabf48;
  local_300 = _DAT_03cabf40;
  local_218 = 0;
  local_214 = 0x80000004;
  local_170 = auStack_160;
  local_1c8 = -0x7ffffffe00000000;
  local_120 = auStack_110;
  uStack_248 = _UNK_03cabf48;
  local_250 = _DAT_03cabf40;
  local_168 = 0;
  local_164 = 0x80000004;
  local_c0 = auStack_b0;
  local_118 = -0x7ffffffe00000000;
  uStack_198 = _UNK_03cabf48;
  local_1a0 = _DAT_03cabf40;
  local_b8 = 0;
  local_b4 = 0x80000004;
  local_70 = auStack_60;
  local_68 = -0x7ffffffe00000000;
  uStack_e8 = _UNK_03cabf48;
  local_f0 = _DAT_03cabf40;
  local_3c0 = lVar12;
  local_2e0 = local_390;
  local_230 = local_390;
  local_180 = local_390;
  local_d0 = local_390;
  if (local_3b8 < 1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0xbf800000;
    uVar20 = param_1[1];
    uVar21 = *param_1;
  }
  else {
    FUN_0084ea7c(&local_3c0,lVar12,uVar13,0);
    uVar21 = local_3b0[(long)local_3b4 * 0x16];
    uVar20 = CONCAT44(SQRT((float)((ulong)local_3b0[(long)local_3b4 * 0x16 + 1] >> 0x20)) + 1e-05,
                      (int)local_3b0[(long)local_3b4 * 0x16 + 1]);
    param_1[1] = uVar20;
    *param_1 = uVar21;
  }
  pcVar15 = *(code **)(puVar11 + 8);
  param_1[1] = CONCAT44(fVar24 * (float)((ulong)uVar20 >> 0x20) + *(float *)(puVar10 + 0x50),
                        fVar19 * (float)uVar20 + fVar27);
  *param_1 = CONCAT44(fVar24 * (float)((ulong)uVar21 >> 0x20) + fVar26,
                      fVar19 * (float)uVar21 + fVar25);
  (*pcVar15)(0,lVar12,0);
  lVar12 = local_68;
  uVar13 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_70 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar13 << 4);
  }
  local_70 = (undefined1 *)0x0;
  local_68 = CONCAT44(0x80000000,(undefined4)local_68);
  local_b8 = 0;
  if ((-1 < (int)local_b4) && (local_c0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c0,(ulong)local_b4 << 4);
  }
  lVar12 = local_118;
  uVar13 = (ulong)local_118._4_4_;
  local_c0 = (undefined1 *)0x0;
  local_b4 = 0x80000000;
  local_118 = (ulong)local_118._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_120 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_120,uVar13 << 4);
  }
  local_120 = (undefined1 *)0x0;
  local_118 = CONCAT44(0x80000000,(undefined4)local_118);
  local_168 = 0;
  if ((-1 < (int)local_164) && (local_170 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_170,(ulong)local_164 << 4);
  }
  lVar12 = local_1c8;
  uVar13 = (ulong)local_1c8._4_4_;
  local_170 = (undefined1 *)0x0;
  local_164 = 0x80000000;
  local_1c8 = (ulong)local_1c8._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_1d0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1d0,uVar13 << 4);
  }
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = CONCAT44(0x80000000,(undefined4)local_1c8);
  local_218 = 0;
  if ((-1 < (int)local_214) && (local_220 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_220,(ulong)local_214 << 4);
  }
  lVar12 = local_278;
  uVar13 = (ulong)local_278._4_4_;
  local_220 = (undefined1 *)0x0;
  local_214 = 0x80000000;
  local_278 = (ulong)local_278._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_280 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_280,uVar13 << 4);
  }
  local_280 = (undefined1 *)0x0;
  local_278 = CONCAT44(0x80000000,(undefined4)local_278);
  local_2c8 = 0;
  if ((-1 < (int)local_2c4) && (local_2d0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_2d0,(ulong)local_2c4 << 4);
  }
  lVar12 = local_328;
  uVar13 = (ulong)local_328._4_4_;
  local_2d0 = (undefined1 *)0x0;
  local_2c4 = 0x80000000;
  local_328 = (ulong)local_328._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_330 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_330,uVar13 << 4);
  }
  local_328 = CONCAT44(0x80000000,(undefined4)local_328);
  local_330 = (undefined1 *)0x0;
  local_378 = 0;
  if ((-1 < (int)local_374) && (local_380 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_380,(ulong)local_374 << 4);
  }
  return;
}


