/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01525790; name: FUN_01525790
 */


void FUN_01525790(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  
  cVar2 = *param_1;
  lVar5 = (long)param_3 >> 1;
  if (cVar2 != '\x03') {
    if (cVar2 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar4 == 0) {
        return;
      }
      plVar6 = (long *)(lVar4 + lVar5 + -0x28);
    }
    else {
      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
        return;
      }
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      plVar6 = (long *)(*(long *)(param_1 + 8) + lVar5);
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar6);
    }
LAB_015257e8:
                    /* WARNING: Could not recover jumptable at 0x015257f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar6);
    return;
  }
  lVar4 = *(long *)(param_1 + 8);
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar8 = *(short *)(lVar4 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01525848;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01525848:
        bVar7 = false;
      }
      if (bVar7) {
        lVar4 = *(long *)(lVar4 + 0x10);
        plVar6 = (long *)(lVar4 + -0x28);
        if (lVar4 == 0) {
          return;
        }
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar6 + lVar5));
        }
        (*UNRECOVERED_JUMPTABLE)();
        lVar5 = *(long *)(lVar4 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar8 != 1) {
          if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        *(undefined8 *)(lVar5 + 0x10) = 0;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x50);
        goto LAB_015257e8;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


