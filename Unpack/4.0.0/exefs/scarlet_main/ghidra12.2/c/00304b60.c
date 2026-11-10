/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00304b60; name: FUN_00304b60
 */


void FUN_00304b60(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_003027f0(*param_1);
  FUN_00302b50(param_1[1]);
  free(param_1);
  return;
}


