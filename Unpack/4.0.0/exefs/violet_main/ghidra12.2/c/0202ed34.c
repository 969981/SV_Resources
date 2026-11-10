/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0202ed34; name: FUN_0202ed34
 */


void FUN_0202ed34(long param_1)

{
  *(undefined1 *)(param_1 + 0x13b) = 1;
  *(float *)(param_1 + 0x178) = ABS(*(float *)(param_1 + 0x16c) - *(float *)(param_1 + 0x174));
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x178);
  return;
}


