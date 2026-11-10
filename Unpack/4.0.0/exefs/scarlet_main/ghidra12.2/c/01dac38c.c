/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dac38c; name: FUN_01dac38c
 */


void FUN_01dac38c(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  if (*param_1 < 4) {
    lVar5 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(*(long *)(param_1 + 8) + lVar5));
        }
                    /* WARNING: Could not recover jumptable at 0x01dac3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,*param_6);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 == 0)) {
        return;
      }
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)(lVar4 + lVar5 + -0x28));
      }
                    /* WARNING: Could not recover jumptable at 0x01dac41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,*param_6);
      return;
    case 3:
      lVar4 = *(long *)(param_1 + 8);
      if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar4 + 0x1a);
        sVar8 = *(short *)(lVar4 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01dac478;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01dac478:
            bVar7 = false;
          }
          if (bVar7) {
            lVar4 = *(long *)(lVar4 + 0x10);
            plVar6 = (long *)(lVar4 + -0x28);
            if (lVar4 == 0) {
              return;
            }
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE_00 =
                   *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)((long)plVar6 + lVar5));
            }
            (*UNRECOVERED_JUMPTABLE_00)(*param_4,*param_5,*param_6);
            lVar5 = *(long *)(lVar4 + 8);
            psVar1 = (short *)(lVar5 + 0x1a);
            do {
              sVar8 = *psVar1;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar8 == 1) {
              *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01dac524. Too many branches */
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
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      return;
    }
  }
  return;
}


