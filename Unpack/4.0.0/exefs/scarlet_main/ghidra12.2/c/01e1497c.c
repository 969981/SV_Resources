/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1497c; name: FUN_01e1497c
 */


undefined4 FUN_01e1497c(long param_1,int param_2)

{
  if (*(char *)(param_1 + 0x9a8) != '\0') {
    if (param_2 == 0) {
      return *(undefined4 *)(param_1 + 0x14f0);
    }
    if (param_2 == 2) {
      return *(undefined4 *)(param_1 + 0x14f8);
    }
    if (param_2 == 1) {
      return *(undefined4 *)(param_1 + 0x14f4);
    }
  }
  return 0xffffffff;
}


