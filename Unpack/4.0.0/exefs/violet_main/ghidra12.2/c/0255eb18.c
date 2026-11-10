/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255eb18; name: FUN_0255eb18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255eb18(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  long local_8;
  
  uVar7 = _UNK_03cabe58;
  uVar6 = _DAT_03cabe50;
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0x3f4ccccd3f000000;
      param_1[5] = 0x83e4ccccd;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0255eba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 1:
    if (*(long *)(param_2 + 8) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0x3f4ccccd3f000000;
      param_1[5] = 0x83e4ccccd;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
    }
                    /* WARNING: Could not recover jumptable at 0x0255ebec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar8 == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0x3f4ccccd3f000000;
      param_1[5] = 0x83e4ccccd;
      param_1[3] = uVar7;
      param_1[2] = uVar6;
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar8 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x0255ec44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 3:
    break;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0x3f4ccccd3f000000;
    param_1[5] = 0x83e4ccccd;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    return;
  }
  lVar8 = *(long *)(param_2 + 8);
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
        if (cVar4 != '\0') goto LAB_0255ed08;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0255ed08:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          local_8 = *(long *)(lVar8 + 0x10) + -0x28;
          if ((param_4 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_8 + lVar1));
          }
          (*UNRECOVERED_JUMPTABLE)(param_1);
          FUN_02556068(&local_8);
          return;
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  local_8 = 0;
  FUN_02556068(&local_8);
  uVar7 = _UNK_03cabe58;
  uVar6 = _DAT_03cabe50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0x3f4ccccd3f000000;
  param_1[5] = 0x83e4ccccd;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  return;
}


