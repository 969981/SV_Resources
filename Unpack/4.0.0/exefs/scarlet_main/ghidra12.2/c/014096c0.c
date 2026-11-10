/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014096c0; name: FUN_014096c0
 */


void FUN_014096c0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  FUN_01409850();
  *param_1 = &PTR_LAB_0455fea8;
  param_1[4] = &PTR_LAB_0455ff88;
  param_1[5] = &DAT_0455ffd8;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  lVar7 = FUN_00f124d8(auStack_40,param_2,PTR_DAT_047dadc0);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_01409828;
  }
  plVar9 = param_1 + 0x23;
  plVar8 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar6 = *plVar2;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_014097e0;
  }
  *plVar9 = lVar7;
  lVar7 = FUN_00f124d8(auStack_38,param_2,PTR_DAT_047dadc0);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_01409828:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar6 = *plVar8;
      iVar3 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_014097e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x24] = lVar7;
  return;
}


