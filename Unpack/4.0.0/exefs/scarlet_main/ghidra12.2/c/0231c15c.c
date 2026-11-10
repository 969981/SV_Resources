/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0231c15c; name: FUN_0231c15c
 */


void FUN_0231c15c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04601c68;
  param_1[4] = &PTR_LAB_04601c98;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8c));
  FUN_00db239c(param_1 + 0x84);
  FUN_00db239c(param_1 + 0x7c);
  FUN_01602410(param_1 + 0x6f);
  FUN_01602410(param_1 + 0x62);
  FUN_0160266c(param_1 + 0x55);
  FUN_0160266c(param_1 + 0x48);
  FUN_01602450(param_1 + 0x36);
  FUN_01601ff4(param_1 + 0x2a);
  FUN_01601d38(param_1 + 0x1d);
  FUN_01601e14(param_1 + 0x16);
  FUN_01601d10(param_1 + 9);
  if ((long *)param_1[8] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0231c204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x20))();
  return;
}


