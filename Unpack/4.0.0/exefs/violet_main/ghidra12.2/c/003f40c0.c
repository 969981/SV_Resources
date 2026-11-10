/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f40c0; name: FUN_003f40c0
 */


ulong FUN_003f40c0(long *param_1)

{
  ulong uVar1;
  int in_w4;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))();
  if (0 < (int)uVar1) {
    param_1[1] = param_1[1] + (long)in_w4;
    param_1[2] = param_1[2] + (uVar1 & 0xffffffff);
  }
  return uVar1;
}


