/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4664c; name: FUN_01d4664c
 */


void FUN_01d4664c(undefined8 param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  if (*param_2 == 0) {
    FUN_01941afc(param_1);
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x01d46664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


