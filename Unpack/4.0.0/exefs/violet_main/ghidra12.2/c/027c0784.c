/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027c0784; name: FUN_027c0784
 */


void FUN_027c0784(undefined8 param_1,long param_2,undefined8 param_3,undefined2 param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  short sVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_3a8;
  char *pcStack_3a0;
  undefined8 local_398;
  long *local_390;
  byte local_388;
  undefined7 uStack_387;
  undefined8 local_378;
  long *plStack_370;
  long *local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  byte local_350;
  undefined7 uStack_34f;
  undefined8 local_340;
  long *plStack_338;
  undefined1 auStack_330 [8];
  byte local_328;
  undefined7 uStack_327;
  undefined8 local_318;
  long *plStack_310;
  undefined1 auStack_308 [8];
  undefined8 local_300;
  undefined1 local_2e8;
  undefined8 local_2e0;
  long lStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  char *pcStack_2b8;
  undefined8 local_2b0;
  long *local_2a8;
  undefined8 local_2a0;
  char *pcStack_298;
  undefined8 local_290;
  long *local_288;
  long *local_280;
  long *local_278;
  long *local_270;
  byte local_268;
  undefined7 uStack_267;
  undefined8 local_258;
  long *plStack_250;
  long *local_248;
  undefined8 local_240;
  undefined4 local_238;
  byte local_230;
  undefined7 uStack_22f;
  undefined8 local_220;
  long *plStack_218;
  undefined1 auStack_210 [8];
  byte local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  long *plStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 local_1e0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [8];
  char *local_1a8;
  long *local_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  long *local_178;
  undefined1 auStack_170 [8];
  byte local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  long *local_150;
  undefined1 auStack_148 [8];
  undefined8 local_140;
  undefined1 auStack_128 [8];
  long *local_120;
  undefined8 uStack_118;
  long *local_110;
  code *local_108;
  code *local_100;
  code *local_f8;
  long *local_f0;
  long local_e8;
  undefined8 *local_90;
  char *pcStack_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  
  FUN_01e74fb0(auStack_128);
  memset(&local_190,0,0x68);
  FUN_027c1cd0(&local_190);
  FUN_0195a830(&local_268,param_3);
  if ((local_268 != 0) &&
     (FUN_027c1d20(auStack_128,"password",(ulong)&local_268 | 4), local_268 != 0)) {
    local_268 = 0;
  }
  iVar11 = 0;
  do {
    FUN_027c1f04(&local_268,param_3,iVar11);
    if ((local_268 != 0) && (FUN_01f70094(auStack_128,local_258,local_240), local_268 != 0)) {
      if (local_248 != (long *)0x0) {
        (**(code **)(*local_248 + 0x20))();
      }
      local_268 = 0;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x18);
  FUN_027bbf28(auStack_170,auStack_128);
  FUN_027c1eb8(auStack_1b0,param_3);
  if (*local_1a8 != '\0') {
    FUN_01f77c8c(&local_168);
  }
  FUN_0195a874(&local_110,param_3);
  FUN_027c1fd0(&local_268,local_108,&local_190);
  if (local_f8 != (code *)0x0) {
    (**(code **)(*(long *)local_f8 + 0x20))();
  }
  if (DAT_0485e9d8 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_027c2014();
  }
  FUN_027c2024(&local_268,uVar12);
  local_2a0 = 0x5f3a9f86b611a6e;
  pcStack_298 = "StartupSession";
  local_290 = 0xe;
  local_288 = (long *)0x0;
  FUN_027c20b8(&local_280,&local_2a0,*(undefined8 *)(param_2 + 0x70));
  plVar14 = local_280;
  local_2c0 = 0x5e7d7ee3d894203a;
  pcStack_2b8 = "JoinRandomSession";
  local_2b0 = 0x11;
  local_2a8 = (long *)0x0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  FUN_027c2138(&local_2d0,param_2 + 0x78);
  FUN_01cfa5b0(&local_388,&local_268);
  local_358 = local_238;
  local_368 = local_248;
  uStack_360 = local_240;
  FUN_027c2388(&local_350,&local_230);
  local_2e8 = local_1c8;
  local_2e0 = local_1c0;
  lStack_2d8 = lStack_1b8;
  if (lStack_1b8 != 0) {
    plVar1 = (long *)(lStack_1b8 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_027c23cc(&local_278,plVar14,&local_2c0,&local_2d0,&local_388);
  plVar15 = local_278;
  local_3a8 = 0x7ffa5533b9781f92;
  pcStack_3a0 = "WaitMember";
  plVar14 = local_278 + 6;
  local_398 = 10;
  local_390 = (long *)0x0;
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar14);
  local_90 = (undefined8 *)0x0;
  pcStack_88 = (char *)0x0;
  plVar1 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 5;
  }
  if ((long *)local_110[2] == plVar1) {
    FUN_015d2a6c(&local_90,&local_110);
  }
  plVar15 = local_110;
  if (local_110 != (long *)0x0) {
    plVar4 = local_110 + 3;
    do {
      sVar13 = (short)*plVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(short *)plVar4 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_120 = (long *)*plVar15;
        FUN_00c44438(lVar16 + 0x8040,&local_120);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  puVar10 = local_90;
  if (local_90 == (undefined8 *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_90 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_90 + 0x1a);
      sVar13 = *(short *)((long)local_90 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c14d4;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c14d4:
          bVar7 = false;
        }
        if (bVar7) {
          plVar15 = (long *)0x0;
          if (local_90[2] != 0) {
            plVar15 = (long *)(local_90[2] + -0x28);
          }
          goto LAB_027c1594;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    plVar15 = (long *)0x0;
LAB_027c1594:
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (long *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  FUN_01050714(&local_120,&local_3a8);
  plVar8 = local_120;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_120 != (long *)0x0) {
    plVar4 = local_120 + 6;
  }
  local_90 = (undefined8 *)*plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_120 != (long *)0x0) {
    plVar4 = local_120 + 7;
  }
  pcStack_88 = (char *)*plVar4;
  if (local_120 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = local_120[8];
  }
  local_78 = (long *)0x0;
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x18))(local_120);
  }
  local_78 = plVar8;
  local_70 = (long *)((ulong)local_70._4_4_ << 0x20);
  if (plVar15 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c12dc;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c12dc;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    lVar16 = plVar15[6];
    local_f0 = plVar15;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c12dc;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c12dc;
  }
  local_e8 = CONCAT62(local_e8._2_6_,param_4);
  local_110 = (long *)&LAB_02be8e08;
  local_108 = FUN_02be9a90;
  local_100 = FUN_02bed144;
  local_f8 = FUN_02bed1ec;
  FUN_015d1ba8(&local_270,&local_90,&local_70,&local_110);
  pcVar9 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(&local_f0);
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  plVar4 = local_270;
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,plVar14);
  local_120 = (long *)0x0;
  uStack_118 = 0;
  if ((long *)local_110[2] == plVar1) {
    FUN_015d2a6c(&local_120,&local_110);
  }
  plVar14 = local_110;
  if (local_110 != (long *)0x0) {
    plVar1 = local_110 + 3;
    do {
      sVar13 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_70 = (long *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_70);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_0177de7c(&local_110,&local_120);
  if ((((char)plVar4[0x28] != '\0') && (local_110 != (long *)0x0)) && (local_110[2] != 0)) {
    (**(code **)(*(long *)(local_110[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_110);
  plVar14 = local_110;
  if (local_110 != (long *)0x0) {
    plVar1 = local_110 + 3;
    do {
      sVar13 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_70 = (long *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_70);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  plVar14 = local_120;
  if (local_120 != (long *)0x0) {
    plVar1 = local_120 + 3;
    do {
      sVar13 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_70 = (long *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_70);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  plVar1 = local_270;
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,local_270 + 6);
  local_90 = (undefined8 *)0x0;
  pcStack_88 = (char *)0x0;
  plVar14 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar14 = plVar1 + 5;
  }
  if ((long *)local_110[2] == plVar14) {
    FUN_015d2a6c(&local_90,&local_110);
  }
  plVar14 = local_110;
  if (local_110 != (long *)0x0) {
    plVar1 = local_110 + 3;
    do {
      sVar13 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_120 = (long *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_120);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  puVar10 = local_90;
  if (local_90 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_90 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_90 + 0x1a);
      sVar13 = *(short *)((long)local_90 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c1520;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c1520:
          bVar7 = false;
        }
        if (bVar7) {
          plVar14 = (long *)0x0;
          if (local_90[2] != 0) {
            plVar14 = (long *)(local_90[2] + -0x28);
          }
          goto LAB_027c15c8;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027c15c8:
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (long *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  local_120 = (long *)((ulong)local_120 & 0xffffffff00000000);
  local_90 = (undefined8 *)0x1b6c0662029545e2;
  pcStack_88 = "JoinRandomRecover";
  local_80 = 0x11;
  local_78 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar16 = plVar14[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c12dc;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c12dc;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    lVar16 = plVar14[6];
    local_f0 = plVar14;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c12dc;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c12dc;
  }
  local_110 = (long *)&LAB_02bed294;
  local_108 = FUN_02beedf8;
  local_100 = (code *)&LAB_02bfc710;
  local_f8 = (code *)&LAB_02bfc7b8;
  local_e8 = param_2;
  FUN_015d1ba8(&local_70,&local_90,&local_120,&local_110);
  pcVar9 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(&local_f0);
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  plVar1 = local_70;
  local_110 = (long *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,local_70 + 6);
  local_90 = (undefined8 *)0x0;
  pcStack_88 = (char *)0x0;
  plVar14 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar14 = plVar1 + 5;
  }
  if ((long *)local_110[2] == plVar14) {
    FUN_015d2a6c(&local_90,&local_110);
  }
  plVar14 = local_110;
  if (local_110 != (long *)0x0) {
    plVar1 = local_110 + 3;
    do {
      sVar13 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_120 = (long *)*plVar14;
        FUN_00c44438(lVar16 + 0x8040,&local_120);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  puVar10 = local_90;
  if (local_90 == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_90 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_90 + 0x1a);
      sVar13 = *(short *)((long)local_90 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar13) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c156c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c156c:
          bVar7 = false;
        }
        if (bVar7) {
          plVar14 = (long *)0x0;
          if (local_90[2] != 0) {
            plVar14 = (long *)(local_90[2] + -0x28);
          }
          goto LAB_027c15fc;
        }
        sVar13 = sVar5;
      } while (sVar5 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027c15fc:
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_110 = (long *)*puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  local_120 = (long *)((ulong)local_120 & 0xffffffff00000000);
  local_90 = (undefined8 *)0xac19ec5dd305f32b;
  pcStack_88 = "RandomMatchingCancel";
  local_80 = 0x14;
  local_78 = (long *)0x0;
  if (plVar14 == (long *)0x0) {
    local_f0 = (long *)0x0;
  }
  else {
    lVar16 = plVar14[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c12dc;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c12dc;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    lVar16 = plVar14[6];
    local_f0 = plVar14;
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027c12dc;
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_027c12dc;
  }
  local_110 = (long *)&LAB_02bfc860;
  local_108 = FUN_02bfe3c4;
  local_100 = (code *)&LAB_02c08c14;
  local_f8 = (code *)&LAB_02c08cbc;
  local_e8 = param_2;
  FUN_015d1ba8(param_1,&local_90,&local_120,&local_110);
  pcVar9 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_110 = (long *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(&local_f0);
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (local_70 != (long *)0x0) {
    lVar16 = local_70[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (local_270 != (long *)0x0) {
    lVar16 = local_270[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_270 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  if (local_390 != (long *)0x0) {
    (**(code **)(*local_390 + 0x20))();
  }
  if (local_278 != (long *)0x0) {
    lVar16 = local_278[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_278 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027c12dc;
  }
  FUN_027c2b78(&local_2e0);
  FUN_027c2bd0(auStack_308,local_300);
  if ((local_328 & 1) != 0) {
    (**(code **)(*plStack_310 + 0x18))
              (plStack_310,local_318,CONCAT71(uStack_327,local_328) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_330);
  if ((local_350 & 1) != 0) {
    (**(code **)(*plStack_338 + 0x18))
              (plStack_338,local_340,CONCAT71(uStack_34f,local_350) & 0xfffffffffffffffe,1);
  }
  if ((local_388 & 1) != 0) {
    (**(code **)(*plStack_370 + 0x18))
              (plStack_370,local_378,CONCAT71(uStack_387,local_388) & 0xfffffffffffffffe,1);
  }
  FUN_027bfe38(&local_2d0);
  if (local_2a8 != (long *)0x0) {
    (**(code **)(*local_2a8 + 0x20))();
  }
  if (local_280 != (long *)0x0) {
    lVar16 = local_280[6];
    psVar2 = (short *)(lVar16 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_280 + 0x50))();
    }
    else if (sVar13 == 0) {
LAB_027c12dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_288 != (long *)0x0) {
    (**(code **)(*local_288 + 0x20))();
  }
  FUN_027c2b78(&local_1c0);
  FUN_027c2bd0(auStack_1e8,local_1e0);
  if ((local_208 & 1) != 0) {
    (**(code **)(*plStack_1f0 + 0x18))
              (plStack_1f0,local_1f8,CONCAT71(uStack_207,local_208) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_210);
  if ((local_230 & 1) != 0) {
    (**(code **)(*plStack_218 + 0x18))
              (plStack_218,local_220,CONCAT71(uStack_22f,local_230) & 0xfffffffffffffffe,1);
  }
  if ((local_268 & 1) != 0) {
    (**(code **)(*plStack_250 + 0x18))
              (plStack_250,local_258,CONCAT71(uStack_267,local_268) & 0xfffffffffffffffe,1);
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  FUN_027c2bd0(auStack_148,local_140);
  if ((local_168 & 1) != 0) {
    (**(code **)(*local_150 + 0x18))
              (local_150,local_158,CONCAT71(uStack_167,local_168) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_170);
  if ((local_190 & 1) != 0) {
    (**(code **)(*local_178 + 0x18))
              (local_178,local_180,CONCAT71(uStack_18f,local_190) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_128);
  return;
}


