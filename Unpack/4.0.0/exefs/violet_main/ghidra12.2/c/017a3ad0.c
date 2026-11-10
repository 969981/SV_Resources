/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a3ad0; name: FUN_017a3ad0
 */


void FUN_017a3ad0(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3,undefined4 *param_4,
                 undefined2 *param_5,undefined2 *param_6,undefined2 *param_7,undefined2 *param_8)

{
  long *plVar1;
  
  if (*param_1 == '\0') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x017a3b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,*param_4,*param_5,*param_6,*param_7,*param_8);
    return;
  }
  if (*param_1 != '\x01') {
    return;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(UNRECOVERED_JUMPTABLE_00 + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x017a3b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,*param_4,*param_5,*param_6,*param_7,*param_8);
  return;
}


