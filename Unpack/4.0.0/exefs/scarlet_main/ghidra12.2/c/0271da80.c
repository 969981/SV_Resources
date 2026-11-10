/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271da80; name: FUN_0271da80
 */


void FUN_0271da80(long param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 local_c0 [16];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int local_94;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70 [2];
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  int local_48;
  float local_44;
  
  lVar4 = *(long *)(param_1 + 0x30);
  FUN_00c41540(lVar4);
  fVar9 = 1.0;
  *(float *)(lVar4 + 0x7c) = (float)*(ulong *)(param_1 + 0xa0);
  *(float *)(lVar4 + 0x80) = (float)*(ulong *)(param_1 + 0xa8);
  *(float *)(lVar4 + 0x84) = 1.0 / (float)*(ulong *)(param_1 + 0xa0);
  *(float *)(lVar4 + 0x88) = 1.0 / (float)*(ulong *)(param_1 + 0xa8);
  *(undefined8 *)(lVar4 + 0xedc) = *(undefined8 *)(lVar4 + 0x8c);
  *(undefined8 *)(lVar4 + 0xee4) = *(undefined8 *)(lVar4 + 0x94);
  local_70[0] = -0.331728;
  local_70[1] = 5.2947642e-05;
  puStack_68 = PTR_s_ResolutionWidth_047dcf98;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x58))(param_2,local_70,&local_48);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    fVar9 = (float)local_48 / (float)*(ulong *)(param_1 + 0xa0);
    *(float *)(lVar4 + 0x8c) = fVar9;
    *(float *)(lVar4 + 0x94) = 1.0 / fVar9;
  }
  local_70[0] = 1.16441754e+33;
  local_70[1] = 0.0008987818;
  puStack_68 = PTR_s_ResolutionHeight_047dcfa0;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x58))(param_2,local_70,&local_74);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) == 0) {
    fVar10 = 1.0;
  }
  else {
    fVar10 = (float)local_74 / (float)*(ulong *)(param_1 + 0xa8);
    *(float *)(lVar4 + 0x90) = fVar10;
    *(float *)(lVar4 + 0x98) = 1.0 / fVar10;
  }
  local_70[0] = -9.293629e+12;
  local_70[1] = -2.3370406e+10;
  puStack_68 = PTR_s_ResolutionWidth2D_047d8e58;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x58))(param_2,local_70,&local_78);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0x9c) = (float)local_48 / (float)local_78;
    *(float *)(lVar4 + 0xa4) = 1.0 / ((float)local_48 / (float)local_78);
  }
  local_70[0] = 1.0735427e+19;
  local_70[1] = 1.5965915e+26;
  puStack_68 = PTR_s_ResolutionHeight2D_047d8e60;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x58))(param_2,local_70,&local_7c);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xa0) = (float)local_74 / (float)local_7c;
    *(float *)(lVar4 + 0xa8) = 1.0 / ((float)local_74 / (float)local_7c);
  }
  local_80 = 1.0;
  local_70[0] = -6.1035106e+29;
  local_70[1] = -2.0068831e-10;
  puStack_68 = PTR_s_GlobalTimeSpeed_047e0ef0;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_80);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  dVar6 = (double)*(long *)(*(long *)(DAT_0485a0a0 + 0x70) + 0x150) / 1000000000.0;
  dVar8 = *(double *)(param_1 + 0xb0);
  *(double *)(param_1 + 0xb0) = dVar6;
  dVar6 = (dVar6 - dVar8) * (double)local_80;
  *(double *)(param_1 + 0xc0) = dVar6;
  dVar6 = *(double *)(param_1 + 0xb8) + dVar6;
  *(double *)(param_1 + 0xb8) = dVar6;
  dVar6 = fmod(dVar6,10000.0);
  *(float *)(lVar4 + 0xac) = (float)dVar6;
  *(float *)(lVar4 + 0xb0) = (float)*(double *)(param_1 + 0xc0);
  local_70[0] = 4.3506775e-06;
  local_70[1] = -2.7521963e-29;
  puStack_68 = PTR_s_DetailInstanceFadeNearStart_047e0ef8;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xbc) = local_44;
  }
  local_70[0] = 1.7032478e-12;
  local_70[1] = -3.184424e-38;
  puStack_68 = PTR_s_DetailInstanceFadeNearEnd_047e0f00;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xc0) = local_44;
  }
  local_70[0] = -182012.44;
  local_70[1] = 1837182.9;
  puStack_68 = PTR_s_WorldInstanceFadeNearStart_047e0f08;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xcc) = local_44;
  }
  local_70[0] = 1.8514742e+13;
  local_70[1] = 6.798371e-17;
  puStack_68 = PTR_s_WorldInstanceFadeNearEnd_047e0f10;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xd0) = local_44;
  }
  local_70[0] = -4.917209e+25;
  local_70[1] = -7355.0815;
  puStack_68 = PTR_s_WorldInstanceFadeFarStart_047e0f18;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xd4) = local_44;
  }
  local_70[0] = 697.78516;
  local_70[1] = -3.5556952e+15;
  puStack_68 = PTR_s_WorldInstanceFadeFarEnd_047e0f20;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xd8) = local_44;
  }
  local_70[0] = 7.220023e-16;
  local_70[1] = -1.6003414e+09;
  puStack_68 = PTR_s_TerrainSplatFarUVScale_047e0f28;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xdc) = local_44;
  }
  local_70[0] = -2.066297e-30;
  local_70[1] = -7.0918916e+31;
  puStack_68 = PTR_s_TerrainSplatFarUVDistance_047e0f30;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xe0) = local_44;
  }
  local_70[0] = 5.506247e-20;
  local_70[1] = 1.4300527e-10;
  puStack_68 = PTR_s_TerrainSplatFarScrollDistance_047e0f38;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xe4) = local_44;
  }
  local_70[0] = -3.858904e-36;
  local_70[1] = -3.2996944e+22;
  puStack_68 = PTR_s_TerrainSplatFarIndexDistance_047e0f40;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xe8) = local_44;
  }
  local_70[0] = 7.580435e-07;
  local_70[1] = 6.421017e+25;
  puStack_68 = PTR_s_TerrainSplatFarScrollNearFade_047e0f48;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xec) = local_44;
  }
  local_70[0] = -9.781628e+20;
  local_70[1] = 5.2425164e+33;
  puStack_68 = PTR_s_TerrainSplatFarScrollFarFade_047e0f50;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xf0) = local_44;
  }
  local_84 = 1.0;
  local_70[0] = -7.5726805e-16;
  local_70[1] = 7.9890744e+09;
  puStack_68 = PTR_s_TerrainSplatFarScrollSpeed_047e0f58;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_84);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xf4) = local_84;
  }
  local_70[0] = 8.882267e-16;
  local_70[1] = 1.05737214e-16;
  puStack_68 = PTR_s_AmbientWindSpeed_047e0f60;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_88);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    local_84 = local_88 * local_84;
  }
  local_8c = 0.0;
  local_70[0] = 1.1557072e-24;
  local_70[1] = -4.2842837e-38;
  puStack_68 = PTR_s_TerrainSplatFarScrollDirection_047e0f68;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_8c);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  fVar5 = sinf(local_8c * 3.1415927);
  *(double *)(param_1 + 0xd8) =
       *(double *)(param_1 + 0xd8) + *(double *)(param_1 + 0xc0) * (double)(fVar5 * local_84);
  fVar5 = cosf(local_8c * 3.1415927);
  *(double *)(param_1 + 0xe0) =
       *(double *)(param_1 + 0xe0) + *(double *)(param_1 + 0xc0) * (double)(fVar5 * local_84);
  dVar6 = fmod(*(double *)(param_1 + 0xd8),10000.0);
  *(double *)(param_1 + 0xd8) = dVar6;
  dVar6 = fmod(*(double *)(param_1 + 0xe0),10000.0);
  *(double *)(param_1 + 0xe0) = dVar6;
  *(float *)(lVar4 + 0x120) = (float)*(double *)(param_1 + 0xd8);
  *(float *)(lVar4 + 0x124) = (float)*(double *)(param_1 + 0xe0);
  local_70[0] = -2.3479007e+18;
  local_70[1] = 1.0835885e+27;
  puStack_68 = PTR_s_TerrainSplatFresnelNoise_047e0f70;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0x104) = local_44;
  }
  local_70[0] = 1.1010634e-37;
  local_70[1] = -1.12277335e+21;
  puStack_68 = PTR_s_TerrainSplatFresnelNormalWeight_047e0f78;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    local_70[0] = 1.0;
    pfVar1 = local_70;
    if (local_44 <= 1.0) {
      pfVar1 = &local_44;
    }
    local_b0 = 0.0;
    pfVar2 = &local_b0;
    if (0.0 <= *pfVar1) {
      pfVar2 = pfVar1;
    }
    *(float *)(lVar4 + 0x110) = *pfVar2;
  }
  local_70[0] = 1.767412e-16;
  local_70[1] = 1.2634902e+11;
  puStack_68 = PTR_s_TerrainSplatFresnelNormalScale_047e0f80;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0x114) = local_44;
  }
  local_70[0] = 1.3400716e+12;
  local_70[1] = 0.085948914;
  puStack_68 = PTR_s_ShadowClipHeightEnable_047db0a0;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xebc) = local_44;
  }
  local_70[0] = 5.81879e-12;
  local_70[1] = -0.30430934;
  puStack_68 = PTR_s_ShadowClipHeight_047db0d8;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xec0) = local_44;
  }
  local_70[0] = 1616.5894;
  local_70[1] = 2.5476619e+14;
  puStack_68 = PTR_s_ShadowClipHeightMin_047db0e0;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0xec8) = local_44;
  }
  local_90 = 1;
  local_70[0] = -3.239585e-36;
  local_70[1] = -1.01859175e-33;
  puStack_68 = PTR_s_DynamicAOEnable_047db098;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x58))(param_2,local_70,&local_90);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(float *)(lVar4 + 0x1d4) = (float)local_90;
  local_94 = 1;
  local_70[0] = -7.5530996e-23;
  local_70[1] = 6.398124e-33;
  puStack_68 = PTR_s_SSREnable_047e0f88;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  (**(code **)(*param_2 + 0x58))(param_2,local_70,&local_94);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *(float *)(lVar4 + 0x2ec) = (float)local_94;
  local_70[0] = -1.1668556e-20;
  local_70[1] = 9.933406e-29;
  puStack_68 = PTR_s_LensFlareResolution_047e0f90;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2,local_70,&local_b0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0x34c) = fVar9 * local_b0;
    *(float *)(lVar4 + 0x350) = fVar10 * fStack_ac;
    *(float *)(lVar4 + 0x358) = fStack_a4 / fVar10;
    *(float *)(lVar4 + 0x354) = fStack_a8 / fVar9;
  }
  local_70[0] = -2.477261e+11;
  local_70[1] = -5.2647486e-26;
  puStack_68 = PTR_s_ScreenDisplacementPhase_047e0f98;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_70,&local_44);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(float *)(lVar4 + 0x564) = local_44;
  }
  local_70[0] = 1529917.2;
  local_70[1] = -32558.49;
  puStack_68 = PTR_s_ShadowDirectionalLightDirection_047e0fa0;
  local_60 = 0x1f;
  local_58 = (long *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2,local_70,local_c0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((uVar3 & 1) != 0) {
    *(long *)(lVar4 + 0x77c) = local_c0._0_8_;
    auVar7 = NEON_ext(local_c0,local_c0,8,1);
    *(long *)(lVar4 + 0x784) = auVar7._0_8_;
  }
  *(float *)(lVar4 + 0xce0) = *(float *)(lVar4 + 0xcdc);
  *(float *)(lVar4 + 0xcdc) = *(float *)(lVar4 + 0xcdc) + *(float *)(lVar4 + 0xb0);
  *(ulong *)(lVar4 + 0x75c) =
       CONCAT44(1.0 / (float)*(ulong *)(param_1 + 0xa8),1.0 / (float)*(ulong *)(param_1 + 0xa0));
  *(int *)(lVar4 + 0x764) = (int)*(undefined8 *)(param_1 + 0xa0);
  *(int *)(lVar4 + 0x768) = (int)*(undefined8 *)(param_1 + 0xa8);
  return;
}


