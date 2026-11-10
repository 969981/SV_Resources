/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016beb18; name: FUN_016beb18
 */


void FUN_016beb18(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long *local_48;
  
  plVar1 = (long *)(param_2 + 0x230);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_2 + 0x238) == 0) {
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_2 + 0x238) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_016beb5c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x240));
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0x238) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x240));
        while (*plVar1 == 0 && *(long *)(param_2 + 0x238) == 0) {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_2 + 0x238) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_016beb5c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_2 + 0x238) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_016beb5c:
  lVar8 = FUN_016bed44(param_2 + 0xd0,param_3);
  if (lVar8 == 0) {
    FUN_016bee54(&local_48,param_3);
    lVar8 = FUN_016bf298(*(undefined8 *)(param_2 + 8),&local_48);
    if (lVar8 != 0) {
      piVar2 = (int *)(lVar8 + 0x28);
      do {
        iVar5 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = iVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar5 == -1) goto LAB_016becb0;
    }
    uVar9 = FUN_016bf99c(param_2 + 0xd0,param_3);
    FUN_016bef00(uVar9,lVar8);
    *param_1 = lVar8;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x18);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      piVar2 = (int *)(lVar8 + 0x28);
      do {
        iVar5 = *piVar2;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = iVar5 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar5 == -1) {
LAB_016becb0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
  }
  do {
    lVar8 = *plVar1;
    lVar6 = *(long *)(param_2 + 0x238);
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x238) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_2 + 0x238);
    if (lVar3 != lVar8 || lVar4 != lVar6) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_016bec20;
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_2 + 0x234) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar10 = true;
LAB_016bec20:
  if (!bVar10) {
    do {
      lVar8 = *plVar1;
      lVar6 = *(long *)(param_2 + 0x238);
      if (lVar8 != lVar3 || lVar6 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x016bed04;
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_2 + 0x234) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar10 = true;
joined_r0x016bed04:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_2 + 0x238);
        if (lVar3 != lVar8 || lVar4 != lVar6) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar8 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x016bed04;
        }
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_2 + 0x234) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar10 = true;
      lVar8 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x016bed04;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x240));
  return;
}


