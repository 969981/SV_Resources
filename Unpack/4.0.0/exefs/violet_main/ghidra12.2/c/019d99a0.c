/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d99a0; name: FUN_019d99a0
 */


void FUN_019d99a0(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  if (*param_1 < 4) {
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
        }
                    /* WARNING: Could not recover jumptable at 0x019d99f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar6,*param_4);
        return;
      }
      break;
    case 2:
      FUN_01dac528(param_1 + 8,UNRECOVERED_JUMPTABLE);
      return;
    case 3:
      lVar5 = *(long *)(param_1 + 8);
      if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar8 = *(short *)(lVar5 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar8) {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_019d9a5c;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_019d9a5c:
            bVar7 = false;
          }
          if (bVar7) {
            lVar5 = *(long *)(lVar5 + 0x10);
            plVar6 = (long *)(lVar5 + -0x28);
            if (lVar5 == 0) {
              return;
            }
            plVar2 = (long *)((long)plVar6 + ((long)param_3 >> 1));
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
            }
            (*UNRECOVERED_JUMPTABLE)(plVar2,*param_4);
            lVar5 = *(long *)(lVar5 + 8);
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar8 = *psVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x019d9b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0x50))(plVar6);
              return;
            }
            if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            return;
          }
          sVar8 = sVar3;
        } while (sVar3 != 0);
      }
      return;
    }
  }
  return;
}


