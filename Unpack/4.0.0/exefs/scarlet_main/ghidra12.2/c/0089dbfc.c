/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089dbfc; name: FUN_0089dbfc
 */


void FUN_0089dbfc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff0;
  return;
}


