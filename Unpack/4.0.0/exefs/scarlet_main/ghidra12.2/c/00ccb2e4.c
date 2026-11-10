/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccb2e4; name: FUN_00ccb2e4
 */


void FUN_00ccb2e4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_54;
  ulong local_50;
  char *local_48;
  long local_40;
  long *local_38;
  long *local_18;
  
  FUN_00ccb51c(param_1[6]);
  FUN_00ccb730(param_1,param_2);
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_00ccbec8(param_1,param_2);
  }
  FUN_00ccbc30(param_1[0xe],param_1 + 0x19);
  local_50 = 0x408068162787a77;
  local_48 = "Final";
  local_40 = 5;
  local_38 = (long *)0x0;
  (**(code **)(*param_1 + 0x28))(&local_18,param_1,&local_50);
  plVar6 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00ccb4cc;
  }
  plVar6 = local_18;
  local_18 = (long *)0x0;
  param_1[0x17] = (long)plVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38);
    plVar6 = (long *)param_1[0x17];
  }
  FUN_01464e08(plVar6,0x7ffffffe);
  plVar6 = *(long **)(param_1[0x17] + 0x58);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_50 = local_50 & 0xffffffffffffff00;
  FUN_00d8219c(plVar6,0,param_1 + 0x16,0xffffffff,&local_50);
  local_54 = 0x10;
  local_18 = param_1;
  FUN_00ccb840(&local_50,param_1[1],&local_18,&local_54);
  uVar5 = local_50;
  local_50 = 0;
  lVar7 = param_1[0x12];
  param_1[0x12] = uVar5;
  if (lVar7 != 0) {
    FUN_02708f6c(param_1 + 0x13);
  }
  param_1[0x14] = local_40;
  param_1[0x15] = (long)local_38;
  param_1[0x13] = (long)local_48;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    else if ((int)lVar7 == 0) {
LAB_00ccb4cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


