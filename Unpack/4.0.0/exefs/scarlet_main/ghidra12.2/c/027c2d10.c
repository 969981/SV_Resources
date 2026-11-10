/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c2d10; name: FUN_027c2d10
 */


void FUN_027c2d10(undefined8 param_1,ulong param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined5 uVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined3 uVar12;
  int iVar13;
  undefined8 uVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined4 local_3e8;
  undefined1 uStack_3e5;
  undefined3 uStack_3e4;
  undefined8 local_3e0;
  char *pcStack_3d8;
  undefined8 local_3d0;
  long *local_3c8;
  undefined1 auStack_3c0 [32];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [104];
  undefined1 local_310;
  undefined8 local_308;
  long lStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  char *pcStack_2e0;
  undefined8 local_2d8;
  long *local_2d0;
  undefined8 local_2c8;
  char *pcStack_2c0;
  undefined8 local_2b8;
  long *local_2b0;
  long *local_2a8;
  long *local_2a0;
  long *local_298;
  byte local_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined1 local_287;
  undefined8 local_280;
  long *local_278;
  long *local_270;
  undefined8 local_268 [4];
  undefined1 auStack_248 [104];
  undefined1 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined1 auStack_1c8 [8];
  char *local_1c0;
  long *local_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  long *local_190;
  undefined1 auStack_188 [8];
  byte local_180;
  undefined7 uStack_17f;
  undefined8 local_170;
  long *local_168;
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long *local_130;
  undefined8 uStack_128;
  long *local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  long *local_100;
  ulong local_f8;
  ulong local_f0;
  undefined4 local_9c;
  undefined8 *local_98;
  char *pcStack_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  
  FUN_01e74fb0(auStack_138);
  if (((*(char *)(param_2 + 0x58) != '\0') ||
      ((*(long *)(param_2 + 0x40) != 0 && (*(short *)(*(long *)(param_2 + 0x40) + 0x1a) != 0)))) &&
     (*(long **)(param_2 + 0x50) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0x50) + 8))(&local_120);
    pcVar10 = local_118;
    if ((char)local_120 != '\0') {
      if (local_110 != (code *)0x0) {
        local_278 = (long *)FUN_01cf7e20();
        local_290 = 0x10;
        uStack_28f = (undefined7)*(undefined8 *)pcVar10;
        uStack_288 = (undefined1)((ulong)*(undefined8 *)pcVar10 >> 0x38);
        local_287 = 0;
        FUN_027c3e80(auStack_138,"ApplicationData",&local_290);
        if ((local_290 & 1) != 0) {
          (**(code **)(*local_278 + 0x18))
                    (local_278,local_280,CONCAT71(uStack_28f,local_290) & 0xfffffffffffffffe,1);
        }
        if ((char)local_120 == '\0') goto LAB_027c2de0;
      }
      local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
    }
  }
