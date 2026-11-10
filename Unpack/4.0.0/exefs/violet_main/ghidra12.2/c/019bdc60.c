/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bdc60; name: FUN_019bdc60
 */


void FUN_019bdc60(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  
  if (3 < *param_1) {
    return;
  }
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (long *)(lVar2 + ((long)param_3 >> 1) + -0x28);
    break;
  case 3:
    FUN_02491fec(param_1 + 8,UNRECOVERED_JUMPTABLE);
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x019bdcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_4,param_5,param_6,param_7);
  return;
}


