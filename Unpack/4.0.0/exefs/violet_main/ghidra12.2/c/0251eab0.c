/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0251eab0; name: FUN_0251eab0
 */


void FUN_0251eab0(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4)

{
  if (((*param_1 != '\x01') && (*param_1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1))
                   );
  }
                    /* WARNING: Could not recover jumptable at 0x0251eadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4);
  return;
}


