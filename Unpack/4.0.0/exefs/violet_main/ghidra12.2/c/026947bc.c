/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026947bc; name: FUN_026947bc
 */


void FUN_026947bc(byte *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  
  if (3 < *param_1) {
    return;
  }
  lVar1 = (long)param_3 >> 1;
  switch(*param_1) {
  default:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar2 = (long *)(*(long *)(param_1 + 8) + lVar1);
    break;
  case 2:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar3 == 0) {
      return;
    }
    plVar2 = (long *)(lVar3 + lVar1 + -0x28);
    break;
  case 3:
    FUN_02692f24(&local_38,param_1 + 8);
    if (local_38 != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(local_38 + lVar1));
      }
      (*UNRECOVERED_JUMPTABLE)((long *)(local_38 + lVar1),param_4,param_5);
    }
    FUN_02692cc8(&local_38);
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x02694804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,param_4,param_5);
  return;
}


