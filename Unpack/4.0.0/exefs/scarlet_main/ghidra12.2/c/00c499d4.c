/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c499d4; name: FUN_00c499d4
 */


void FUN_00c499d4(long *param_1)

{
  long *plVar1;
  
  FUN_00c49a64();
  *param_1 = (long)&DAT_045ecb18;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[4] = (long)&PTR_LAB_045ecbc8;
  param_1[5] = (long)&DAT_045ecc18;
  plVar1 = param_1;
  if ((long *)param_1[0x36] != (long *)0x0) {
    plVar1 = (long *)param_1[0x36];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x88))(plVar1,0);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x35] != (long *)0x0) {
    plVar1 = (long *)param_1[0x35];
  }
  if (plVar1 == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c49a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x88))(plVar1,0);
  return;
}


