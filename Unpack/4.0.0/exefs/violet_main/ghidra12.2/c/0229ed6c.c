/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0229ed6c; name: FUN_0229ed6c
 */


void FUN_0229ed6c(undefined4 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  if (((*param_2 != '\x01') && (*param_2 != '\0')) || (*(long *)(param_2 + 8) == 0)) {
    memset(param_1,0,0x60);
    *param_1 = 3;
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1))
                   );
  }
                    /* WARNING: Could not recover jumptable at 0x0229edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


