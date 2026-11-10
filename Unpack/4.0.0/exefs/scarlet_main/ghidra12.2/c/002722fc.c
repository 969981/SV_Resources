/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002722fc; name: FUN_002722fc
 */


void FUN_002722fc(long param_1)

{
                    /* try { // try from 00272320 to 00272323 has its CatchHandler @ 00272338 */
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x198))(*(long **)PTR_DAT_047cbb08,param_1 + 8);
  FUN_00272980(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  return;
}


