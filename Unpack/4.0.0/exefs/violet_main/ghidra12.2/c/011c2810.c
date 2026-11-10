/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c2810; name: FUN_011c2810
 */


undefined8 FUN_011c2810(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  undefined1 auStack_38 [8];
  
  plVar11 = param_1 + 0xf9;
  lVar10 = *plVar11;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar10) {
    lVar6 = nn::os::GetCurrentThread();
LAB_011c284c:
    if (*plVar11 == 0) goto code_r0x011c2854;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xfa));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xfa));
          while (*plVar11 == 0) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar12) {
              *plVar11 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_011c285c;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar12) {
        *plVar11 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_011c285c:
    bVar12 = false;
    goto LAB_011c2860;
  }
  plVar11 = (long *)0x0;
  bVar12 = true;
LAB_011c2860:
  if (*(char *)((long)param_1 + 0x7c7) == '\0') {
    lVar6 = param_1[0xfc];
    if (lVar6 == 0) {
      uVar7 = (**(code **)(*param_1 + 0x138))(param_1);
      lVar6 = FUN_011c2a70(auStack_38,uVar7);
      if (lVar6 != 0) {
        piVar1 = (int *)(lVar6 + 0x28);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar8 = (long *)param_1[0xfc];
      param_1[0xfc] = 0;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 5;
        do {
          lVar10 = *plVar2;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      param_1[0xfc] = lVar6;
    }
    plVar8 = (long *)(lVar6 + 0x30);
    lVar9 = *plVar8;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar9) {
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar8 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_011c28d0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x38));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x38));
            while (*plVar8 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_011c28d0;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_011c28d0:
      uVar7 = FUN_011c2f10(lVar6,param_2);
      *(undefined8 *)(lVar6 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x38));
      goto LAB_011c28f0;
    }
    uVar7 = FUN_011c4290(lVar6,param_2);
  }
  else {
    FUN_0117beec(param_2,param_1);
    uVar7 = 0xffffffffffffffff;
  }
LAB_011c28f0:
  if (!bVar12) {
    *plVar11 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar11 + 1));
  }
  return uVar7;
code_r0x011c2854:
  cVar3 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar12) {
    *plVar11 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_011c285c;
  goto LAB_011c284c;
}


