/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021da59c; name: FUN_021da59c
 */


bool FUN_021da59c(long param_1,ulong param_2,long *param_3)

{
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    return false;
  }
  return *param_3 + param_2 < *(long *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x30);
}


