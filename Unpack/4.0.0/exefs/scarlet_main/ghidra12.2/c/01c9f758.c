/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9f758; name: FUN_01c9f758
 */


void FUN_01c9f758(undefined8 *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  long lVar2;
  
  if ((*param_2 == 0) || (lVar2 = *(long *)(*param_2 + 0x10), lVar2 == 0)) {
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1) + -0x28);
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x01c9f784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_5);
  return;
}


