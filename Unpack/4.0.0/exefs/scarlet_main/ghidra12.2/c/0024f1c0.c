/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024f1c0; name: FUN_0024f1c0
 */


ulong FUN_0024f1c0(ulong param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  return (ulong)(byte)(&DAT_03cc723a)[(-param_1 & param_1) * 0x3f566ed27179461 >> 0x3a];
}


