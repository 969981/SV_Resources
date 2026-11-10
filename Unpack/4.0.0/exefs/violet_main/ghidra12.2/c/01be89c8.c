/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be89c8; name: FUN_01be89c8
 */


void FUN_01be89c8(undefined8 *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  long lVar1;
  
  if ((*param_2 == 0) || (lVar1 = *(long *)(*param_2 + 0x10), lVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + ((long)param_4 >> 1) + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x01be89ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


