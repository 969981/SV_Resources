/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1527c; name: FUN_01d1527c
 */


void FUN_01d1527c(long *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if (*param_1 == 0) {
    FUN_01d15338();
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_1 + ((long)param_3 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x01d15294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


