/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811fb8; name: FUN_00811fb8
 */


void FUN_00811fb8(long param_1)

{
  if ((*(int **)(param_1 + 0x58) != (int *)0x0) && (**(int **)(param_1 + 0x58) == 1)) {
    FUN_0078cc00();
  }
  FUN_00810f24(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


