/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156c490; name: FUN_0156c490
 */


void FUN_0156c490(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)(param_1 + 0x240);
  lVar10 = *plVar11;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar10) {
    plVar11 = (long *)0x0;
    bVar9 = true;
LAB_0156c4c8:
    uVar6 = FUN_00dc5c18(param_1 + 0x200,1,param_2,0,0);
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x220), plVar8 != (long *)0x0)) {
      lVar5 = plVar8[6];
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar5 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
        *(undefined8 *)(lVar5 + 8) = uVar7;
        *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar5 = plVar8[6];
      psVar1 = (short *)(lVar5 + 0x1a);
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
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (bVar9) {
      return;
    }
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar9) {
      *plVar11 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0156c5dc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar9) {
            *plVar11 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0156c5dc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar9) {
      *plVar11 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0156c5dc:
  bVar9 = false;
  goto LAB_0156c4c8;
}


