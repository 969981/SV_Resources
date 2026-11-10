/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ab994; name: FUN_007ab994
 */


bool FUN_007ab994(long param_1)

{
  return (*(uint *)(param_1 + 0x80) & (*(uint *)(param_1 + 0x84) ^ 0xffffffff)) != 0;
}


