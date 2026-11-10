/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047d9e0; name: FUN_0047d9e0
 */


void FUN_0047d9e0(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x18) = param_2;
  return;
}


