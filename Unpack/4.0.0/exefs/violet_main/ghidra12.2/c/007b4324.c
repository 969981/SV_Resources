/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4324; name: FUN_007b4324
 */


void FUN_007b4324(long param_1)

{
  FUN_007a7f68();
  FUN_0078b184(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x524) = 0;
  memset((void *)(param_1 + 0xa0),0,0x480);
  *(undefined4 *)(param_1 + 0x520) = 0xffffffff;
  return;
}


