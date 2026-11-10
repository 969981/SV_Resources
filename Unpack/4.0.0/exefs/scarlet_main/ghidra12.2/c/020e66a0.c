/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e66a0; name: FUN_020e66a0
 */


void FUN_020e66a0(long param_1,uint param_2)

{
  if (0xfe < param_2) {
    param_2 = 0xff;
  }
  FUN_021f6de0(*(undefined8 *)(param_1 + 0x70),param_2);
  return;
}


