/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022c4a14; name: FUN_022c4a14
 */


void FUN_022c4a14(undefined1 *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x022c4a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*param_4);
      return;
    }
    break;
  case 2:
    FUN_022c5490(param_1 + 8);
    return;
  case 3:
    FUN_022c54c0(param_1 + 8);
    return;
  }
  return;
}


