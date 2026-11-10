/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e51d8; name: FUN_007e51d8
 */


long FUN_007e51d8(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
    FUN_00796828(param_1 + 0x18,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  }
  return param_1;
}


