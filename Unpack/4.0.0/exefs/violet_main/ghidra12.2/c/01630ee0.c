/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01630ee0; name: FUN_01630ee0
 */


void FUN_01630ee0(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined1 *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  short sVar8;
  
  cVar2 = *param_1;
  lVar6 = (long)param_3 >> 1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 == 0)) {
      return;
    }
    plVar4 = (long *)(lVar5 + lVar6 + -0x28);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x01630f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar4,*param_4);
    return;
  }
  if (cVar2 != '\x03') {
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
      return;
    }
    plVar4 = (long *)(*(long *)(param_1 + 8) + lVar6);
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x01630f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar4,*param_4);
    return;
  }
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01630fcc;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01630fcc:
        bVar7 = false;
      }
      if (bVar7) {
        lVar5 = *(long *)(lVar5 + 0x10);
        plVar4 = (long *)(lVar5 + -0x28);
        if (lVar5 == 0) {
          return;
        }
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 + *(long *)((long)plVar4 + lVar6));
        }
        (*UNRECOVERED_JUMPTABLE_00)((long *)((long)plVar4 + lVar6),*param_4);
        lVar6 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01631070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x50))(plVar4);
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
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


