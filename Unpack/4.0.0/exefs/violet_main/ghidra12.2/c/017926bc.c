/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017926bc; name: FUN_017926bc
 */


undefined1  [16] FUN_017926bc(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined4 uVar10;
  undefined8 extraout_var_00;
  undefined1 auVar9 [16];
  undefined8 uVar11;
  long *local_40;
  long *local_38;
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  if (local_38 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = local_38[9];
  }
  plVar4 = (long *)(lVar7 + 0x110);
  lVar5 = *plVar4;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar6 = true;
LAB_01792718:
    plVar4 = (long *)FUN_00c943e0(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_00c943e0(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
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
    if (local_38 != (long *)0x0) {
      plVar4 = local_38 + 5;
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
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
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
    if (lVar3 == 0) {
      uVar8 = 0;
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      FUN_0179286c(0x3f800000,lVar3);
      uVar8 = extraout_s0;
      uVar10 = extraout_var;
      uVar11 = extraout_var_00;
    }
    auVar9._4_4_ = uVar10;
    auVar9._0_4_ = uVar8;
    auVar9._8_8_ = uVar11;
    return auVar9;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01792714;
  }
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
          if (cVar1 == '\0') goto LAB_01792714;
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
LAB_01792714:
  bVar6 = false;
  goto LAB_01792718;
}


