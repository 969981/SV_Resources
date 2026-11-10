/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5b50; name: FUN_007e5b50
 */


void FUN_007e5b50(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  if ((*(short *)(param_1 + 0x5e8) == -1) ||
     ((uint)*(byte *)(param_1 + 0x5eb) !=
      (~(-1 << (ulong)(*(byte *)(param_1 + 0x5ea) & 0x1f)) & 0xffU))) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}


