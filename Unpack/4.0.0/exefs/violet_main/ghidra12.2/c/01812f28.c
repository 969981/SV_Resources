/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01812f28; name: FUN_01812f28
 */


void FUN_01812f28(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *local_40;
  undefined1 auStack_38 [8];
  
  FUN_01813318();
  *param_1 = &PTR_FUN_045ac800;
  param_1[4] = &PTR_LAB_045ac830;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),false,0);
  plVar11 = param_1 + 9;
  *plVar11 = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0x555555555555555;
  param_1[0x12] = 0x555555555555555;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  FUN_01813444(param_1 + 0x17);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_018132d8(param_1 + 0x2f);
  local_40 = (long *)0x0;
  lVar6 = FUN_0145b26c(auStack_38,param_2,&local_40);
  if (lVar6 != 0) {
    FUN_00f1b0c8(lVar6);
    lVar12 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar8;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar7 = (long *)*plVar11;
  *plVar11 = 0;
  if (plVar7 != (long *)0x0) {
    lVar12 = plVar7[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_018131f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[9] = lVar6;
  pcVar9 = *(code **)(lVar6 + 0x388);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar9)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x380) = &LAB_01430a40;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02b7b0d8;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02b7b0dc;
  *(undefined8 **)(lVar6 + 0x3a0) = param_1;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02b7b0e8;
  plVar10 = (long *)param_1[9];
  plVar7 = plVar10;
  if ((long *)plVar10[0x36] != (long *)0x0) {
    plVar7 = (long *)plVar10[0x36];
  }
  *(undefined4 *)(plVar10 + 0x6e) = 0;
  if (plVar7 != plVar10) {
    (**(code **)(*plVar7 + 0x88))(plVar7,0);
  }
  plVar7 = plVar10;
  if ((long *)plVar10[0x35] != (long *)0x0) {
    plVar7 = (long *)plVar10[0x35];
  }
  if (plVar7 != plVar10) {
    (**(code **)(*plVar7 + 0x88))(plVar7,0);
  }
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_40);
  lVar12 = *plVar11;
  plVar11 = (long *)(lVar12 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_018130f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x1d8));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_018130f0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_018130f0:
  FUN_00e220f4(lVar12,0,local_40);
  *(undefined8 *)(lVar12 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x1d8));
  if (local_40 == (long *)0x0) {
    return;
  }
  lVar6 = local_40[6];
  psVar1 = (short *)(lVar6 + 0x1a);
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
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*local_40 + 0x50))();
    return;
  }
  if (sVar2 != 0) {
    return;
  }
  goto LAB_018131f0;
}


