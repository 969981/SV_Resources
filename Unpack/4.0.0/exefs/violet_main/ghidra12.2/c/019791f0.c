/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019791f0; name: FUN_019791f0
 */


void FUN_019791f0(long param_1,int *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  size_t sVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  undefined8 uVar18;
  char local_1f0 [6];
  char acStack_1ea [9];
  undefined4 auStack_1e1 [60];
  long *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined1 local_d4 [4];
  long *local_d0;
  code *local_c8;
  char *local_c0;
  undefined1 *puStack_b8;
  long *local_b0;
  undefined1 *puStack_a8;
  ulong *local_a0;
  
  if (*(int *)(param_1 + 0x390) != 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x294);
  if (iVar9 == -1) {
    return;
  }
  uVar11 = FUN_01979dc0(param_1,*param_2,iVar9);
  if ((uVar11 & 1) == 0) {
    return;
  }
  memset(local_1f0,0,0x100);
  iVar10 = *param_2;
  if (iVar10 == 4) {
    uVar18 = *(undefined8 *)(param_1 + 8);
    lVar14 = tpidr_el0;
    if (*(long *)(lVar14 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar14 + 0x30);
    local_e8 = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)(lVar14 + 0x30) = uVar18;
    *(undefined2 *)(lVar14 + 0x38) = 1;
    std::to_string(iVar9);
    pcVar16 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar16 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar16);
    sVar12 = strlen(local_1f0);
    pcVar16 = local_1f0 + sVar12 + 8;
    pcVar16[0] = 'r';
    pcVar16[1] = '0';
    pcVar16[2] = '1';
    pcVar16[3] = '\0';
    *(undefined8 *)(local_1f0 + sVar12) = s_0300_roar01_03c5031d._0_8_;
LAB_019792fc:
    pcVar16 = local_c0;
    if ((((byte)local_d0 & 1) != 0) && (local_c0 != (char *)0x0)) {
      plVar13 = *(long **)(lVar14 + 0x30);
      if (plVar13 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
LAB_01979c64:
        plVar13 = DAT_04859430;
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
LAB_01979a18:
      uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,pcVar16,0,8);
      }
      else {
        FUN_00c48fe8(plVar13,pcVar16,0,8);
      }
    }
  }
  else {
    if (iVar10 == 1) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      lVar14 = tpidr_el0;
      if (*(long *)(lVar14 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      local_f0 = *(long **)(lVar14 + 0x30);
      local_e8 = *(undefined8 *)(lVar14 + 0x38);
      *(undefined8 *)(lVar14 + 0x30) = uVar18;
      *(undefined2 *)(lVar14 + 0x38) = 1;
      std::to_string(iVar9);
      pcVar16 = (char *)((ulong)&local_d0 | 1);
      if (((ulong)local_d0 & 1) != 0) {
        pcVar16 = local_c0;
      }
      local_1f0[0] = '\0';
      strcat(local_1f0,pcVar16);
      sVar12 = strlen(local_1f0);
      pcVar16 = "0400_attack01";
LAB_019797d8:
      *(undefined8 *)(local_1f0 + sVar12) = *(undefined8 *)pcVar16;
      *(undefined8 *)(local_1f0 + sVar12 + 6) = *(undefined8 *)(pcVar16 + 6);
      goto LAB_019792fc;
    }
    if (iVar10 == 2) {
      uVar18 = *(undefined8 *)(param_1 + 8);
      lVar14 = tpidr_el0;
      if (*(long *)(lVar14 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      local_f0 = *(long **)(lVar14 + 0x30);
      local_e8 = *(undefined8 *)(lVar14 + 0x38);
      *(undefined8 *)(lVar14 + 0x30) = uVar18;
      *(undefined2 *)(lVar14 + 0x38) = 1;
      std::to_string(iVar9);
      pcVar16 = (char *)((ulong)&local_d0 | 1);
      if (((ulong)local_d0 & 1) != 0) {
        pcVar16 = local_c0;
      }
      local_1f0[0] = '\0';
      strcat(local_1f0,pcVar16);
      sVar12 = strlen(local_1f0);
      pcVar16 = "0410_attack02";
      goto LAB_019797d8;
    }
    if (iVar10 != 3) goto LAB_01979328;
    uVar18 = *(undefined8 *)(param_1 + 8);
    lVar14 = tpidr_el0;
    if (*(long *)(lVar14 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(long **)(lVar14 + 0x30) = DAT_04859430;
    }
    local_f0 = *(long **)(lVar14 + 0x30);
    local_e8 = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)(lVar14 + 0x30) = uVar18;
    *(undefined2 *)(lVar14 + 0x38) = 1;
    std::to_string(iVar9);
    pcVar16 = (char *)((ulong)&local_d0 | 1);
    if (((ulong)local_d0 & 1) != 0) {
      pcVar16 = local_c0;
    }
    local_1f0[0] = '\0';
    strcat(local_1f0,pcVar16);
    sVar12 = strlen(local_1f0);
    *(undefined4 *)((long)auStack_1e1 + sVar12) = 0x31306b;
    *(undefined8 *)(local_1f0 + sVar12) = s_0450_rangeattack01_03c5030a._0_8_;
    *(undefined8 *)(local_1f0 + sVar12 + 8) = s_0450_rangeattack01_03c5030a._8_8_;
    pcVar16 = local_c0;
    if ((((byte)local_d0 & 1) != 0) && (local_c0 != (char *)0x0)) {
      plVar13 = *(long **)(lVar14 + 0x30);
      if (plVar13 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        goto LAB_01979c64;
      }
      goto LAB_01979a18;
    }
  }
  *(long **)(lVar14 + 0x30) = local_f0;
  *(undefined2 *)(lVar14 + 0x38) = (undefined2)local_e8;
LAB_01979328:
  local_d0 = (long *)0x0;
  if (local_1f0[0] == '\0') {
    plVar13 = (long *)FUN_00d44228();
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (local_d0 != (long *)0x0) {
      lVar14 = *local_d0;
      local_d0 = plVar13;
      (**(code **)(lVar14 + 0x20))();
      plVar13 = local_d0;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar18 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar18;
    FUN_00cf9884(&local_f0,uVar18,local_1f0);
    plVar13 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    local_d0 = local_f0;
    plVar13 = local_d0;
  }
  local_d0 = plVar13;
  FUN_01096e28(&local_c8,&DAT_04544130);
  local_c0 = (char *)CONCAT44(local_c0._4_4_,1);
  plVar13 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  plVar13 = local_d0;
  local_d0 = (long *)0x0;
  *(long **)(param_1 + 0x380) = plVar13;
  plVar13 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  pcVar8 = local_c8;
  local_c8 = (code *)0x0;
  *(code **)(param_1 + 0x388) = pcVar8;
  *(undefined4 *)(param_1 + 0x390) = local_c0._0_4_;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  iVar9 = *param_2;
  FUN_00d64f48(&local_f0,param_1);
  plVar13 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 0x10;
    plVar4 = local_f0 + 0x60;
    lVar14 = nn::os::GetCurrentThread();
LAB_01979400:
    if (*plVar4 == 0) goto code_r0x01979408;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
    do {
      if (*plVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
          while (*plVar4 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar7) {
              *plVar4 = lVar14;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01979410;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *plVar4 = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01979410:
    plVar4 = (long *)plVar13[0x10];
    plVar5 = (long *)plVar13[0x11];
    plVar17 = plVar4;
    if ((plVar4 != plVar5) && (*plVar4 != 0x45f25028e429d0da)) {
      do {
        plVar17 = plVar17 + 0xb;
        if (plVar5 == plVar17) {
          plVar17 = plVar5;
          goto LAB_01979454;
        }
      } while (*plVar17 != 0x45f25028e429d0da);
    }
LAB_01979454:
    if (plVar5 == plVar17) {
      plVar13[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
      local_e0 = 0;
    }
    else {
      plVar13[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
      local_e0 = (ulong)(uint)((int)((ulong)((long)plVar17 - (long)plVar4) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      if (plVar13[0x37] == 0) {
        local_b0 = (long *)local_d4;
        local_d0 = (long *)&LAB_02e657b0;
        local_c8 = FUN_02e657f0;
        local_c0 = "\b";
        puStack_b8 = &LAB_02e65800;
      }
      else {
        puStack_a8 = local_d4;
        local_b0 = plVar13;
        local_a0 = &local_e0;
        local_d0 = (long *)&LAB_029e901c;
        local_c8 = FUN_02e65784;
        local_c0 = &LAB_02e65788;
        puStack_b8 = &LAB_02e6579c;
      }
      local_d4 = (undefined1  [4])iVar9;
      FUN_00c837c0(plVar13,plVar1,&local_e0,&local_d0);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    lVar14 = plVar13[6];
    psVar2 = (short *)(lVar14 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar3 == 0) goto LAB_01979c7c;
  }
  FUN_00d64f48(&local_f0,param_1);
  plVar13 = local_f0;
  if (local_f0 == (long *)0x0) {
    return;
  }
  plVar1 = local_f0 + 0x25;
  plVar4 = local_f0 + 0x60;
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_019795ac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x61));
        while (*plVar4 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar14;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_019795ac;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_019795ac:
  plVar4 = (long *)plVar13[0x25];
  plVar5 = (long *)plVar13[0x26];
  plVar17 = plVar4;
  if ((plVar4 != plVar5) && (*plVar4 != -0x16d2c3d20ca1de51)) {
    do {
      plVar17 = plVar17 + 0xb;
      if (plVar5 == plVar17) {
        plVar17 = plVar5;
        goto LAB_019795f0;
      }
    } while (*plVar17 != -0x16d2c3d20ca1de51);
  }
LAB_019795f0:
  if (plVar5 == plVar17) {
    plVar13[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
    local_e0 = 0;
  }
  else {
    plVar13[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x61));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar17 - (long)plVar4) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_d4[0] = 1;
    if (plVar13[0x5e] == 0) {
      local_b0 = (long *)local_d4;
      local_d0 = (long *)&LAB_02e659e0;
      local_c8 = FUN_02e65a28;
      local_c0 = "\b";
      puStack_b8 = &LAB_02e65a38;
    }
    else {
      puStack_a8 = local_d4;
      local_b0 = plVar13;
      local_a0 = &local_e0;
      local_d0 = (long *)&LAB_029e9c14;
      local_c8 = FUN_02e659b4;
      local_c0 = &LAB_02e659b8;
      puStack_b8 = &LAB_02e659cc;
    }
    FUN_00c837c0(plVar13,plVar1,&local_e0,&local_d0);
    pcVar8 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (long *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar8)(&local_b0);
    }
  }
  lVar14 = plVar13[6];
  psVar2 = (short *)(lVar14 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar3 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
    return;
  }
  if (sVar3 != 0) {
    return;
  }
LAB_01979c7c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x01979408:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar7) {
    *plVar4 = lVar14;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01979410;
  goto LAB_01979400;
}


