/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02235de0; name: FUN_02235de0
 */


void FUN_02235de0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_260;
  char *pcStack_258;
  undefined8 local_250;
  long *local_248;
  long *local_240;
  undefined8 local_238;
  char *pcStack_230;
  undefined8 local_228;
  long *local_220;
  undefined8 local_218;
  char *pcStack_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  char local_b0 [8];
  undefined1 auStack_a8 [24];
  long *local_90;
  
  local_260 = 0x68d23bb3399f48d5;
  pcStack_258 = "LayerName";
  local_250 = 9;
  local_248 = (long *)0x0;
  FUN_01315eac(local_b0,param_1,&local_260);
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 0x20))();
  }
  if (local_b0[0] != '\0') {
    local_260 = 0xa64abbe5b55e89e0;
    pcStack_258 = "Wait";
    local_250 = 4;
    local_248 = (long *)0x0;
    uVar9 = FUN_0141f968(param_1,&local_260);
    if (local_248 != (long *)0x0) {
      (**(code **)(*local_248 + 0x20))();
    }
    local_260 = 0x6d3428e91d764ab9;
    pcStack_258 = "FadeInTime";
    local_250 = 10;
    local_248 = (long *)0x0;
    uVar12 = FUN_01180d38(param_1,&local_260);
    local_f8 = 0x48ea6f07cf314851;
    pcStack_f0 = "OverrideFadeInTime";
    uVar15 = 0;
    if ((uVar12 & 0xff) != 0) {
      uVar15 = (int)(uVar12 >> 0x20);
    }
    local_e8 = 0x12;
    local_e0 = (long *)0x0;
    uVar10 = FUN_0141f968(param_1,&local_f8);
    local_118 = 0x7278d3e0c2643ea4;
    pcStack_110 = "FadeOutTime";
    local_108 = 0xb;
    local_100 = (long *)0x0;
    bVar4 = (uVar10 & 0xff) != 0 && 0xff < uVar10;
    uVar12 = FUN_01180d38(param_1,&local_118);
    uVar16 = 0;
    if ((uVar12 & 0xff) != 0) {
      uVar16 = (int)(uVar12 >> 0x20);
    }
    local_138 = 0xf9d2ec4417fbdf1c;
    pcStack_130 = "OverrideFadeOutTime";
    local_128 = 0x13;
    local_120 = (long *)0x0;
    uVar10 = FUN_0141f968(param_1,&local_138);
    local_158 = 0xd69f90d5abd308f1;
    pcStack_150 = "DelayTime";
    bVar1 = (uVar10 & 0xff) != 0 && 0xff < uVar10;
    local_148 = 9;
    local_140 = (long *)0x0;
    uVar12 = FUN_01180d38(param_1,&local_158);
    local_178 = 0x1e3af2820804e6f9;
    pcStack_170 = "OverrideDelayTime";
    uVar17 = 0;
    if ((uVar12 & 0xff) != 0) {
      uVar17 = (int)(uVar12 >> 0x20);
    }
    local_168 = 0x11;
    local_160 = (long *)0x0;
    uVar10 = FUN_0141f968(param_1,&local_178);
    local_198 = 0x3ba3138a5557f971;
    pcStack_190 = "HoldTime";
    bVar2 = (uVar10 & 0xff) != 0 && 0xff < uVar10;
    local_188 = 8;
    local_180 = (long *)0x0;
    uVar12 = FUN_01180d38(param_1,&local_198);
    local_1b8 = 0xd95bf99d03875539;
    pcStack_1b0 = "OverrideHoldTime";
    uVar18 = 0;
    if ((uVar12 & 0xff) != 0) {
      uVar18 = (int)(uVar12 >> 0x20);
    }
    local_1a8 = 0x10;
    local_1a0 = (long *)0x0;
    uVar10 = FUN_0141f968(param_1,&local_1b8);
    local_1c8 = 0xb;
    local_1c0 = (long *)0x0;
    local_1d8 = 0xfae83d001333c9fb;
    pcStack_1d0 = "FadeInCurve";
    bVar5 = (uVar10 & 0xff) != 0 && 0xff < uVar10;
    uVar12 = FUN_01470908(param_1,&local_1d8);
    local_1e8 = 0x13;
    local_1e0 = (long *)0x0;
    local_1f8 = 0xad121316ad531023;
    pcStack_1f0 = "OverrideFadeInCurve";
    uVar14 = 4;
    if ((uVar12 & 0xff) != 0) {
      uVar14 = (undefined4)(uVar12 >> 0x20);
    }
    uVar10 = FUN_0141f968(param_1,&local_1f8);
    local_218 = 0x6969c7aefb0e3ff4;
    pcStack_210 = "FadeOutCurve";
    bVar3 = (uVar10 & 0xff) != 0 && 0xff < uVar10;
    local_208 = 0xc;
    local_200 = (long *)0x0;
    uVar12 = FUN_01470908(param_1,&local_218);
    local_238 = 0x773840093506e23c;
    pcStack_230 = "OverrideFadeOutCurve";
    uStack_c4 = 4;
    if ((uVar12 & 0xff) != 0) {
      uStack_c4 = (undefined4)(uVar12 >> 0x20);
    }
    local_228 = 0x14;
    local_220 = (long *)0x0;
    uVar10 = FUN_0141f968(param_1,&local_238);
    local_b7 = (uVar10 & 0xff) != 0 && 0xff < uVar10;
    local_c0 = 0;
    local_b6 = 0;
    local_d8 = uVar15;
    uStack_d4 = uVar16;
    local_d0 = uVar17;
    uStack_cc = uVar18;
    local_c8 = uVar14;
    local_bc = bVar4;
    local_bb = bVar1;
    local_ba = bVar2;
    local_b9 = bVar5;
    local_b8 = bVar3;
    if (local_220 != (long *)0x0) {
      (**(code **)(*local_220 + 0x20))();
    }
    if (local_200 != (long *)0x0) {
      (**(code **)(*local_200 + 0x20))();
    }
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 0x20))();
    }
    if (local_1c0 != (long *)0x0) {
      (**(code **)(*local_1c0 + 0x20))();
    }
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    if (local_180 != (long *)0x0) {
      (**(code **)(*local_180 + 0x20))();
    }
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_248 != (long *)0x0) {
      (**(code **)(*local_248 + 0x20))();
    }
    puVar6 = PTR_DAT_047d8a70;
    if (((*PTR_DAT_047d8a70 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
    puVar8 = PTR_DAT_047d8a80;
    puVar7 = PTR_DAT_047d8a78;
    uVar13 = *(undefined8 *)PTR_DAT_047d8a78;
    *(undefined8 *)PTR_DAT_047d8a80 = uVar13;
    FUN_01314f00(&local_260,uVar13,auStack_a8);
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
    uVar13 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar13;
    FUN_0159baf4(uVar13,&pcStack_258,&local_d8,(uVar9 & 0xff) != 0 && 0xff < uVar9);
    if (local_240 != (long *)0x0) {
      (**(code **)(*local_240 + 0x20))();
    }
    if ((local_b0[0] != '\0') && (local_90 != (long *)0x0)) {
      (**(code **)(*local_90 + 0x20))();
    }
  }
  return;
}


