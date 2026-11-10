/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea24c8; name: FUN_01ea24c8
 */


void FUN_01ea24c8(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30 [2];
  
  local_50 = &DAT_b1686d3e6def5684;
  pcStack_48 = "playables";
  local_40 = 9;
  local_38 = (long *)0x0;
  FUN_00e25df8(local_30,&local_50);
  plVar9 = (long *)0x0;
  if (local_30[0] != (long *)0x0) {
    if (*(short *)((long)local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_30[0] + 0x1a);
      sVar8 = *(short *)((long)local_30[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar8) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01ea26ec;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01ea26ec:
          bVar5 = false;
        }
        if (bVar5) {
          plVar9 = (long *)0x0;
          if (local_30[0][2] != 0) {
            plVar9 = (long *)(local_30[0][2] + -0x28);
          }
          goto LAB_01ea2714;
        }
        sVar8 = sVar3;
      } while (sVar3 != 0);
    }
    plVar9 = (long *)0x0;
LAB_01ea2714:
    plVar2 = local_30[0] + 3;
    do {
      sVar8 = (short)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(short *)plVar2 = sVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar8 == 1) {
      FUN_0116e168();
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
    local_50 = (undefined1 *)0x47088aab577207bb;
    pcStack_48 = "obon_floater";
    local_40 = 0xc;
    local_38 = (long *)0x0;
    FUN_00cb7f10(local_30,plVar9 + 8,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((local_30[0] != (long *)0x0) && (FUN_01c79d78(local_30), local_30[0] != (long *)0x0)) {
      lVar7 = local_30[0][6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_30[0] + 0x50))();
      }
      else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar9 + 0x60))(plVar9);
  }
  FUN_01ea2764();
  FUN_01ea2784();
  FUN_01ea27fc();
  FUN_01ea2874();
  FUN_01ea28ec();
  FUN_01ea2964();
  FUN_01ea29dc();
  FUN_01ea2a54();
  FUN_01ea1750();
  FUN_01c64a08();
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar7 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar7;
  if (lVar7 != 0) {
    FUN_01e9418c(lVar7,param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}


