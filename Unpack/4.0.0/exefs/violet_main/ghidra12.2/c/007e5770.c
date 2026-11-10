/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5770; name: FUN_007e5770
 */


void FUN_007e5770(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  memset((void *)(param_1 + 0x5f0),0,4);
  return;
}


