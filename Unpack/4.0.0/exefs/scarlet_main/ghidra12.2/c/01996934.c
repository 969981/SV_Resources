/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01996934; name: FUN_01996934
 */


void FUN_01996934(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  if (3 < *param_1) {
    return;
  }
  lVar4 = (long)param_3 >> 1;
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(param_1 + 8) + lVar4);
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar5 == 0) {
      return;
    }
    plVar6 = (long *)(lVar5 + lVar4 + -0x28);
    break;
  case 3:
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar8 = *(short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01996a04;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01996a04:
          bVar7 = false;
        }
        if (bVar7) {
          lVar5 = *(long *)(lVar5 + 0x10);
          plVar6 = (long *)(lVar5 + -0x28);
          if (lVar5 == 0) {
            return;
          }
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE =
                 *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar6 + lVar4));
          }
          (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar6 + lVar4),param_4);
          lVar4 = *(long *)(lVar5 + 8);
          psVar1 = (short *)(lVar4 + 0x1a);
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
            *(undefined8 *)(lVar4 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01996aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x50))(plVar6);
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
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x01996984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6,param_4);
  return;
}


