/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019525cc; name: FUN_019525cc
 */


undefined8
FUN_019525cc(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    plVar2 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x0195261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)(plVar2,*param_4);
    return uVar1;
  case 2:
    break;
  case 3:
    uVar1 = FUN_01cdcc10(param_1 + 8,UNRECOVERED_JUMPTABLE_00);
    return uVar1;
  default:
    return 0;
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar3 == 0)) {
    return 0;
  }
  plVar2 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x01952660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE_00)(plVar2,*param_4);
  return uVar1;
}


