/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f69d0; name: FUN_021f69d0
 */


void FUN_021f69d0(long param_1,uint param_2)

{
  if (0xfe < param_2) {
    param_2 = 0xff;
  }
  FUN_00ef7530(*(undefined8 *)(param_1 + 0x70),param_2);
  FUN_00f13b9c(param_1,1);
  return;
}


