/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034cc10; name: FUN_0034cc10
 */


uint FUN_0034cc10(ulong param_1)

{
  return (uint)(param_1 >> 2) & 2 | (uint)param_1 & 1;
}


