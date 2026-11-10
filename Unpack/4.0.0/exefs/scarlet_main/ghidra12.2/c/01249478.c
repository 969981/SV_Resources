/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249478; name: FUN_01249478
 */


int FUN_01249478(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0152a758(*(undefined4 *)(param_1 + 0x36c),*(undefined1 *)(param_1 + 0x370),0);
  return (uVar1 & 0xff) + 1;
}


