/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0231d1ac; name: FUN_0231d1ac
 */


void FUN_0231d1ac(char *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  
  if (((*param_1 != '\x01') && (*param_1 != '\0')) || (*(long *)(param_1 + 8) == 0)) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0231d1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_4,param_5);
  return;
}


