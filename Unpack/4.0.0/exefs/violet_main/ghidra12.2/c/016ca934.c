/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016ca934; name: FUN_016ca934
 */


ulong FUN_016ca934(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

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
  lVar5 = (long)param_3 >> 1;
  if (cVar2 != '\x03') {
    if (cVar2 == '\x02') {
      if (*(long *)(param_1 + 8) == 0) {
        return 0;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if (lVar6 == 0) {
        return 0;
      }
      plVar7 = (long *)(lVar6 + lVar5 + -0x28);
    }
    else {
      if (((cVar2 != '\x01') && (cVar2 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
        return 0;
      }
      plVar7 = (long *)(*(long *)(param_1 + 8) + lVar5);
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x016ca980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(plVar7,param_4);
    return uVar4;
  }
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar9 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_016caa08;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016caa08:
        bVar8 = false;
      }
      if (bVar8) {
        lVar6 = *(long *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + -0x28);
        if (lVar6 == 0) {
          return 0;
        }
        if ((param_3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar7 + lVar5));
        }
        uVar4 = (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar7 + lVar5),param_4);
        lVar5 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
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
          *(undefined8 *)(lVar5 + 0x10) = 0;
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
    } while (sVar3 != 0);
  }
  return 0;
}


