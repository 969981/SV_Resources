/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0132788c; name: FUN_0132788c
 */


void FUN_0132788c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)&DAT_045d2040;
  param_1[4] = (long)&PTR_LAB_045d2080;
  plVar7 = (long *)param_1[8];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 7);
    plVar7 = (long *)param_1[8];
    param_1[7] = 0;
    param_1[8] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_013279b0;
    }
    param_1[9] = -1;
    param_1[10] = 0;
  }
  FUN_01327a58(param_1 + 0xb);
  plVar7 = (long *)param_1[8];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 7);
    plVar7 = (long *)param_1[8];
    param_1[7] = 0;
    param_1[8] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_013279b0;
    }
    plVar7 = (long *)param_1[8];
    param_1[9] = -1;
    param_1[10] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_013279b0;
    }
  }
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_013279b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047dcf30 + 0x50;
  *param_1 = (long)(PTR_DAT_047dcf30 + 0x10);
  param_1[4] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x0132791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xd0))();
  return;
}


