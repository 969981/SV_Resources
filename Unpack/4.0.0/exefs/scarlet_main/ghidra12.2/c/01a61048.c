/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a61048; name: FUN_01a61048
 */


void FUN_01a61048(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

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
  long *local_30;
  long local_28;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a610a4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a610a4:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar9 = (long *)*param_5;
          local_28 = *(long *)(lVar7 + 0x10) + -0x28;
          *param_5 = 0;
          local_30 = plVar9;
          FUN_01b325d8(param_1,&local_28,param_3,param_4,&local_30);
          if (plVar9 != (long *)0x0) {
            plVar2 = plVar9 + 5;
            do {
              lVar7 = *plVar2;
              iVar6 = (int)lVar7 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          FUN_01b326bc(&local_28);
          return;
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  local_28 = 0;
  FUN_01b326bc(&local_28);
  *param_1 = 0;
  return;
}


