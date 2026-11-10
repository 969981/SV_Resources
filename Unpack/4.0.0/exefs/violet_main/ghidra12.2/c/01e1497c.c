/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


