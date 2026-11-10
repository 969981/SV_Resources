/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ba294; name: FUN_012ba294
 */


void FUN_012ba294(long param_1)

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
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_58;
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x58) == 0) && (*(long *)(param_1 + 0x60) == 0)) {
    local_58 = 0;
    lVar9 = FUN_0145b26c(auStack_38,*(undefined8 *)(param_1 + 0x50),&local_58);
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x30);
      *(ulong *)(lVar9 + 0x1b8) = *(ulong *)(lVar9 + 0x1b8) | 8;
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_012ba71c;
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
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar12;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_012ba73c;
    }
    plVar10 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
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
      else if (sVar2 == 0) goto LAB_012ba654;
    }
    *(long *)(param_1 + 0x58) = lVar9;
    pcVar11 = *(code **)(lVar9 + 0x388);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)(lVar9 + 0x390) = 0;
      *(undefined8 *)(lVar9 + 0x398) = 0;
      *(undefined8 *)(lVar9 + 0x380) = 0;
      *(undefined8 *)(lVar9 + 0x388) = 0;
      (*pcVar11)(lVar9 + 0x3a0);
    }
    *(code **)(lVar9 + 0x380) = FUN_00e5db0c;
    *(undefined1 **)(lVar9 + 0x388) = &LAB_02ba9c4c;
    *(undefined1 **)(lVar9 + 0x390) = &LAB_02ba9c50;
    *(long *)(lVar9 + 0x3a0) = param_1;
    *(undefined1 **)(lVar9 + 0x398) = &LAB_02ba9c5c;
    local_58 = 0;
    lVar9 = FUN_0145b26c(auStack_38,*(undefined8 *)(param_1 + 0x50),&local_58);
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x30);
      *(ulong *)(lVar9 + 0x1b8) = *(ulong *)(lVar9 + 0x1b8) | 8;
      if (*(long *)(lVar13 + 0x10) == 0) {
LAB_012ba71c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
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
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar12;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_012ba73c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar10 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
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
LAB_012ba654:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x60) = lVar9;
    pcVar11 = *(code **)(lVar9 + 0x388);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)(lVar9 + 0x390) = 0;
      *(undefined8 *)(lVar9 + 0x398) = 0;
      *(undefined8 *)(lVar9 + 0x380) = 0;
      *(undefined8 *)(lVar9 + 0x388) = 0;
      (*pcVar11)(lVar9 + 0x3a0);
    }
    *(code **)(lVar9 + 0x380) = FUN_00f44a1c;
    *(undefined1 **)(lVar9 + 0x388) = &LAB_02ba9c68;
    *(undefined1 **)(lVar9 + 0x390) = &LAB_02ba9c6c;
    *(long *)(lVar9 + 0x3a0) = param_1;
    *(undefined1 **)(lVar9 + 0x398) = &LAB_02ba9c78;
    puVar5 = PTR_DAT_047d89c8;
    if (((*PTR_DAT_047d89c8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89c8);
    }
    puVar7 = PTR_DAT_047d89d8;
    puVar6 = PTR_DAT_047d89d0;
    lVar9 = *(long *)PTR_DAT_047d89d0;
    *(long *)PTR_DAT_047d89d8 = lVar9;
    lVar9 = *(long *)(lVar9 + 0x38);
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89c8);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    lVar14 = *(long *)(param_1 + 0x58);
    uVar12 = *(undefined8 *)(lVar13 + 0x40);
    plVar10 = (long *)(lVar14 + 0x1d0);
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x1d8));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar13;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_012ba494;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_012ba494:
    FUN_00e220f4(lVar14,0,lVar9);
    plVar10 = (long *)(lVar9 + 0x1d0);
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1d8));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar13;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_012ba4c0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_012ba4c0:
    *(undefined8 *)(lVar9 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x1d8));
    *(undefined8 *)(lVar14 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x1d8));
    lVar13 = *(long *)(param_1 + 0x60);
    plVar10 = (long *)(lVar13 + 0x1d0);
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1d8));
          while (*plVar10 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_012ba500;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_012ba500:
    FUN_00e220f4(lVar13,uVar12,0);
    *(undefined8 *)(lVar13 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x1d8));
  }
  return;
}


