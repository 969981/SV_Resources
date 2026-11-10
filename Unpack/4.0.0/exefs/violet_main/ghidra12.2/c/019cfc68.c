/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019cfc68; name: FUN_019cfc68
 */


void FUN_019cfc68(undefined8 *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 *param_5)

{
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x019cfcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_5);
      return;
    }
    break;
  case 2:
    FUN_0246ee14(param_2 + 8);
    return;
  case 3:
    FUN_0246ee48(param_2 + 8);
    return;
  }
  *param_1 = 0;
  return;
}


