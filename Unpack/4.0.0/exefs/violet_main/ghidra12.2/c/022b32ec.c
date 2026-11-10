/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b32ec; name: FUN_022b32ec
 */


void FUN_022b32ec(undefined8 *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  if (*param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x022b3314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_5,*param_6,*param_7,*param_8);
  return;
}


