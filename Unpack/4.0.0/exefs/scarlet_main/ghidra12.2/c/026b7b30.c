/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b7b30; name: FUN_026b7b30
 */


void FUN_026b7b30(byte *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  if (*param_1 < 4) {
    lVar5 = (long)param_3 >> 1;
    switch(*param_1) {
    default:
      if (*(long *)(param_1 + 8) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 8) + lVar5);
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x026b7b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar4,*param_4);
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 8) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
        return;
      }
      plVar4 = (long *)(lVar6 + lVar5 + -0x28);
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x026b7bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar4,*param_4);
      return;
    case 3:
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_026b7c20;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_026b7c20:
            bVar7 = false;
          }
          if (bVar7) {
            lVar6 = *(long *)(lVar6 + 0x10);
            if (lVar6 == 0) {
              return;
            }
            plVar4 = (long *)(lVar6 + -0x28 + lVar5);
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar4);
            }
            (*UNRECOVERED_JUMPTABLE_00)(plVar4,*param_4);
            lVar5 = *(long *)(lVar6 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x026b7ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))();
              return;
            }
            if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
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


