/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022cf538; name: FUN_022cf538
 */


void FUN_022cf538(char *param_1,code *UNRECOVERED_JUMPTABLE_00,ulong param_3)

{
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x022cf57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 +
                     *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x022cf560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  return;
}


