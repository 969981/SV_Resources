/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00296c28; name: FUN_00296c28
 */


void FUN_00296c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0448d9e8;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  operator_delete(param_1);
  return;
}


