/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc2e58; name: FUN_01bc2e58
 */


void FUN_01bc2e58(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long local_8;
  
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01bc2e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x01bc2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar6 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar6 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x01bc2ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 3:
    lVar6 = *(long *)(param_2 + 8);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar6 + 0x1a);
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar7) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01bc2f64;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01bc2f64:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            local_8 = *(long *)(lVar6 + 0x10) + -0x28;
            if ((param_4 & 1) != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1))
              ;
            }
            (*UNRECOVERED_JUMPTABLE)(param_1);
            FUN_01bc2de0(&local_8);
            return;
          }
          break;
        }
        sVar7 = sVar3;
      } while (sVar3 != 0);
    }
    local_8 = 0;
    FUN_01bc2de0(&local_8);
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


