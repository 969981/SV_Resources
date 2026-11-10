/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015203e4; name: FUN_015203e4
 */


void FUN_015203e4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x11e) = param_2 & 1;
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x68))();
  }
  FUN_01520420(param_1);
  return;
}


