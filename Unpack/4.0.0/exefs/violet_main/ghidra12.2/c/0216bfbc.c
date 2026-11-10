/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216bfbc; name: FUN_0216bfbc
 */


void FUN_0216bfbc(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x248)) {
    if (*(char *)(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48 + 8) != '\0') {
      FUN_0216c024(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48,0);
      FUN_0216bf5c(param_1,(ulong)param_2);
      return;
    }
  }
  return;
}


