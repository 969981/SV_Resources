/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03418ab8; name: FUN_03418ab8
 */


undefined8
FUN_03418ab8(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,int *param_5)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar45;
  undefined8 *puVar46;
  undefined1 (*pauVar47) [16];
  int iVar48;
  long lVar49;
  long *plVar50;
  int iVar51;
  uint uVar52;
  undefined8 uVar53;
  ulong uVar54;
  ulong uVar55;
  int iVar56;
  undefined1 (*pauVar57) [16];
  ulong uVar58;
  ulong uVar59;
  long lVar60;
  undefined1 (*pauVar61) [16];
  long lVar62;
  float *pfVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined8 uVar66;
  float fVar67;
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  uint local_4e0 [17];
  undefined8 local_49c;
  float local_494;
  int iStack_490;
  uint local_480;
  float fStack_47c;
  float fStack_478;
  undefined4 uStack_474;
  uint local_470;
  float fStack_46c;
  float fStack_468;
  undefined4 uStack_464;
  uint local_460;
  float fStack_45c;
  float fStack_458;
  undefined4 uStack_454;
  uint local_450;
  float fStack_44c;
  float local_448;
  undefined4 uStack_444;
  float local_440 [4];
  undefined8 local_430 [2];
  undefined8 local_420;
  float afStack_418 [2];
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0 [16];
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [16];
  undefined1 auStack_120 [16];
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 *local_b8;
  long lStack_b0;
  
  iVar56 = *(int *)(param_3 + 0x50);
  if (iVar56 < 0x10) {
    uVar53 = param_2[3];
    puVar46 = param_3 + (long)iVar56 * 4;
    puVar46[1] = param_2[1];
    puVar46[3] = uVar53;
    uVar53 = *param_2;
    puVar46[2] = param_2[2];
    *puVar46 = uVar53;
    if (*(int *)((long)param_3 + 0x284) < 1) {
      uVar53 = param_2[5];
    }
    else {
      uVar53 = param_2[4];
    }
    param_3[(long)iVar56 + 0x40] = uVar53;
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
    return 0;
  }
  afStack_418 = (float  [2])param_3[3];
  local_430[1] = param_3[1];
  local_430[0] = *param_3;
  local_420 = param_3[2];
  if (*(int *)((long)param_3 + 0x284) < 1) {
    local_3f0._8_8_ = param_3[7];
    local_408 = param_3[0x40];
    uStack_3f8 = param_3[5];
    local_400 = param_3[4];
    local_3f0._0_8_ = param_3[6];
    local_3b8 = param_3[0xb];
    local_3d8 = param_3[0x41];
    uStack_3c8 = param_3[9];
    local_3d0 = param_3[8];
    uStack_3c0 = param_3[10];
    local_388 = param_3[0xf];
    local_3a8 = param_3[0x42];
    uStack_398 = param_3[0xd];
    local_3a0 = param_3[0xc];
    uStack_390 = param_3[0xe];
    local_358 = param_3[0x13];
    local_378 = param_3[0x43];
    uStack_368 = param_3[0x11];
    local_370 = param_3[0x10];
    uStack_360 = param_3[0x12];
    local_328 = param_3[0x17];
    local_348 = param_3[0x44];
    uStack_338 = param_3[0x15];
    local_340 = param_3[0x14];
    uStack_330 = param_3[0x16];
    local_2f8 = param_3[0x1b];
    local_318 = param_3[0x45];
    uStack_308 = param_3[0x19];
    local_310 = param_3[0x18];
    uStack_300 = param_3[0x1a];
    local_2c8 = param_3[0x1f];
    uStack_2d8 = param_3[0x1d];
    local_2e8 = param_3[0x46];
    local_2e0 = param_3[0x1c];
    local_2d0 = param_3[0x1e];
    local_2b8 = param_3[0x47];
    local_298 = param_3[0x23];
    uStack_2a8 = param_3[0x21];
    local_2b0 = param_3[0x20];
    local_2a0 = param_3[0x22];
    local_288 = param_3[0x48];
    local_268 = param_3[0x27];
    uStack_278 = param_3[0x25];
    local_280 = param_3[0x24];
    local_270 = param_3[0x26];
    local_258 = param_3[0x49];
    local_238 = param_3[0x2b];
    uStack_248 = param_3[0x29];
    local_250 = param_3[0x28];
    local_240 = param_3[0x2a];
    local_228 = param_3[0x4a];
    local_208 = param_3[0x2f];
    uStack_218 = param_3[0x2d];
    local_220 = param_3[0x2c];
    local_210 = param_3[0x2e];
    local_1f8 = param_3[0x4b];
    local_1d8 = param_3[0x33];
    uStack_1e8 = param_3[0x31];
    local_1f0 = param_3[0x30];
    local_1e0 = param_3[0x32];
    local_1c8 = param_3[0x4c];
    local_1a8 = param_3[0x37];
    uStack_1b8 = param_3[0x35];
    local_1c0 = param_3[0x34];
    local_1b0 = param_3[0x36];
    local_198 = param_3[0x4d];
    local_178 = param_3[0x3b];
    uStack_188 = param_3[0x39];
    local_190 = param_3[0x38];
    local_180 = param_3[0x3a];
    local_168 = param_3[0x4e];
    local_148 = param_3[0x3f];
    uStack_158 = param_3[0x3d];
    local_160 = param_3[0x3c];
    local_150 = param_3[0x3e];
    local_138 = param_3[0x4f];
  }
  else {
    local_410 = param_3[0x40];
    uStack_3f8 = param_3[5];
    local_400 = param_3[4];
    local_3f0._0_8_ = param_3[6];
    local_3f0._8_8_ = param_3[7];
    uStack_3e0 = param_3[0x41];
    uStack_3c8 = param_3[9];
    local_3d0 = param_3[8];
    uStack_3c0 = param_3[10];
    local_3b8 = param_3[0xb];
    uStack_3b0 = param_3[0x42];
    uStack_398 = param_3[0xd];
    local_3a0 = param_3[0xc];
    uStack_390 = param_3[0xe];
    local_388 = param_3[0xf];
    uStack_380 = param_3[0x43];
    uStack_368 = param_3[0x11];
    local_370 = param_3[0x10];
    uStack_360 = param_3[0x12];
    local_358 = param_3[0x13];
    uStack_350 = param_3[0x44];
    uStack_338 = param_3[0x15];
    local_340 = param_3[0x14];
    uStack_330 = param_3[0x16];
    local_328 = param_3[0x17];
    uStack_320 = param_3[0x45];
    uStack_308 = param_3[0x19];
    local_310 = param_3[0x18];
    uStack_300 = param_3[0x1a];
    local_2f8 = param_3[0x1b];
    uStack_2f0 = param_3[0x46];
    local_2c8 = param_3[0x1f];
    uStack_2d8 = param_3[0x1d];
    local_2e0 = param_3[0x1c];
    local_2d0 = param_3[0x1e];
    local_2c0 = param_3[0x47];
    local_298 = param_3[0x23];
    uStack_2a8 = param_3[0x21];
    local_2b0 = param_3[0x20];
    local_2a0 = param_3[0x22];
    local_290 = param_3[0x48];
    local_268 = param_3[0x27];
    uStack_278 = param_3[0x25];
    local_280 = param_3[0x24];
    local_270 = param_3[0x26];
    local_260 = param_3[0x49];
    local_238 = param_3[0x2b];
    uStack_248 = param_3[0x29];
    local_250 = param_3[0x28];
    local_240 = param_3[0x2a];
    local_230 = param_3[0x4a];
    local_208 = param_3[0x2f];
    uStack_218 = param_3[0x2d];
    local_220 = param_3[0x2c];
    local_210 = param_3[0x2e];
    local_200 = param_3[0x4b];
    local_1d8 = param_3[0x33];
    uStack_1e8 = param_3[0x31];
    local_1f0 = param_3[0x30];
    local_1e0 = param_3[0x32];
    local_1d0 = param_3[0x4c];
    local_1a8 = param_3[0x37];
    uStack_1b8 = param_3[0x35];
    local_1c0 = param_3[0x34];
    local_1b0 = param_3[0x36];
    local_1a0 = param_3[0x4d];
    local_178 = param_3[0x3b];
    uStack_188 = param_3[0x39];
    local_190 = param_3[0x38];
    local_180 = param_3[0x3a];
    local_170 = param_3[0x4e];
    local_148 = param_3[0x3f];
    uStack_158 = param_3[0x3d];
    local_160 = param_3[0x3c];
    local_150 = param_3[0x3e];
    local_140 = param_3[0x4f];
  }
  memcpy(local_130,param_2,0x30);
  local_100 = 0x11;
  pfVar63 = afStack_418;
  auVar65._8_8_ = uStack_3f8;
  auVar65._0_8_ = local_400;
  auVar68._8_8_ = local_3f0._8_8_;
  auVar68._0_8_ = local_3f0._0_8_;
  auVar43._8_8_ = local_430[1];
  auVar43._0_8_ = local_430[0];
  auVar44._8_4_ = afStack_418[0];
  auVar44._12_4_ = afStack_418[1];
  auVar44._0_8_ = local_420;
  auVar68 = NEON_fmax(auVar44,auVar68,4);
  auVar65 = NEON_fmin(auVar43,auVar65,4);
  auVar73._8_8_ = uStack_3c8;
  auVar73._0_8_ = local_3d0;
  auVar74._8_8_ = local_3b8;
  auVar74._0_8_ = uStack_3c0;
  auVar68 = NEON_fmax(auVar68,auVar74,4);
  auVar65 = NEON_fmin(auVar65,auVar73,4);
  auVar17._8_8_ = uStack_398;
  auVar17._0_8_ = local_3a0;
  auVar18._8_8_ = local_388;
  auVar18._0_8_ = uStack_390;
  auVar68 = NEON_fmax(auVar68,auVar18,4);
  auVar65 = NEON_fmin(auVar65,auVar17,4);
  auVar19._8_8_ = uStack_368;
  auVar19._0_8_ = local_370;
  auVar20._8_8_ = local_358;
  auVar20._0_8_ = uStack_360;
  auVar68 = NEON_fmax(auVar68,auVar20,4);
  auVar65 = NEON_fmin(auVar65,auVar19,4);
  auVar21._8_8_ = uStack_338;
  auVar21._0_8_ = local_340;
  auVar22._8_8_ = local_328;
  auVar22._0_8_ = uStack_330;
  auVar68 = NEON_fmax(auVar68,auVar22,4);
  auVar65 = NEON_fmin(auVar65,auVar21,4);
  auVar23._8_8_ = uStack_308;
  auVar23._0_8_ = local_310;
  auVar24._8_8_ = local_2f8;
  auVar24._0_8_ = uStack_300;
  auVar68 = NEON_fmax(auVar68,auVar24,4);
  auVar65 = NEON_fmin(auVar65,auVar23,4);
  auVar25._8_8_ = uStack_2d8;
  auVar25._0_8_ = local_2e0;
  auVar26._8_8_ = local_2c8;
  auVar26._0_8_ = local_2d0;
  auVar68 = NEON_fmax(auVar68,auVar26,4);
  auVar65 = NEON_fmin(auVar65,auVar25,4);
  auVar27._8_8_ = uStack_2a8;
  auVar27._0_8_ = local_2b0;
  auVar28._8_8_ = local_298;
  auVar28._0_8_ = local_2a0;
  auVar68 = NEON_fmax(auVar68,auVar28,4);
  auVar65 = NEON_fmin(auVar65,auVar27,4);
  auVar29._8_8_ = uStack_278;
  auVar29._0_8_ = local_280;
  auVar30._8_8_ = local_268;
  auVar30._0_8_ = local_270;
  auVar68 = NEON_fmax(auVar68,auVar30,4);
  auVar65 = NEON_fmin(auVar65,auVar29,4);
  auVar31._8_8_ = uStack_248;
  auVar31._0_8_ = local_250;
  auVar32._8_8_ = local_238;
  auVar32._0_8_ = local_240;
  auVar68 = NEON_fmax(auVar68,auVar32,4);
  auVar65 = NEON_fmin(auVar65,auVar31,4);
  auVar33._8_8_ = uStack_218;
  auVar33._0_8_ = local_220;
  auVar34._8_8_ = local_208;
  auVar34._0_8_ = local_210;
  auVar68 = NEON_fmax(auVar68,auVar34,4);
  auVar65 = NEON_fmin(auVar65,auVar33,4);
  auVar35._8_8_ = uStack_1e8;
  auVar35._0_8_ = local_1f0;
  auVar36._8_8_ = local_1d8;
  auVar36._0_8_ = local_1e0;
  auVar68 = NEON_fmax(auVar68,auVar36,4);
  auVar65 = NEON_fmin(auVar65,auVar35,4);
  auVar37._8_8_ = uStack_1b8;
  auVar37._0_8_ = local_1c0;
  auVar38._8_8_ = local_1a8;
  auVar38._0_8_ = local_1b0;
  auVar68 = NEON_fmax(auVar68,auVar38,4);
  auVar65 = NEON_fmin(auVar65,auVar37,4);
  auVar39._8_8_ = uStack_188;
  auVar39._0_8_ = local_190;
  auVar40._8_8_ = local_178;
  auVar40._0_8_ = local_180;
  auVar68 = NEON_fmax(auVar68,auVar40,4);
  auVar65 = NEON_fmin(auVar65,auVar39,4);
  auVar41._8_8_ = uStack_158;
  auVar41._0_8_ = local_160;
  auVar42._8_8_ = local_148;
  auVar42._0_8_ = local_150;
  auVar68 = NEON_fmax(auVar68,auVar42,4);
  auVar65 = NEON_fmin(auVar65,auVar41,4);
  auVar68 = NEON_fmax(auVar68,auStack_120,4);
  auVar65 = NEON_fmin(auVar65,local_130,4);
  uStack_e8 = auVar65._8_8_;
  local_f0 = auVar65._0_8_;
  local_d8 = auVar68._8_8_;
  local_e0 = auVar68._0_8_;
  fVar71 = *(float *)(param_1 + 0x10);
  fVar69 = (auVar68._0_4_ - auVar65._0_4_) * 0.5;
  fVar67 = (auVar68._4_4_ - auVar65._4_4_) * 0.5;
  fVar64 = (auVar68._8_4_ - auVar65._8_4_) * 0.5;
  fVar64 = fVar69 * fVar69 + fVar67 * fVar67 + fVar64 * fVar64;
  local_d0 = fVar64 * fVar71 * SQRT(fVar64);
  _local_494 = 0;
  local_440[0] = 0.0;
  local_440[1] = 0.0;
  local_49c = 0x400000011;
  memset(local_4e0,0xff,0x44);
  lVar49 = 0;
  do {
    pfVar3 = pfVar63 + -2;
    pfVar7 = pfVar63 + -1;
    pfVar2 = pfVar63 + -4;
    pfVar4 = pfVar63 + -6;
    pfVar8 = pfVar63 + -5;
    fVar69 = *pfVar63;
    pfVar63 = pfVar63 + 0xc;
    fVar67 = (*pfVar7 - *pfVar8) * 0.5;
    fVar64 = (*pfVar3 - *pfVar4) * 0.5;
    fVar69 = (fVar69 - *pfVar2) * 0.5;
    fVar64 = fVar64 * fVar64 + fVar67 * fVar67 + fVar69 * fVar69;
    *(float *)((long)&local_b8 + lVar49) = fVar64 * fVar71 * SQRT(fVar64);
    lVar49 = lVar49 + 4;
  } while (lVar49 != 0x44);
  fVar64 = -3.4028235e+38;
  iVar56 = 0;
  pauVar57 = &local_3f0;
  lVar49 = 1;
  iVar48 = 1;
  lVar60 = 0;
  do {
    lVar5 = lVar60 + 1;
    pauVar61 = pauVar57;
    lVar62 = lVar49;
    iVar51 = iVar56;
    fVar67 = fVar64;
    do {
      pauVar47 = pauVar61 + -1;
      auVar65 = *pauVar61;
      pauVar61 = pauVar61 + 3;
      auVar68 = NEON_fmax(*(undefined1 (*) [16])(local_430 + lVar60 * 6 + 2),auVar65,4);
      auVar65 = NEON_fmin(*(undefined1 (*) [16])(local_430 + lVar60 * 6),*pauVar47,4);
      fVar69 = (auVar68._0_4_ - auVar65._0_4_) * 0.5;
      fVar70 = (auVar68._4_4_ - auVar65._4_4_) * 0.5;
      fVar64 = (auVar68._8_4_ - auVar65._8_4_) * 0.5;
      fVar64 = fVar69 * fVar69 + fVar70 * fVar70 + fVar64 * fVar64;
      fVar64 = fVar64 * fVar71 * SQRT(fVar64) -
               (*(float *)((long)&local_b8 + lVar60 * 4) + *(float *)((long)&local_b8 + lVar62 * 4))
      ;
      iVar56 = (int)lVar60;
      iVar45 = (int)lVar62;
      if (fVar64 <= fVar67) {
        iVar56 = iVar51;
        iVar45 = iVar48;
      }
      iVar48 = iVar45;
      lVar62 = lVar62 + 1;
      iVar51 = iVar56;
      fVar67 = fVar64;
    } while (lVar62 != 0x11);
    lVar49 = lVar49 + 1;
    pauVar57 = pauVar57 + 3;
    lVar60 = lVar5;
  } while (lVar5 != 0x10);
  local_4e0[iVar56] = 0;
  lVar49 = (long)iVar56;
  if (local_494 == 0.0) {
    fStack_478 = (float)local_430[lVar49 * 6 + 1];
    uStack_474 = (undefined4)((ulong)local_430[lVar49 * 6 + 1] >> 0x20);
    fStack_468 = (float)*(undefined8 *)(afStack_418 + lVar49 * 0xc);
    uStack_464 = (undefined4)((ulong)*(undefined8 *)(afStack_418 + lVar49 * 0xc) >> 0x20);
    uVar53 = *(undefined8 *)*(undefined1 (*) [16])(local_430 + lVar49 * 6);
    local_470 = (uint)local_430[lVar49 * 6 + 2];
    fStack_46c = (float)((ulong)local_430[lVar49 * 6 + 2] >> 0x20);
    local_480 = (uint)uVar53;
    fStack_47c = (float)((ulong)uVar53 >> 0x20);
    auVar65 = ZEXT416(local_480);
    auVar68 = ZEXT416(local_470);
  }
  else {
    auVar9._4_4_ = fStack_47c;
    auVar9._0_4_ = local_480;
    auVar9._8_4_ = fStack_478;
    auVar9._12_4_ = uStack_474;
    auVar11._4_4_ = fStack_46c;
    auVar11._0_4_ = local_470;
    auVar11._8_4_ = fStack_468;
    auVar11._12_4_ = uStack_464;
    auVar65 = NEON_fmin(*(undefined1 (*) [16])(local_430 + lVar49 * 6),auVar9,4);
    auVar68 = NEON_fmax(*(undefined1 (*) [16])(local_430 + (long)iVar56 * 6 + 2),auVar11,4);
    fStack_46c = auVar68._4_4_;
    fStack_47c = auVar65._4_4_;
    fStack_468 = auVar68._8_4_;
    fStack_478 = auVar65._8_4_;
    uStack_474 = auVar65._12_4_;
    local_480 = auVar65._0_4_;
    uStack_464 = auVar68._12_4_;
    local_470 = auVar68._0_4_;
  }
  fVar69 = (fStack_468 - fStack_478) * 0.5;
  fVar67 = (fStack_46c - fStack_47c) * 0.5;
  local_494 = (float)((int)local_494 + 1);
  fVar64 = (auVar68._0_4_ - auVar65._0_4_) * 0.5;
  fVar64 = fVar69 * fVar69 + fVar67 * fVar67 + fVar64 * fVar64;
  local_440[0] = fVar64 * fVar71 * SQRT(fVar64);
  local_4e0[iVar48] = 1;
  lVar49 = (long)iVar48;
  if (iStack_490 == 0) {
    fStack_458 = (float)local_430[lVar49 * 6 + 1];
    uStack_454 = (undefined4)((ulong)local_430[lVar49 * 6 + 1] >> 0x20);
    local_448 = (float)*(undefined8 *)(afStack_418 + lVar49 * 0xc);
    uStack_444 = (undefined4)((ulong)*(undefined8 *)(afStack_418 + lVar49 * 0xc) >> 0x20);
    uVar53 = *(undefined8 *)*(undefined1 (*) [16])(local_430 + lVar49 * 6);
    local_450 = (uint)local_430[lVar49 * 6 + 2];
    fStack_44c = (float)((ulong)local_430[lVar49 * 6 + 2] >> 0x20);
    local_460 = (uint)uVar53;
    fStack_45c = (float)((ulong)uVar53 >> 0x20);
    auVar65 = ZEXT416(local_460);
    auVar68 = ZEXT416(local_450);
  }
  else {
    auVar13._4_4_ = fStack_45c;
    auVar13._0_4_ = local_460;
    auVar13._8_4_ = fStack_458;
    auVar13._12_4_ = uStack_454;
    auVar15._4_4_ = fStack_44c;
    auVar15._0_4_ = local_450;
    auVar15._8_4_ = local_448;
    auVar15._12_4_ = uStack_444;
    auVar65 = NEON_fmin(*(undefined1 (*) [16])(local_430 + lVar49 * 6),auVar13,4);
    auVar68 = NEON_fmax(*(undefined1 (*) [16])(local_430 + (long)iVar48 * 6 + 2),auVar15,4);
    fStack_44c = auVar68._4_4_;
    fStack_45c = auVar65._4_4_;
    local_448 = auVar68._8_4_;
    fStack_458 = auVar65._8_4_;
    uStack_454 = auVar65._12_4_;
    local_460 = auVar65._0_4_;
    uStack_444 = auVar68._12_4_;
    local_450 = auVar68._0_4_;
  }
  fVar67 = (fStack_44c - fStack_45c) * 0.5;
  fVar69 = (local_448 - fStack_458) * 0.5;
  fVar64 = (auVar68._0_4_ - auVar65._0_4_) * 0.5;
  fVar64 = fVar69 * fVar69 + fVar67 * fVar67 + fVar64 * fVar64;
  iStack_490 = iStack_490 + 1;
  local_440[1] = fVar64 * fVar71 * SQRT(fVar64);
  if ((int)local_494 + iStack_490 < (int)(uint)local_49c) {
    uVar58 = 0;
    uVar54 = 0;
    do {
      iVar56 = (uint)local_49c - local_49c._4_4_;
      if (iVar56 <= (int)local_494 || iVar56 <= iStack_490) {
        bVar1 = iVar56 <= (int)local_494;
        if (0 < (int)(uint)local_49c) {
          uVar58 = (ulong)(iVar56 <= (int)local_494);
          uVar54 = (ulong)local_4e0 | uVar58 << 2;
          lVar49 = 0;
          pauVar57 = (undefined1 (*) [16])(&local_494 + uVar58 * 8 + 5);
          piVar6 = (int *)(uVar54 + 0x4c);
          pauVar61 = (undefined1 (*) [16])(local_440 + uVar58 * 8 + -0xc);
          pauVar47 = (undefined1 (*) [16])local_430;
          uVar52 = (uint)local_49c;
          do {
            if (local_4e0[lVar49] == 0xffffffff) {
              local_4e0[lVar49] = (uint)bVar1;
              iVar56 = *piVar6;
              if (iVar56 == 0) {
                uVar53 = *(undefined8 *)(pauVar47[1] + 8);
                *(undefined8 *)(local_440 + uVar58 * 8 + -0xe) = *(undefined8 *)(*pauVar47 + 8);
                *(undefined8 *)(local_440 + uVar58 * 8 + -10) = uVar53;
                uVar53 = *(undefined8 *)*pauVar47;
                *(undefined8 *)(local_440 + uVar58 * 8 + -0xc) = *(undefined8 *)pauVar47[1];
                *(undefined8 *)*pauVar57 = uVar53;
                auVar68 = ZEXT416(*(uint *)*pauVar61);
                auVar65 = ZEXT416(*(uint *)*pauVar57);
              }
              else {
                auVar65 = NEON_fmin(*pauVar47,*pauVar57,4);
                auVar68 = NEON_fmax(pauVar47[1],*pauVar61,4);
                *(long *)(local_440 + uVar58 * 8 + -0xe) = auVar65._8_8_;
                *(long *)*pauVar57 = auVar65._0_8_;
                *(long *)(local_440 + uVar58 * 8 + -10) = auVar68._8_8_;
                *(long *)*pauVar61 = auVar68._0_8_;
              }
              fVar64 = (auVar68._0_4_ - auVar65._0_4_) * 0.5;
              fVar67 = (local_440[uVar58 * 8 + -0xb] - (&local_494)[uVar58 * 8 + 6]) * 0.5;
              fVar69 = (local_440[uVar58 * 8 + -10] - local_440[uVar58 * 8 + -0xe]) * 0.5;
              fVar64 = fVar64 * fVar64 + fVar67 * fVar67 + fVar69 * fVar69;
              *(float *)(uVar54 + 0xa0) = fVar64 * fVar71 * SQRT(fVar64);
              *piVar6 = iVar56 + 1;
              uVar52 = (uint)local_49c;
            }
            lVar49 = lVar49 + 1;
            pauVar47 = pauVar47 + 3;
          } while (lVar49 < (int)uVar52);
        }
        break;
      }
      if (0 < (int)(uint)local_49c) {
        auVar10._4_4_ = fStack_47c;
        auVar10._0_4_ = local_480;
        auVar10._8_4_ = fStack_478;
        auVar10._12_4_ = uStack_474;
        auVar12._4_4_ = fStack_46c;
        auVar12._0_4_ = local_470;
        auVar12._8_4_ = fStack_468;
        auVar12._12_4_ = uStack_464;
        uVar66 = 0;
        uVar53 = 0xbf800000;
        uVar59 = 0;
        auVar14._4_4_ = fStack_45c;
        auVar14._0_4_ = local_460;
        auVar14._8_4_ = fStack_458;
        auVar14._12_4_ = uStack_454;
        auVar16._4_4_ = fStack_44c;
        auVar16._0_4_ = local_450;
        auVar16._8_4_ = local_448;
        auVar16._12_4_ = uStack_444;
        uVar55 = uVar54;
        pauVar57 = (undefined1 (*) [16])&local_420;
        do {
          if (local_4e0[uVar59] == 0xffffffff) {
            auVar74 = NEON_fmax(*pauVar57,auVar12,4);
            auVar68 = NEON_fmin(pauVar57[-1],auVar10,4);
            auVar65 = NEON_fmin(pauVar57[-1],auVar14,4);
            auVar73 = NEON_fmax(*pauVar57,auVar16,4);
            fVar70 = (auVar74._0_4_ - auVar68._0_4_) * 0.5;
            fVar69 = (auVar73._0_4_ - auVar65._0_4_) * 0.5;
            fVar75 = (auVar74._4_4_ - auVar68._4_4_) * 0.5;
            fVar67 = (auVar74._8_4_ - auVar68._8_4_) * 0.5;
            fVar76 = (auVar73._4_4_ - auVar65._4_4_) * 0.5;
            fVar64 = (auVar73._8_4_ - auVar65._8_4_) * 0.5;
            fVar67 = fVar70 * fVar70 + fVar75 * fVar75 + fVar67 * fVar67;
            fVar64 = fVar69 * fVar69 + fVar76 * fVar76 + fVar64 * fVar64;
            fVar67 = (fVar64 * fVar71 * SQRT(fVar64) - local_440[1]) +
                     (local_440[0] - SQRT(fVar67) * fVar67 * fVar71);
            fVar64 = ABS(fVar67);
            auVar72 = ZEXT416((uint)fVar64);
            uVar54 = (ulong)(fVar67 < 0.0);
            if (fVar64 <= (float)uVar53) {
              if (fVar64 == (float)uVar53) {
                pfVar63 = &local_494 + uVar55;
                uVar52 = (uint)(fVar67 < 0.0);
                if ((int)*pfVar63 <= (int)(&local_494)[fVar67 < 0.0]) {
                  uVar52 = (uint)uVar55;
                }
                uVar55 = (ulong)uVar52;
                uVar52 = (uint)uVar59;
                if ((int)*pfVar63 <= (int)(&local_494)[fVar67 < 0.0]) {
                  uVar52 = (uint)uVar58;
                }
                uVar58 = (ulong)uVar52;
              }
              goto LAB_03419440;
            }
            uVar58 = uVar59 & 0xffffffff;
          }
          else {
LAB_03419440:
            auVar72._8_8_ = uVar66;
            auVar72._0_8_ = uVar53;
            uVar54 = uVar55;
          }
          uVar66 = auVar72._8_8_;
          uVar53 = auVar72._0_8_;
          uVar59 = uVar59 + 1;
          pauVar57 = pauVar57 + 3;
          uVar55 = uVar54;
        } while ((uint)local_49c != uVar59);
      }
      uVar52 = (uint)uVar54;
      iVar56 = (int)uVar58;
      local_4e0[iVar56] = uVar52;
      lVar49 = (long)iVar56;
      lVar60 = (long)(int)uVar52;
      pfVar63 = &local_494 + (int)uVar52;
      pauVar57 = (undefined1 (*) [16])(&local_494 + lVar60 * 8 + 5);
      if (*pfVar63 == 0.0) {
        uVar53 = *(undefined8 *)(afStack_418 + lVar49 * 0xc);
        *(undefined8 *)(local_440 + lVar60 * 8 + -0xe) = local_430[lVar49 * 6 + 1];
        *(undefined8 *)(local_440 + lVar60 * 8 + -10) = uVar53;
        uVar53 = *(undefined8 *)*(undefined1 (*) [16])(local_430 + lVar49 * 6);
        *(undefined8 *)(local_440 + lVar60 * 8 + -0xc) = local_430[lVar49 * 6 + 2];
        *(undefined8 *)*pauVar57 = uVar53;
        auVar68 = ZEXT416((uint)local_440[lVar60 * 8 + -0xc]);
        auVar65 = ZEXT416(*(uint *)*pauVar57);
      }
      else {
        auVar65 = NEON_fmin(*(undefined1 (*) [16])(local_430 + lVar49 * 6),*pauVar57,4);
        auVar68 = *(undefined1 (*) [16])(local_430 + (long)iVar56 * 6 + 2);
        auVar73 = *(undefined1 (*) [16])(local_440 + lVar60 * 8 + -0xc);
        *(long *)(local_440 + lVar60 * 8 + -0xe) = auVar65._8_8_;
        *(long *)*pauVar57 = auVar65._0_8_;
        auVar68 = NEON_fmax(auVar68,auVar73,4);
        *(long *)(local_440 + lVar60 * 8 + -10) = auVar68._8_8_;
        *(long *)(local_440 + lVar60 * 8 + -0xc) = auVar68._0_8_;
      }
      fVar64 = (auVar68._0_4_ - auVar65._0_4_) * 0.5;
      fVar67 = (local_440[lVar60 * 8 + -0xb] - (&local_494)[lVar60 * 8 + 6]) * 0.5;
      fVar69 = (local_440[lVar60 * 8 + -10] - local_440[lVar60 * 8 + -0xe]) * 0.5;
      fVar64 = fVar64 * fVar64 + fVar67 * fVar67 + fVar69 * fVar69;
      local_440[lVar60] = fVar64 * fVar71 * SQRT(fVar64);
      *pfVar63 = (float)((int)*pfVar63 + 1);
    } while (iStack_490 + (int)local_494 < (int)(uint)local_49c);
  }
  for (puVar46 = *(undefined8 **)(param_1 + 0x18); puVar46 != (undefined8 *)0x0;
      puVar46 = (undefined8 *)puVar46[0x1ec]) {
    if (puVar46[0x1ee] != 0) goto LAB_03419788;
  }
  puVar46 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(10,0xf78,0x10);
  if (puVar46 != (undefined8 *)0x0) {
    puVar46[0xa4] = puVar46 + 0x52;
    puVar46[0xf6] = puVar46 + 0xa4;
    puVar46[0x148] = puVar46 + 0xf6;
    puVar46[0x1ee] = puVar46 + 0x19a;
    puVar46[0x1ec] = 0;
    *puVar46 = 0;
    puVar46[0x52] = puVar46;
    puVar46[0x19a] = puVar46 + 0x148;
    *(undefined4 *)(puVar46 + 0x1ed) = 6;
    if (*(long *)(param_1 + 0x18) == 0) {
      *(undefined8 **)(param_1 + 0x18) = puVar46;
      puVar46[0x1ec] = 0;
    }
    else {
      puVar46[0x1ec] = *(long *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar46;
    }
LAB_03419788:
    plVar50 = (long *)puVar46[0x1ee];
    if (plVar50 != (long *)0x0) {
      if (*plVar50 == 0) {
        puVar46[0x1ee] = 0;
      }
      else {
        puVar46[0x1ee] = *plVar50;
      }
      *(int *)(puVar46 + 0x1ed) = *(int *)(puVar46 + 0x1ed) + -1;
      plVar50[0x50] = -0x100000000;
      goto LAB_034197c8;
    }
  }
  plVar50 = (long *)0x0;
  *param_5 = 0x34;
LAB_034197c8:
  *param_4 = (long)plVar50;
  if (*param_5 == 1) {
    *(undefined4 *)((long)plVar50 + 0x284) = *(undefined4 *)((long)param_3 + 0x284);
    *(undefined4 *)(param_3 + 0x50) = 0;
    if (0 < (int)(uint)local_49c) {
      lVar60 = *param_4;
      lVar49 = 0;
      puVar46 = local_430;
      do {
        local_b8 = param_3;
        lStack_b0 = lVar60;
        FUN_03418ab8(param_1,puVar46,(&local_b8)[(int)local_4e0[lVar49]],0,param_5);
        lVar49 = lVar49 + 1;
        puVar46 = puVar46 + 6;
      } while (lVar49 < (int)(uint)local_49c);
    }
    uVar53 = 1;
  }
  else {
    uVar53 = 0;
  }
  return uVar53;
}


