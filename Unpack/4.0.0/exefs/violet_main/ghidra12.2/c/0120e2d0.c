/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0120e2d0; name: FUN_0120e2d0
 */


void FUN_0120e2d0(long *param_1,int *param_2)

{
  long *plVar1;
  short *psVar2;
  uint *puVar3;
  long lVar4;
  short sVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long *local_788;
  long *local_780 [2];
  undefined1 *local_770;
  code *local_768;
  undefined1 *local_760;
  code *local_758;
  long *local_750 [12];
  undefined8 local_6f0;
  code *local_6e8;
  undefined8 local_6e0;
  code *local_6d8;
  undefined1 auStack_6d0 [96];
  long *local_670;
  undefined1 *local_668;
  undefined1 *local_660;
  code *local_658;
  long *local_650;
  undefined8 local_648;
  undefined1 auStack_640 [96];
  undefined8 local_5e0;
  code *local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [96];
  undefined8 local_560;
  undefined8 local_550;
  code *local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined1 auStack_530 [96];
  undefined8 local_4d0;
  code *local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 auStack_4b0 [96];
  long *local_450;
  undefined1 *local_448;
  undefined1 *local_440;
  undefined8 local_438;
  long *local_430;
  undefined4 local_428;
  undefined1 *local_420;
  code *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  long *local_400;
  undefined1 *local_3f8;
  undefined8 local_3f0;
  undefined8 local_3a0;
  undefined1 *local_390;
  code *local_388;
  undefined1 *local_380;
  code *local_378;
  undefined1 auStack_370 [96];
  undefined8 local_310;
  code *local_308;
  undefined8 local_300;
  code *local_2f8;
  undefined1 auStack_2f0 [96];
  undefined8 local_290;
  undefined8 local_280;
  code *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 auStack_260 [96];
  undefined8 local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [96];
  undefined8 local_180;
  ushort local_178;
  undefined1 local_176;
  undefined8 local_170;
  long *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  long *local_148;
  undefined4 local_140;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  int *local_110 [12];
  undefined4 local_b0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_670 = (long *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_670 = (long *)0x0;
    if (uVar16 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar16);
      local_670 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_450,&local_670);
  plVar13 = local_450;
  plVar12 = (long *)PTR_DAT_047d8b70;
  if (local_450 != (long *)0x0) {
    plVar12 = local_450 + 6;
  }
  lVar19 = *plVar12;
  plVar12 = (long *)PTR_PTR_047d4508;
  if (local_450 != (long *)0x0) {
    plVar12 = local_450 + 7;
  }
  lVar20 = *plVar12;
  if (local_450 == (long *)0x0) {
    lVar21 = 0;
  }
  else {
    lVar21 = local_450[8];
    (**(code **)(*local_450 + 0x18))(local_450);
  }
  param_1[0x6d] = lVar19;
  param_1[0x6e] = lVar20;
  param_1[0x6f] = lVar21;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  plVar12 = (long *)param_1[0x70];
  param_1[0x70] = (long)plVar13;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    local_450 = (long *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    local_450 = (long *)0x0;
    if (uVar16 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar16);
      local_450 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00cf95c4(&local_98,&local_450);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    local_670 = (long *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    local_670 = (long *)0x0;
    if (uVar16 != 0) {
      puVar3 = (uint *)((long)param_2 + uVar16);
      local_670 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_450,&local_670);
  if (local_450 == (long *)0x0) {
    bVar10 = true;
  }
  else {
    bVar10 = *(char *)local_450[7] == '\0';
    (**(code **)(*local_450 + 0x20))();
  }
  plVar12 = local_98;
  local_430 = (long *)0x0;
  local_450 = (long *)0x0;
  local_448 = &DAT_cbf29ce484222645;
  local_440 = &DAT_03c886bc;
  local_438 = 0;
  local_420 = PTR_LAB_047dd8e8;
  local_418 = (code *)PTR_FUN_047dd8f0;
  local_428 = 0;
  local_410 = PTR_LAB_047dd8f8;
  local_408 = PTR_LAB_047dd900;
  local_158 = &DAT_03c886bc;
  local_130 = &LAB_02b63d58;
  local_400 = (long *)PTR_FUN_047dd908;
  local_128 = FUN_02b63d60;
  local_120 = &LAB_02b63d64;
  local_118 = &LAB_02b63d68;
  local_3a0 = 0;
  local_390 = (undefined1 *)0x0;
  local_388 = (code *)0x0;
  local_380 = (undefined1 *)0x0;
  local_378 = (code *)0x0;
  local_178 = 0x101;
  local_310 = 0;
  local_308 = (code *)0x0;
  local_300 = 0;
  local_2f8 = (code *)0x0;
  local_290 = 0;
  local_280 = 0;
  local_278 = (code *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_180 = 0;
  local_176 = 0;
  local_170 = 0x3f9110e453d20f2c;
  local_168 = (long *)0x0;
  local_160 = &DAT_cbf29ce484222645;
  local_150 = 0;
  local_148 = (long *)0x0;
  local_140 = 0;
  local_b0 = 3;
  if (local_98 == (long *)0x0) {
    local_450 = local_98;
  }
  else {
    (**(code **)(*local_98 + 0x18))(local_98);
    plVar13 = local_450;
    local_450 = plVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  plVar12 = local_78;
  local_448 = (undefined1 *)local_90;
  local_440 = (undefined1 *)uStack_88;
  local_438 = local_80;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  plVar13 = local_430;
  local_430 = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  local_428 = local_70;
  if (!bVar10) {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
      local_780[0] = (long *)0x0;
    }
    else {
      uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
      local_780[0] = (long *)0x0;
      if (uVar16 != 0) {
        puVar3 = (uint *)((long)param_2 + uVar16);
        local_780[0] = (long *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    FUN_00cf95c4(&local_670,local_780);
    plVar12 = local_670;
    if (local_670 != (long *)0x0) {
      (**(code **)(*local_670 + 0x18))(local_670);
    }
    plVar13 = local_168;
    local_168 = plVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    plVar12 = local_650;
    local_160 = local_668;
    local_158 = local_660;
    local_150 = local_658;
    if (local_650 != (long *)0x0) {
      (**(code **)(*local_650 + 0x18))(local_650);
    }
    plVar13 = local_148;
    local_148 = plVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    local_140 = (undefined4)local_648;
    if (local_650 != (long *)0x0) {
      (**(code **)(*local_650 + 0x20))();
    }
    if (local_670 != (long *)0x0) {
      (**(code **)(*local_670 + 0x20))();
    }
  }
  pcVar9 = local_418;
  if (local_418 != (code *)0x0) {
    local_410 = (undefined1 *)0x0;
    local_408 = (undefined1 *)0x0;
    local_420 = (undefined1 *)0x0;
    local_418 = (code *)0x0;
    (*pcVar9)(&local_400);
  }
  pcVar9 = local_388;
  local_560 = 0;
  local_418 = FUN_02b63d90;
  local_408 = &LAB_02b63da8;
  local_3f8 = &LAB_011f135c;
  local_780[0] = (long *)0x100000000;
  local_3a0 = 0x100000000;
  local_420 = &LAB_02b63d6c;
  local_410 = &LAB_02b63d94;
  local_770 = &LAB_02b641e0;
  local_768 = FUN_02b644a0;
  local_178 = local_178 & 0xff;
  local_670 = (long *)0x0;
  local_550 = 0;
  local_548 = (code *)0x0;
  local_540 = 0;
  local_538 = 0;
  local_4d0 = 0;
  local_4c8 = (code *)0x0;
  local_4c0 = 0;
  local_4b8 = 0;
  local_3f0 = 0;
  local_660 = (undefined1 *)0x0;
  local_658 = (code *)0x0;
  local_650 = (long *)0x0;
  local_648 = 0;
  local_5e0 = 0;
  local_5d8 = (code *)0x0;
  local_5d0 = 0;
  uStack_5c8 = 0;
  local_6e0 = 0;
  local_6d8 = (code *)0x0;
  local_6f0 = 0;
  local_6e8 = (code *)0x0;
  local_760 = &LAB_02b644a4;
  local_758 = FUN_02b644b0;
  local_750[0] = param_1;
  local_400 = param_1;
  if (local_388 == (code *)0x0) {
LAB_0120e720:
    (*local_758)(local_750,auStack_370);
    pcVar9 = local_768;
    local_390 = local_770;
    local_388 = local_768;
    local_380 = local_760;
    local_378 = local_758;
    if (local_768 != (code *)0x0) {
      local_760 = (undefined1 *)0x0;
      local_758 = (code *)0x0;
      local_770 = (undefined1 *)0x0;
      local_768 = (code *)0x0;
      (*pcVar9)(local_750);
    }
  }
  else {
    local_380 = (undefined1 *)0x0;
    local_378 = (code *)0x0;
    local_390 = (undefined1 *)0x0;
    local_388 = (code *)0x0;
    (*pcVar9)(auStack_370);
    if (local_758 != (code *)0x0) goto LAB_0120e720;
  }
  pcVar9 = local_308;
  if (local_308 != (code *)0x0) {
    local_300 = 0;
    local_2f8 = (code *)0x0;
    local_310 = 0;
    local_308 = (code *)0x0;
    (*pcVar9)(auStack_2f0);
  }
  if (local_6d8 != (code *)0x0) {
    (*local_6d8)(auStack_6d0,auStack_2f0);
    pcVar9 = local_6e8;
    local_310 = local_6f0;
    local_308 = local_6e8;
    local_300 = local_6e0;
    local_2f8 = local_6d8;
    if (local_6e8 != (code *)0x0) {
      local_6e0 = 0;
      local_6d8 = (code *)0x0;
      local_6f0 = 0;
      local_6e8 = (code *)0x0;
      (*pcVar9)(auStack_6d0);
    }
  }
  pcVar9 = local_6e8;
  if (local_6e8 != (code *)0x0) {
    local_6e0 = 0;
    local_6d8 = (code *)0x0;
    local_6f0 = 0;
    local_6e8 = (code *)0x0;
    (*pcVar9)(auStack_6d0);
  }
  pcVar9 = local_768;
  if (local_768 != (code *)0x0) {
    local_760 = (undefined1 *)0x0;
    local_758 = (code *)0x0;
    local_770 = (undefined1 *)0x0;
    local_768 = (code *)0x0;
    (*pcVar9)(local_750);
  }
  pcVar9 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar9)(local_110);
  }
  local_130 = &LAB_02b63dbc;
  local_128 = FUN_02b641c4;
  local_120 = &LAB_02b641c8;
  local_118 = &LAB_02b641d4;
  plVar12 = (long *)param_1[1];
  local_110[0] = param_2;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_0120f5dc;
  *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar12;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x580,0x10);
  if (plVar13 == (long *)0x0) {
    lVar19 = *plVar12;
    goto LAB_0120f67c;
  }
  FUN_01210490(plVar13,&local_450);
  *(undefined4 *)(plVar13 + 3) = 0x100580;
  plVar13[1] = (long)plVar12;
  plVar13[2] = (long)plVar13;
  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
  (**(code **)(*plVar13 + 0x58))(plVar13);
  plVar12 = plVar13 + 4;
  (**(code **)(*plVar12 + 0xe8))(plVar12,param_1);
  (**(code **)(*plVar12 + 0x68))(plVar12);
  plVar1 = param_1 + 0x21;
  local_780[0] = plVar13;
  FUN_00df8c30(plVar1,local_780);
  if (local_780[0] != (long *)0x0) {
    lVar19 = local_780[0][0x13];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*local_780[0] + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0120f23c;
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar12);
  plVar23 = param_1 + 0x88;
  lVar20 = *plVar23;
  lVar19 = nn::os::GetCurrentThread();
  if (lVar19 != lVar20) {
    lVar19 = nn::os::GetCurrentThread();
LAB_0120e8d0:
    if (*plVar23 == 0) goto code_r0x0120e8d8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
    do {
      if (*plVar23 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
          while (*plVar23 == 0) {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar10) {
              *plVar23 = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_0120e8e0;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar10) {
        *plVar23 = lVar19;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_0120e8e0:
    bVar10 = false;
    plVar22 = plVar23;
    goto LAB_0120e8e8;
  }
  plVar22 = (long *)0x0;
  bVar10 = true;
LAB_0120e8e8:
  if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
    FUN_00d37964(param_1,0,0);
  }
  else {
    (**(code **)(*plVar12 + 0xf8))(plVar12);
  }
  if (!bVar10) {
    *plVar22 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
  }
  (**(code **)(*plVar13 + 0x58))(plVar13);
  plVar12 = (long *)param_1[0x100];
  param_1[0x100] = (long)plVar13;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x60))();
  }
  lVar19 = FUN_0120f7c8(plVar1,local_780);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("lodComp","SetupTerrain",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/terrain_entity.cpp"
               ,0xc6);
  }
  *(int *)(lVar19 + 0x154) = (int)param_1[0xfe];
  *(undefined1 *)(lVar19 + 0x151) = 1;
  if ((*(char *)(lVar19 + 0x58) != '\0') || (*(char *)(lVar19 + 0x59) != '\0')) {
    plVar12 = (long *)(lVar19 + 0x38);
    uVar6 = *(undefined2 *)(lVar19 + 0x58);
    *(undefined2 *)(lVar19 + 0x58) = 0;
    if (*(long *)(lVar19 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(lVar19 + 0x48),plVar12);
    }
    (**(code **)(*plVar12 + 0x20))(plVar12,uVar6);
  }
  lVar20 = param_1[0x100];
  lVar19 = FUN_0120fc08(*(long *)(lVar20 + 0x138) + 0x108,local_780);
  if (lVar19 != 0) {
    lVar21 = *(long *)(lVar20 + 0x138);
    lVar20 = 0;
    if (param_1[0x102] != 0) {
      lVar20 = param_1[0x102] + 0xf8;
    }
    lVar4 = 0;
    if (lVar21 != 0) {
      lVar4 = lVar21 + 0xf8;
    }
    FUN_00ee71b0(lVar19,lVar20,lVar4);
  }
  pcVar9 = local_4c8;
  if (local_4c8 != (code *)0x0) {
    local_4c0 = 0;
    local_4b8 = 0;
    local_4d0 = 0;
    local_4c8 = (code *)0x0;
    (*pcVar9)(auStack_4b0);
  }
  pcVar9 = local_548;
  if (local_548 != (code *)0x0) {
    local_540 = 0;
    local_538 = 0;
    local_550 = 0;
    local_548 = (code *)0x0;
    (*pcVar9)(auStack_530);
  }
  pcVar9 = local_5d8;
  if (local_5d8 != (code *)0x0) {
    local_5d0 = 0;
    uStack_5c8 = 0;
    local_5e0 = 0;
    local_5d8 = (code *)0x0;
    (*pcVar9)(auStack_5c0);
  }
  pcVar9 = local_658;
  if (local_658 != (code *)0x0) {
    local_650 = (long *)0x0;
    local_648 = 0;
    local_660 = (undefined1 *)0x0;
    local_658 = (code *)0x0;
    (*pcVar9)(auStack_640);
  }
  pcVar9 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    local_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar9)(local_110);
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  pcVar9 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = 0;
    local_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar9)(auStack_1e0);
  }
  pcVar9 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = 0;
    local_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    (*pcVar9)(auStack_260);
  }
  pcVar9 = local_308;
  if (local_308 != (code *)0x0) {
    local_300 = 0;
    local_2f8 = (code *)0x0;
    local_310 = 0;
    local_308 = (code *)0x0;
    (*pcVar9)(auStack_2f0);
  }
  pcVar9 = local_388;
  if (local_388 != (code *)0x0) {
    local_380 = (undefined1 *)0x0;
    local_378 = (code *)0x0;
    local_390 = (undefined1 *)0x0;
    local_388 = (code *)0x0;
    (*pcVar9)(auStack_370);
  }
  pcVar9 = local_418;
  if (local_418 != (code *)0x0) {
    local_408 = (undefined1 *)0x0;
    local_410 = (undefined1 *)0x0;
    local_418 = (code *)0x0;
    local_420 = (undefined1 *)0x0;
    (*pcVar9)(&local_400);
  }
  if (local_430 != (long *)0x0) {
    (**(code **)(*local_430 + 0x20))();
  }
  if (local_450 != (long *)0x0) {
    (**(code **)(*local_450 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (((*(ushort *)((long)param_2 - (long)*param_2) < 0x21) ||
      (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10], uVar16 == 0)) ||
     (*(char *)((long)param_2 + uVar16) != '\0')) {
    uVar16 = param_1[0x87];
    lVar19 = param_1[0x86];
    param_1[0x87] = uVar16 & 0xfffffffffffffffb;
    uVar16 = uVar16 & 0xfffffffb;
    *(bool *)(param_1 + 0x86) = uVar16 != 0;
    if (((char)lVar19 != '\0') && (uVar16 == 0)) {
      FUN_00d37964(param_1,2,0);
      FUN_00d37964(param_1,0,0);
      (**(code **)(*param_1 + 0x110))(param_1);
      FUN_00d38190(plVar1,&local_450);
    }
  }
  else {
    lVar19 = param_1[0x86];
    param_1[0x87] = param_1[0x87] | 4;
    *(undefined1 *)(param_1 + 0x86) = 1;
    if ((char)lVar19 == '\0') {
      FUN_00d37964(param_1,2,1);
      (**(code **)(*param_1 + 0x108))(param_1);
      FUN_00cf6de0(plVar1,&local_450);
    }
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    uVar15 = 0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar15 = 0;
    if (uVar16 != 0) {
      uVar15 = *(undefined1 *)((long)param_2 + uVar16);
    }
  }
  *(undefined1 *)(param_1 + 0xfd) = uVar15;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    uVar24 = 0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    uVar24 = 0;
    if (uVar16 != 0) {
      uVar24 = *(undefined4 *)((long)param_2 + uVar16);
    }
  }
  *(undefined4 *)((long)param_1 + 0x7ec) = uVar24;
  uVar24 = 0;
  if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar16 != 0)) {
    uVar24 = *(undefined4 *)((long)param_2 + uVar16);
  }
  *(undefined4 *)(param_1 + 0xfe) = uVar24;
  lVar19 = FUN_0120f7c8(plVar1,&local_450);
  if (lVar19 != 0) {
    *(int *)(lVar19 + 0x154) = (int)param_1[0xfe];
    *(undefined1 *)(lVar19 + 0x151) = 1;
    if ((*(char *)(lVar19 + 0x58) != '\0') || (*(char *)(lVar19 + 0x59) != '\0')) {
      plVar12 = (long *)(lVar19 + 0x38);
      uVar6 = *(undefined2 *)(lVar19 + 0x58);
      *(undefined2 *)(lVar19 + 0x58) = 0;
      if (*(long *)(lVar19 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(lVar19 + 0x48),plVar12);
      }
      (**(code **)(*plVar12 + 0x20))(plVar12,uVar6);
    }
  }
  puVar17 = (ushort *)((long)param_2 - (long)*param_2);
  if (((*puVar17 < 0x17) || ((ulong)puVar17[0xb] == 0)) ||
     (*(char *)((long)param_2 + (ulong)puVar17[0xb]) == '\0')) {
    *(undefined8 *)((long)param_1 + 0x7f4) = 0x437a000043160000;
    uVar24 = 0x43af0000;
  }
  else {
    uVar24 = 0;
    uVar25 = 0;
    if (0x18 < *puVar17) {
      uVar25 = 0;
      if ((ulong)puVar17[0xc] != 0) {
        uVar25 = *(undefined4 *)((long)param_2 + (ulong)puVar17[0xc]);
      }
    }
    *(undefined4 *)((long)param_1 + 0x7f4) = uVar25;
    uVar25 = 0;
    if (0x1a < *(ushort *)((long)param_2 - (long)*param_2)) {
      uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
      uVar25 = 0;
      if (uVar16 != 0) {
        uVar25 = *(undefined4 *)((long)param_2 + uVar16);
      }
    }
    *(undefined4 *)(param_1 + 0xff) = uVar25;
    if ((0x1c < *(ushort *)((long)param_2 - (long)*param_2)) &&
       (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe], uVar16 != 0)) {
      uVar24 = *(undefined4 *)((long)param_2 + uVar16);
    }
  }
  *(undefined4 *)((long)param_1 + 0x7fc) = uVar24;
  plVar12 = param_1 + 0x22;
  lVar20 = *plVar12;
  lVar19 = nn::os::GetCurrentThread();
  if (lVar19 != lVar20) {
    lVar19 = nn::os::GetCurrentThread();
    bVar10 = false;
LAB_0120f660:
    if (*plVar12 == 0) goto code_r0x0120f668;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x23));
    bVar10 = false;
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x23));
          while (*plVar12 == 0) {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
            bVar10 = false;
            if (cVar7 == '\0') goto LAB_0120ece0;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar8) {
        *plVar12 = lVar19;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    goto LAB_0120ece0;
  }
  bVar10 = true;
