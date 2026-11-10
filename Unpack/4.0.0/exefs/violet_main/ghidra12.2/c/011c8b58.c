/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c8b58; name: FUN_011c8b58
 */


ulong FUN_011c8b58(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  cVar2 = *param_1;
  lVar6 = (long)param_3 >> 1;
  if (cVar2 == '\x03') {
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar9 = *(short *)(lVar5 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_011c8c14;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_011c8c14:
          bVar8 = false;
        }
        if (bVar8) {
          lVar5 = *(long *)(lVar5 + 0x10);
          plVar7 = (long *)(lVar5 + -0x28);
          if (lVar5 == 0) {
            return 0;
          }
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE =
                 *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar7 + lVar6));
          }
          uVar4 = (*UNRECOVERED_JUMPTABLE)();
          lVar6 = *(long *)(lVar5 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar7 + 0x50))(plVar7);
            return uVar4 & 0xffffffff;
          }
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar4;
        }
        sVar9 = sVar3;
        if (sVar3 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar5 != 0)) {
      plVar7 = (long *)(lVar5 + lVar6 + -0x28);
      goto joined_r0x011c8bd8;
    }
  }
  else if (((cVar2 == '\x01') || (cVar2 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    plVar7 = (long *)(*(long *)(param_1 + 8) + lVar6);
joined_r0x011c8bd8:
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x011c8bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  return 0;
}


