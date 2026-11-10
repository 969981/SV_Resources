/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c0594; name: FUN_015c0594
 */


void FUN_015c0594(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3b4) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x394) = 0;
  return;
}


