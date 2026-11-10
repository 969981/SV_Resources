/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01920084; name: FUN_01920084
 */


void FUN_01920084(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *local_48;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  uVar6 = FUN_0126a9c0();
  local_24 = 0x10;
  local_48 = (long *)FUN_0152bfac(auStack_28,uVar6,&local_24);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) goto LAB_01920264;
  }
  if (param_2 == (int *)0x0) {
    *param_1 = (long)local_48;
    if (local_48 == (long *)0x0) {
      return;
    }
    plVar1 = local_48 + 5;
    do {
      iVar5 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    FUN_019202d0(local_48,param_2 + 2);
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar8 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar8;
    plVar1 = *(long **)(lVar8 + 0x1c8);
    plVar4 = *(long **)(lVar8 + 0x1c0);
    do {
      if (plVar4 == plVar1) {
        lVar8 = 0;
        break;
      }
      lVar8 = *plVar4;
      uVar7 = FUN_011b8548(lVar8 + 0x28);
      plVar4 = plVar4 + 1;
    } while ((uVar7 & 1) == 0);
    iVar5 = FUN_0192028c(lVar8);
    if (*param_2 != iVar5) {
      FUN_01920294(&local_48,*(undefined1 *)((long)param_2 + 6));
    }
    *param_1 = (long)local_48;
    if (local_48 == (long *)0x0) {
      return;
    }
    plVar1 = local_48 + 5;
    do {
      iVar5 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar5 != -1) {
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar8 = *plVar1;
        iVar5 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
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
    return;
  }
LAB_01920264:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


