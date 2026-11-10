/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a24cc; name: FUN_007a24cc
 */


void FUN_007a24cc(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x234) = *param_2;
  memcpy((void *)(param_1 + 0x238),param_2 + 1,0x10);
  *(undefined1 *)(param_1 + 0x230) = 1;
  return;
}


