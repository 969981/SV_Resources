/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255d9bc; name: FUN_0255d9bc
 */


ulong FUN_0255d9bc(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4
                  )

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  long local_8;
  
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0255da24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[1],param_4[2],param_4[3]);
    return uVar7;
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0255da4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[1],param_4[2],param_4[3]);
    return uVar7;
  case 2:
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 == 0)) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar8 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x0255da84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[1],param_4[2],param_4[3]);
    return uVar7;
  case 3:
    break;
  default:
    return 0;
  }
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0255daf4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0255daf4:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_8 = *(long *)(lVar8 + 0x10) + -0x28;
          if ((param_3 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1));
          }
          uVar6 = (*UNRECOVERED_JUMPTABLE)(*param_4,param_4[1],param_4[2],param_4[3]);
          FUN_02556068(&local_8);
          return (ulong)(uVar6 & 1);
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_02556068(&local_8);
  return 0;
}


