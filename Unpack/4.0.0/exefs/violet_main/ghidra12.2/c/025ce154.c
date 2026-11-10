/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ce154; name: FUN_025ce154
 */


void FUN_025ce154(undefined1 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4)

{
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x025ce198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else if ((*param_2 == '\0') && (*(long *)(param_2 + 8) != 0)) {
    if ((param_4 & 1) != 0) {
      UNRECOVERED_JUMPTABLE_00 =
           *(code **)(UNRECOVERED_JUMPTABLE_00 +
                     *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x025ce17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}


