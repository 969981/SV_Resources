/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108b800; name: FUN_0108b800
 */


void FUN_0108b800(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  int iVar5;
  long *plVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  int *piVar24;
  uint uVar25;
  undefined8 uVar26;
  int *piVar27;
  int iVar28;
  long *plVar29;
  short sVar30;
  int iVar31;
  float fVar32;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [24];
  int local_1f8 [2];
  char *pcStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined8 local_118;
  undefined8 local_110;
  char *local_100;
  char *local_f8;
  long local_f0;
  long *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int *local_d8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  char *local_98;
  char *pcStack_90;
  long local_88;
  long *local_80;
  undefined4 local_64;
  
  local_100 = (char *)0xebb230a179296d18;
  local_f8 = "Movement";
  local_f0 = 8;
  local_e8 = (long *)0x0;
  FUN_00d996a8(auStack_130,param_2,&local_100);
  local_98 = (char *)0x52df90c5b69bfbbe;
  pcStack_90 = "Ground";
  local_88 = 6;
  local_80 = (long *)0x0;
  lVar2 = param_1 + 0xf0;
  piVar12 = (int *)FUN_00d27b5c(auStack_130,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    local_1f8[0] = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    local_1f8[0] = 0;
    if (uVar18 != 0) {
      local_1f8[0] = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x51b8652aab57eb0;
  pcStack_90 = "Water";
  local_88 = 5;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_130,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x52a14e26d97220f6;
  pcStack_90 = "Sky";
  local_88 = 3;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_130,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (char *)0x4d7d39047d8d2e27;
  local_f8 = "BasicAction";
  local_f0 = 0xb;
  local_e8 = (long *)0x0;
  FUN_00d996a8(auStack_148,param_2,&local_100);
  local_98 = (char *)0x41aeecc63018e030;
  pcStack_90 = "MorningActionID";
  local_88 = 0xf;
  local_80 = (long *)0x0;
  lVar2 = param_1 + 0x40;
  piVar12 = (int *)FUN_00d27b5c(auStack_148,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x6b14f6fed0db2db4;
  pcStack_90 = "NoonActionID";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_148,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x1e815781f0cf20d0;
  pcStack_90 = "EveningActionID";
  local_88 = 0xf;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_148,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xb4a86d14e81a501e;
  pcStack_90 = "NightActionID";
  local_88 = 0xd;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_148,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x35fcffb32d7b4b5e;
  pcStack_90 = "MidNightActionID";
  local_88 = 0x10;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_148,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_98 = (char *)0x63f785a077bb3127;
  pcStack_90 = "InstinctAction";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_100,param_2,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x5175929e30cc2b19;
  pcStack_90 = "EatingAction";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_160,&local_100,&local_98);
  FUN_0108e22c(param_1,auStack_160,param_1 + 0x78);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xf0984c1a79620a13;
  pcStack_90 = "RestingAction";
  local_88 = 0xd;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_178,&local_100,&local_98);
  FUN_0108e22c(param_1,auStack_178,param_1 + 0x80);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x79bdc5f8bb18a69a;
  pcStack_90 = "SleepingAction";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_190,&local_100,&local_98);
  FUN_0108e22c(param_1,auStack_190,param_1 + 0x88);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_100 = (char *)0x2a4006cdc60a35c7;
  local_f8 = "PopProbability";
  local_f0 = 0xe;
  local_e8 = (long *)0x0;
  FUN_00d996a8(auStack_1a8,param_2,&local_100);
  local_98 = (char *)0xfdd5b4b3f7ffd33a;
  pcStack_90 = "MorningProbability";
  local_88 = 0x12;
  local_80 = (long *)0x0;
  FUN_00d996a8(local_1f8,auStack_1a8,&local_98);
  FUN_0108e5b4(param_1,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x7572ff493779997e;
  pcStack_90 = "NoonProbability";
  local_88 = 0xf;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_b0,auStack_1a8,&local_98);
  FUN_0108e5b4(param_1,auStack_b0);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x78edfbd7d80c25da;
  pcStack_90 = "EveningProbability";
  local_88 = 0x12;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_c8,auStack_1a8,&local_98);
  FUN_0108e5b4(param_1,auStack_c8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x337485f90cc611f8;
  pcStack_90 = "NightProbability";
  local_88 = 0x10;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_e0,auStack_1a8,&local_98);
  FUN_0108e5b4(param_1,&local_e0);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x22d433baf66cd638;
  pcStack_90 = "MidNightProbability";
  local_88 = 0x13;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_118,auStack_1a8,&local_98);
  FUN_0108e5b4(param_1,&local_118);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_100 = (char *)0x1e0f4e9d77bb5050;
  local_f8 = "WeatherReaction";
  local_f0 = 0xf;
  local_e8 = (long *)0x0;
  FUN_00d996a8(auStack_1c0,param_2,&local_100);
  local_98 = (char *)0x822c631b21d13be3;
  pcStack_90 = "SunnyActionID";
  local_88 = 0xd;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xbbb52d92dff4f272;
  pcStack_90 = "CloudyActionID";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xb5a17c9db3fbe954;
  pcStack_90 = "RainActionID";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x2d1b6563141cb71;
  pcStack_90 = "StormActionID";
  local_88 = 0xd;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x33e466e35645e85d;
  pcStack_90 = "SnowActionID";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xdee8004080d5844c;
  pcStack_90 = "SnowStormActionID";
  local_88 = 0x11;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xd9a5e40be1a3fa94;
  pcStack_90 = "DiamondDustActionID";
  local_88 = 0x13;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x974dad8901c61ecb;
  pcStack_90 = "SandStormActionID";
  local_88 = 0x11;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xcd87b88e0157b123;
  pcStack_90 = "MistActionID";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(auStack_1c0,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_1f8[0] = uVar17;
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_1f8[0] = -0x467bd1ff;
  local_1f8[1] = 0xe3ba62ee;
  pcStack_1f0 = "ObjectRecognition";
  local_1e8 = 0x11;
  local_1e0 = (long *)0x0;
  FUN_00d996a8(auStack_1d8,param_2,local_1f8);
  local_98 = (char *)0x28c797209b568359;
  pcStack_90 = "Conscious";
  local_88 = 9;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_b0,auStack_1d8,&local_98);
  FUN_0108ed74(auStack_b0,param_1 + 0x90);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xc281133bff3a2d17;
  pcStack_90 = "Congnitive";
  local_88 = 10;
  local_80 = (long *)0x0;
  FUN_00d996a8(auStack_c8,auStack_1d8,&local_98);
  FUN_0108ed74(auStack_c8,param_1 + 0x9c);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x9d73c3c462aefb0b;
  pcStack_90 = "PlayerReaction";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_100,auStack_1d8,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x7217f1fc68a3f49;
  pcStack_90 = "ThreatLevel";
  local_88 = 0xb;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_100,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar17;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xac) = 0x1200000011;
  local_98 = (char *)0x37c20bce6fabfcb6;
  pcStack_90 = "ConsciousActionID";
  local_88 = 0x11;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_100,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    local_e0 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    local_e0 = 0;
    if (uVar18 != 0) {
      local_e0 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  FUN_0108dd40(lVar2,&local_e0);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x9787f937451e73b8;
  pcStack_90 = "CongnitiveActionID";
  local_88 = 0x12;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_100,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    local_e0 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    local_e0 = 0;
    if (uVar18 != 0) {
      local_e0 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  FUN_0108dd40(lVar2,&local_e0);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  uVar26 = *(undefined8 *)(param_1 + 8);
  lVar16 = tpidr_el0;
  if (*(long *)(lVar16 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar16 + 0x30) = DAT_04859430;
  }
  local_118 = *(undefined8 *)(lVar16 + 0x30);
  local_110 = *(undefined8 *)(lVar16 + 0x38);
  *(undefined8 *)(lVar16 + 0x30) = uVar26;
  *(undefined2 *)(lVar16 + 0x38) = 1;
  iVar8 = 0;
  do {
    iVar10 = iVar8 + 1;
    std::to_string(iVar10);
    FUN_0108e18c(&local_e0,&local_100);
    plVar6 = (long *)CONCAT44(uStack_dc,local_e0);
    plVar29 = (long *)PTR_DAT_047d8b70;
    if (plVar6 != (long *)0x0) {
      plVar29 = plVar6 + 6;
    }
    local_98 = (char *)*plVar29;
    plVar29 = (long *)PTR_PTR_047d4508;
    if (plVar6 != (long *)0x0) {
      plVar29 = plVar6 + 7;
    }
    pcStack_90 = (char *)*plVar29;
    if (plVar6 == (long *)0x0) {
      local_88 = 0;
      local_80 = (long *)0x0;
    }
    else {
      local_88 = plVar6[8];
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_80 = plVar6;
      if ((long *)CONCAT44(uStack_dc,local_e0) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT44(uStack_dc,local_e0) + 0x20))();
      }
    }
    lVar20 = local_f0;
    if ((((ulong)local_100 & 1) != 0) && (local_f0 != 0)) {
      plVar29 = *(long **)(lVar16 + 0x30);
      if (plVar29 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar29 = DAT_04859430;
        *(long **)(lVar16 + 0x30) = DAT_04859430;
      }
      uVar18 = (**(code **)(*plVar29 + 0xf8))(plVar29);
      if (((uVar18 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar29 + 0x18))(plVar29,lVar20,0,8);
      }
      else {
        FUN_00c48fe8(plVar29,lVar20,0,8);
      }
    }
    FUN_00d996a8(&local_e0,auStack_1d8,&local_98);
    local_e8 = (long *)0x0;
    local_100 = (char *)0xb9e50f7c3384c7bb;
    local_f8 = "DevNo";
    local_f0 = 5;
    piVar12 = (int *)FUN_00d5a5a8(&local_e0,&local_100);
    if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
       (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
      sVar30 = 0;
    }
    else {
      sVar30 = (short)*(undefined4 *)((long)piVar12 + uVar18);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_e8 = (long *)0x0;
    local_100 = (char *)0x529a5326d96c0ac7;
    local_f8 = "Sex";
    local_f0 = 3;
    piVar12 = (int *)FUN_00d27b5c(&local_e0,&local_100);
    if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
       (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)((long)piVar12 + uVar18);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_e8 = (long *)0x0;
    local_100 = (char *)0x7217f1fc68a3f49;
    local_f8 = "ThreatLevel";
    local_f0 = 0xb;
    piVar12 = (int *)FUN_00d27b5c(&local_e0,&local_100);
    if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
       (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
      iVar28 = 0;
    }
    else {
      iVar28 = *(int *)((long)piVar12 + uVar18);
    }
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (((local_d8 == (int *)0x0) || (*(ushort *)((long)local_d8 - (long)*local_d8) < 7)) ||
       (uVar18 = (ulong)((ushort *)((long)local_d8 - (long)*local_d8))[3], uVar18 == 0)) {
LAB_0108cbd4:
      iVar31 = 0;
    }
    else {
      puVar13 = (uint *)((long)local_d8 + uVar18);
      puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
      local_100 = "FormNo";
      puVar13 = bsearch(&local_100,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar13 == (uint *)0x0) ||
         (piVar12 = (int *)CONCAT44(uStack_dc,local_e0), piVar12 == (int *)0x0)) goto LAB_0108cbd4;
      piVar27 = (int *)((long)puVar13 + (ulong)*puVar13);
      puVar21 = (ushort *)((long)piVar27 - (long)*piVar27);
      uVar4 = *puVar21;
      if (uVar4 < 7) {
        piVar24 = (int *)0x0;
      }
      else {
        piVar24 = (int *)0x0;
        if ((ulong)puVar21[3] != 0) {
          puVar13 = (uint *)((long)piVar27 + (ulong)puVar21[3]);
          piVar24 = (int *)((long)puVar13 + (ulong)*puVar13);
        }
      }
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar18 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar18 == 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (long)*(char *)((long)piVar24 + uVar18) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar18 * 8) == 4) {
        if (uVar4 < 0xb) {
          uVar25 = 0;
LAB_0108cc60:
          iVar31 = 0;
        }
        else {
          uVar25 = 0;
          if ((ulong)puVar21[5] != 0) {
            uVar25 = (uint)*(ushort *)((long)piVar27 + (ulong)puVar21[5]);
          }
          if ((uVar4 < 0xd) || ((ulong)puVar21[6] == 0)) goto LAB_0108cc60;
          iVar31 = *(int *)((long)piVar27 + (ulong)puVar21[6]);
        }
        if ((uVar25 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
           (uVar18 = (ulong)*(ushort *)(((long)piVar12 - (long)*piVar12) + (ulong)uVar25),
           uVar18 != 0)) {
          iVar31 = *(int *)((long)piVar12 + uVar18);
        }
      }
      else if ((uVar4 < 0xd) || ((ulong)puVar21[6] == 0)) {
        iVar31 = 0;
      }
      else {
        iVar31 = *(int *)((long)piVar27 + (ulong)puVar21[6]);
      }
    }
    iVar1 = iVar8 * 2 + 0x13;
    iVar8 = iVar8 * 2 + 0x14;
    piVar12 = *(int **)(param_1 + 0xc0);
    iVar5 = (int)sVar30;
    iVar11 = iVar11 + -1;
    if (piVar12 == *(int **)(param_1 + 200)) {
      uVar18 = *(ulong *)(param_1 + 0xd8);
      lVar20 = (long)piVar12 - *(long *)(param_1 + 0xb8) >> 3;
      if (0x7ffffffffffffffe < uVar18) {
        uVar18 = 0x7fffffffffffffff;
      }
      uVar3 = lVar20 * -0x5555555555555555 + 1;
      if (uVar18 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar19 = (long)*(int **)(param_1 + 200) - *(long *)(param_1 + 0xb8) >> 3;
      uVar22 = lVar19 * 0x5555555555555556;
      if (uVar3 <= uVar22) {
        uVar3 = uVar22;
      }
      if (uVar18 >> 1 <= (ulong)(lVar19 * -0x5555555555555555)) {
        uVar3 = uVar18;
      }
      if (uVar3 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))
                           (*(long **)(param_1 + 0xd0),uVar3 * 0x18,4);
        if (lVar19 == 0) {
          (**(code **)(**(long **)(param_1 + 0xd0) + 0xe8))();
        }
      }
      piVar12 = (int *)(lVar19 + lVar20 * 8);
      uVar26 = *(undefined8 *)(param_1 + 0xd0);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        *piVar12 = iVar5;
        lVar20 = lVar19 + lVar20 * 8;
        *(int *)(lVar20 + 4) = iVar31;
        *(int *)(lVar20 + 8) = iVar11;
        *(int *)(lVar20 + 0xc) = iVar28;
        *(int *)(lVar20 + 0x10) = iVar1;
        *(int *)(lVar20 + 0x14) = iVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_0108dc80;
        *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar26;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        *piVar12 = iVar5;
        lVar20 = lVar19 + lVar20 * 8;
        *(int *)(lVar20 + 4) = iVar31;
        *(int *)(lVar20 + 8) = iVar11;
        *(int *)(lVar20 + 0xc) = iVar28;
        *(int *)(lVar20 + 0x10) = iVar1;
        *(int *)(lVar20 + 0x14) = iVar8;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      lVar20 = *(long *)(param_1 + 0xb8);
      lVar14 = *(long *)(param_1 + 0xc0);
      piVar27 = piVar12;
      if (lVar14 != lVar20) {
        do {
          uVar26 = *(undefined8 *)(param_1 + 0xd0);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar15 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar15 == 0) {
            uVar26 = *(undefined8 *)(lVar14 + -0x18);
            uVar23 = *(undefined8 *)(lVar14 + -8);
            *(undefined8 *)(piVar27 + -4) = *(undefined8 *)(lVar14 + -0x10);
            *(undefined8 *)(piVar27 + -2) = uVar23;
            *(undefined8 *)(piVar27 + -6) = uVar26;
          }
          else {
            if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_0108dc80;
            *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar26;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
            uVar23 = *(undefined8 *)(lVar14 + -8);
            uVar26 = *(undefined8 *)(lVar14 + -0x10);
            *(undefined8 *)(piVar27 + -6) = *(undefined8 *)(lVar14 + -0x18);
            *(undefined8 *)(piVar27 + -4) = uVar26;
            *(undefined8 *)(piVar27 + -2) = uVar23;
            *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
          }
          lVar14 = lVar14 + -0x18;
          piVar27 = piVar27 + -6;
        } while (lVar20 != lVar14);
        lVar20 = *(long *)(param_1 + 0xb8);
      }
      *(int **)(param_1 + 0xb8) = piVar27;
      *(int **)(param_1 + 0xc0) = piVar12 + 6;
      lVar14 = *(long *)(param_1 + 200);
      *(ulong *)(param_1 + 200) = lVar19 + uVar3 * 0x18;
      if (lVar20 != 0) {
        plVar29 = *(long **)(param_1 + 0xd0);
        lVar14 = lVar14 - lVar20;
        uVar18 = (**(code **)(*plVar29 + 0xf8))(plVar29);
        if (((uVar18 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar29 + 0x18))(plVar29,lVar20,lVar14,4);
        }
        else {
          FUN_00c48fe8(plVar29,lVar20,lVar14,4);
        }
      }
    }
    else {
      uVar26 = *(undefined8 *)(param_1 + 0xd0);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar20 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar20 == 0) {
        *piVar12 = iVar5;
        piVar12[1] = iVar31;
        piVar12[2] = iVar11;
        piVar12[3] = iVar28;
        piVar12[4] = iVar1;
        piVar12[5] = iVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_0108dc80;
        *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar26;
        *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
        *piVar12 = iVar5;
        piVar12[1] = iVar31;
        piVar12[2] = iVar11;
        piVar12[3] = iVar28;
        piVar12[4] = iVar1;
        piVar12[5] = iVar8;
        *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
      }
      *(int **)(param_1 + 0xc0) = piVar12 + 6;
    }
    local_e8 = (long *)0x0;
    local_100 = (char *)0x37c20bce6fabfcb6;
    local_f8 = "ConsciousActionID";
    local_f0 = 0x11;
    piVar12 = (int *)FUN_00d27b5c(&local_e0,&local_100);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      local_64 = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      local_64 = 0;
      if (uVar18 != 0) {
        local_64 = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    FUN_0108dd40(lVar2,&local_64);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    local_e8 = (long *)0x0;
    local_100 = (char *)0x9787f937451e73b8;
    local_f8 = "CongnitiveActionID";
    local_f0 = 0x12;
    piVar12 = (int *)FUN_00d27b5c(&local_e0,&local_100);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      local_64 = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      local_64 = 0;
      if (uVar18 != 0) {
        local_64 = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    FUN_0108dd40(lVar2,&local_64);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    iVar8 = iVar10;
  } while (iVar10 != 4);
  *(undefined8 *)(lVar16 + 0x30) = local_118;
  *(undefined2 *)(lVar16 + 0x38) = (undefined2)local_110;
  if (local_1e0 != (long *)0x0) {
    (**(code **)(*local_1e0 + 0x20))();
  }
  piVar12 = (int *)param_2[1];
  fVar32 = 0.0;
  if (((piVar12 != (int *)0x0) && (6 < *(ushort *)((long)piVar12 - (long)*piVar12))) &&
     (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 != 0)) {
    puVar13 = (uint *)((long)piVar12 + uVar18);
    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    piVar12 = (int *)*param_2;
    local_98 = "HomeRange";
    puVar13 = bsearch(&local_98,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar13 != (uint *)0x0) && (piVar12 != (int *)0x0)) {
      piVar27 = (int *)((long)puVar13 + (ulong)*puVar13);
      puVar21 = (ushort *)((long)piVar27 - (long)*piVar27);
      uVar4 = *puVar21;
      if (uVar4 < 7) {
        piVar24 = (int *)0x0;
      }
      else {
        piVar24 = (int *)0x0;
        if ((ulong)puVar21[3] != 0) {
          puVar13 = (uint *)((long)piVar27 + (ulong)puVar21[3]);
          piVar24 = (int *)((long)puVar13 + (ulong)*puVar13);
        }
      }
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar18 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar18 == 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (long)*(char *)((long)piVar24 + uVar18) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar18 * 8) == 4) {
        fVar32 = 0.0;
        if (uVar4 < 0xb) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          if ((ulong)puVar21[5] != 0) {
            uVar25 = (uint)*(ushort *)((long)piVar27 + (ulong)puVar21[5]);
          }
          if ((0xe < uVar4) && ((ulong)puVar21[7] != 0)) {
            fVar32 = (float)*(double *)((long)piVar27 + (ulong)puVar21[7]);
          }
        }
        if ((uVar25 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
           (uVar18 = (ulong)*(ushort *)(((long)piVar12 - (long)*piVar12) + (ulong)uVar25),
           uVar18 != 0)) {
          fVar32 = *(float *)((long)piVar12 + uVar18);
        }
      }
      else if ((0xe < uVar4) && ((ulong)puVar21[7] != 0)) {
        fVar32 = (float)*(double *)((long)piVar27 + (ulong)puVar21[7]);
      }
    }
  }
  *(float *)(param_1 + 0x160) = fVar32;
  local_f0 = 0xe;
  local_e8 = (long *)0x0;
  local_100 = (char *)0x545959ebe8d9b5a4;
  local_f8 = "BattleReaction";
  FUN_00d996a8(auStack_210,param_2,&local_100);
  if ((param_3 & 1) == 0) {
    local_98 = (char *)0x1a777c9570cf2071;
    pcStack_90 = "SimpleBattleHecklerReactionID";
    local_88 = 0x1d;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      local_1f8[0] = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      local_1f8[0] = 0;
      if (uVar18 != 0) {
        local_1f8[0] = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    FUN_0108dd40(lVar2,local_1f8);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
    FUN_0108dd40(lVar2,&local_98);
    local_98 = (char *)0x1c1eb7d7732790db;
    pcStack_90 = "BattleHecklerReactionID";
    local_88 = 0x17;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      uVar17 = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    local_1f8[0] = uVar17;
    FUN_0108dd40(lVar2,local_1f8);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
    FUN_0108dd40(lVar2,&local_98);
  }
  else {
    local_98 = (char *)0x1a777c9570cf2071;
    pcStack_90 = "SimpleBattleHecklerReactionID";
    local_88 = 0x1d;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      local_1f8[0] = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      local_1f8[0] = 0;
      if (uVar18 != 0) {
        local_1f8[0] = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    FUN_0108dd40(lVar2,local_1f8);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = (char *)0x476cfaea552fc582;
    pcStack_90 = "GroupSimpleBattleReactionID";
    local_88 = 0x1b;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
    if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
       (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)piVar12 + uVar18);
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_1f8[0] = iVar8;
    if (iVar8 == 0) {
      local_98 = (char *)0x19d3bc182402544f;
      pcStack_90 = "SimpleBattleReactionID";
      local_88 = 0x16;
      local_80 = (long *)0x0;
      piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
      if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
         (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((long)piVar12 + uVar18);
      }
      local_1f8[0] = iVar8;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
    }
    piVar12 = *(int **)(param_1 + 0x48);
    if (piVar12 == *(int **)(param_1 + 0x50)) {
      FUN_0108f1dc(lVar2,local_1f8);
    }
    else {
      uVar26 = *(undefined8 *)(param_1 + 0x58);
      if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar16 == 0) {
        *piVar12 = iVar8;
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_0108dc80;
        *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar26;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        *piVar12 = iVar8;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      *(int **)(param_1 + 0x48) = piVar12 + 1;
    }
    local_98 = (char *)0x1c1eb7d7732790db;
    pcStack_90 = "BattleHecklerReactionID";
    local_88 = 0x17;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      local_1f8[0] = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      local_1f8[0] = 0;
      if (uVar18 != 0) {
        local_1f8[0] = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    FUN_0108dd40(lVar2,local_1f8);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = (char *)0x96ae7ed0a82d9fc;
    pcStack_90 = "GroupBattleReactionID";
    local_88 = 0x15;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(auStack_210,&local_98);
    if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
      uVar17 = 0;
    }
    else {
      uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
      }
    }
    local_1f8[0] = uVar17;
    FUN_0108dd40(lVar2,local_1f8);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  local_228 = *param_2;
  local_220 = param_2[1];
  uStack_218 = param_2[2];
  local_98 = (char *)0xb3121943d37cf587;
  pcStack_90 = "PlayerEscapedReactionID";
  local_88 = 0x17;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_228,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_100 = (char *)CONCAT44(local_100._4_4_,uVar17);
  FUN_0108dd40(lVar2,&local_100);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0xbe6a3ff5e51fb4b4;
  pcStack_90 = "TreeShakingReactionID";
  local_88 = 0x15;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_228,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    uVar17 = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  local_100 = (char *)CONCAT44(local_100._4_4_,uVar17);
  FUN_0108dd40(lVar2,&local_100);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_240 = *param_2;
  local_238 = param_2[1];
  uStack_230 = param_2[2];
  local_98 = (char *)0x545959ebe8d9b5a4;
  pcStack_90 = "BattleReaction";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_100,&local_240,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x512711f4c309afe9;
  pcStack_90 = "BattleReactionID";
  local_88 = 0x10;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_100,&local_98);
  if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
     (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((long)piVar12 + uVar18);
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_1f8[0] = iVar8;
  if (iVar8 == 0) {
    local_98 = (char *)0x512711f4c309afe9;
    pcStack_90 = "BattleReactionID";
    local_88 = 0x10;
    local_80 = (long *)0x0;
    piVar12 = (int *)FUN_00d27b5c(&local_240,&local_98);
    if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
       (uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar18 == 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)piVar12 + uVar18);
    }
    local_1f8[0] = iVar8;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  piVar12 = *(int **)(param_1 + 0x48);
  if (piVar12 == *(int **)(param_1 + 0x50)) {
    FUN_0108f1dc(lVar2,local_1f8);
  }
  else {
    uVar26 = *(undefined8 *)(param_1 + 0x58);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 == 0) {
      *piVar12 = iVar8;
    }
    else {
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_0108dc80:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar26;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      *piVar12 = iVar8;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    *(int **)(param_1 + 0x48) = piVar12 + 1;
  }
  local_98 = (char *)0x70c413ae33c81d83;
  pcStack_90 = "PreBattleActionID";
  local_88 = 0x11;
  local_80 = (long *)0x0;
  piVar12 = (int *)FUN_00d27b5c(&local_100,&local_98);
  if ((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) {
    local_1f8[0] = 0;
  }
  else {
    uVar18 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3];
    local_1f8[0] = 0;
    if (uVar18 != 0) {
      local_1f8[0] = *(undefined4 *)((long)piVar12 + uVar18);
    }
  }
  FUN_0108dd40(lVar2,local_1f8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x2b2712e026ba901e;
  pcStack_90 = "AllowSuspend";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  bVar7 = FUN_00cf7518(param_2,&local_98);
  *(byte *)(param_1 + 0x164) = bVar7 & 1;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if ((param_4 & 1) != 0) {
    local_258 = *param_2;
    local_250 = param_2[1];
    uStack_248 = param_2[2];
    local_98 = (char *)0xc2c966fcd6f1af18;
    pcStack_90 = "IsRefereceSingleData";
    local_88 = 0x14;
    local_80 = (long *)0x0;
    bVar7 = FUN_00cf7518(&local_258,&local_98);
    *(byte *)(param_1 + 0x165) = bVar7 & 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return;
}


