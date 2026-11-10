/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ec164; name: FUN_014ec164
 */


void FUN_014ec164(long param_1)

{
  short *psVar1;
  MutexType *pMVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long local_38;
  
  if ((*(byte *)(param_1 + 0x288) & 1) != 0) {
    plVar7 = (long *)(param_1 + 0x270);
    lVar9 = nn::os::GetCurrentThread();
LAB_014ec2ac:
    if (*plVar7 == 0) goto code_r0x014ec2b4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x278));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x278));
          while (*plVar7 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_014ec2bc;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_014ec2bc:
    lVar11 = *(long *)(param_1 + 0x230);
    lVar9 = *(long *)(param_1 + 0x238);
    while (lVar6 = lVar9, lVar6 != lVar11) {
      pcVar10 = *(code **)(lVar6 + -0x78);
      lVar9 = lVar6 + -0x80;
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar6 + -0x70) = 0;
        *(undefined8 *)(lVar6 + -0x68) = 0;
        *(undefined8 *)(lVar6 + -0x80) = 0;
        *(undefined8 *)(lVar6 + -0x78) = 0;
        (*pcVar10)(lVar6 + -0x60);
      }
    }
    *(long *)(param_1 + 0x238) = lVar11;
    *(undefined1 *)(param_1 + 0x268) = 0;
    *(undefined1 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x278));
  }
  *(undefined1 *)(param_1 + 0x289) = 1;
  if ((*(byte *)(param_1 + 0x328) & 1) != 0) {
    plVar7 = (long *)(param_1 + 0x310);
    lVar9 = nn::os::GetCurrentThread();
LAB_014ec324:
    if (*plVar7 == 0) goto code_r0x014ec32c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x318));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x318));
          while (*plVar7 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_014ec334;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_014ec334:
    lVar11 = *(long *)(param_1 + 0x2d0);
    lVar9 = *(long *)(param_1 + 0x2d8);
    while (lVar6 = lVar9, lVar6 != lVar11) {
      pcVar10 = *(code **)(lVar6 + -0x78);
      lVar9 = lVar6 + -0x80;
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar6 + -0x70) = 0;
        *(undefined8 *)(lVar6 + -0x68) = 0;
        *(undefined8 *)(lVar6 + -0x80) = 0;
        *(undefined8 *)(lVar6 + -0x78) = 0;
        (*pcVar10)(lVar6 + -0x60);
      }
    }
    *(long *)(param_1 + 0x2d8) = lVar11;
    *(undefined1 *)(param_1 + 0x308) = 0;
    *(undefined1 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x318));
  }
  *(undefined1 *)(param_1 + 0x329) = 1;
  plVar7 = *(long **)(param_1 + 0x1a8);
  *(ulong *)(param_1 + 0x1b8) = *(ulong *)(param_1 + 0x1b8) & 0xffffffffffffffee;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_014ec448;
  }
  plVar7 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_014ec448:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar9 = *(long *)(param_1 + 0x1e8);
  pMVar2 = (MutexType *)(lVar9 + 0x30);
  local_38 = param_1;
  uVar8 = nn::os::IsMutexLockedByCurrentThread(pMVar2);
  if ((uVar8 & 1) == 0) {
    nn::os::LockMutex(pMVar2);
    FUN_00e227ac(lVar9 + 0x108,&local_38);
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    FUN_00e227ac(lVar9 + 0x140,&local_38);
  }
                    /* WARNING: Could not recover jumptable at 0x014ec268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 200))();
  return;
code_r0x014ec2b4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar5) {
    *plVar7 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_014ec2bc;
  goto LAB_014ec2ac;
code_r0x014ec32c:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar5) {
    *plVar7 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_014ec334;
  goto LAB_014ec324;
}


