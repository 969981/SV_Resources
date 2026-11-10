/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02980090; name: FUN_02980090
 */


uint FUN_02980090(long param_1,ulong param_2)

{
  return (uint)(*(ulong *)(param_1 + 0x90) >> (param_2 & 0x3f)) & 1;
}


