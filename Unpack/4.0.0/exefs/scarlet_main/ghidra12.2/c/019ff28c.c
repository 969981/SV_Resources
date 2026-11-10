/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ff28c; name: FUN_019ff28c
 */


void FUN_019ff28c(long param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long *local_50;
  long *local_48;
  
  *(undefined2 *)(param_1 + 0x132) = param_2;
  FUN_019ff674(*(undefined8 *)(param_1 + 0x128));
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  if (local_50 != (long *)0x0) {
    if (local_48 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = local_48[9];
    }
    plVar4 = (long *)(lVar7 + 0x110);
    lVar5 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
LAB_019ff2f0:
      if (*plVar4 == 0) goto code_r0x019ff2f8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar6) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_019ff300;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_019ff300:
      bVar6 = false;
      goto LAB_019ff304;
    }
    bVar6 = true;
LAB_019ff304:
    plVar4 = (long *)FUN_019ff560(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_019ff560(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
      if (*(long **)(lVar7 + 0x168) == plVar4) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = *plVar4 + -0x20;
        }
      }
    }
    else {
      lVar3 = *plVar4 + -0x20;
    }
    if (!bVar6) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
    if (lVar3 != 0) {
      FUN_019ff984(lVar3);
    }
    if (local_48 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = local_48[9];
    }
    plVar4 = (long *)(lVar7 + 0x110);
    lVar5 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar5) {
      lVar3 = nn::os::GetCurrentThread();
LAB_019ff378:
      if (*plVar4 == 0) goto code_r0x019ff380;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar6) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_019ff388;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_019ff388:
      bVar6 = false;
      goto LAB_019ff38c;
    }
    bVar6 = true;
LAB_019ff38c:
    plVar4 = (long *)FUN_00e03310(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_00e03310(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
      if (*(long **)(lVar7 + 0x168) == plVar4) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = *plVar4 + -0x20;
        }
      }
    }
    else {
      lVar3 = *plVar4 + -0x20;
    }
    if (!bVar6) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
    if (lVar3 != 0) {
      FUN_011f8338(param_1,*(undefined2 *)(param_1 + 0x132));
    }
  }
  if (local_48 != (long *)0x0) {
    plVar4 = local_48 + 5;
    do {
      lVar7 = *plVar4;
      iVar2 = (int)lVar7 + -1;
      cVar1 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  return;
code_r0x019ff2f8:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar6) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_019ff300;
  goto LAB_019ff2f0;
code_r0x019ff380:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar6) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_019ff388;
  goto LAB_019ff378;
}


