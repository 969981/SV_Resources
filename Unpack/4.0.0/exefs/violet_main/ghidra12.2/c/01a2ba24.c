/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2ba24; name: FUN_01a2ba24
 */


void FUN_01a2ba24(undefined8 *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined1 *param_5,undefined4 *param_6)

{
  long *plVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)((long)param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((long)param_1 + 0x13) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01a2ba44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5,*param_6);
  return;
}


