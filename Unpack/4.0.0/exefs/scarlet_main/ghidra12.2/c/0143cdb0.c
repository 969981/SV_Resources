/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143cdb0; name: FUN_0143cdb0
 */


void FUN_0143cdb0(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x120) != 0) {
    *(byte *)(*(long *)(param_1 + 0x120) + 0x210) = param_2 & 1;
  }
  return;
}


