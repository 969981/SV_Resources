/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078c684; name: FUN_0078c684
 */


ulong FUN_0078c684(void)

{
  ulong uVar1;
  
  if (DAT_044df4b8 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((ulong)DAT_044df4b8 != 0) {
    uVar1 = DAT_044df4c0 / DAT_044df4b8;
  }
  return uVar1;
}


