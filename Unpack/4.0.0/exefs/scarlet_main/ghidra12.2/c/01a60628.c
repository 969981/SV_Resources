/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a60628; name: FUN_01a60628
 */


void FUN_01a60628(long *param_1,long param_2,code *param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar1);
    }
    plVar1 = (long *)(*param_3)(plVar1,*param_5);
    plVar1 = (long *)*plVar1;
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01a60674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


