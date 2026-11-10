/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151e130; name: FUN_0151e130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0151e130(undefined8 *param_1,undefined8 param_2)

{
  LightEventType *pLVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 auVar12 [8];
  code *pcVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  undefined8 *puVar19;
  long *plVar20;
  void *__dest;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  undefined1 auVar26 [16];
  long *local_150;
  undefined1 *local_148;
  byte *pbStack_140;
  size_t local_138;
  long *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined2 local_114;
  undefined1 local_110 [8];
  code *local_108;
  undefined1 *local_100;
  long *local_f8;
  undefined1 auStack_f0 [104];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long *local_70 [2];
  
  FUN_00d1a240(param_1,0x800a8080);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_04594f80;
  param_1[4] = &PTR_LAB_045950e0;
  param_1[5] = &DAT_04595208;
  pLVar1 = (LightEventType *)(param_1 + 0x31);
  param_1[0x24] = &PTR_LAB_045952c0;
  param_1[0x25] = 0;
  plVar2 = param_1 + 0x30;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar3 = param_1 + 0x26;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1[1];
  param_1[6] = &PTR_LAB_04595260;
  param_1[7] = &PTR_LAB_04595288;
  param_1[0x2a] = 0x1fffffffffffffff;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 1;
  nn::os::InitializeLightEvent(pLVar1,0,1);
  memset(param_1 + 0x34,0,0x1c0);
  uVar9 = _UNK_03caaaa8;
  uVar21 = _DAT_03caaaa0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x34] = &PTR_FUN_04595338;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x42] = &PTR_FUN_04595338;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x50] = &PTR_FUN_04595338;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = &PTR_FUN_04595338;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  param_1[0x3f] = uVar9;
  param_1[0x3e] = uVar21;
  param_1[0x4d] = uVar9;
  param_1[0x4c] = uVar21;
  param_1[0x5b] = uVar9;
  param_1[0x5a] = uVar21;
  param_1[0x69] = uVar9;
  param_1[0x68] = uVar21;
  memset(param_1 + 0x6e,0,0x80);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  *(undefined2 *)(param_1 + 0x7f) = 1;
  *(undefined4 *)(param_1 + 0x7b) = 0xc0000000;
  *(undefined4 *)((long)param_1 + 0x3dc) = 0xc0000000;
  param_1[0x7a] = 0xc0000000c0000000;
  lVar16 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0151e2d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar1);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*plVar2 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar16;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0151e2d4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0151e2d4:
  plVar11 = DAT_0485a0a0;
  if (DAT_0485a0a0 != (long *)0x0) {
    plVar17 = DAT_0485a0a0 + 5;
    do {
      lVar16 = *plVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *(int *)plVar17 = (int)lVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar16 == -1) goto LAB_0151ec48;
  }
  local_120 = 0x3f800000;
  local_114 = 1;
  local_128 = 0x3f80000000000004;
  local_11c = 0x101010100000024;
  local_110 = (undefined1  [8])&DAT_1350057bd499524e;
  local_108 = (code *)0x3c0be07;
  local_100 = (undefined1 *)0x5;
  local_f8 = (long *)0x0;
  pbStack_140 = (byte *)(**(code **)(*DAT_0485a020 + 0x50))(DAT_0485a020,local_110,0);
  if (pbStack_140 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_148 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_140 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_138 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_130 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))();
    }
  }
  else {
    local_138 = strlen((char *)pbStack_140);
    bVar6 = *pbStack_140;
    local_148 = &DAT_cbf29ce484222645;
    pbVar24 = pbStack_140;
    while (bVar6 != 0) {
      pbVar24 = pbVar24 + 1;
      local_148 = (undefined1 *)(((ulong)local_148 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar24;
    }
    local_130 = (long *)0x0;
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  FUN_0151ede0(local_110,DAT_0485a0d0,&local_128,&local_148,param_2,0);
  plVar17 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 5;
    do {
      lVar16 = *plVar20;
      iVar15 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *(int *)plVar20 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_0151ec20;
  }
  auVar12 = local_110;
  param_1[0x25] = local_110;
  (**(code **)(*(long *)(DAT_0485a0c8 + 0x30) + 0x18))(local_110);
  FUN_0151ec90(auVar12,local_110,3);
  if (local_110 != (undefined1  [8])0x0) {
    plVar17 = (long *)((long)local_110 + 0x28);
    do {
      lVar16 = *plVar17;
      iVar15 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *(int *)plVar17 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*(long *)local_110 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_0151ec20;
  }
  local_78 = 0;
  local_88 = 0x48;
  uStack_80 = 4;
  local_70[0] = DAT_0485a0a0;
  local_150 = (long *)FUN_00cf3764(local_110,DAT_0485a0a0[1],local_70);
  if (local_150 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = local_150 + 5;
    do {
      lVar16 = *plVar17;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *(int *)plVar17 = (int)lVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar16 == -1) goto LAB_0151ec48;
    plVar17 = local_150;
  }
  lVar16 = *(long *)(plVar17[0xe] + 0x30);
  local_110 = *(undefined1 (*) [8])(lVar16 + 8);
  local_108 = *(code **)(lVar16 + 0x6098);
  local_100 = (undefined1 *)(lVar16 + 0x10);
  _local_110 = FUN_00d56874(*(undefined8 *)(lVar16 + 0x6140),local_110,&local_88,0,0);
  local_100 = (undefined1 *)((ulong)local_100 & 0xffffffffffffff00);
  FUN_00d56380(plVar17 + 6,local_110);
  uVar14 = FUN_00d56320(plVar17 + 6);
  plVar20 = local_150;
  *(undefined4 *)(plVar17 + 0xf) = uVar14;
  local_110 = (undefined1  [8])&LAB_02b2a4e4;
  local_108 = FUN_02b2a570;
  local_100 = &LAB_02b2a574;
  local_f8 = (long *)&LAB_02b2a578;
  plVar17 = local_150 + 6;
  pcVar18 = (char *)FUN_00ccbbb0(*(undefined8 *)(local_150[0xe] + 0x110),plVar17);
  puVar10 = PTR_DAT_047d8da8;
  puVar19 = (undefined8 *)0x0;
  if ((*pcVar18 != '\0') && (*(long *)(pcVar18 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar18 + 8) + 0x20) == 0) goto LAB_0151ec70;
    puVar19 = (undefined8 *)(**(code **)PTR_DAT_047d8da8)();
  }
  *puVar19 = 0x300010000;
  puVar19[1] = 0x400020003;
  puVar19[2] = 0x6000200040002;
  puVar19[3] = 0x5000600040005;
  puVar19[4] = 0x5000100070006;
  puVar19[5] = 0x3000700010007;
  puVar19[6] = 0x3000600070003;
  puVar19[7] = 0x4000000020006;
  puVar19[8] = 0x4000100050001;
  FUN_00ccbbb0(*(undefined8 *)(plVar20[0xe] + 0x110),plVar17);
  pcVar13 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (undefined1 *)0x0;
    local_f8 = (long *)0x0;
    local_110 = (undefined1  [8])0x0;
    local_108 = (code *)0x0;
    (*pcVar13)(auStack_f0);
  }
  FUN_00c97970(*(undefined8 *)(param_1[0x25] + 200),&local_150,0x10);
  if (local_150 != (long *)0x0) {
    plVar17 = local_150 + 5;
    do {
      lVar16 = *plVar17;
      iVar15 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar8) {
        *(int *)plVar17 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_150 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_0151ec20;
  }
  local_110._0_4_ = 0x22;
  local_88 = CONCAT44(local_88._4_4_,1);
  FUN_00c85118(puVar3,&local_88,local_110);
  *(int *)(param_1 + 0x2e) = *(int *)(param_1 + 0x2e) + 0xc;
  FUN_00ebd51c(puVar3,&DAT_0485a0a0,8,1);
  lVar16 = param_1[0x2d];
  pcVar18 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar16 + 0x30);
  if (*pcVar18 == '\0' || *(long *)(pcVar18 + 8) == 0) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar18 + 8) + 0x20) == 0) goto LAB_0151ec70;
    puVar19 = (undefined8 *)(**(code **)puVar10)();
  }
  *puVar19 = 0xbf000000bf000000;
  puVar19[1] = 0xbf000000bf000000;
  puVar19[4] = 0xbf000000bf000000;
  puVar19[5] = 0x3f0000003f000000;
  puVar19[2] = 0x3f000000bf000000;
  puVar19[3] = 0x3f000000bf000000;
  puVar19[6] = 0xbf0000003f000000;
  puVar19[7] = 0x3f000000bf000000;
  puVar19[8] = 0x3f000000bf000000;
  puVar19[9] = 0x3f0000003f000000;
  puVar19[10] = 0x3f000000bf000000;
  puVar19[0xb] = 0x3f0000003f000000;
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar16 + 0x30);
  lVar16 = param_1[0x25];
  FUN_00c75684(*(undefined8 *)(lVar16 + 200),0,param_1 + 0x2d);
  FUN_00c752dc(lVar16,puVar3,1);
  FUN_00eb3bec(*(undefined8 *)(param_1[0x25] + 200),1);
  FUN_00eb4900(*(undefined8 *)(param_1[0x25] + 200),0);
  FUN_00eb2d18(*(undefined8 *)(param_1[0x25] + 200),2,1);
  plVar17 = *(long **)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 5;
    do {
      lVar16 = *plVar20;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *(int *)plVar20 = (int)lVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar16 == -1) goto LAB_0151ec48;
  }
  local_110 = (undefined1  [8])0x7479cf8c4aeb59b7;
  local_108 = (code *)PTR_s_DeferredDecal_047dcec8;
  local_100 = (undefined1 *)0x1f;
  local_f8 = (long *)0x0;
  FUN_012a632c(&local_88,plVar17,local_110);
  plVar20 = (long *)param_1[0x7e];
  param_1[0x7e] = 0;
  if (plVar20 != (long *)0x0) {
    plVar4 = plVar20 + 5;
    do {
      lVar16 = *plVar4;
      iVar15 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_0151ec20;
  }
  uVar22 = local_88;
  local_88 = 0;
  param_1[0x7e] = uVar22;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))(local_f8);
    uVar22 = param_1[0x7e];
  }
  FUN_00d100a8(uVar22);
  auVar26 = NEON_fmov(0x3f800000,4);
  param_1[0x6f] = auVar26._8_8_;
  param_1[0x6e] = auVar26._0_8_;
  param_1[0x71] = uVar9;
  param_1[0x70] = uVar21;
  param_1[0x73] = uVar9;
  param_1[0x72] = uVar21;
  param_1[0x75] = uVar9;
  param_1[0x74] = uVar21;
  param_1[0x77] = uVar9;
  param_1[0x76] = uVar21;
  param_1[0x79] = auVar26._8_8_;
  param_1[0x78] = auVar26._0_8_;
  local_78 = 0;
  local_70[0] = plVar11;
  local_88 = 0x80;
  uStack_80 = 0x100;
  lVar16 = FUN_00cf3764(local_110,plVar11[1],local_70);
  if (lVar16 == 0) {
    lVar25 = 0;
  }
  else {
    piVar5 = (int *)(lVar16 + 0x28);
    do {
      iVar15 = *piVar5;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar8) {
        *piVar5 = iVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == -1) goto LAB_0151ec48;
    lVar25 = lVar16;
  }
  lVar23 = *(long *)(*(long *)(lVar25 + 0x70) + 0x30);
  local_110 = *(undefined1 (*) [8])(lVar23 + 8);
  local_108 = *(code **)(lVar23 + 0x6098);
  local_100 = (undefined1 *)(lVar23 + 0x10);
  _local_110 = FUN_00d56874(*(undefined8 *)(lVar23 + 0x6140),local_110,&local_88,0,0);
  local_100 = (undefined1 *)((ulong)local_100 & 0xffffffffffffff00);
  FUN_00d56380(lVar25 + 0x30,local_110);
  uVar14 = FUN_00d56320(lVar25 + 0x30);
  *(undefined4 *)(lVar25 + 0x78) = uVar14;
  plVar20 = (long *)param_1[0x6c];
  param_1[0x6c] = 0;
  if (plVar20 != (long *)0x0) {
    plVar4 = plVar20 + 5;
    do {
      lVar25 = *plVar4;
      iVar15 = (int)lVar25 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *(int *)plVar4 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar20 + 0x10))();
    }
    else if ((int)lVar25 == 0) goto LAB_0151ec20;
  }
  param_1[0x6c] = lVar16;
  pcVar18 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar16 + 0x30);
  if (*pcVar18 == '\0' || *(long *)(pcVar18 + 8) == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar18 + 8) + 0x20) == 0) {
LAB_0151ec70:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __dest = (void *)(**(code **)puVar10)();
  }
  memcpy(__dest,param_1 + 0x6e,0x80);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar16 + 0x30);
  FUN_00d10690(*(undefined8 *)(param_1[0x25] + 200),0x1f,param_1[0x7e] + 0xf0);
  FUN_00eacd1c(param_1[0x25],0,1,4);
  uVar14 = (**(code **)(*DAT_0485a020 + 0x88))();
  uVar21 = *(undefined8 *)(param_1[0x25] + 200);
  local_110 = (undefined1  [8])param_1[0x6c];
  if (local_110 != (undefined1  [8])0x0) {
    plVar20 = (long *)((long)local_110 + 0x28);
    do {
      lVar16 = *plVar20;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *(int *)plVar20 = (int)lVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if ((int)lVar16 == -1) {
LAB_0151ec48:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_00c4b998(uVar21,0x1f,uVar14,local_110);
  if (local_110 != (undefined1  [8])0x0) {
    plVar20 = (long *)((long)local_110 + 0x28);
    do {
      lVar16 = *plVar20;
      iVar15 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *(int *)plVar20 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*(long *)local_110 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_0151ec20;
  }
  FUN_00eb6a8c(*(undefined8 *)(param_1[0x25] + 200),7);
  FUN_00ead254(*(undefined8 *)(param_1[0x25] + 200),1);
  if (plVar17 != (long *)0x0) {
    plVar20 = plVar17 + 5;
    do {
      lVar16 = *plVar20;
      iVar15 = (int)lVar16 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *(int *)plVar20 = iVar15;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar16 == 0) goto LAB_0151ec20;
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar17 = plVar11 + 5;
  do {
    lVar16 = *plVar17;
    iVar15 = (int)lVar16 + -1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *(int *)plVar17 = iVar15;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar15 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else if ((int)lVar16 == 0) {
LAB_0151ec20:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  *plVar2 = 0;
  nn::os::SignalLightEvent(pLVar1);
  return;
}


