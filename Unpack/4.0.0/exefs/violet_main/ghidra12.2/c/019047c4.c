/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019047c4; name: FUN_019047c4
 */


void FUN_019047c4(long param_1)

{
  FUN_0190498c(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0x1b0));
  FUN_016acdf0(param_1 + 0x128,*(undefined8 *)(param_1 + 0x130));
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(long *)(param_1 + 0x128) = param_1 + 0x130;
  *(undefined8 *)(param_1 + 0x130) = 0;
  return;
}


