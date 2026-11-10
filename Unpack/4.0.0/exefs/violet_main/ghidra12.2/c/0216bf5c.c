/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216bf5c; name: FUN_0216bf5c
 */


void FUN_0216bf5c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x248)) &&
     (*(char *)(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48 + 8) != '\0')) {
    FUN_0216bc68(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48);
    FUN_02169b64();
    lVar1 = FUN_0216bc68(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48);
    *(undefined4 *)(lVar1 + 0x20) = 0;
  }
  return;
}