LAB_027c2de0:
  iVar13 = 0;
  do {
    FUN_027c1f04(&local_290,param_3,iVar13);
    if ((local_290 != 0) && (FUN_01f70094(auStack_138,local_280,local_268[0]), local_290 != 0)) {
      if (local_270 != (long *)0x0) {
        (**(code **)(*local_270 + 0x20))();
      }
      local_290 = 0;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x18);
  FUN_01e74fb0(auStack_140);
  memset(&local_1a8,0,0x68);
  FUN_027c1cd0(&local_1a8);
  iVar13 = 0;
  do {
    FUN_027c1f04(&local_290,param_3,iVar13);
    if ((local_290 != 0) && (FUN_01f70094(auStack_140,local_280,local_268[0]), local_290 != 0)) {
      if (local_270 != (long *)0x0) {
        (**(code **)(*local_270 + 0x20))();
      }
      local_290 = 0;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x18);
  FUN_027bbf28(auStack_188,auStack_140);
  FUN_027c1eb8(auStack_1c8,param_3);
  if (*local_1c0 != '\0') {
    FUN_01f77c8c(&local_180);
  }
  FUN_0195a874(&local_120,param_3);
  FUN_027c3efc(&local_290,local_118,auStack_138,&local_1a8);
  if (local_108 != (code *)0x0) {
    (**(code **)(*(long *)local_108 + 0x20))();
  }
  FUN_0195a830(&local_120,param_3);
  if ((char)local_120 != '\0') {
    FUN_027c3f5c(&local_98,(ulong)&local_120 | 4);
    FUN_01d0e1a8(local_268,&local_98);
    if (((ulong)local_98 & 1) != 0) {
      (**(code **)(*local_80 + 0x18))(local_80,local_88,(ulong)local_98 & 0xfffffffffffffffe,1);
    }
    if ((char)local_120 != '\0') {
      local_120 = (long *)((ulong)local_120 & 0xffffffffffffff00);
    }
  }
  if (DAT_0485e9d8 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_027c2014();
  }
  FUN_027c3f98(&local_290,uVar14);
  local_2c8 = 0x5f3a9f86b611a6e;
  pcStack_2c0 = "StartupSession";
  local_2b8 = 0xe;
  local_2b0 = (long *)0x0;
  FUN_027c20b8(&local_2a8,&local_2c8,*(undefined8 *)(param_2 + 0x70));
  plVar17 = local_2a8;
  local_2e8 = 0xf6b73a7830ce53af;
  pcStack_2e0 = "CreateSession";
  local_2d8 = 0xd;
  local_2d0 = (long *)0x0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_027c2138(&local_2f8,param_2 + 0x78);
  FUN_01cfa5b0(auStack_3c0,&local_290);
  FUN_01d01ed8(auStack_3a0,&local_270);
  FUN_01cfa5b0(auStack_398,local_268);
  FUN_027c2388(auStack_378,auStack_248);
  local_310 = local_1e0;
  local_308 = local_1d8;
  lStack_300 = local_1d0;
  if (local_1d0 != 0) {
    plVar1 = (long *)(local_1d0 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_027c402c(&local_2a0,plVar17,&local_2e8,&local_2f8,auStack_3c0);
  plVar16 = local_2a0;
  local_3e0 = 0xa96613f7d6ff2312;
  pcStack_3d8 = "CreateAliasId";
  plVar17 = local_2a0 + 6;
  local_3d0 = 0xd;
  local_3c8 = (long *)0x0;
  local_120 = (long *)0x0;
  local_118 = (code *)0x0;
  FUN_00c43ef0(&local_120,plVar17);
  local_98 = (undefined8 *)0x0;
  pcStack_90 = (char *)0x0;
  plVar1 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
  }
  if ((long *)local_120[2] == plVar1) {
    FUN_015d2a6c(&local_98,&local_120);
  }
  plVar16 = local_120;
  if (local_120 != (long *)0x0) {
    plVar4 = local_120 + 3;
    do {
      sVar15 = (short)*plVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(short *)plVar4 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_130 = (long *)*plVar16;
        FUN_00c44438(lVar19 + 0x8040,&local_130);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  puVar11 = local_98;
  if (local_98 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_98 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_98 + 0x1a);
      sVar15 = *(short *)((long)local_98 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar15) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c3894;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c3894:
          bVar7 = false;
        }
        if (bVar7) {
          plVar16 = (long *)0x0;
          if (local_98[2] != 0) {
            plVar16 = (long *)(local_98[2] + -0x28);
          }
          goto LAB_027c3908;
        }
        sVar15 = sVar5;
      } while (sVar5 != 0);
    }
    plVar16 = (long *)0x0;
LAB_027c3908:
    psVar2 = (short *)(local_98 + 3);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_120 = (long *)*puVar11;
        FUN_00c44438(lVar19 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  FUN_01050714(&local_130,&local_3e0);
  plVar9 = local_130;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_130 != (long *)0x0) {
    plVar4 = local_130 + 6;
  }
  local_98 = (undefined8 *)*plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_130 != (long *)0x0) {
    plVar4 = local_130 + 7;
  }
  pcStack_90 = (char *)*plVar4;
  if (local_130 == (long *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = local_130[8];
  }
  local_80 = (long *)0x0;
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x18))(local_130);
  }
  lVar19 = local_78;
  local_80 = plVar9;
  local_9c = 0;
  local_78._0_3_ = (undefined3)local_3e8;
  uVar12 = (undefined3)local_78;
  if (plVar16 == (long *)0x0) {
    local_78._7_1_ = SUB81(lVar19,7);
    local_78._0_7_ = CONCAT43(CONCAT31(uStack_3e4,uStack_3e5),(undefined3)local_78);
    local_100 = (long *)0x0;
  }
  else {
    lVar18 = plVar16[6];
    local_78 = lVar19;
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_027c36dc;
    psVar2 = (short *)(lVar18 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar14;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_027c36dc;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    local_78._0_7_ = CONCAT43(CONCAT31(uStack_3e4,uStack_3e5),uVar12);
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    lVar19 = plVar16[6];
    local_100 = plVar16;
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_027c36dc;
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar14;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_027c36dc;
  }
  uVar8 = CONCAT41((undefined4)local_78,param_4);
  local_110 = FUN_02c0b074;
  local_108 = FUN_02c0b11c;
  local_f8 = CONCAT44(local_78._3_4_,(int)uVar8) & 0xffffffffffffff01;
  local_120 = (long *)&LAB_02c0928c;
  local_118 = FUN_02c09f20;
  local_f0 = param_2;
  FUN_015d1ba8(&local_298,&local_98,&local_9c,&local_120);
  pcVar10 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    (*pcVar10)(&local_100);
  }
  if (plVar16 != (long *)0x0) {
    lVar19 = plVar16[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar4 = local_298;
  local_120 = (long *)0x0;
  local_118 = (code *)0x0;
  FUN_00c43ef0(&local_120,plVar17);
  local_130 = (long *)0x0;
  uStack_128 = 0;
  if ((long *)local_120[2] == plVar1) {
    FUN_015d2a6c(&local_130,&local_120);
  }
  plVar17 = local_120;
  if (local_120 != (long *)0x0) {
    plVar1 = local_120 + 3;
    do {
      sVar15 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_78 = *plVar17;
        FUN_00c44438(lVar19 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  local_120 = (long *)0x0;
  local_118 = (code *)0x0;
  FUN_0177de7c(&local_120,&local_130);
  if ((((char)plVar4[0x28] != '\0') && (local_120 != (long *)0x0)) && (local_120[2] != 0)) {
    (**(code **)(*(long *)(local_120[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(plVar4 + 0x26,&local_120);
  plVar17 = local_120;
  if (local_120 != (long *)0x0) {
    plVar1 = local_120 + 3;
    do {
      sVar15 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_78 = *plVar17;
        FUN_00c44438(lVar19 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  plVar17 = local_130;
  if (local_130 != (long *)0x0) {
    plVar1 = local_130 + 3;
    do {
      sVar15 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_130 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_78 = *plVar17;
        FUN_00c44438(lVar19 + 0x8040,&local_78);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  if (plVar16 != (long *)0x0) {
    lVar19 = plVar16[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  plVar1 = local_298;
  local_120 = (long *)0x0;
  local_118 = (code *)0x0;
  FUN_00c43ef0(&local_120,local_298 + 6);
  local_98 = (undefined8 *)0x0;
  pcStack_90 = (char *)0x0;
  plVar17 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar17 = plVar1 + 5;
  }
  if ((long *)local_120[2] == plVar17) {
    FUN_015d2a6c(&local_98,&local_120);
  }
  plVar17 = local_120;
  if (local_120 != (long *)0x0) {
    plVar1 = local_120 + 3;
    do {
      sVar15 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_130 = (long *)*plVar17;
        FUN_00c44438(lVar19 + 0x8040,&local_130);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  puVar11 = local_98;
  if (local_98 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_98 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_98 + 0x1a);
      sVar15 = *(short *)((long)local_98 + 0x1a);
      do {
        sVar5 = *psVar2;
        if (sVar5 == sVar15) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_027c38e0;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027c38e0:
          bVar7 = false;
        }
        if (bVar7) {
          plVar17 = (long *)0x0;
          if (local_98[2] != 0) {
            plVar17 = (long *)(local_98[2] + -0x28);
          }
          goto LAB_027c393c;
        }
        sVar15 = sVar5;
      } while (sVar5 != 0);
    }
    plVar17 = (long *)0x0;
LAB_027c393c:
    psVar2 = (short *)(local_98 + 3);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_120 = (long *)*puVar11;
        FUN_00c44438(lVar19 + 0x8040,&local_120);
      }
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
  local_98 = (undefined8 *)0xac19ec5dd305f32b;
  pcStack_90 = "RandomMatchingCancel";
  local_88 = 0x14;
  local_80 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else {
    lVar19 = plVar17[6];
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_027c36dc;
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar14;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_027c36dc;
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    lVar19 = plVar17[6];
    local_100 = plVar17;
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_027c36dc;
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar14;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_027c36dc;
  }
  local_120 = (long *)&LAB_02c0b1c4;
  local_118 = FUN_02c0cd28;
  local_110 = (code *)&LAB_02c17578;
  local_108 = (code *)&LAB_02c17620;
  local_f8 = param_2;
  FUN_015d1ba8(param_1,&local_98,&local_130,&local_120);
  pcVar10 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    (*pcVar10)(&local_100);
  }
  if (plVar17 != (long *)0x0) {
    lVar19 = plVar17[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    lVar19 = plVar17[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  if (local_298 != (long *)0x0) {
    lVar19 = local_298[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*local_298 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  if (local_3c8 != (long *)0x0) {
    (**(code **)(*local_3c8 + 0x20))();
  }
  if (local_2a0 != (long *)0x0) {
    lVar19 = local_2a0[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*local_2a0 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_027c36dc;
  }
  FUN_027c47d8(auStack_3c0);
  FUN_027bfe38(&local_2f8);
  if (local_2d0 != (long *)0x0) {
    (**(code **)(*local_2d0 + 0x20))();
  }
  if (local_2a8 != (long *)0x0) {
    lVar19 = local_2a8[6];
    psVar2 = (short *)(lVar19 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*local_2a8 + 0x50))();
    }
    else if (sVar15 == 0) {
LAB_027c36dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  if (local_2b0 != (long *)0x0) {
    (**(code **)(*local_2b0 + 0x20))();
  }
  FUN_027c47d8(&local_290);
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  FUN_027c2bd0(auStack_160,local_158);
  if ((local_180 & 1) != 0) {
    (**(code **)(*local_168 + 0x18))
              (local_168,local_170,CONCAT71(uStack_17f,local_180) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_188);
  if ((local_1a8 & 1) != 0) {
    (**(code **)(*local_190 + 0x18))
              (local_190,local_198,CONCAT71(uStack_1a7,local_1a8) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_140);
  FUN_01cfa410(auStack_138);
  return;
}


