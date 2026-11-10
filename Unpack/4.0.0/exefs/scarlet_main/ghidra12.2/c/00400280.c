/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00400280; name: FUN_00400280
 */


undefined8 FUN_00400280(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    FUN_003eb490(*(undefined8 *)(param_1 + 0x20));
    *(long *)(param_1 + 0x20) = param_2;
  }
  if (param_3 != 0) {
    FUN_003eb490(*(undefined8 *)(param_1 + 0x28));
    *(long *)(param_1 + 0x28) = param_3;
  }
  return 1;
}


