/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c0a50; name: FUN_004c0a50
 */


void FUN_004c0a50(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_044c4640;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[3]);
  }
  FUN_004fb9f0(param_1);
  operator_delete(param_1);
  return;
}


