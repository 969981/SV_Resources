/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0191f958; name: FUN_0191f958
 */


void FUN_0191f958(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,
                 undefined4 *param_4,undefined4 *param_5)

{
  long *plVar1;
  long lVar2;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0191f9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(*param_4,plVar1,*param_5);
    return;
  case 2:
    break;
  case 3:
    FUN_022d6bcc(param_1 + 8,UNRECOVERED_JUMPTABLE_00);
    return;
  default:
    return;
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 == 0)) {
    return;
  }
  plVar1 = (long *)(lVar2 + ((long)param_3 >> 1) + -0x28);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0191f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*param_4,plVar1,*param_5);
  return;
}


