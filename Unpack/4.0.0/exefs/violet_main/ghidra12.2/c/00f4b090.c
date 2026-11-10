/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4b090; name: FUN_00f4b090
 */


void FUN_00f4b090(long param_1)

{
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_00f4b100();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    FUN_00f4b0d8();
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_00f4b0e4();
  }
  FUN_00f4b108(param_1);
  return;
}


