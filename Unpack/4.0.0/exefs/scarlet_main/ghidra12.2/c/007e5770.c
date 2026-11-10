/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5770; name: FUN_007e5770
 */


void FUN_007e5770(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  memset((void *)(param_1 + 0x5f0),0,4);
  return;
}


