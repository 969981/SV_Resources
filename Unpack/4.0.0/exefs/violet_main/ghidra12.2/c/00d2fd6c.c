/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2fd6c; name: FUN_00d2fd6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d2fd6c(long param_1,long *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined4 uVar39;
  float fVar44;
  float fVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar86 [16];
  float fVar87;
  float fVar89;
  undefined1 auVar88 [16];
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar96;
  int iVar97;
  undefined1 auVar95 [16];
  int iVar98;
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float local_250;
  float fStack_24c;
  ulong local_1f0;
  long *aplStack_1e8 [3];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  ulong local_190;
  char *pcStack_188;
  long *local_180 [6];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 uStack_120;
  long *local_118;
  undefined1 auStack_110 [24];
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(*(long *)(DAT_0485a0f0 + 0x30) + *(long *)(param_1 + 0x38) * 0x30 + 0x20) == '\0') {
    return;
  }
  local_190 = 0xda15f3b30456f6c;
  pcStack_188 = "atm_sun_direction";
  local_180[0] = (long *)0x11;
  local_180[1] = (long *)0x0;
  auVar40 = (**(code **)(*(long *)*param_3 + 0x70))((long *)*param_3,&local_190);
  if (local_180[1] != (long *)0x0) {
    (**(code **)(*local_180[1] + 0x20))();
  }
  local_190 = 0x6173fbf152b457ef;
  pcStack_188 = "atm_moon_direction";
  local_180[0] = (long *)0x12;
  local_180[1] = (long *)0x0;
  auVar41 = (**(code **)(*(long *)*param_3 + 0x70))((long *)*param_3,&local_190);
  if (local_180[1] != (long *)0x0) {
    (**(code **)(*local_180[1] + 0x20))();
  }
  lVar27 = *(long *)(param_1 + 0x30);
  FUN_00c41540(lVar27);
  uVar22 = DAT_03cb56b0;
  uVar21 = DAT_03cb5690;
  uVar20 = DAT_03cb5600;
  uVar19 = DAT_03cb5410;
  uVar18 = _UNK_03cabe68;
  plVar26 = _DAT_03cabe60;
  uVar17 = _UNK_03cabe58;
  uVar16 = _DAT_03cabe50;
  uVar15 = DAT_03cab628;
  uVar25 = DAT_03cab620;
  uVar14 = _UNK_03caa5b8;
  uVar13 = _DAT_03caa5b0;
  uVar29 = 0;
  do {
    fStack_a8 = (float)uVar15;
    fStack_a4 = (float)((ulong)uVar15 >> 0x20);
    local_b0 = uVar25;
    local_98 = (long *)uVar18;
    local_a0 = plVar26;
    uStack_88 = uVar14;
    local_90 = uVar13;
    uStack_78 = uVar17;
    uStack_80 = uVar16;
    uStack_e8 = uVar15;
    local_f0 = uVar25;
    uStack_d8 = uVar18;
    plStack_e0 = plVar26;
    uStack_c8 = uVar14;
    local_d0 = uVar13;
    uStack_b8 = uVar17;
    uStack_c0 = uVar16;
    switch(uVar29 & 0xffffffff) {
    case 0:
      local_1f0 = 0xbd14e99f6947cc9c;
      aplStack_1e8[0] = (long *)PTR_s_ShadowView_047e1050;
      aplStack_1e8[1] = (long *)0x1f;
      aplStack_1e8[2] = (long *)0x0;
      FUN_00d30ad0(&local_190,&local_1f0,*(undefined8 *)(param_1 + 0x38));
      uVar23 = (**(code **)(*param_2 + 0x50))(param_2,&local_190,&local_b0);
      if ((uVar23 & 1) == 0) break;
      local_130 = 0x96e70bbc086d84a4;
      local_128 = PTR_s_ShadowProjection_047e1058;
LAB_00d2ffa4:
      uStack_120 = 0x1f;
      local_118 = (long *)0x0;
      FUN_00d30ad0(auStack_110,&local_130,*(undefined8 *)(param_1 + 0x38));
      uVar23 = (**(code **)(*param_2 + 0x50))(param_2,auStack_110,&local_f0);
      uVar23 = uVar23 & 0xffffffff;
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      goto LAB_00d30110;
    case 1:
      local_1f0 = 0x84e56391c9fff5;
      aplStack_1e8[0] = (long *)PTR_s_ShadowViewCascade1_047e1060;
      aplStack_1e8[1] = (long *)0x1f;
      aplStack_1e8[2] = (long *)0x0;
      FUN_00d30ad0(&local_190,&local_1f0,*(undefined8 *)(param_1 + 0x38));
      uVar23 = (**(code **)(*param_2 + 0x50))(param_2,&local_190,&local_b0);
      if ((uVar23 & 1) != 0) {
        local_130 = 0x35e4be0ed54b35d;
        local_128 = PTR_s_ShadowProjectionCascade1_047e1068;
        goto LAB_00d2ffa4;
      }
      break;
    case 2:
      local_1f0 = 0x84e26391c9fadc;
      aplStack_1e8[0] = (long *)PTR_s_ShadowViewCascade2_047e1070;
      aplStack_1e8[1] = (long *)0x1f;
      aplStack_1e8[2] = (long *)0x0;
      FUN_00d30ad0(&local_190,&local_1f0,*(undefined8 *)(param_1 + 0x38));
      uVar23 = (**(code **)(*param_2 + 0x50))(param_2,&local_190,&local_b0);
      if ((uVar23 & 1) != 0) {
        local_130 = 0x35e48e0ed54ae44;
        local_128 = PTR_s_ShadowProjectionCascade2_047e1098;
        goto LAB_00d2ffa4;
      }
      break;
    case 3:
      local_1f0 = 0x84e36391c9fc8f;
      aplStack_1e8[0] = (long *)PTR_s_ShadowViewCascade3_047e1078;
      aplStack_1e8[1] = (long *)0x1f;
      aplStack_1e8[2] = (long *)0x0;
      FUN_00d30ad0(&local_190,&local_1f0,*(undefined8 *)(param_1 + 0x38));
      uVar23 = (**(code **)(*param_2 + 0x50))(param_2,&local_190,&local_b0);
      if ((uVar23 & 1) != 0) {
        local_130 = 0x35e49e0ed54aff7;
        local_128 = PTR_s_ShadowProjectionCascade3_047e10a0;
        goto LAB_00d2ffa4;
      }
      break;
    default:
      goto switchD_00d2ff34_default;
    }
    uVar23 = 0;
LAB_00d30110:
    if (local_180[1] != (long *)0x0) {
      (**(code **)(*local_180[1] + 0x20))();
    }
    if (aplStack_1e8[2] != (long *)0x0) {
      (**(code **)(*aplStack_1e8[2] + 0x20))();
    }
    if ((uVar23 & 1) != 0) {
      local_f0._4_4_ = (float)(local_f0 >> 0x20);
      uStack_e8._4_4_ = (float)((ulong)uStack_e8 >> 0x20);
      lVar24 = lVar27 + uVar29 * 0x40;
      local_90._4_4_ = (float)((ulong)local_90 >> 0x20);
      uStack_88._4_4_ = (float)((ulong)uStack_88 >> 0x20);
      uStack_80._4_4_ = (float)((ulong)uStack_80 >> 0x20);
      uStack_78._4_4_ = (float)((ulong)uStack_78 >> 0x20);
      fVar47 = (float)local_b0;
      fVar48 = (float)(local_b0 >> 0x20);
      local_a0._4_4_ = (float)((ulong)local_a0 >> 0x20);
      local_98._4_4_ = (float)((ulong)local_98 >> 0x20);
      fVar38 = SUB84(plStack_e0,0);
      fVar44 = (float)((ulong)plStack_e0 >> 0x20);
      fVar45 = (float)uStack_d8;
      fVar46 = (float)((ulong)uStack_d8 >> 0x20);
      fVar63 = (float)uStack_c8;
      fVar99 = (float)((ulong)uStack_c8 >> 0x20);
      fVar89 = (float)local_d0;
      fVar53 = (float)((ulong)local_d0 >> 0x20);
      fVar58 = (float)uStack_b8;
      fVar87 = (float)((ulong)uStack_b8 >> 0x20);
      fVar84 = (float)uStack_c0;
      fVar85 = (float)((ulong)uStack_c0 >> 0x20);
      *(float *)(lVar24 + 0x84) =
           (float)uStack_e8 * fVar47 + fVar45 * fVar48 + fVar63 * fStack_a8 + fVar58 * fStack_a4;
      *(float *)(lVar24 + 0x88) =
           uStack_e8._4_4_ * fVar47 + fVar46 * fVar48 + fVar99 * fStack_a8 + fVar87 * fStack_a4;
      *(float *)(lVar24 + 0x7c) =
           (float)local_f0 * fVar47 + fVar38 * fVar48 + fVar89 * fStack_a8 + fVar84 * fStack_a4;
      *(float *)(lVar24 + 0x80) =
           local_f0._4_4_ * fVar47 + fVar44 * fVar48 + fVar53 * fStack_a8 + fVar85 * fStack_a4;
      *(float *)(lVar24 + 0x94) =
           (float)uStack_e8 * (float)local_a0 + fVar45 * local_a0._4_4_ + fVar63 * (float)local_98 +
           fVar58 * local_98._4_4_;
      *(float *)(lVar24 + 0x98) =
           uStack_e8._4_4_ * (float)local_a0 + fVar46 * local_a0._4_4_ + fVar99 * (float)local_98 +
           fVar87 * local_98._4_4_;
      *(float *)(lVar24 + 0x8c) =
           (float)local_f0 * (float)local_a0 + fVar38 * local_a0._4_4_ + fVar89 * (float)local_98 +
           fVar84 * local_98._4_4_;
      *(float *)(lVar24 + 0x90) =
           local_f0._4_4_ * (float)local_a0 + fVar44 * local_a0._4_4_ + fVar53 * (float)local_98 +
           fVar85 * local_98._4_4_;
      *(ulong *)(lVar24 + 0xa4) =
           CONCAT44(uStack_e8._4_4_ * (float)local_90 + fVar46 * local_90._4_4_ +
                    fVar99 * (float)uStack_88 + fVar87 * uStack_88._4_4_,
                    (float)uStack_e8 * (float)local_90 + fVar45 * local_90._4_4_ +
                    fVar63 * (float)uStack_88 + fVar58 * uStack_88._4_4_);
      *(ulong *)(lVar24 + 0x9c) =
           CONCAT44(local_f0._4_4_ * (float)local_90 + fVar44 * local_90._4_4_ +
                    fVar53 * (float)uStack_88 + fVar85 * uStack_88._4_4_,
                    (float)local_f0 * (float)local_90 + fVar38 * local_90._4_4_ +
                    fVar89 * (float)uStack_88 + fVar84 * uStack_88._4_4_);
      *(float *)(lVar24 + 0xb4) =
           (float)uStack_e8 * (float)uStack_80 + fVar45 * uStack_80._4_4_ +
           fVar63 * (float)uStack_78 + fVar58 * uStack_78._4_4_;
      *(float *)(lVar24 + 0xb8) =
           uStack_e8._4_4_ * (float)uStack_80 + fVar46 * uStack_80._4_4_ + fVar99 * (float)uStack_78
           + fVar87 * uStack_78._4_4_;
      *(float *)(lVar24 + 0xac) =
           (float)local_f0 * (float)uStack_80 + fVar38 * uStack_80._4_4_ + fVar89 * (float)uStack_78
           + fVar84 * uStack_78._4_4_;
      *(float *)(lVar24 + 0xb0) =
           local_f0._4_4_ * (float)uStack_80 + fVar44 * uStack_80._4_4_ + fVar53 * (float)uStack_78
           + fVar85 * uStack_78._4_4_;
      if (fVar99 == 0.0) {
        fVar38 = (fVar84 + 1.0) / (float)local_f0;
        bVar68 = (byte)uVar19;
        bVar69 = (byte)((ulong)uVar19 >> 8);
        bVar70 = (byte)((ulong)uVar19 >> 0x10);
        bVar71 = (byte)((ulong)uVar19 >> 0x18);
        bVar72 = (byte)((ulong)uVar19 >> 0x20);
        bVar73 = (byte)((ulong)uVar19 >> 0x28);
        bVar74 = (byte)((ulong)uVar19 >> 0x30);
        bVar75 = (byte)((ulong)uVar19 >> 0x38);
        bVar76 = 0;
        bVar77 = 0;
        bVar78 = 0;
        bVar79 = 0;
        bVar80 = SUB41(fVar38,0);
        bVar81 = (byte)((uint)fVar38 >> 8);
        bVar82 = (byte)((uint)fVar38 >> 0x10);
        bVar83 = (byte)((uint)fVar38 >> 0x18);
        auVar42._8_8_ = (ulong)(uint)((1.0 - fVar84) / (float)local_f0) << 0x20;
        auVar42._0_8_ = uVar22;
        auVar95._8_8_ = (ulong)(uint)((fVar85 + 1.0) / fVar44) << 0x20;
        auVar95._0_8_ = uVar20;
        auVar103._8_8_ = (ulong)(uint)((1.0 - fVar85) / fVar44) << 0x20;
        auVar103._0_8_ = uVar21;
        fStack_144 = (1.0 - fVar58) / fVar63;
      }
      else {
        fVar85 = -1.0 / (float)local_f0;
        fVar44 = -1.0 / fVar44;
        local_250 = (float)uVar22;
        fStack_24c = (float)((ulong)uVar22 >> 0x20);
        fVar38 = (float)uVar19;
        fVar45 = (float)((ulong)uVar19 >> 0x20);
        auVar106._0_4_ = fVar38 * fVar38 + fVar45 * fVar45;
        auVar106._4_4_ = fVar85 * fVar85 + 0.0;
        auVar106._8_4_ = fVar38 * fVar38 + fVar45 * fVar45;
        auVar106._12_4_ = fVar85 * fVar85 + 0.0;
        fVar87 = (float)uVar20;
        fVar89 = (float)((ulong)uVar20 >> 0x20);
        auVar42 = NEON_ext(auVar106,auVar106,4,1);
        auVar109._0_4_ = local_250 * local_250 + fStack_24c * fStack_24c;
        auVar109._4_4_ = fVar85 * fVar85 + 0.0;
        auVar109._8_4_ = local_250 * local_250 + fStack_24c * fStack_24c;
        auVar109._12_4_ = fVar85 * fVar85 + 0.0;
        auVar95 = NEON_ext(auVar109,auVar109,4,1);
        fVar53 = (float)uVar21;
        fVar99 = (float)((ulong)uVar21 >> 0x20);
        auVar30._0_4_ = fVar87 * fVar87 + fVar89 * fVar89;
        auVar30._4_4_ = fVar44 * fVar44 + 0.0;
        auVar30._8_4_ = fVar87 * fVar87 + fVar89 * fVar89;
        auVar30._12_4_ = fVar44 * fVar44 + 0.0;
        auVar31._0_4_ = auVar42._0_4_ + auVar42._4_4_;
        auVar31._4_4_ = auVar42._8_4_ + auVar42._12_4_;
        auVar31._8_4_ = auVar42._0_4_ + auVar42._4_4_;
        auVar31._12_4_ = auVar42._8_4_ + auVar42._12_4_;
        auVar32._0_4_ = auVar95._0_4_ + auVar95._4_4_;
        auVar32._4_4_ = auVar95._8_4_ + auVar95._12_4_;
        auVar32._8_4_ = auVar95._0_4_ + auVar95._4_4_;
        auVar32._12_4_ = auVar95._8_4_ + auVar95._12_4_;
        auVar33._0_4_ = fVar53 * fVar53 + fVar99 * fVar99;
        auVar33._4_4_ = fVar44 * fVar44 + 0.0;
        auVar33._8_4_ = fVar53 * fVar53 + fVar99 * fVar99;
        auVar33._12_4_ = fVar44 * fVar44 + 0.0;
        auVar95 = NEON_ext(auVar30,auVar30,4,1);
        auVar42 = NEON_ext(auVar33,auVar33,4,1);
        auVar34._0_4_ = auVar95._0_4_ + auVar95._4_4_;
        auVar34._4_4_ = auVar95._8_4_ + auVar95._12_4_;
        auVar34._8_4_ = auVar95._0_4_ + auVar95._4_4_;
        auVar34._12_4_ = auVar95._8_4_ + auVar95._12_4_;
        auVar95 = NEON_frsqrte(auVar32,4);
        auVar35._0_4_ = auVar42._0_4_ + auVar42._4_4_;
        auVar35._4_4_ = auVar42._8_4_ + auVar42._12_4_;
        auVar35._8_4_ = auVar42._0_4_ + auVar42._4_4_;
        auVar35._12_4_ = auVar42._8_4_ + auVar42._12_4_;
        auVar42 = NEON_frsqrte(auVar31,4);
        auVar102._0_4_ = auVar31._0_4_ * auVar42._0_4_;
        auVar102._4_4_ = auVar31._4_4_ * auVar42._4_4_;
        auVar102._8_4_ = auVar31._8_4_ * auVar42._8_4_;
        auVar102._12_4_ = auVar31._12_4_ * auVar42._12_4_;
        auVar109 = NEON_frsqrte(auVar34,4);
        auVar105._0_4_ = auVar32._0_4_ * auVar95._0_4_;
        auVar105._4_4_ = auVar32._4_4_ * auVar95._4_4_;
        auVar105._8_4_ = auVar32._8_4_ * auVar95._8_4_;
        auVar105._12_4_ = auVar32._12_4_ * auVar95._12_4_;
        auVar103 = NEON_frsqrts(auVar42,auVar102,4);
        auVar106 = NEON_frsqrts(auVar95,auVar105,4);
        auVar86._0_4_ = auVar42._0_4_ * auVar103._0_4_;
        auVar86._4_4_ = auVar42._4_4_ * auVar103._4_4_;
        auVar86._8_4_ = auVar42._8_4_ * auVar103._8_4_;
        auVar86._12_4_ = auVar42._12_4_ * auVar103._12_4_;
        auVar100._0_4_ = auVar95._0_4_ * auVar106._0_4_;
        auVar100._4_4_ = auVar95._4_4_ * auVar106._4_4_;
        auVar100._8_4_ = auVar95._8_4_ * auVar106._8_4_;
        auVar100._12_4_ = auVar95._12_4_ * auVar106._12_4_;
        auVar107._0_4_ = auVar34._0_4_ * auVar109._0_4_;
        auVar107._4_4_ = auVar34._4_4_ * auVar109._4_4_;
        auVar107._8_4_ = auVar34._8_4_ * auVar109._8_4_;
        auVar107._12_4_ = auVar34._12_4_ * auVar109._12_4_;
        auVar42 = NEON_frsqrte(auVar35,4);
        auVar95 = NEON_frsqrts(auVar109,auVar107,4);
        auVar108._0_4_ = auVar109._0_4_ * auVar95._0_4_;
        auVar108._4_4_ = auVar109._4_4_ * auVar95._4_4_;
        auVar108._8_4_ = auVar109._8_4_ * auVar95._8_4_;
        auVar108._12_4_ = auVar109._12_4_ * auVar95._12_4_;
        auVar110._0_4_ = auVar35._0_4_ * auVar42._0_4_;
        auVar110._4_4_ = auVar35._4_4_ * auVar42._4_4_;
        auVar110._8_4_ = auVar35._8_4_ * auVar42._8_4_;
        auVar110._12_4_ = auVar35._12_4_ * auVar42._12_4_;
        auVar95 = NEON_frsqrts(auVar42,auVar110,4);
        auVar104._0_4_ = auVar42._0_4_ * auVar95._0_4_;
        auVar104._4_4_ = auVar42._4_4_ * auVar95._4_4_;
        auVar104._8_4_ = auVar42._8_4_ * auVar95._8_4_;
        auVar104._12_4_ = auVar42._12_4_ * auVar95._12_4_;
        auVar111._0_4_ = auVar31._0_4_ * auVar86._0_4_;
        auVar111._4_4_ = auVar31._4_4_ * auVar86._4_4_;
        auVar111._8_4_ = auVar31._8_4_ * auVar86._8_4_;
        auVar111._12_4_ = auVar31._12_4_ * auVar86._12_4_;
        iVar90 = -(uint)(auVar31._0_4_ == 0.0);
        iVar91 = -(uint)(auVar31._4_4_ == 0.0);
        iVar92 = -(uint)(auVar31._8_4_ == 0.0);
        iVar93 = -(uint)(auVar31._12_4_ == 0.0);
        auVar42 = NEON_frsqrts(auVar86,auVar111,4);
        auVar112._0_4_ = auVar32._0_4_ * auVar100._0_4_;
        auVar112._4_4_ = auVar32._4_4_ * auVar100._4_4_;
        auVar112._8_4_ = auVar32._8_4_ * auVar100._8_4_;
        auVar112._12_4_ = auVar32._12_4_ * auVar100._12_4_;
        auVar95 = NEON_frsqrts(auVar100,auVar112,4);
        fVar38 = fVar38 * auVar86._0_4_ * auVar42._0_4_;
        fVar45 = fVar45 * auVar86._4_4_ * auVar42._4_4_;
        fVar46 = fVar85 * auVar86._8_4_ * auVar42._8_4_;
        fVar84 = auVar86._12_4_ * auVar42._12_4_ * 0.0;
        bVar68 = SUB41(fVar38,0) & ~(byte)iVar90;
        bVar69 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar90 >> 8);
        bVar70 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
        bVar71 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
        bVar72 = SUB41(fVar45,0) & ~(byte)iVar91;
        bVar73 = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar91 >> 8);
        bVar74 = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
        bVar75 = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
        bVar76 = SUB41(fVar46,0) & ~(byte)iVar92;
        bVar77 = (byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar92 >> 8);
        bVar78 = (byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
        bVar79 = (byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        bVar80 = SUB41(fVar84,0) & ~(byte)iVar93;
        bVar81 = (byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar93 >> 8);
        bVar82 = (byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
        bVar83 = (byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
        iVar90 = -(uint)(auVar32._0_4_ == 0.0);
        iVar91 = -(uint)(auVar32._4_4_ == 0.0);
        iVar92 = -(uint)(auVar32._8_4_ == 0.0);
        iVar93 = -(uint)(auVar32._12_4_ == 0.0);
        local_250 = local_250 * auVar100._0_4_ * auVar95._0_4_;
        fStack_24c = fStack_24c * auVar100._4_4_ * auVar95._4_4_;
        fVar85 = fVar85 * auVar100._8_4_ * auVar95._8_4_;
        fVar38 = auVar100._12_4_ * auVar95._12_4_ * 0.0;
        auVar42[0] = SUB41(local_250,0) & ~(byte)iVar90;
        auVar42[1] = (byte)((uint)local_250 >> 8) & ~(byte)((uint)iVar90 >> 8);
        auVar42[2] = (byte)((uint)local_250 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
        auVar42[3] = (byte)((uint)local_250 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
        auVar42[4] = SUB41(fStack_24c,0) & ~(byte)iVar91;
        auVar42[5] = (byte)((uint)fStack_24c >> 8) & ~(byte)((uint)iVar91 >> 8);
        auVar42[6] = (byte)((uint)fStack_24c >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
        auVar42[7] = (byte)((uint)fStack_24c >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
        auVar42[8] = SUB41(fVar85,0) & ~(byte)iVar92;
        auVar42[9] = (byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar92 >> 8);
        auVar42[10] = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
        auVar42[0xb] = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        auVar42[0xc] = SUB41(fVar38,0) & ~(byte)iVar93;
        auVar42[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar93 >> 8);
        auVar42[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
        auVar42[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
        auVar88._0_4_ = auVar34._0_4_ * auVar108._0_4_;
        auVar88._4_4_ = auVar34._4_4_ * auVar108._4_4_;
        auVar88._8_4_ = auVar34._8_4_ * auVar108._8_4_;
        auVar88._12_4_ = auVar34._12_4_ * auVar108._12_4_;
        auVar101._0_4_ = auVar35._0_4_ * auVar104._0_4_;
        auVar101._4_4_ = auVar35._4_4_ * auVar104._4_4_;
        auVar101._8_4_ = auVar35._8_4_ * auVar104._8_4_;
        auVar101._12_4_ = auVar35._12_4_ * auVar104._12_4_;
        auVar95 = NEON_frsqrts(auVar108,auVar88,4);
        auVar103 = NEON_frsqrts(auVar104,auVar101,4);
        iVar94 = -(uint)(auVar34._0_4_ == 0.0);
        iVar96 = -(uint)(auVar34._4_4_ == 0.0);
        iVar97 = -(uint)(auVar34._8_4_ == 0.0);
        iVar98 = -(uint)(auVar34._12_4_ == 0.0);
        iVar90 = -(uint)(auVar35._0_4_ == 0.0);
        iVar91 = -(uint)(auVar35._4_4_ == 0.0);
        iVar92 = -(uint)(auVar35._8_4_ == 0.0);
        iVar93 = -(uint)(auVar35._12_4_ == 0.0);
        fVar87 = fVar87 * auVar108._0_4_ * auVar95._0_4_;
        fVar89 = fVar89 * auVar108._4_4_ * auVar95._4_4_;
        fVar38 = fVar44 * auVar108._8_4_ * auVar95._8_4_;
        fVar45 = auVar108._12_4_ * auVar95._12_4_ * 0.0;
        auVar95[0] = SUB41(fVar87,0) & ~(byte)iVar94;
        auVar95[1] = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar94 >> 8);
        auVar95[2] = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
        auVar95[3] = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
        auVar95[4] = SUB41(fVar89,0) & ~(byte)iVar96;
        auVar95[5] = (byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar96 >> 8);
        auVar95[6] = (byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
        auVar95[7] = (byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
        auVar95[8] = SUB41(fVar38,0) & ~(byte)iVar97;
        auVar95[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar97 >> 8);
        auVar95[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
        auVar95[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
        auVar95[0xc] = SUB41(fVar45,0) & ~(byte)iVar98;
        auVar95[0xd] = (byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar98 >> 8);
        auVar95[0xe] = (byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
        auVar95[0xf] = (byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
        fVar53 = fVar53 * auVar104._0_4_ * auVar103._0_4_;
        fVar99 = fVar99 * auVar104._4_4_ * auVar103._4_4_;
        fVar44 = fVar44 * auVar104._8_4_ * auVar103._8_4_;
        fVar38 = auVar104._12_4_ * auVar103._12_4_ * 0.0;
        auVar103[0] = SUB41(fVar53,0) & ~(byte)iVar90;
        auVar103[1] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar90 >> 8);
        auVar103[2] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
        auVar103[3] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
        auVar103[4] = SUB41(fVar99,0) & ~(byte)iVar91;
        auVar103[5] = (byte)((uint)fVar99 >> 8) & ~(byte)((uint)iVar91 >> 8);
        auVar103[6] = (byte)((uint)fVar99 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
        auVar103[7] = (byte)((uint)fVar99 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
        auVar103[8] = SUB41(fVar44,0) & ~(byte)iVar92;
        auVar103[9] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar92 >> 8);
        auVar103[10] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
        auVar103[0xb] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
        auVar103[0xc] = SUB41(fVar38,0) & ~(byte)iVar93;
        auVar103[0xd] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar93 >> 8);
        auVar103[0xe] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
        auVar103[0xf] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
        fStack_144 = (fVar63 * (fVar58 / fVar63)) / (fVar63 + 1.0);
      }
      local_180[3] = (long *)auVar95._8_8_;
      local_180[2] = (long *)auVar95._0_8_;
      local_180[5] = (long *)auVar103._8_8_;
      local_180[4] = (long *)auVar103._0_8_;
      lVar24 = 0;
      pcStack_188 = (char *)CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar81,CONCAT14(bVar80,CONCAT13
                                                  (bVar79,CONCAT12(bVar78,CONCAT11(bVar77,bVar76))))
                                                  )));
      local_190 = CONCAT17(bVar75,CONCAT16(bVar74,CONCAT15(bVar73,CONCAT14(bVar72,CONCAT13(bVar71,
                                                  CONCAT12(bVar70,CONCAT11(bVar69,bVar68)))))));
      local_180[1] = auVar42._8_8_;
      local_180[0] = auVar42._0_8_;
      uStack_148 = 0xbf800000;
      local_150 = 0;
      uStack_14c = 0;
      uStack_138 = CONCAT44(fVar58 / fVar63,0x3f800000);
      uStack_140 = 0;
      fVar38 = -((float)uStack_80 * fVar47 + fVar48 * uStack_80._4_4_ + fStack_a8 * (float)uStack_78
                + fStack_a4 * uStack_78._4_4_);
      fVar44 = -((float)uStack_80 * (float)local_a0 + local_a0._4_4_ * uStack_80._4_4_ +
                 (float)local_98 * (float)uStack_78 + local_98._4_4_ * uStack_78._4_4_);
      fVar45 = -((float)uStack_80 * (float)local_90 + local_90._4_4_ * uStack_80._4_4_ +
                 (float)uStack_88 * (float)uStack_78 + uStack_88._4_4_ * uStack_78._4_4_);
      while( true ) {
        fVar46 = (float)CONCAT13(bVar71,CONCAT12(bVar70,CONCAT11(bVar69,bVar68)));
        fVar84 = (float)CONCAT13(bVar75,CONCAT12(bVar74,CONCAT11(bVar73,bVar72)));
        fVar85 = (float)CONCAT13(bVar79,CONCAT12(bVar78,CONCAT11(bVar77,bVar76)));
        fVar58 = fVar47 * fVar46 + fVar48 * fVar84 + fStack_a8 * fVar85 + fVar38 * 0.0;
        fVar87 = (float)local_a0 * fVar46 + local_a0._4_4_ * fVar84 + (float)local_98 * fVar85 +
                 fVar44 * 0.0;
        fVar89 = (float)local_90 * fVar46 + local_90._4_4_ * fVar84 + (float)uStack_88 * fVar85 +
                 fVar45 * 0.0;
        fVar53 = fVar38 * fVar58;
        fVar63 = fVar44 * fVar87;
        fVar99 = fVar45 * fVar89;
        fVar46 = (fVar46 * 0.0 + fVar84 * 0.0 + fVar85 * 0.0 + 0.0) * 1.0;
        auVar36._0_4_ = fVar53 + fVar63;
        auVar36._4_4_ = fVar99 + fVar46;
        auVar36._8_4_ = fVar53 + fVar63;
        auVar36._12_4_ = fVar99 + fVar46;
        auVar42 = NEON_ext(auVar36,auVar36,4,1);
        *(ulong *)((long)aplStack_1e8 + lVar24) =
             CONCAT44((float)CONCAT13(bVar83,CONCAT12(bVar82,CONCAT11(bVar81,bVar80))) -
                      (auVar42._0_4_ + auVar42._4_4_),fVar89);
        *(ulong *)((long)aplStack_1e8 + lVar24 + -8) = CONCAT44(fVar87,fVar58);
        if (lVar24 == 0x50) break;
        uVar4 = *(undefined8 *)((long)local_180 + lVar24 + 8);
        bVar76 = (byte)uVar4;
        bVar77 = (byte)((ulong)uVar4 >> 8);
        bVar78 = (byte)((ulong)uVar4 >> 0x10);
        bVar79 = (byte)((ulong)uVar4 >> 0x18);
        bVar80 = (byte)((ulong)uVar4 >> 0x20);
        bVar81 = (byte)((ulong)uVar4 >> 0x28);
        bVar82 = (byte)((ulong)uVar4 >> 0x30);
        bVar83 = (byte)((ulong)uVar4 >> 0x38);
        uVar4 = *(undefined8 *)((long)local_180 + lVar24);
        bVar68 = (byte)uVar4;
        bVar69 = (byte)((ulong)uVar4 >> 8);
        bVar70 = (byte)((ulong)uVar4 >> 0x10);
        bVar71 = (byte)((ulong)uVar4 >> 0x18);
        bVar72 = (byte)((ulong)uVar4 >> 0x20);
        bVar73 = (byte)((ulong)uVar4 >> 0x28);
        bVar74 = (byte)((ulong)uVar4 >> 0x30);
        bVar75 = (byte)((ulong)uVar4 >> 0x38);
        lVar24 = lVar24 + 0x10;
      }
      lVar24 = lVar27 + uVar29 * 0x60;
      auVar11._8_8_ = aplStack_1e8[0];
      auVar11._0_8_ = local_1f0;
      *(ulong *)(lVar24 + 0x1fc) = local_1f0;
      auVar42 = NEON_ext(auVar11,auVar11,8,1);
      *(long *)(lVar24 + 0x204) = auVar42._0_8_;
      auVar12._8_8_ = aplStack_1e8[2];
      auVar12._0_8_ = aplStack_1e8[1];
      *(long **)(lVar24 + 0x20c) = aplStack_1e8[1];
      auVar42 = NEON_ext(auVar12,auVar12,8,1);
      *(long *)(lVar24 + 0x214) = auVar42._0_8_;
      *(long *)(lVar24 + 0x21c) = local_1d0._0_8_;
      auVar42 = NEON_ext(local_1d0,local_1d0,8,1);
      *(long *)(lVar24 + 0x224) = auVar42._0_8_;
      *(long *)(lVar24 + 0x22c) = local_1c0._0_8_;
      auVar42 = NEON_ext(local_1c0,local_1c0,8,1);
      *(long *)(lVar24 + 0x234) = auVar42._0_8_;
      *(long *)(lVar24 + 0x23c) = local_1b0._0_8_;
      auVar42 = NEON_ext(local_1b0,local_1b0,8,1);
      *(long *)(lVar24 + 0x244) = auVar42._0_8_;
      *(long *)(lVar24 + 0x24c) = local_1a0._0_8_;
      auVar42 = NEON_ext(local_1a0,local_1a0,8,1);
      *(long *)(lVar24 + 0x254) = auVar42._0_8_;
    }
switchD_00d2ff34_default:
    uVar29 = uVar29 + 1;
  } while (uVar29 != 4);
  pcStack_188 = (char *)uVar15;
  local_190 = uVar25;
  local_180[1] = (long *)uVar18;
  local_180[0] = plVar26;
  local_180[3] = (long *)uVar14;
  local_180[2] = (long *)uVar13;
  local_180[5] = (long *)uVar17;
  local_180[4] = (long *)uVar16;
  local_b0 = 0x29cc49fce0b7ae17;
  fStack_a8 = SUB84(PTR_s_GrassCollisionViewProjection_047e1080,0);
  fStack_a4 = (float)((ulong)PTR_s_GrassCollisionViewProjection_047e1080 >> 0x20);
  local_a0 = (long *)0x1f;
  local_98 = (long *)0x0;
  FUN_00d30ad0(&local_1f0,&local_b0,*(undefined8 *)(param_1 + 0x38));
  uVar29 = (**(code **)(*param_2 + 0x50))(param_2,&local_1f0,&local_190);
  if (aplStack_1e8[2] != (long *)0x0) {
    (**(code **)(*aplStack_1e8[2] + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uVar29 & 1) != 0) {
    *(char **)(lVar27 + 0x184) = pcStack_188;
    *(ulong *)(lVar27 + 0x17c) = local_190;
    *(long **)(lVar27 + 0x194) = local_180[1];
    *(long **)(lVar27 + 0x18c) = local_180[0];
    *(long **)(lVar27 + 0x1a4) = local_180[3];
    *(long **)(lVar27 + 0x19c) = local_180[2];
    *(long **)(lVar27 + 0x1b4) = local_180[5];
    *(long **)(lVar27 + 0x1ac) = local_180[4];
  }
  local_b0 = 0x1fdc2fbca3264e77;
  fStack_a8 = SUB84(PTR_s_WindViewProjection_047e1088,0);
  fStack_a4 = (float)((ulong)PTR_s_WindViewProjection_047e1088 >> 0x20);
  local_a0 = (long *)0x1f;
  local_98 = (long *)0x0;
  FUN_00d30ad0(&local_1f0,&local_b0,*(undefined8 *)(param_1 + 0x38));
  uVar29 = (**(code **)(*param_2 + 0x50))(param_2,&local_1f0,&local_190);
  if (aplStack_1e8[2] != (long *)0x0) {
    (**(code **)(*aplStack_1e8[2] + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uVar29 & 1) != 0) {
    *(char **)(lVar27 + 0x1c4) = pcStack_188;
    *(ulong *)(lVar27 + 0x1bc) = local_190;
    *(long **)(lVar27 + 0x1d4) = local_180[1];
    *(long **)(lVar27 + 0x1cc) = local_180[0];
    *(long **)(lVar27 + 0x1e4) = local_180[3];
    *(long **)(lVar27 + 0x1dc) = local_180[2];
    *(long **)(lVar27 + 500) = local_180[5];
    *(long **)(lVar27 + 0x1ec) = local_180[4];
  }
  local_f0 = local_f0 & 0xffffffff00000000;
  local_b0 = 0x5535e18d3aed6a6e;
  fStack_a8 = SUB84(PTR_s_WaterIBLTotalRotationAngle_047e1090,0);
  fStack_a4 = (float)((ulong)PTR_s_WaterIBLTotalRotationAngle_047e1090 >> 0x20);
  local_a0 = (long *)0x1f;
  local_98 = (long *)0x0;
  FUN_00d30ad0(&local_1f0,&local_b0,*(undefined8 *)(param_1 + 0x38));
  (**(code **)(*param_2 + 0x38))(param_2,&local_1f0,&local_f0);
  if (aplStack_1e8[2] != (long *)0x0) {
    (**(code **)(*aplStack_1e8[2] + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  fVar38 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  uVar29 = (ulong)((float)local_f0 * (fVar38 / *(float *)PTR_FloatPi_047d23a0));
  pfVar2 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar29 >> 0x18 & 0xff) * 0x10);
  fVar38 = (float)((uint)uVar29 & 0xffffff) * 5.9604645e-08;
  *(float *)(lVar27 + 0x37c) = *pfVar2 + pfVar2[2] * fVar38;
  *(float *)(lVar27 + 0x380) = pfVar2[1] + pfVar2[3] * fVar38;
  lVar24 = DAT_0485a0e0;
  (**(code **)(*DAT_0485a020 + 0x100))(&local_1f0,DAT_0485a020,*(undefined8 *)(param_1 + 0x38));
  uVar29 = *(ulong *)(lVar24 + 0x78);
  local_290 = auVar40._0_4_;
  fStack_28c = auVar40._4_4_;
  fStack_288 = auVar40._8_4_;
  fStack_284 = auVar40._12_4_;
  if (uVar29 == 0) {
    lVar28 = 0;
  }
  else {
    uVar25 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar23 = uVar29 - 1 & local_1f0;
    }
    else if (local_1f0 < uVar29) {
      uVar23 = local_1f0;
    }
    else {
      uVar23 = 0;
      if (uVar29 != 0) {
        uVar23 = local_1f0 / uVar29;
      }
      uVar23 = local_1f0 - uVar23 * uVar29;
    }
    plVar26 = *(long **)(*(long *)(lVar24 + 0x70) + uVar23 * 8);
    if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
      if (1 < uVar25) {
        do {
          uVar25 = plVar26[1];
          if (uVar25 == local_1f0) {
            if (plVar26[2] == local_1f0) goto LAB_00d30810;
          }
          else {
            if (uVar29 <= uVar25) {
              uVar3 = 0;
              if (uVar29 != 0) {
                uVar3 = uVar25 / uVar29;
              }
              uVar25 = uVar25 - uVar3 * uVar29;
            }
            if (uVar25 != uVar23) goto LAB_00d307b8;
          }
          plVar26 = (long *)*plVar26;
          lVar28 = 0;
        } while (plVar26 != (long *)0x0);
        goto LAB_00d3082c;
      }
      do {
        if (plVar26[1] == local_1f0) {
          if (plVar26[2] == local_1f0) goto LAB_00d30810;
        }
        else if ((plVar26[1] & uVar29 - 1) != uVar23) break;
        plVar26 = (long *)*plVar26;
      } while (plVar26 != (long *)0x0);
    }
LAB_00d307b8:
    lVar28 = 0;
  }
LAB_00d3082c:
  if (aplStack_1e8[2] != (long *)0x0) {
    (**(code **)(*aplStack_1e8[2] + 0x20))();
  }
  auVar40 = ZEXT816(0);
  if (lVar28 != 0) {
    auVar37._0_4_ = local_290 * local_290 + fStack_28c * fStack_28c;
    auVar37._4_4_ = fStack_288 * fStack_288 + fStack_284 * fStack_284;
    auVar37._8_4_ = local_290 * local_290 + fStack_28c * fStack_28c;
    auVar37._12_4_ = fStack_288 * fStack_288 + fStack_284 * fStack_284;
    auVar42 = NEON_ext(auVar37,auVar37,4,1);
    auVar43 = auVar40;
    if (0.0 < auVar42._0_4_ + auVar42._4_4_) {
      fVar38 = *(float *)(lVar28 + 0x50);
      fVar44 = *(float *)(lVar28 + 0x54);
      fVar45 = *(float *)(lVar28 + 0x58);
      fVar46 = *(float *)(lVar28 + 0x5c);
      fVar47 = *(float *)(lVar28 + 0x60);
      fVar48 = *(float *)(lVar28 + 100);
      fVar84 = *(float *)(lVar28 + 0x68);
      fVar85 = *(float *)(lVar28 + 0x6c);
      pauVar1 = (undefined1 (*) [12])(lVar28 + 0x70);
      fVar51 = (float)*(undefined8 *)(lVar28 + 0x78);
      fVar52 = (float)((ulong)*(undefined8 *)(lVar28 + 0x78) >> 0x20);
      fVar49 = (float)*(undefined8 *)*pauVar1;
      fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar54 = (float)*(undefined8 *)(lVar28 + 0x80);
      fVar55 = (float)((ulong)*(undefined8 *)(lVar28 + 0x80) >> 0x20);
      fVar56 = (float)*(undefined8 *)(lVar28 + 0x88);
      fVar57 = (float)((ulong)*(undefined8 *)(lVar28 + 0x88) >> 0x20);
      fVar58 = *(float *)(lVar28 + 0xb0);
      fVar87 = *(float *)(lVar28 + 0xb4);
      fVar89 = *(float *)(lVar28 + 0xb8);
      fVar53 = *(float *)(lVar28 + 0xbc);
      fVar63 = *(float *)(lVar28 + 0xc0);
      fVar99 = *(float *)(lVar28 + 0xc4);
      fVar5 = *(float *)(lVar28 + 200);
      fVar6 = *(float *)(lVar28 + 0xcc);
      fVar59 = local_290 * 6000.0 +
               -(fVar54 * fVar38 + fVar44 * fVar55 + fVar45 * fVar56 + fVar46 * fVar57);
      fVar60 = fStack_28c * 6000.0 +
               -(fVar54 * fVar47 + fVar48 * fVar55 + fVar84 * fVar56 + fVar85 * fVar57);
      fVar61 = fStack_288 * 6000.0 +
               -(fVar54 * SUB124(*pauVar1,0) + SUB124(*pauVar1,4) * fVar55 +
                 SUB124(*pauVar1,8) * fVar56 + fVar52 * fVar57);
      fVar62 = fStack_284 * 6000.0 + 1.0;
      fVar7 = *(float *)(lVar28 + 0x90);
      fVar8 = *(float *)(lVar28 + 0x94);
      fVar9 = *(float *)(lVar28 + 0x98);
      fVar10 = *(float *)(lVar28 + 0x9c);
      fVar66 = (float)*(undefined8 *)(lVar28 + 0xa8);
      fVar67 = (float)((ulong)*(undefined8 *)(lVar28 + 0xa8) >> 0x20);
      fVar64 = (float)*(undefined8 *)(lVar28 + 0xa0);
      fVar65 = (float)((ulong)*(undefined8 *)(lVar28 + 0xa0) >> 0x20);
      fVar53 = (fVar10 * fVar38 + fVar67 * fVar44 + fVar53 * fVar45 + fVar6 * fVar46) * fVar59 +
               (fVar10 * fVar47 + fVar67 * fVar48 + fVar53 * fVar84 + fVar6 * fVar85) * fVar60 +
               (fVar10 * fVar49 + fVar67 * fVar50 + fVar53 * fVar51 + fVar6 * fVar52) * fVar61 +
               (fVar54 * fVar10 + fVar67 * fVar55 + fVar53 * fVar56 + fVar6 * fVar57) * fVar62;
      auVar43._0_4_ =
           ((fVar7 * fVar38 + fVar64 * fVar44 + fVar58 * fVar45 + fVar63 * fVar46) * fVar59 +
            (fVar7 * fVar47 + fVar64 * fVar48 + fVar58 * fVar84 + fVar63 * fVar85) * fVar60 +
            (fVar7 * fVar49 + fVar64 * fVar50 + fVar58 * fVar51 + fVar63 * fVar52) * fVar61 +
           (fVar54 * fVar7 + fVar64 * fVar55 + fVar58 * fVar56 + fVar63 * fVar57) * fVar62) / fVar53
      ;
      auVar43._4_4_ =
           ((fVar8 * fVar38 + fVar65 * fVar44 + fVar87 * fVar45 + fVar99 * fVar46) * fVar59 +
            (fVar8 * fVar47 + fVar65 * fVar48 + fVar87 * fVar84 + fVar99 * fVar85) * fVar60 +
            (fVar8 * fVar49 + fVar65 * fVar50 + fVar87 * fVar51 + fVar99 * fVar52) * fVar61 +
           (fVar54 * fVar8 + fVar65 * fVar55 + fVar87 * fVar56 + fVar99 * fVar57) * fVar62) / fVar53
      ;
      auVar43._8_4_ =
           ((fVar9 * fVar38 + fVar66 * fVar44 + fVar89 * fVar45 + fVar5 * fVar46) * fVar59 +
            (fVar9 * fVar47 + fVar66 * fVar48 + fVar89 * fVar84 + fVar5 * fVar85) * fVar60 +
            (fVar9 * fVar49 + fVar66 * fVar50 + fVar89 * fVar51 + fVar5 * fVar52) * fVar61 +
           (fVar54 * fVar9 + fVar66 * fVar55 + fVar89 * fVar56 + fVar5 * fVar57) * fVar62) / fVar53;
      auVar43._12_4_ = fVar53 / fVar53;
    }
    fVar45 = auVar41._8_4_;
    fVar46 = auVar41._12_4_;
    fVar38 = auVar41._0_4_;
    fVar44 = auVar41._4_4_;
    auVar41._0_4_ = fVar38 * fVar38 + fVar44 * fVar44;
    auVar41._4_4_ = fVar45 * fVar45 + fVar46 * fVar46;
    auVar41._8_4_ = fVar38 * fVar38 + fVar44 * fVar44;
    auVar41._12_4_ = fVar45 * fVar45 + fVar46 * fVar46;
    auVar42 = NEON_ext(auVar41,auVar41,4,1);
    *(long *)(lVar27 + 0x38c) = auVar43._0_8_;
    auVar41 = NEON_ext(auVar43,auVar43,8,1);
    *(long *)(lVar27 + 0x394) = auVar41._0_8_;
    if (0.0 < auVar42._0_4_ + auVar42._4_4_) {
      fVar38 = fVar38 * 10000.0;
      fVar44 = fVar44 * 10000.0;
      fVar45 = fVar45 * 10000.0;
      fVar46 = fVar46 * 10000.0;
      fVar47 = *(float *)(lVar28 + 0x50) * fVar38 + (float)*(undefined8 *)(lVar28 + 0x60) * fVar44 +
               (float)*(undefined8 *)(lVar28 + 0x70) * fVar45 +
               (float)*(undefined8 *)(lVar28 + 0x80) * fVar46;
      fVar48 = *(float *)(lVar28 + 0x54) * fVar38 +
               (float)((ulong)*(undefined8 *)(lVar28 + 0x60) >> 0x20) * fVar44 +
               (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20) * fVar45 +
               (float)((ulong)*(undefined8 *)(lVar28 + 0x80) >> 0x20) * fVar46;
      fVar38 = *(float *)(lVar28 + 0x58) * fVar38 + (float)*(undefined8 *)(lVar28 + 0x68) * fVar44 +
               (float)*(undefined8 *)(lVar28 + 0x78) * fVar45 +
               (float)*(undefined8 *)(lVar28 + 0x88) * fVar46;
      auVar40._12_4_ =
           (float)((ulong)*(undefined8 *)(lVar28 + 200) >> 0x20) +
           *(float *)(lVar28 + 0x9c) * fVar47 +
           (float)((ulong)*(undefined8 *)(lVar28 + 0xa8) >> 0x20) * fVar48 +
           (float)((ulong)*(undefined8 *)(lVar28 + 0xb8) >> 0x20) * fVar38;
      auVar40._4_4_ =
           ((float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20) +
           *(float *)(lVar28 + 0x94) * fVar47 +
           (float)((ulong)*(undefined8 *)(lVar28 + 0xa0) >> 0x20) * fVar48 +
           (float)((ulong)*(undefined8 *)(lVar28 + 0xb0) >> 0x20) * fVar38) / auVar40._12_4_;
      auVar40._0_4_ =
           ((float)*(undefined8 *)(lVar28 + 0xc0) +
           *(float *)(lVar28 + 0x90) * fVar47 + (float)*(undefined8 *)(lVar28 + 0xa0) * fVar48 +
           (float)*(undefined8 *)(lVar28 + 0xb0) * fVar38) / auVar40._12_4_;
      uVar39 = 0x3f800000;
      if (auVar40._12_4_ <= 0.0) {
        uVar39 = 0xbf800000;
      }
      auVar40._8_4_ = uVar39;
    }
    auVar41 = NEON_ext(auVar40,auVar40,8,1);
    *(long *)(lVar27 + 0x39c) = auVar40._0_8_;
    *(long *)(lVar27 + 0x3a4) = auVar41._0_8_;
  }
  return;
LAB_00d30810:
  lVar24 = *(long *)(*(long *)(lVar24 + 0x38) + (long)(int)plVar26[6] * 0x20);
  lVar28 = 0;
  if (*(char *)(lVar24 + 0xd0) != '\0') {
    lVar28 = lVar24;
  }
  goto LAB_00d3082c;
}


