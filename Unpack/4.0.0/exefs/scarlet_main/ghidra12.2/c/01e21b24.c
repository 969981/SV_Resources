/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e21b24; name: FUN_01e21b24
 */


void FUN_01e21b24(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3a4) = param_2;
  FUN_01e21c18(param_1 + 0x3b0,1,0xffffffff);
  FUN_01e21c48(param_1 + 0x3b0,1,*(undefined4 *)(param_1 + 0x3a4));
  return;
}


