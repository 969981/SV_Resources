/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b5480; name: FUN_017b5480
 */


ulong FUN_017b5480(char *param_1)

{
  ulong uVar1;
  uint3 local_18 [2];
  
  if (*param_1 == '\x01') {
    uVar1 = FUN_017b54e4(param_1 + 8);
  }
  else if (*param_1 == '\0') {
    uVar1 = FUN_017b5a54(*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_017b54d8(local_18);
    uVar1 = (ulong)local_18[0];
  }
  return uVar1 & 0xffffff;
}


