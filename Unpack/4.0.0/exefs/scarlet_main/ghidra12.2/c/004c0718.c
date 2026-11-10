/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c0718; name: FUN_004c0718
 */


void FUN_004c0718(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)();
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


