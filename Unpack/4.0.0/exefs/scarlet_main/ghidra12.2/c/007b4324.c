/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


