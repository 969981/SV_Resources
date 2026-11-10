/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c58a20; name: FUN_01c58a20
 */


void FUN_01c58a20(void *param_1,byte *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4)

{
  if (*param_2 < 4) {
    switch(*param_2) {
    case 0:
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 +
                         *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
        }
                    /* WARNING: Could not recover jumptable at 0x01c58a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      break;
    case 1:
      if (*(long *)(param_2 + 8) != 0) {
        if ((param_4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE_00 =
               *(code **)(UNRECOVERED_JUMPTABLE_00 +
                         *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
        }
                    /* WARNING: Could not recover jumptable at 0x01c58a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      break;
    case 2:
      FUN_01c58c14(param_2 + 8);
      return;
    case 3:
      FUN_01c58c4c(param_2 + 8);
      return;
    }
  }
  memset(param_1,0,0x8c);
  return;
}


