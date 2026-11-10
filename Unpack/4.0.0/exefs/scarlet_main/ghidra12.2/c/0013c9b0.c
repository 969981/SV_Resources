/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013c9b0; name: FUN_0013c9b0
 */


void FUN_0013c9b0(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_0012d6c0(param_1,*(undefined8 *)(param_2 + 0x18),
               (long)(1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) * 0x18);
  return;
}


