/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026c7fc0; name: FUN_026c7fc0
 */


void FUN_026c7fc0(undefined8 *param_1,byte *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  if (*param_2 < 4) {
    lVar4 = (long)param_4 >> 1;
    switch(*param_2) {
    case 0:
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar4));
        }
                    /* WARNING: Could not recover jumptable at 0x026c7ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      break;
    case 1:
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar4));
        }
                    /* WARNING: Could not recover jumptable at 0x026c8018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      break;
    case 2:
      if ((*(long *)(param_2 + 8) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar5 == 0)) {
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = &DAT_cbf29ce484222645;
        param_1[1] = &DAT_03c886bc;
        return;
      }
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar5 + lVar4 + -0x28))
        ;
      }
                    /* WARNING: Could not recover jumptable at 0x026c8074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    case 3:
      lVar5 = *(long *)(param_2 + 8);
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
            if (cVar3 != '\0') goto LAB_026c8110;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_026c8110:
            bVar7 = false;
          }
          if (bVar7) {
            lVar5 = *(long *)(lVar5 + 0x10);
            plVar6 = (long *)(lVar5 + -0x28);
            if (lVar5 != 0) {
              if ((param_4 & 1) != 0) {
                UNRECOVERED_JUMPTABLE =
                     *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar6 + lVar4));
              }
              (*UNRECOVERED_JUMPTABLE)();
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
                    /* WARNING: Could not recover jumptable at 0x026c81b0. Too many branches */
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
            break;
          }
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03c886bc;
      return;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03c886bc;
  return;
}


