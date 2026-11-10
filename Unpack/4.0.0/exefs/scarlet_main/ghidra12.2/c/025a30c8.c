/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025a30c8; name: FUN_025a30c8
 */


ulong FUN_025a30c8(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  
  if (3 < *param_1) {
    return 0;
  }
  lVar6 = (long)param_3 >> 1;
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar8 = (long *)(*(long *)(param_1 + 8) + lVar6);
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar7 == 0) {
      return 0;
    }
    plVar8 = (long *)(lVar7 + lVar6 + -0x28);
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
LAB_025a3160:
      uVar4 = 0;
    }
    else {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar10 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar10) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_025a31ac;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_025a31ac:
          bVar9 = false;
        }
        if (bVar9) {
          lVar7 = *(long *)(lVar7 + 0x10);
          plVar8 = (long *)(lVar7 + -0x28);
          if (lVar7 != 0) {
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE =
                   *(code **)(UNRECOVERED_JUMPTABLE + *(long *)((long)plVar8 + lVar6));
            }
            uVar4 = (*UNRECOVERED_JUMPTABLE)((long *)((long)plVar8 + lVar6),param_4,param_5,param_6)
            ;
            lVar6 = *(long *)(lVar7 + 8);
            psVar1 = (short *)(lVar6 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar9) {
                *psVar1 = sVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar10 == 1) {
              *(undefined8 *)(lVar6 + 0x10) = 0;
              (**(code **)(*plVar8 + 0x50))(plVar8);
            }
            else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            break;
          }
          goto LAB_025a3160;
        }
        uVar4 = 0;
        sVar10 = sVar2;
      } while (sVar2 != 0);
    }
    return (ulong)(uVar4 & 1);
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x025a3114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(plVar8,param_4,param_5,param_6);
  return uVar5;
}


