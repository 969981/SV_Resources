/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


