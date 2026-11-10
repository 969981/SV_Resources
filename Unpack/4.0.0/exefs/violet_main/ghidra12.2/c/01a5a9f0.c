/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a5a9f0; name: FUN_01a5a9f0
 */


void FUN_01a5a9f0(long *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  long *plVar1;
  
  if (*param_1 == 0) {
    return;
  }
  plVar1 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01a5aa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,plVar1,*param_6,*param_7);
  return;
}


