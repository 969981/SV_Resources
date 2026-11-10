/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c40ac; name: FUN_034c40ac
 */


void FUN_034c40ac(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x034c40e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  return;
}


