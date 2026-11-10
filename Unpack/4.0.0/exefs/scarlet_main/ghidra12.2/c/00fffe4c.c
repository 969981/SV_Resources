/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fffe4c; name: FUN_00fffe4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fffe4c(undefined8 param_1,long *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *local_38;
  
  lVar7 = *param_2;
  *(uint *)(lVar7 + 0x158) = *(uint *)(lVar7 + 0x158) | 3;
  FUN_00ca7394(lVar7 + 0x108,1);
  FUN_0100012c(param_1,*(undefined8 *)(lVar7 + 0x108),param_3);
  FUN_010002f0(&local_38,param_1,param_3);
  lVar7 = *param_2;
  plVar6 = *(long **)(lVar7 + 0x148);
  if (plVar6 != local_38) {
    *(uint *)(lVar7 + 0x158) = *(uint *)(lVar7 + 0x158) | 4;
    if (local_38 != (long *)0x0) {
      plVar6 = local_38 + 5;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_010000dc;
      plVar6 = *(long **)(lVar7 + 0x148);
    }
    *(long **)(lVar7 + 0x148) = local_38;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
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
      else if ((int)lVar5 == 0) goto LAB_010000b4;
    }
    *(undefined4 *)(lVar7 + 0x150) = 0x10;
    lVar7 = *param_2;
  }
  plVar6 = (long *)FUN_00ebd9ec(lVar7);
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    if (_DAT_00000150 != param_3 * param_3 * 6) {
      _DAT_00000150 = param_3 * param_3 * 6;
      DAT_0000019a = 1;
    }
    if (_DAT_00000158 != 0) {
      _DAT_00000158 = 0;
      DAT_0000019a = 1;
    }
    if (_DAT_00000154 != 0) {
      _DAT_00000154 = 0;
      DAT_0000019a = 1;
    }
  }
  else {
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
LAB_010000dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if ((int)plVar6[0x2a] != param_3 * param_3 * 6) {
      *(int *)(plVar6 + 0x2a) = param_3 * param_3 * 6;
      *(undefined1 *)((long)plVar6 + 0x19a) = 1;
    }
    if ((int)plVar6[0x2b] != 0) {
      *(undefined4 *)(plVar6 + 0x2b) = 0;
      *(undefined1 *)((long)plVar6 + 0x19a) = 1;
    }
    if (*(int *)((long)plVar6 + 0x154) != 0) {
      *(undefined4 *)((long)plVar6 + 0x154) = 0;
      *(undefined1 *)((long)plVar6 + 0x19a) = 1;
    }
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
    else if ((int)lVar7 == 0) goto LAB_010000b4;
  }
  if (local_38 != (long *)0x0) {
    plVar6 = local_38 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_010000b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


