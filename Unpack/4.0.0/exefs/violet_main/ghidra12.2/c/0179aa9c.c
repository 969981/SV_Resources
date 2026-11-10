/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179aa9c; name: FUN_0179aa9c
 */


void FUN_0179aa9c(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  
  if (((*param_2 != '\0') && (*param_2 != '\x01')) || (*(long *)(param_2 + 8) == 0)) {
    *param_1 = 0;
    return;
  }
  plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0179aac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5);
  return;
}


