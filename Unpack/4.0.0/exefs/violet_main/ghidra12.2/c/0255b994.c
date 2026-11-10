/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0255b994; name: FUN_0255b994
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255b994(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE_00,
                 ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_03cabe58;
  uVar1 = _DAT_03cabe50;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x0255b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    break;
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x0255b9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    break;
  case 2:
    FUN_0255bba4(param_2 + 8);
    return;
  case 3:
    FUN_0255bbf4(param_2 + 8);
    return;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = _DAT_03caa980;
  param_1[5] = _UNK_03caa988;
  param_1[4] = uVar1;
  return;
}


