/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012494e8; name: FUN_012494e8
 */


void FUN_012494e8(long param_1,byte param_2,ulong param_3)

{
  if (param_2 < 5) {
    *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + (ulong)param_2 * 8 + 8) =
         param_3 & 0xffffffff;
  }
  return;
}


