/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145b670; name: FUN_0145b670
 */


void FUN_0145b670(undefined2 *param_1)

{
  *param_1 = 0xff01;
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined4 *)(param_1 + 4) = 0x7000000;
  param_1[2] = param_1[2] & 0xfff0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x7000000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}


