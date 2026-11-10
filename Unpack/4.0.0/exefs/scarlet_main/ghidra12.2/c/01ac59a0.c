/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac59a0; name: FUN_01ac59a0
 */


void FUN_01ac59a0(undefined8 *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  long *plVar1;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01ac59dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_6,*param_7,plVar1,param_5,*param_8,*param_9,*param_10);
  return;
}


