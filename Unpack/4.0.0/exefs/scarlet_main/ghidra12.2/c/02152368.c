/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02152368; name: FUN_02152368
 */


byte FUN_02152368(long param_1,uint param_2)

{
  long lVar1;
  
  if (((int)param_2 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x20),
     **(char **)(lVar1 + (ulong)param_2 * 0x28 + 8) != '\0')) {
    return *(byte *)(lVar1 + (ulong)param_2 * 0x28 + 0x20) >> 1 & 1;
  }
  return 0;
}


