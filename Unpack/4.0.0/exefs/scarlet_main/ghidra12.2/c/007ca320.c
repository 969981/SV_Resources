/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


