/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01733c20; name: FUN_01733c20
 */


void FUN_01733c20(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = param_1 + 0x1b;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01733c54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01733c54;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01733c54:
  if ((char)param_1[0x10] == '\0') {
    plVar7 = (long *)param_1[0xd];
    plVar9 = param_1;
    if (((plVar7 != (long *)0x0) &&
        (plVar8 = (long *)plVar7[0xd], plVar9 = plVar7, plVar8 != (long *)0x0)) &&
       (plVar7 = (long *)plVar8[0xd], plVar9 = plVar8, plVar7 != (long *)0x0)) {
      plVar9 = plVar7;
      for (plVar7 = (long *)plVar7[0xd]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0xd]) {
        plVar9 = plVar7;
      }
    }
    plVar7 = (long *)(**(code **)plVar9[5])(plVar9 + 5);
    FUN_00e2e204();
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_047d9028) {
        if ((char)plVar9[0x10] != '\0') {
          (**(code **)(*plVar9 + 0xe8))(plVar9,0);
          for (plVar7 = (long *)plVar9[0xd]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0xd]) {
            (**(code **)(*plVar7 + 0xf0))(plVar7,0,plVar9);
          }
          *(undefined1 *)(plVar9 + 0x10) = 0;
        }
        break;
      }
    }
    plVar7 = (long *)plVar9[0xf];
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[6];
      if (*(long *)(lVar5 + 0x10) == 0) {
LAB_01733f18:
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
        uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
        *(undefined8 *)(lVar5 + 8) = uVar6;
        *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01733f60;
      lVar5 = plVar7[6];
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
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar2 == 0) goto LAB_01733f38;
      plVar9 = (long *)plVar9[0xf];
      if (plVar9 == (long *)0x0) {
        FUN_00fe6bf4(0);
      }
      else {
        lVar5 = plVar9[6];
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_01733f18;
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
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          *(undefined8 *)(lVar5 + 8) = uVar6;
          *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_01733f60:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        FUN_00fe6bf4(plVar9);
        lVar5 = plVar9[6];
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
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar2 == 0) {
LAB_01733f38:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*param_1 + 0xe8))(param_1,1);
    for (plVar9 = (long *)param_1[0xd]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0xd]) {
      (**(code **)(*plVar9 + 0xf0))(plVar9,1,param_1);
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  param_1[0x1b] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c));
  return;
}


