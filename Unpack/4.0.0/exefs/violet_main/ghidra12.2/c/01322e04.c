/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01322e04; name: FUN_01322e04
 */


void FUN_01322e04(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  undefined8 *local_f8 [2];
  undefined1 auStack_e8 [8];
  LightEventType aLStack_e0 [16];
  undefined8 *local_d0 [2];
  undefined8 local_c0;
  LightEventType aLStack_b8 [12];
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pcVar10 = (code *)*param_2;
  FUN_00efb870(local_f8,param_3);
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00ca1ea4(&local_98,local_f8);
  (*pcVar10)(auStack_e8,&local_98);
  puVar8 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_c0 = *puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_c0);
      }
    }
    else if (sVar3 == 0) goto LAB_013230a8;
  }
  bVar13 = true;
  local_c0 = 0;
  local_ac = 1;
  nn::os::InitializeLightEvent(aLStack_b8,0,1);
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  FUN_011b9d34(&local_a8,local_d0);
  *param_1 = 1;
  local_98 = (undefined8 *)0x0;
  local_84 = 1;
  nn::os::InitializeLightEvent((LightEventType *)&uStack_90,0,1);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_011b9d34(&local_80,&local_a8);
  puVar5 = PTR_DAT_047d38f8;
  lVar11 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar11) {
    uVar9 = nn::os::GetCurrentThread();
LAB_013230d8:
    if (*(long *)puVar5 == 0) goto code_r0x013230e0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar13) {
              *(undefined8 *)puVar5 = uVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_013230e8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar13) {
        *(undefined8 *)puVar5 = uVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_013230e8:
    bVar13 = false;
  }
  plVar12 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x28,8);
  if (puVar8 == (undefined8 *)0x0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    FUN_01323504(&local_70,&local_98);
    if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
    puVar8 = local_70;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar8 = 0;
    *(undefined4 *)((long)puVar8 + 0x14) = 1;
    nn::os::InitializeLightEvent(puVar8 + 1,0,1);
    puVar8[4] = 0;
    puVar8[3] = 0;
    FUN_011b9d34(puVar8 + 3,&local_80);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_58 = 8;
    uStack_60 = 0x28;
    local_68 = plVar12;
  }
  *(undefined8 **)(param_1 + 8) = puVar8;
  *(long **)(param_1 + 0x10) = local_68;
  *(undefined8 *)(param_1 + 0x18) = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = local_58;
  if (!bVar13) {
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  }
  puVar8 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_70 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_70);
      }
    }
    else if (sVar3 == 0) goto LAB_013230a8;
  }
  nn::os::FinalizeLightEvent((LightEventType *)&uStack_90);
  puVar8 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_98 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar7 + 0x8040,&local_98);
      }
    }
    else if (sVar3 == 0) goto LAB_013230a8;
  }
  nn::os::FinalizeLightEvent(aLStack_b8);
  if (local_d0[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_d0[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_98 = (undefined8 *)*local_d0[0];
        FUN_00c44438(lVar7 + 0x8040,&local_98);
      }
    }
    else if (sVar3 == 0) goto LAB_013230a8;
  }
  nn::os::FinalizeLightEvent(aLStack_e0);
  if (local_f8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f8[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_f8[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar13) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_98 = (undefined8 *)*local_f8[0];
        FUN_00c44438(lVar7 + 0x8040,&local_98);
      }
    }
    else if (sVar3 == 0) {
LAB_013230a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x013230e0:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar13) {
    *(undefined8 *)puVar5 = uVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_013230e8;
  goto LAB_013230d8;
}


