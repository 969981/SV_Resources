/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0196baa4; name: FUN_0196baa4
 */


void FUN_0196baa4(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 100) = param_1;
  *(undefined4 *)(param_3 + 0x68) = param_2;
  *(undefined4 *)(param_3 + 0x28) = 6;
  FUN_0186cbc8();
  return;
}


