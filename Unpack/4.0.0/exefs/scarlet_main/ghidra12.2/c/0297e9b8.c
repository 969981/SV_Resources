/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297e9b8; name: FUN_0297e9b8
 */


void FUN_0297e9b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x10) < 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return;
  }
  return;
}


