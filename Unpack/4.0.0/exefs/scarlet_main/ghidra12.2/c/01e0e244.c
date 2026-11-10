/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0e244; name: FUN_01e0e244
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01e0e244(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  undefined1 auVar10 [16];
  long *local_40;
  long *local_38;
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  if (local_38 == (long *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = local_38[9];
  }
  plVar4 = (long *)(lVar8 + 0x110);
  lVar5 = *plVar4;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar7 = true;
LAB_01e0e2a0:
    plVar4 = (long *)FUN_00c943e0(*(undefined8 *)(lVar8 + 0x128),*(undefined8 *)(lVar8 + 0x130));
    if ((*(long **)(lVar8 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_00c943e0(*(undefined8 *)(lVar8 + 0x160),*(undefined8 *)(lVar8 + 0x168));
      if (*(long **)(lVar8 + 0x168) == plVar4) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)0x0;
        if (*plVar4 != 0) {
          plVar6 = (long *)(*plVar4 + -0x20);
        }
      }
    }
    else {
      plVar6 = (long *)(*plVar4 + -0x20);
    }
    if (!bVar7) {
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
    if (local_38 != (long *)0x0) {
      plVar4 = local_38 + 5;
      do {
        lVar8 = *plVar4;
        iVar1 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *(int *)plVar4 = iVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
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
    uVar11 = _UNK_03caa988;
    uVar9 = _DAT_03caa980;
    if ((plVar6 != (long *)0x0) && (cVar2 = (**(code **)(*plVar6 + 0x130))(plVar6), cVar2 != '\x01')
       ) {
      if (cVar2 == '\x02') {
        uVar9 = _DAT_03cab650;
        uVar11 = _UNK_03cab658;
      }
      else if (cVar2 == '\x03') {
        uVar9 = _DAT_03caa8e0;
        uVar11 = _UNK_03caa8e8;
      }
      else {
        uVar9 = _DAT_03cabc20;
        uVar11 = _UNK_03cabc28;
      }
    }
    auVar10._8_8_ = uVar11;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01e0e29c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
        while (*plVar4 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01e0e29c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar7) {
      *plVar4 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01e0e29c:
  bVar7 = false;
  goto LAB_01e0e2a0;
}


