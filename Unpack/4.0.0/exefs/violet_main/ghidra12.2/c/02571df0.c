/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02571df0; name: FUN_02571df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02571df0(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_18;
  
  uVar3 = _UNK_03cabe58;
  uVar2 = _DAT_03cabe50;
  lVar1 = (long)param_4 >> 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + lVar1));
      }
                    /* WARNING: Could not recover jumptable at 0x02571e2c. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x02571e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 2:
    if ((*(long *)(param_2 + 8) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar4 == 0)) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[3] = uVar3;
      param_1[2] = uVar2;
      return;
    }
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar4 + lVar1 + -0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x02571e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 3:
    FUN_02571768(&local_18,param_2 + 8);
    if (local_18 == 0) {
      FUN_018d3d60(&local_18);
      uVar3 = _UNK_03cabe58;
      uVar2 = _DAT_03cabe50;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[3] = uVar3;
      param_1[2] = uVar2;
    }
    else {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_18 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE)(param_1);
      FUN_018d3d60(&local_18);
    }
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}


