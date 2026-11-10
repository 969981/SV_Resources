/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018cc0c0; name: FUN_018cc0c0
 */


void FUN_018cc0c0(long param_1)

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
  long lVar10;
  long *local_48;
  undefined1 auStack_28 [8];
  
  local_48 = (long *)0x0;
  lVar6 = FUN_0145b26c(auStack_28,*(undefined8 *)(param_1 + 8),&local_48);
  if (lVar6 != 0) {
    FUN_00f1b0c8(lVar6);
    lVar10 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
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
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar8;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  pcVar9 = *(code **)(lVar6 + 0x388);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar9)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x380) = &LAB_00aa6fbc;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_00aa6fc0;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_00aa6fc4;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_00aa6fd0;
  plVar7 = *(long **)(param_1 + 0x788);
  *(undefined8 *)(param_1 + 0x788) = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[6];
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
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_018cc2d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x788) = lVar6;
  plVar7 = (long *)(lVar6 + 0x1d0);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_018cc1ac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1d8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1d8));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_018cc1ac;
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
LAB_018cc1ac:
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  *(undefined8 *)PTR_DAT_047d6c30 = *(undefined8 *)PTR_DAT_047d6c28;
  FUN_01293e44(&local_48);
  FUN_00e220f4(lVar6,local_48,0);
  FUN_018cc3a8(param_1);
  if (local_48 == (long *)0x0) {
LAB_018cc220:
    *(undefined8 *)(lVar6 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x1d8));
    return;
  }
  lVar10 = local_48[6];
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
    (**(code **)(*local_48 + 0x50))();
    goto LAB_018cc220;
  }
  if (sVar2 != 0) goto LAB_018cc220;
  goto LAB_018cc2d4;
}


