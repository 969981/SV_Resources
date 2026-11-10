/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


