/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008840ec; name: FUN_008840ec
 */


undefined8 FUN_008840ec(undefined8 *param_1,long *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)();
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
  }
  return 1;
}


