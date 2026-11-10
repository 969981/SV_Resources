/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4aec0; name: FUN_00f4aec0
 */


void FUN_00f4aec0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  
  switch(*(undefined4 *)(param_1 + 0xc4)) {
  case 0:
    FUN_00f4c600(param_1);
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_00f4aef0_caseD_2;
  case 3:
    goto switchD_00f4aef0_caseD_3;
  case 4:
    goto switchD_00f4aef0_caseD_4;
  default:
    goto switchD_00f4aef0_default;
  }
  uVar6 = FUN_00f4c284(param_1);
  if ((uVar6 & 1) != 0) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
switchD_00f4aef0_caseD_2:
    uVar6 = FUN_00f4c600(param_1);
    if ((uVar6 & 1) != 0) {
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
switchD_00f4aef0_caseD_3:
      plVar5 = (long *)FUN_00f4b088(param_1);
      lVar7 = *plVar5;
      if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
        plVar5 = (long *)0x0;
      }
      else {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00f4b05c;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f4b05c:
            bVar4 = false;
          }
          if (bVar4) {
            plVar5 = (long *)0x0;
            if (*(long *)(lVar7 + 0x10) != 0) {
              plVar5 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
            }
            break;
          }
          plVar5 = (long *)0x0;
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      if ((char)plVar5[0x2f] == '\0') {
        if (plVar5 != (long *)0x0) {
          lVar7 = plVar5[0x13];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f4b024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x50))();
            return;
          }
          if (sVar8 == 0) {
LAB_00f4afd4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      else {
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        if (plVar5 != (long *)0x0) {
          lVar7 = plVar5[0x13];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar5 + 0x50))();
          }
          else if (sVar8 == 0) goto LAB_00f4afd4;
        }
switchD_00f4aef0_caseD_4:
        uVar6 = FUN_00f4f38c(param_1);
        if ((uVar6 & 1) != 0) {
          *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
        }
      }
    }
  }
switchD_00f4aef0_default:
  return;
}


