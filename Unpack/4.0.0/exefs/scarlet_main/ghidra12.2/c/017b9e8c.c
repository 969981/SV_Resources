/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b9e8c; name: FUN_017b9e8c
 */


void FUN_017b9e8c(undefined8 *param_1,char *param_2,code *UNRECOVERED_JUMPTABLE_00,ulong param_4)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x017b9eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_017ba5b8(param_2 + 8);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_017ba584(param_2 + 8);
      return;
    }
    if ((cVar1 == '\0') && (*(long *)(param_2 + 8) != 0)) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE_00 =
             *(code **)(UNRECOVERED_JUMPTABLE_00 +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x017b9ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


