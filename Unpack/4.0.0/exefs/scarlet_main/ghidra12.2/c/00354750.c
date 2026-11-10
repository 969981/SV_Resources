/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00354750; name: FUN_00354750
 */


void FUN_00354750(undefined8 *param_1)

{
  long lVar1;
  
  FUN_0038db40(&DAT_047ef658);
  lVar1 = param_1[1];
  *(undefined8 *)(lVar1 + 0x10) = param_1[2];
  *(long *)(param_1[2] + 8) = lVar1;
  FUN_0038dc90(&DAT_047ef634);
  FUN_0038db60(&DAT_047ef658);
  free((void *)*param_1);
  return;
}


