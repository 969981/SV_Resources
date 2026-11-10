/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ca320; name: FUN_007ca320
 */


void FUN_007ca320(long param_1)

{
  if ((*(uint *)(param_1 + 0xcc) | 4) == 4) {
    return;
  }
  nn::os::WaitThread(*(ThreadType **)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0xcc) = 4;
  return;
}


