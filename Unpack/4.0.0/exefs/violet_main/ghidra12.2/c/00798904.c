/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00798904; name: FUN_00798904
 */


void FUN_00798904(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x1e8))(param_1);
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0x208))(param_1);
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


