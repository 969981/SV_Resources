/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b6278; name: FUN_012b6278
 */


void FUN_012b6278(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  if ((*(byte *)(param_1 + 0x6d) & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    FUN_0153db98(param_2,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    return;
  }
  plVar1 = (long *)(param_1 + 0x78);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012b62d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012b62d0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012b62d0:
  if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
    local_58 = *param_2;
    local_50 = (long *)param_2[1];
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[6];
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar7;
        *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_48 = param_3;
    FUN_012b64b8(param_1 + 200,&local_58);
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[6];
      psVar2 = (short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_50 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  else {
    FUN_0153db98(param_2,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
  return;
}


