/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e9360; name: FUN_019e9360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019e9360(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *local_40;
  undefined1 auStack_38 [8];
  
  puVar7 = PTR_DAT_047d3a88;
  plVar8 = (long *)FUN_00f124d8(auStack_38,*(undefined8 *)(*(long *)PTR_DAT_047d3a88 + 8),
                                PTR_DAT_047dadc0);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_019e94f8;
  }
  plVar1 = DAT_0483b3a8;
  DAT_0483b3a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 5;
    do {
      lVar6 = *plVar2;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_019e9498;
  }
  DAT_0483b3a8 = plVar8;
  uVar9 = FUN_019e959c(plVar8,*(undefined8 *)(*(long *)puVar7 + 8),param_1);
  plVar8 = DAT_0483b3a8;
  DAT_0483b3b1 = (byte)((ulong)uVar9 >> 0x20) & 1;
  local_40 = DAT_0483b3a8;
  if (DAT_0483b3a8 == (long *)0x0) {
    _DAT_0483b3b4 = FUN_019e9520(&local_40);
  }
  else {
    plVar1 = DAT_0483b3a8 + 5;
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
LAB_019e94f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    _DAT_0483b3b4 = FUN_019e9520(&local_40);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if ((int)lVar6 == 0) {
LAB_019e9498:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  DAT_0483b3b0 = (int)uVar9 == 0;
  return;
}


