/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbb9ec; name: FUN_01dbb9ec
 */


void FUN_01dbb9ec(long param_1)

{
  FUN_01524e1c();
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined1 *)(param_1 + 0x80) = 0xff;
  nn::oe::SetCpuBoostMode(0);
  DAT_0485a120 = 0;
  return;
}


