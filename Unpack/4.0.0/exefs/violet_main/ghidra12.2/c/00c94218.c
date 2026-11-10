/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c94218; name: FUN_00c94218
 */


undefined1 FUN_00c94218(long param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long *local_40;
  long *local_38;
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  if (local_38 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_38[9];
  }
  plVar5 = (long *)(lVar9 + 0x110);
  lVar6 = *plVar5;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar8 = true;
LAB_00c94274:
    plVar5 = (long *)FUN_00c943e0(*(undefined8 *)(lVar9 + 0x128),*(undefined8 *)(lVar9 + 0x130));
    if ((*(long **)(lVar9 + 0x130) == plVar5) || (*plVar5 == 0)) {
      plVar5 = (long *)FUN_00c943e0(*(undefined8 *)(lVar9 + 0x160),*(undefined8 *)(lVar9 + 0x168));
      if (*(long **)(lVar9 + 0x168) == plVar5) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)0x0;
        if (*plVar5 != 0) {
          plVar7 = (long *)(*plVar5 + -0x20);
        }
      }
    }
    else {
      plVar7 = (long *)(*plVar5 + -0x20);
    }
    if (!bVar8) {
      *(undefined8 *)(lVar9 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x118));
    }
    if (local_38 != (long *)0x0) {
      plVar5 = local_38 + 5;
      do {
        lVar9 = *plVar5;
        iVar2 = (int)lVar9 + -1;
        cVar1 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar8) {
          *(int *)plVar5 = iVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x60))();
    }
    if (plVar7 == (long *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*plVar7 + 0x130))(plVar7);
    }
    return uVar3;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar8) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00c94270;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x118));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar8) {
            *plVar5 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00c94270;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar8) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00c94270:
  bVar8 = false;
  goto LAB_00c94274;
}