LAB_0120ece0:
  plVar12 = (long *)param_1[0x25];
  plVar13 = (long *)param_1[0x26];
  if (plVar12 == plVar13) {
LAB_0120ed30:
    plVar12 = (long *)param_1[0x2c];
    plVar13 = (long *)param_1[0x2d];
    if (plVar12 != plVar13) {
      do {
        if ((*plVar12 != 0) && (uVar16 = FUN_0120f6f0(*plVar12 + 8), (uVar16 & 1) != 0)) {
          uVar16 = (**(code **)(*(long *)*plVar12 + 0xc0))();
          if ((uVar16 & 1) == 0) goto LAB_0120ed74;
        }
        plVar12 = plVar12 + 1;
      } while (plVar13 != plVar12);
      plVar12 = plVar13;
LAB_0120ed74:
      if (plVar12 != (long *)param_1[0x2d]) {
        plVar13 = (long *)0x0;
        if (*plVar12 != 0) {
          plVar13 = (long *)(*plVar12 + -0x20);
        }
        goto LAB_0120ed84;
      }
    }
    plVar13 = (long *)0x0;
  }
  else {
    do {
      if ((*plVar12 != 0) && (uVar16 = FUN_0120f6f0(*plVar12 + 8), (uVar16 & 1) != 0)) {
        uVar16 = (**(code **)(*(long *)*plVar12 + 0xc0))();
        if ((uVar16 & 1) == 0) goto LAB_0120ed24;
      }
      plVar12 = plVar12 + 1;
    } while (plVar13 != plVar12);
    plVar12 = plVar13;
LAB_0120ed24:
    if ((plVar12 == (long *)param_1[0x26]) || (*plVar12 == 0)) goto LAB_0120ed30;
    plVar13 = (long *)(*plVar12 + -0x20);
  }
