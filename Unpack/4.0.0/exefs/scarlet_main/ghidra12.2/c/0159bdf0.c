/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159bdf0; name: FUN_0159bdf0
 */


undefined8 FUN_0159bdf0(long param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((*(long *)(param_1 + 0x18) == 0) || (**(char **)(*(long *)(param_1 + 0x18) + 0x38) == '\0')) {
    return 0;
  }
  if (*(char *)(param_1 + 0x25) != '\0') {
    if (5 < *(uint *)(param_1 + 0x28)) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x28) == 3) &&
       (plVar7 = *(long **)(param_1 + 0x58), plVar7 != (long *)0x0)) {
      if ((int)plVar7[7] == 0) {
        if (plVar7[6] == param_1) {
          plVar7[6] = 0;
          plVar7 = *(long **)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x58) = 0;
          if (plVar7 == (long *)0x0) goto LAB_0159be28;
        }
        else {
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
        plVar1 = plVar7 + 5;
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
      }
      else {
        if (*(char *)(param_1 + 0x12) == '\0') {
          FUN_0159dda4();
          return 0;
        }
        FUN_00d9dd8c(*param_2,plVar7,4);
        plVar7 = *(long **)(param_1 + 0x58);
        if (plVar7 == (long *)0x0) goto LAB_0159be28;
        if (plVar7[6] == param_1) {
          plVar7[6] = 0;
          plVar7 = *(long **)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x58) = 0;
          if (plVar7 == (long *)0x0) goto LAB_0159be28;
        }
        else {
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
        plVar1 = plVar7 + 5;
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
      }
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
LAB_0159be28:
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (*(int *)(param_1 + 0x28) - 1U < 2) {
    param_2 = (undefined4 *)(param_1 + 0x30);
  }
  uVar6 = FUN_0159c22c(param_1,param_2,param_3 & 1);
  return uVar6;
}


