/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b435c; name: FUN_007b435c
 */


void FUN_007b435c(long param_1,long param_2)

{
  FUN_007a8024();
  FUN_0284e39c(param_1 + 0x80,param_2 + 0x80);
  memcpy((void *)(param_1 + 0xa0),(void *)(param_2 + 0xa0),0x480);
  *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
  *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_2 + 0x524);
  return;
}


