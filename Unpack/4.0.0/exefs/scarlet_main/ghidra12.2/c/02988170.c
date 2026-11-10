/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988170; name: FUN_02988170
 */


void FUN_02988170(long param_1,byte param_2,undefined4 param_3)

{
  if ((ushort)param_2 < (*(ushort *)(param_1 + 2) >> 7 & 0x7f)) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 4) = param_3;
  }
  return;
}


