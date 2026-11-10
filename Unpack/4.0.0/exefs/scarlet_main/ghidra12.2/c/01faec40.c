/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01faec40; name: FUN_01faec40
 */


int FUN_01faec40(long *param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar13 = *param_1;
  plVar7 = (long *)(lVar13 + 0x110);
  lVar11 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar11) {
    lVar6 = nn::os::GetCurrentThread();
LAB_01faec74:
    if (*plVar7 == 0) goto code_r0x01faec7c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x118));
          while (*plVar7 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01faec84;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01faec84:
    iVar12 = 0;
    goto LAB_01faec88;
  }
  iVar12 = 1;
LAB_01faec88:
  plVar7 = (long *)FUN_012a1340(*(undefined8 *)(lVar13 + 0x128),*(undefined8 *)(lVar13 + 0x130));
  if ((*(long **)(lVar13 + 0x130) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_012a1340(*(undefined8 *)(lVar13 + 0x160),*(undefined8 *)(lVar13 + 0x168));
    if (*(long **)(lVar13 + 0x168) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  if (iVar12 == 0) {
    *(undefined8 *)(lVar13 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x118));
  }
  if (lVar6 != 0) {
    local_50 = &DAT_afc4d6c05abef19e;
    pcStack_48 = "default";
    local_40 = 7;
    local_38 = (long *)0x0;
    puVar8 = (undefined8 *)FUN_00cb7028(lVar6,&local_50);
    plVar7 = (long *)*puVar8;
    if (plVar7 != (long *)0x0) {
      plVar9 = plVar7 + 5;
      do {
        lVar6 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) {
        pcVar10 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        goto LAB_01faeecc;
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    if ((plVar7[0x22] == 0) || (plVar9 = *(long **)(plVar7[0x22] + 0x70), plVar9 == (long *)0x0)) {
      bVar4 = true;
    }
    else {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) {
        pcVar10 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
LAB_01faeecc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",pcVar10,0x53,
                   "Reference counter overflows.");
      }
      iVar12 = (int)(short)((short)((uint)((int)plVar9[0x4a] - (int)plVar9[0x49]) >> 4) * -0x5555);
      do {
        iVar5 = (int)*plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if (iVar5 == 0) goto LAB_01faee84;
      bVar4 = false;
    }
    plVar9 = plVar7 + 5;
    do {
      lVar6 = *plVar9;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar6 == 0) {
LAB_01faee84:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (!bVar4) {
      return iVar12;
    }
  }
  return 0;
code_r0x01faec7c:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar4) {
    *plVar7 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01faec84;
  goto LAB_01faec74;
}


