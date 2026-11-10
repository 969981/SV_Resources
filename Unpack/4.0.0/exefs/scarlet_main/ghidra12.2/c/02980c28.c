/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02980c28; name: FUN_02980c28
 */


undefined4 FUN_02980c28(long param_1,uint param_2)

{
  if (((int)param_2 < 0xe) && (*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0)) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x70);
  }
  return 0;
}


