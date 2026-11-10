/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a06238; name: FUN_00a06238
 */


void FUN_00a06238(undefined8 *param_1,byte *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  if (*param_2 < 4) {
    lVar6 = (long)param_4 >> 1;
    switch(*param_2) {
    default:
      if (*(long *)(param_2 + 8) != 0) {
        plVar7 = (long *)(*(long *)(param_2 + 8) + lVar6);
joined_r0x00a062ac:
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar7);
        }
                    /* WARNING: Could not recover jumptable at 0x00a06290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_2 + 8) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar5 != 0)) {
        plVar7 = (long *)(lVar5 + lVar6 + -0x28);
        goto joined_r0x00a062ac;
      }
      break;
    case 3:
      lVar5 = *(long *)(param_2 + 8);
      if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar9 = *(short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar9) {
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00a062f0;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00a062f0:
            bVar8 = false;
          }
          if (bVar8) {
            lVar5 = *(long *)(lVar5 + 0x10);
            plVar7 = (long *)(lVar5 + -0x28);
            if (lVar5 != 0) {
              if ((param_4 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar7 + lVar6));
              }
              (*UNRECOVERED_JUMPTABLE)(param_1);
              lVar6 = *(long *)(lVar5 + 8);
              psVar1 = (short *)(lVar6 + 0x1a);
              do {
                sVar9 = *psVar1;
                cVar3 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar8) {
                  *psVar1 = sVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar9 == 1) {
                *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a063ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar7 + 0x50))(plVar7);
                return;
              }
              if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
              return;
            }
            break;
          }
          sVar9 = sVar2;
        } while (sVar2 != 0);
      }
    }
  }
  uVar4 = FUN_01cf7e20();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar4;
  return;
}


