/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f475e8; name: FUN_00f475e8
 */


void FUN_00f475e8(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  
  if (*(long *)(param_2 + 0x1e8) == *param_3) {
    if (*(long *)(param_2 + 0xe8) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(param_2 + 0xe8) + 0x48);
    }
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar6 != 0)) {
      uVar8 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar8;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    while( true ) {
      if (plVar12 == (long *)0x0) {
        *param_1 = 0;
        return;
      }
      if (plVar12 == (long *)PTR_DAT_047d6528) break;
      plVar12 = (long *)*plVar12;
    }
    *param_1 = lVar7;
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      return;
    }
    if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    return;
  }
  plVar12 = (long *)(param_2 + 0x128);
  lVar11 = *plVar12;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar11) {
    lVar7 = nn::os::GetCurrentThread();
LAB_00f477a4:
    if (*plVar12 == 0) goto code_r0x00f477ac;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x130));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x130));
          while (*plVar12 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00f477b4;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *plVar12 = lVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00f477b4:
    bVar10 = false;
    goto LAB_00f477b8;
  }
  plVar12 = (long *)0x0;
  bVar10 = true;
LAB_00f477b8:
  plVar9 = *(long **)(param_2 + 0x140);
  plVar3 = *(long **)(param_2 + 0x148);
  if (plVar9 == plVar3) {
LAB_00f47860:
    if (plVar9 != plVar3) {
      lVar7 = *plVar9;
      *param_1 = lVar7;
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + 0x30);
        if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar2 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
          *(undefined8 *)(lVar7 + 8) = uVar8;
          *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      goto LAB_00f477e8;
    }
  }
  else {
    do {
      if (*(long *)(*plVar9 + 0x368) == *param_3) goto LAB_00f47860;
      plVar9 = plVar9 + 1;
    } while (plVar3 != plVar9);
  }
  *param_1 = 0;
LAB_00f477e8:
  if (bVar10) {
    return;
  }
  *plVar12 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
  return;
code_r0x00f477ac:
  cVar5 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar10) {
    *plVar12 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f477b4;
  goto LAB_00f477a4;
}


