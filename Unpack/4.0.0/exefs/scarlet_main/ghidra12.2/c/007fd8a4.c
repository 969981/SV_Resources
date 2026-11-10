/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd8a4; name: FUN_007fd8a4
 */


void FUN_007fd8a4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_2)(param_2);
  FUN_007bfaa0(param_2);
  return;
}


