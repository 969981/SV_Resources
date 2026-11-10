/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0167691c; name: FUN_0167691c
 */


void FUN_0167691c(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *local_50;
  long *local_48;
  undefined1 auStack_28 [8];
  
  FUN_00c9e664(&local_50,param_1 + 0xe8);
  if (local_48 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = local_48[9];
  }
  plVar4 = (long *)(lVar8 + 0x110);
  lVar7 = *plVar4;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar7) {
    bVar6 = true;
LAB_01676980:
    plVar4 = (long *)FUN_01676ae0(*(undefined8 *)(lVar8 + 0x128),*(undefined8 *)(lVar8 + 0x130));
    if ((*(long **)(lVar8 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_01676ae0(*(undefined8 *)(lVar8 + 0x160),*(undefined8 *)(lVar8 + 0x168));
      if (*(long **)(lVar8 + 0x168) == plVar4) {
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
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
    *(long *)(param_1 + 0x120) = lVar3;
    lVar8 = 0;
    if (local_48 != (long *)0x0) {
      lVar8 = local_48[9];
    }
    uVar5 = FUN_0144a660(lVar8 + 0x108,auStack_28);
    *(undefined8 *)(param_1 + 0x128) = uVar5;
    if (local_48 != (long *)0x0) {
      plVar4 = local_48 + 5;
      do {
        lVar8 = *plVar4;
        iVar2 = (int)lVar8 + -1;
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
      else if ((int)lVar8 == 0) {
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
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0167697c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0167697c;
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
LAB_0167697c:
  bVar6 = false;
  goto LAB_01676980;
}


