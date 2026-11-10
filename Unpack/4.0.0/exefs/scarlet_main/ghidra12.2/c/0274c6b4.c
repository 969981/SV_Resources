/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274c6b4; name: FUN_0274c6b4
 */


void FUN_0274c6b4(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x78))();
  (**(code **)(*(long *)param_1[1] + 0x78))();
  (**(code **)(*(long *)param_1[2] + 0x78))();
                    /* WARNING: Could not recover jumptable at 0x0274c708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x78))();
  return;
}


