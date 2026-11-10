/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b04180; name: FUN_01b04180
 */


void FUN_01b04180(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  if (param_1 == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1 + ((long)param_3 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x01b041a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4,*param_5,*param_6,*param_7,*param_8);
  return;
}


