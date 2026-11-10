/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01092790; name: FUN_01092790
 */


void FUN_01092790(long param_1,long *param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  plVar8 = *(long **)(*(long *)(param_1 + 0x130) + 0x70);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_01092a24;
  }
  local_48 = *(long **)(*(long *)(*param_2 + 0x130) + 0x70);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
LAB_01092a24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (param_3 < 9) {
    uVar7 = *(undefined4 *)(&DAT_03d6256c + (long)(int)param_3 * 4);
  }
  else {
    uVar7 = 0;
  }
  FUN_01092b98(plVar8,&local_48,uVar7);
  if ((param_4 & 1) != 0) {
    if ((int)param_3 < 5) {
      if (param_3 == 4) goto LAB_010928b8;
      if (local_38 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = local_38[9];
      }
      FUN_00c9e664(&local_58,*param_2 + 0xe8);
      local_60 = 0;
      if (local_50 != (long *)0x0) {
        local_60 = local_50[9];
      }
      FUN_01092a4c(lVar6,&local_60);
      if (local_50 != (long *)0x0) {
        plVar1 = local_50 + 5;
        do {
          iVar5 = (int)*plVar1;
          iVar4 = iVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto joined_r0x010929a4;
      }
    }
    else {
      FUN_00c9e664(&local_58,*param_2 + 0xe8);
      if (local_50 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = local_50[9];
      }
      local_60 = 0;
      if (local_38 != (long *)0x0) {
        local_60 = local_38[9];
      }
      FUN_01092a4c(lVar6,&local_60);
      if (local_50 != (long *)0x0) {
        plVar1 = local_50 + 5;
        do {
          iVar5 = (int)*plVar1;
          iVar4 = iVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
joined_r0x010929a4:
        if (iVar4 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        else if (iVar5 == 0) goto LAB_010929fc;
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x60))();
    }
  }
LAB_010928b8:
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
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
    else if ((int)lVar6 == 0) goto LAB_010929fc;
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar6 == 0) goto LAB_010929fc;
  }
  if (local_38 != (long *)0x0) {
    plVar8 = local_38 + 5;
    do {
      lVar6 = *plVar8;
      iVar5 = (int)lVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_010929fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
  }
  return;
}


