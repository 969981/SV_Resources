/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b3bbd4; name: FUN_02b3bbd4
 */


void FUN_02b3bbd4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  param_1[0x38] = param_1[0x38] | 1L << (param_2 & 0x3f);
  plVar1 = param_1;
  if ((long *)param_1[0x36] != (long *)0x0) {
    plVar1 = (long *)param_1[0x36];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x35] != (long *)0x0) {
    plVar1 = (long *)param_1[0x35];
  }
  if (plVar1 == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b3bc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  return;
}


