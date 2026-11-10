/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00120c20; name: FUN_00120c20
 */


void FUN_00120c20(ulong param_1)

{
  nn::os::SleepThread((param_1 & 0xffffffff) * 1000000);
  return;
}


