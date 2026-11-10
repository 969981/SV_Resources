/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125628c; name: FUN_0125628c
 */


void FUN_0125628c(undefined8 param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *local_3a0;
  long *local_398;
  long *local_390;
  long *local_388;
  long *local_380;
  long *local_378;
  long *local_370;
  long *local_368;
  long *local_360;
  long *local_358;
  long *local_350;
  long *local_348;
  long *local_340;
  long *plStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined1 **local_308;
  undefined1 ****ppppuStack_300;
  undefined1 ***local_2f8;
  code **ppcStack_2f0;
  undefined1 *local_2e8;
  undefined1 **ppuStack_2e0;
  undefined1 *local_2d8;
  undefined1 **local_2d0;
  undefined1 **ppuStack_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined8 local_2b0;
  code *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [96];
  undefined1 *local_230;
  code *local_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 **local_210 [12];
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190 [12];
  code *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 ***local_110;
  code **ppcStack_108;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *plStack_70;
  
  uVar18 = *(undefined8 *)(param_2 + 8);
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  local_a8 = *(undefined8 *)(lVar4 + 0x30);
  local_a0 = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(lVar4 + 0x30) = uVar18;
  *(undefined2 *)(lVar4 + 0x38) = 1;
  uVar13 = FUN_012595d8(param_1,1);
  local_2d0 = &puStack_2b8;
  ppuStack_2c8 = &local_2c0;
  local_210[0] = &local_2d8;
  local_ac[0] = 0;
  if ((uVar13 & 0xff) != 0) {
    local_ac[0] = (char)(uVar13 >> 8);
  }
  local_230 = &LAB_01231d28;
  local_228 = FUN_02b21a5c;
  local_220 = &LAB_02b21a60;
  puStack_218 = &LAB_02b21a6c;
  local_1b0 = &LAB_02122374;
  local_2e8 = local_ac;
  ppcStack_2f0 = &local_130;
  local_1a8 = FUN_02b21a78;
  local_2a0 = 0;
  uStack_298 = 0;
  ppuStack_2e0 = &local_230;
  local_2b0 = 0;
  local_2a8 = (code *)0x0;
  local_1a0 = &LAB_02b21a7c;
  local_198 = &LAB_02b21a88;
  uStack_328 = *(undefined8 *)(param_2 + 8);
  local_2f8 = &local_2d0;
  local_310 = 0;
  local_308 = &local_2e8;
  ppppuStack_300 = &local_2f8;
  local_130 = thunk_FUN_01810cf8;
  local_128 = FUN_02b21a94;
  local_120 = &LAB_02b21a98;
  puStack_118 = &LAB_02b21aa4;
  local_340 = (long *)0x0;
  plStack_338 = (long *)0x0;
  local_330 = 0;
  local_320 = 0x492492492492492;
  uStack_318 = 0;
  local_2d8 = local_2e8;
  local_2c0 = local_2e8;
  puStack_2b8 = local_2e8;
  local_190[0] = ppcStack_2f0;
  local_110 = local_2f8;
  ppcStack_108 = ppcStack_2f0;
  FUN_01259510(&local_340);
  plVar22 = local_340;
  puVar5 = PTR_DAT_047d4240;
  local_90 = (long *)0x0;
  if (((*PTR_DAT_047d4240 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar7 = PTR_DAT_047d4250;
  puVar6 = PTR_DAT_047d4248;
  uVar18 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"resident_field");
  plVar14 = local_90;
  local_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_90 = local_98;
  local_88 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"plan_area23");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)((ulong)local_80._4_4_ << 0x20);
  local_88 = local_98;
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  plVar22 = local_340;
  local_90 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"streaming_event");
  plVar14 = local_90;
  local_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_90 = local_98;
  local_88 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"world_item");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
  local_88 = local_98;
  FUN_01258834(plVar22 + 7,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar22 = local_340 + 7;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"streaming_event.t01_ladder_01");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_88 = local_98;
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar22 = local_340 + 0xe;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"common_resident.objects_un_temporary_sea01_001");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_88 = local_98;
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar22 = local_340 + 0xe;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"common_resident.SceneObject");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_88 = local_98;
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar22 = local_340 + 0x15;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"common_resident.objects_un_cloudtest02");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_88 = local_98;
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  plVar14 = local_340;
  lVar21 = local_340[0x1c];
  lVar19 = local_340[0x1d];
  plVar22 = local_340;
  while (local_340 = plVar22, lVar19 != lVar21) {
    if (*(long **)(lVar19 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar19 + -0x10) + 0x20))();
    }
    plVar23 = (long *)(lVar19 + -0x18);
    lVar19 = lVar19 + -0x18;
    plVar22 = local_340;
    if ((long *)*plVar23 != (long *)0x0) {
      (**(code **)(*(long *)*plVar23 + 0x20))();
      plVar22 = local_340;
    }
  }
  plVar14[0x1d] = lVar21;
  local_90 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"streaming_event");
  plVar14 = local_90;
  local_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_90 = local_98;
  local_88 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"world_trainer");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
  local_88 = local_98;
  FUN_01258834(plVar22 + 0x23,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  plVar22 = local_340;
  local_90 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"streaming_event");
  plVar14 = local_90;
  local_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_90 = local_98;
  local_88 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"world_npc");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
  local_88 = local_98;
  FUN_01258834(plVar22 + 0x23,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  plVar22 = local_340;
  local_90 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"field_system");
  plVar14 = local_90;
  local_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_90 = local_98;
  local_88 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"encount");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
  local_88 = local_98;
  FUN_01258834(plVar22 + 0x2a,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  plVar22 = local_340;
  local_90 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"streaming_event");
  plVar14 = local_90;
  local_90 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  local_90 = local_98;
  local_88 = (long *)0x0;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"th_fielddata_test");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
  local_88 = local_98;
  FUN_01258834(plVar22 + 0x2a,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar22 = local_340 + 0x31;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"playables.partner_pokemon");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_88 = local_98;
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar22 = local_340 + 0x31;
  if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar18 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar18;
  FUN_00cf9884(&local_98,uVar18,"playables.Player");
  plVar14 = local_88;
  local_88 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = local_98;
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  local_88 = local_98;
  FUN_01258834(plVar22,&local_90);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  iVar12 = 0;
  plVar22 = (long *)((ulong)&local_90 | 1);
  do {
    local_348 = (long *)0x0;
    pcVar2 = "m";
    if (iVar12 != 1) {
      pcVar2 = "s";
    }
    pcVar3 = "l";
    if (iVar12 != 2) {
      pcVar3 = pcVar2;
    }
    if (*pcVar3 == '\0') {
      plVar14 = (long *)FUN_00d44228();
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_348 = plVar14;
    }
    else {
      if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      uVar18 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar18;
      FUN_00cf9884(&local_90,uVar18,pcVar3);
      plVar14 = local_348;
      local_348 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      local_348 = local_90;
    }
    FUN_01259384(&local_350,&local_348);
    FUN_012593ec(&local_358,&local_348);
    iVar10 = 1;
    do {
      std::to_string(iVar10);
      local_98 = plVar22;
      if (((ulong)local_90 & 1) != 0) {
        local_98 = local_80;
      }
      FUN_012590b8(&local_360,"town_c0",&local_98,&local_358);
      plVar14 = local_80;
      if ((((ulong)local_90 & 1) != 0) && (local_80 != (long *)0x0)) {
        plVar23 = *(long **)(lVar4 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar13 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,plVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,plVar14,0,8);
        }
      }
      plVar23 = local_340;
      plVar14 = local_350;
      if (local_350 != (long *)0x0) {
        (**(code **)(*local_350 + 0x18))(local_350);
      }
      plVar15 = local_360;
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x18))(local_360);
      }
      local_90 = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_88 = plVar15;
      if (plVar15 == (long *)0x0) {
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
      }
      else {
        (**(code **)(*plVar15 + 0x18))(plVar15);
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      plVar23 = local_340;
      plVar14 = local_360;
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x18))(local_360);
      }
      local_90 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      uVar18 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar18;
      FUN_00cf9884(&local_98,uVar18,"resident_field");
      plVar15 = local_90;
      local_90 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      plVar15 = local_98;
      local_90 = local_98;
      local_88 = plVar14;
      if (plVar14 == (long *)0x0) {
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
      }
      else {
        (**(code **)(*plVar14 + 0x18))(plVar14);
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x20))();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 4);
    iVar10 = 2;
    do {
      std::to_string(iVar10);
      local_98 = plVar22;
      if (((ulong)local_90 & 1) != 0) {
        local_98 = local_80;
      }
      FUN_012590b8(&local_360,"town_t0",&local_98,&local_358);
      plVar14 = local_80;
      if ((((ulong)local_90 & 1) != 0) && (local_80 != (long *)0x0)) {
        plVar23 = *(long **)(lVar4 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar13 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,plVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,plVar14,0,8);
        }
      }
      plVar23 = local_340;
      plVar14 = local_350;
      if (local_350 != (long *)0x0) {
        (**(code **)(*local_350 + 0x18))(local_350);
      }
      plVar15 = local_360;
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x18))(local_360);
      }
      local_90 = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_88 = plVar15;
      if (plVar15 == (long *)0x0) {
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
      }
      else {
        (**(code **)(*plVar15 + 0x18))(plVar15);
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      plVar23 = local_340;
      plVar14 = local_360;
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x18))(local_360);
      }
      local_90 = (long *)0x0;
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      uVar18 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar18;
      FUN_00cf9884(&local_98,uVar18,"resident_field");
      plVar15 = local_90;
      local_90 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      plVar15 = local_98;
      local_90 = local_98;
      local_88 = plVar14;
      if (plVar14 == (long *)0x0) {
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
      }
      else {
        (**(code **)(*plVar14 + 0x18))(plVar14);
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x20))();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 10);
    uVar17 = 1;
    do {
      if (uVar17 < 10) {
        std::to_string(uVar17);
        local_360 = plVar22;
        if (((ulong)local_90 & 1) != 0) {
          local_360 = local_80;
        }
        FUN_01259170(&local_98,&local_360);
      }
      else {
        std::to_string(uVar17);
        local_360 = plVar22;
        if (((ulong)local_90 & 1) != 0) {
          local_360 = local_80;
        }
        FUN_0125902c(&local_98,&local_360);
      }
      plVar14 = local_80;
      if ((((ulong)local_90 & 1) != 0) && (local_80 != (long *)0x0)) {
        plVar23 = *(long **)(lVar4 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar13 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,plVar14,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,plVar14,0,8);
        }
      }
      plVar23 = local_340;
      plVar14 = local_350;
      if (local_350 != (long *)0x0) {
        (**(code **)(*local_350 + 0x18))(local_350);
      }
      plVar15 = local_98;
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))(local_98);
      }
      local_90 = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      local_88 = plVar15;
      if (plVar15 == (long *)0x0) {
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
      }
      else {
        (**(code **)(*plVar15 + 0x18))(plVar15);
        local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
        FUN_01258834(plVar23,&local_90);
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x17);
    if (local_358 != (long *)0x0) {
      (**(code **)(*local_358 + 0x20))();
    }
    if (local_350 != (long *)0x0) {
      (**(code **)(*local_350 + 0x20))();
    }
    if (local_348 != (long *)0x0) {
      (**(code **)(*local_348 + 0x20))();
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 3);
  iVar12 = 0;
  do {
    plVar22 = local_340;
    FUN_01258bec(&local_368,iVar12,"_resident",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"resident_field");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_368;
    local_90 = local_98;
    local_88 = local_368;
    if (local_368 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22,&local_90);
    }
    else {
      (**(code **)(*local_368 + 0x18))(local_368);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_368 != (long *)0x0) {
      (**(code **)(*local_368 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_370,iVar12,"_streaming_s",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_field_s");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_370;
    local_90 = local_98;
    local_88 = local_370;
    if (local_370 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 7,&local_90);
    }
    else {
      (**(code **)(*local_370 + 0x18))(local_370);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 7,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_370 != (long *)0x0) {
      (**(code **)(*local_370 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_378,iVar12,"_streaming_m",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_field_m");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_378;
    local_90 = local_98;
    local_88 = local_378;
    if (local_378 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 7,&local_90);
    }
    else {
      (**(code **)(*local_378 + 0x18))(local_378);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 7,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_378 != (long *)0x0) {
      (**(code **)(*local_378 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_380,iVar12,"_streaming_l",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_field_l");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_380;
    local_90 = local_98;
    local_88 = local_380;
    if (local_380 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 7,&local_90);
    }
    else {
      (**(code **)(*local_380 + 0x18))(local_380);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 7,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_380 != (long *)0x0) {
      (**(code **)(*local_380 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_388,iVar12,"_effect",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_field_s");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_388;
    local_90 = local_98;
    local_88 = local_388;
    if (local_388 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x1c,&local_90);
    }
    else {
      (**(code **)(*local_388 + 0x18))(local_388);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x1c,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_388 != (long *)0x0) {
      (**(code **)(*local_388 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_390,iVar12,"_effect",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_field_m");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_390;
    local_90 = local_98;
    local_88 = local_390;
    if (local_390 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x1c,&local_90);
    }
    else {
      (**(code **)(*local_390 + 0x18))(local_390);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x1c,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_390 != (long *)0x0) {
      (**(code **)(*local_390 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_398,iVar12,"_effect",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_field_l");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_398;
    local_90 = local_98;
    local_88 = local_398;
    if (local_398 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x1c,&local_90);
    }
    else {
      (**(code **)(*local_398 + 0x18))(local_398);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x1c,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_398 != (long *)0x0) {
      (**(code **)(*local_398 + 0x20))();
    }
    plVar22 = local_340;
    FUN_01258bec(&local_3a0,iVar12,"_encount",param_2);
    local_90 = (long *)0x0;
    if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar5);
    }
    uVar18 = *(undefined8 *)puVar6;
    *(undefined8 *)puVar7 = uVar18;
    FUN_00cf9884(&local_98,uVar18,"streaming_event");
    plVar14 = local_90;
    local_90 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    plVar23 = local_98;
    plVar14 = local_3a0;
    local_90 = local_98;
    local_88 = local_3a0;
    if (local_3a0 == (long *)0x0) {
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x2a,&local_90);
    }
    else {
      (**(code **)(*local_3a0 + 0x18))(local_3a0);
      local_80 = (long *)((ulong)local_80 & 0xffffffff00000000);
      FUN_01258834(plVar22 + 0x2a,&local_90);
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
    if (local_3a0 != (long *)0x0) {
      (**(code **)(*local_3a0 + 0x20))();
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 100);
  uVar13 = FUN_01259734(param_1,0x100000001);
  plVar14 = plStack_338;
  plVar22 = local_340;
  uVar17 = 0;
  if ((uVar13 & 0xff) != 0) {
    uVar17 = (uint)(uVar13 >> 0x20);
  }
  if (uVar17 == 8) {
    plVar23 = local_340;
    plVar15 = plStack_338;
    if (local_340 != plStack_338) {
      FUN_01259f70(&local_308,local_340,param_1);
      plVar23 = local_340;
      plVar15 = plStack_338;
      if (plVar22 + 7 != plVar14) {
        FUN_01259f70(&local_308,plVar22 + 7,param_1);
        plVar23 = local_340;
        plVar15 = plStack_338;
        if (plVar22 + 0xe != plVar14) {
          FUN_01259f70(&local_308,plVar22 + 0xe,param_1);
          plVar23 = local_340;
          plVar15 = plStack_338;
          if (plVar22 + 0x15 != plVar14) {
            FUN_01259f70(&local_308,plVar22 + 0x15,param_1);
            plVar23 = local_340;
            plVar15 = plStack_338;
            if (plVar22 + 0x1c != plVar14) {
              FUN_01259f70(&local_308,plVar22 + 0x1c,param_1);
              plVar23 = local_340;
              plVar15 = plStack_338;
              if (plVar22 + 0x23 != plVar14) {
                FUN_01259f70(&local_308,plVar22 + 0x23,param_1);
                for (plVar22 = plVar22 + 0x2a; plVar23 = local_340, plVar15 = plStack_338,
                    plVar22 != plVar14; plVar22 = plVar22 + 7) {
                  FUN_01259f70(&local_308,plVar22,param_1);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((ulong)(((long)plStack_338 - (long)local_340 >> 3) * 0x6db6db6db6db6db7) <= (ulong)uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_01259f70(&local_308,local_340 + (ulong)uVar17 * 7,param_1);
    plVar23 = local_340;
    plVar15 = plStack_338;
  }
  for (; plVar22 = plStack_338, plVar23 != plStack_338; plVar23 = plVar23 + 7) {
    lVar21 = *plVar23;
    lVar19 = plVar23[1];
    plStack_338 = plVar15;
    if (lVar19 == lVar21) {
      lVar19 = lVar21;
    }
    else {
      do {
        if (*(long **)(lVar19 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar19 + -0x10) + 0x20))();
        }
        plVar14 = (long *)(lVar19 + -0x18);
        lVar19 = lVar19 + -0x18;
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 0x20))();
        }
      } while (lVar21 != lVar19);
      lVar19 = *plVar23;
    }
    lVar16 = lVar21 - lVar19;
    plVar23[1] = lVar21;
    if ((ulong)((lVar16 >> 3) * -0x5555555555555555) <
        (ulong)((plVar23[2] - lVar19 >> 3) * -0x5555555555555555)) {
      plVar14 = plVar23 + 3;
      local_78 = (long *)0x0;
      plStack_70 = plVar14;
      if (lVar16 == 0) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)(**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,lVar16,8);
        if (plVar15 == (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 0xe8))();
        }
      }
      local_88 = plVar15 + (lVar16 >> 3);
      local_90 = plVar15;
      local_80 = local_88;
      local_78 = local_88;
      FUN_01259200(plVar23,&local_90);
      plVar9 = local_88;
      plVar14 = local_90;
      plVar15 = local_80;
      while (local_90 = plVar14, plVar15 != plVar9) {
        plVar20 = plVar15 + -3;
        local_80 = plVar20;
        if ((long *)plVar15[-2] != (long *)0x0) {
          (**(code **)(*(long *)plVar15[-2] + 0x20))();
        }
        plVar1 = plVar15 + -3;
        plVar14 = local_90;
        plVar15 = plVar20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
          plVar14 = local_90;
        }
      }
      if (plVar14 != (long *)0x0) {
        lVar21 = (long)local_78 - (long)plVar14;
        plVar15 = (long *)*plStack_70;
        uVar13 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar13 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,lVar21,8);
        }
        else {
          FUN_00c48fe8(plVar15,plVar14,lVar21,8);
        }
      }
    }
    plVar15 = plStack_338;
    plStack_338 = plVar22;
  }
  plStack_338 = plVar15;
  FUN_012597e0(&local_340,local_340);
  FUN_01259558(&local_340);
  FUN_0125968c(&local_340);
  pcVar8 = local_2a8;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = 0;
    uStack_298 = 0;
    local_2b0 = 0;
    local_2a8 = (code *)0x0;
    (*pcVar8)(auStack_290);
  }
  pcVar8 = local_228;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    puStack_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar8)(local_210);
  }
  pcVar8 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_198 = (undefined1 *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    local_1b0 = (undefined1 *)0x0;
    (*pcVar8)(local_190);
  }
  pcVar8 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (code *)0x0;
    local_128 = (code *)0x0;
    (*pcVar8)(&local_110);
  }
  *(undefined8 *)(lVar4 + 0x30) = local_a8;
  *(undefined2 *)(lVar4 + 0x38) = (undefined2)local_a0;
  return;
}