LAB_0120ed84:
  if (!bVar10) {
    param_1[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x23));
  }
  if (plVar13 == (long *)0x0) {
    plVar12 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_0120f5dc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar12;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x168,8);
    if (plVar13 == (long *)0x0) {
      lVar19 = *plVar12;
LAB_0120f67c:
      (**(code **)(lVar19 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_0120fa20();
    *(undefined4 *)(plVar13 + 3) = 0x80168;
    plVar13[1] = (long)plVar12;
    plVar13[2] = (long)plVar13;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    lVar19 = plVar13[0x13];
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_0120f5e0;
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar18;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0120f600;
    plVar12 = plVar13 + 4;
    (**(code **)(*plVar12 + 0xe8))(plVar12,param_1);
    (**(code **)(*plVar12 + 0x68))(plVar12);
    local_450 = plVar13;
    FUN_00df8c30(plVar1,&local_450);
    if (local_450 != (long *)0x0) {
      lVar19 = local_450[0x13];
      psVar2 = (short *)(lVar19 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*local_450 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_0120f23c;
    }
    (**(code **)(*param_1 + 0x100))(param_1,plVar12);
    lVar20 = param_1[0x88];
    lVar19 = nn::os::GetCurrentThread();
    if (lVar19 != lVar20) {
      lVar19 = nn::os::GetCurrentThread();
LAB_0120eebc:
      if (*plVar23 == 0) goto code_r0x0120eec4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
            while (*plVar23 == 0) {
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar10) {
                *plVar23 = lVar19;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_0120eecc;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar10) {
          *plVar23 = lVar19;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_0120eecc:
      bVar10 = false;
      goto LAB_0120eed0;
    }
    plVar23 = (long *)0x0;
    bVar10 = true;
LAB_0120eed0:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar12 + 0xf8))(plVar12);
    }
    if (!bVar10) {
      *plVar23 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
    }
  }
  FUN_0120fe48(plVar13,param_2);
  if (((*PTR_DAT_047d8a30 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8a30), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047dcb50,PTR_DAT_047d8a38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a30);
  }
  uVar18 = *(undefined8 *)PTR_DAT_047d8a38;
  *(undefined8 *)PTR_DAT_047d8a40 = uVar18;
  lVar19 = param_1[6];
  local_788 = param_1;
  if (*(long *)(lVar19 + 0x10) != 0) {
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar14;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_0120f600:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_01214c98(uVar18,&local_788,param_2);
    if (local_788 != (long *)0x0) {
      lVar19 = local_788[6];
      psVar2 = (short *)(lVar19 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar10) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*local_788 + 0x50))();
      }
      else if (sVar5 == 0) {
LAB_0120f23c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    return;
  }
LAB_0120f5e0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
code_r0x0120e8d8:
  cVar7 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar10) {
    *plVar23 = lVar19;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0120e8e0;
  goto LAB_0120e8d0;
code_r0x0120f668:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar8) {
    *plVar12 = lVar19;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0120ece0;
  goto LAB_0120f660;
code_r0x0120eec4:
  cVar7 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar10) {
    *plVar23 = lVar19;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0120eecc;
  goto LAB_0120eebc;
}


