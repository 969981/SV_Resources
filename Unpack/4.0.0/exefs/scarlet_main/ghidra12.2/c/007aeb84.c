/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007aeb84; name: FUN_007aeb84
 */


void FUN_007aeb84(long param_1,long param_2)

{
  FUN_00798154();
  memcpy((void *)(param_1 + 0x558),(void *)(param_2 + 0x558),0x40);
  *(undefined1 *)(param_1 + 0x598) = *(undefined1 *)(param_2 + 0x598);
  return;
}


