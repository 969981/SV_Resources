/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c7efc; name: FUN_014c7efc
 */


void FUN_014c7efc(code *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code *apcStack_b0 [12];
  undefined8 local_50;
  undefined8 local_48;
  long *local_28;
  
  DAT_04837330 = 0;
  FUN_00d1af18(&DAT_04543ec8);
  DAT_04837334 = 0;
  DAT_04837338 = 0;
  DAT_0483733c = 0;
  DAT_04543ee0 = 3;
  local_d0 = (code *)0x0;
  lVar9 = FUN_0145b26c(&local_28,*(undefined8 *)(param_1 + 8),&local_d0);
  if (lVar9 != 0) {
    FUN_00f1b0c8(lVar9);
    lVar13 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar11;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar10 = *(long **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_014c8324:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x2d0) = lVar9;
  pcVar12 = *(code **)(lVar9 + 0x388);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x390) = 0;
    *(undefined8 *)(lVar9 + 0x398) = 0;
    *(undefined8 *)(lVar9 + 0x380) = 0;
    *(undefined8 *)(lVar9 + 0x388) = 0;
    (*pcVar12)(lVar9 + 0x3a0);
  }
  *(undefined1 **)(lVar9 + 0x380) = &LAB_00c7b468;
  *(undefined1 **)(lVar9 + 0x388) = &LAB_00a922e8;
  *(undefined1 **)(lVar9 + 0x390) = &LAB_00a929ec;
  *(code **)(lVar9 + 0x3a0) = param_1;
  *(undefined1 **)(lVar9 + 0x398) = &LAB_00a929f8;
  lVar13 = *(long *)(param_1 + 0x2d0);
  plVar10 = (long *)(lVar13 + 0x1d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_014c8024;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_014c8024;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_014c8024:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_014c86ac(&local_28);
  FUN_00e220f4(lVar13,local_28,0);
  *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c4) = 0xbf800000;
  FUN_014c8d90(&local_d0,*(undefined8 *)(param_1 + 8));
  plVar10 = *(long **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_014c8324;
  }
  *(code **)(param_1 + 0x390) = local_d0;
  local_50 = *(undefined8 *)(param_1 + 8);
  uVar11 = FUN_014c9bc0(local_50,&local_50);
  FUN_014c8cd4(&local_48,uVar11);
  local_d0 = *(code **)(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x410) = 0;
  FUN_014c8634(&local_d0);
  uVar11 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x410) = uVar11;
  FUN_014c8634(&local_48);
  if (((DAT_04837348 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04837348), iVar8 != 0)) {
    DAT_04837340 = param_1;
    __cxa_guard_release(&DAT_04837348);
  }
  local_d0 = (code *)&LAB_01a7d4c4;
  local_c8 = FUN_00a92a04;
  local_c0 = &LAB_00a92a24;
  local_b8 = &LAB_00a92a30;
  apcStack_b0[0] = DAT_04837340;
  FUN_014c876c(&local_d0);
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(apcStack_b0);
  }
  if (((DAT_04837358 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04837358), iVar8 != 0)) {
    DAT_04837350 = param_1;
    __cxa_guard_release(&DAT_04837358);
  }
  local_d0 = (code *)&LAB_01e09858;
  local_c8 = FUN_00a92a3c;
  local_c0 = &LAB_00a92a40;
  local_b8 = &LAB_00a92a4c;
  apcStack_b0[0] = DAT_04837350;
  FUN_014c87e0(&local_d0);
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(apcStack_b0);
  }
  if (((DAT_04837368 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04837368), iVar8 != 0)) {
    DAT_04837360 = param_1;
    __cxa_guard_release(&DAT_04837368);
  }
  local_d0 = FUN_010c1f74;
  local_c8 = FUN_00a92a58;
  local_c0 = &LAB_00a92a5c;
  local_b8 = &LAB_00a92a68;
  apcStack_b0[0] = DAT_04837360;
  FUN_014c8854(&local_d0);
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(apcStack_b0);
  }
  FUN_014c8550(*(undefined8 *)(param_1 + 8));
  puVar5 = PTR_DAT_047d91d0;
  if (((*PTR_DAT_047d91d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0))
  {
    FUN_00100190(&LAB_00a92a74,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  puVar7 = PTR_DAT_047d91e0;
  puVar6 = PTR_DAT_047d91d8;
  lVar9 = *(long *)PTR_DAT_047d91d8;
  *(long *)PTR_DAT_047d91e0 = lVar9;
  local_d0 = param_1;
  FUN_014c85cc(*(undefined8 *)(lVar9 + 0x38),&local_d0);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d91d0), iVar8 != 0)) {
    FUN_00100190(&LAB_00a92a74,PTR_DAT_047d91d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d91d0);
  }
  lVar9 = *(long *)puVar6;
  *(long *)puVar7 = lVar9;
  local_d0 = param_1;
  FUN_014c8600(*(undefined8 *)(lVar9 + 0x40),&local_d0);
  if (local_28 == (long *)0x0) {
LAB_014c8294:
    *(undefined8 *)(lVar13 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1d8));
    return;
  }
  lVar9 = local_28[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_28 + 0x50))();
    goto LAB_014c8294;
  }
  if (sVar2 != 0) goto LAB_014c8294;
  goto LAB_014c8324;
}


