/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b7a90; name: FUN_012b7a90
 */


void FUN_012b7a90(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  FUN_012b7e50(&local_58,*(undefined8 *)(param_1 + 8));
  plVar7 = local_58;
  local_58 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar7;
  if (lVar10 != 0) {
    FUN_0226fdfc(param_1 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x40) = uStack_48;
  *(undefined8 *)(param_1 + 0x48) = local_40;
  *(undefined8 *)(param_1 + 0x38) = local_50;
  FUN_012b8070(&local_58,*(undefined8 *)(param_1 + 8));
  plVar7 = local_58;
  local_58 = (long *)0x0;
  lVar10 = *(long *)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar7;
  if (lVar10 == 0) {
    *(undefined8 *)(param_1 + 0x60) = uStack_48;
    *(undefined8 *)(param_1 + 0x68) = local_40;
    *(undefined8 *)(param_1 + 0x58) = local_50;
  }
  else {
    FUN_022701b8(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = uStack_48;
    *(undefined8 *)(param_1 + 0x68) = local_40;
    *(undefined8 *)(param_1 + 0x58) = local_50;
    plVar7 = *(long **)(param_1 + 0x50);
  }
  local_58 = (long *)0x0;
  FUN_012f8b44(plVar7,*(undefined8 *)(param_1 + 8),3);
  local_58 = (long *)0x0;
  plVar7 = (long *)FUN_0145b26c(auStack_38,param_2,&local_58);
  if (plVar7 != (long *)0x0) {
    FUN_00f1b0c8(plVar7);
    lVar10 = plVar7[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar9;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[6];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_012b7d7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long **)(param_1 + 0x28) = plVar7;
  (**(code **)(*plVar7 + 0x88))(plVar7,0);
  lVar10 = *(long *)(param_1 + 0x28);
  pcVar11 = *(code **)(lVar10 + 0x388);
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x390) = 0;
    *(undefined8 *)(lVar10 + 0x398) = 0;
    *(undefined8 *)(lVar10 + 0x380) = 0;
    *(undefined8 *)(lVar10 + 0x388) = 0;
    (*pcVar11)(lVar10 + 0x3a0);
  }
  *(undefined1 **)(lVar10 + 0x3a8) = &LAB_00e9c55c;
  *(long *)(lVar10 + 0x3a0) = param_1;
  *(undefined8 *)(lVar10 + 0x3b0) = 0;
  *(undefined1 **)(lVar10 + 0x380) = &LAB_02b7f5e0;
  *(undefined1 **)(lVar10 + 0x388) = &LAB_02b7f5fc;
  puVar5 = PTR_DAT_047d6c20;
  *(undefined1 **)(lVar10 + 0x390) = &LAB_02b7f600;
  *(undefined1 **)(lVar10 + 0x398) = &LAB_02b7f614;
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_58);
  lVar12 = *(long *)(param_1 + 0x28);
  plVar7 = (long *)(lVar12 + 0x1d0);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012b7c54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012b7c54;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012b7c54:
  FUN_00e220f4(lVar12,0,local_58);
  FUN_012b85c4();
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  if (local_58 == (long *)0x0) {
    return;
  }
  lVar10 = local_58[6];
  psVar1 = (short *)(lVar10 + 0x1a);
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
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*local_58 + 0x50))();
    return;
  }
  if (sVar2 != 0) {
    return;
  }
  goto LAB_012b7d7c;
}


