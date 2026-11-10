/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b2cd8; name: FUN_022b2cd8
 */


void FUN_022b2cd8(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 *param_5,undefined4 *param_6)

{
  if (*param_2 == '\x01') {
    FUN_022b2e9c(param_2 + 8);
    return;
  }
  if ((*param_2 != '\0') || (*(long *)(param_2 + 8) == 0)) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1))
                   );
  }
                    /* WARNING: Could not recover jumptable at 0x022b2d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_5,*param_6);
  return;
}


