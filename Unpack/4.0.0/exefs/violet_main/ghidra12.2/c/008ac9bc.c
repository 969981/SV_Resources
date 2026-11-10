/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ac9bc; name: FUN_008ac9bc
 */


void FUN_008ac9bc(long param_1)

{
  if (((*(byte *)(param_1 + 0x228) >> 3 & 1) == 0) ||
     (((*(long *)(param_1 + 0x48) == 0 || (*(int *)(*(long *)(param_1 + 0x48) + 0xd4) != 1)) &&
      ((*(long *)(param_1 + 0x78) == 0 || (*(int *)(*(long *)(param_1 + 0x78) + 0xd4) != 1)))))) {
    return;
  }
  FUN_008ab9cc();
  return;
}


