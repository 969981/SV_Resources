/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02316374; name: FUN_02316374
 */


ulong FUN_02316374(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long local_8;
  
  if (3 < *param_1) {
    return 0;
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar8 = (long *)(*(long *)(param_1 + 8) + lVar1);
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar9 == 0) {
      return 0;
    }
    plVar8 = (long *)(lVar9 + lVar1 + -0x28);
    break;
  case 3:
    lVar9 = *(long *)(param_1 + 8);
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0231645c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0231645c:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar9 + 0x10) != 0) {
            local_8 = *(long *)(lVar9 + 0x10) + -0x28;
            if ((param_3 & 1) != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1))
              ;
            }
            uVar6 = (*UNRECOVERED_JUMPTABLE)((long *)(local_8 + lVar1),param_4,param_5);
            FUN_02315ee0(&local_8);
            return (ulong)(uVar6 & 1);
          }
          break;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    local_8 = 0;
    FUN_02315ee0(&local_8);
    return 0;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x023163bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*UNRECOVERED_JUMPTABLE)(plVar8,param_4,param_5);
  return uVar7;
}


