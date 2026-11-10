/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd4c08; name: FUN_00dd4c08
 */


void FUN_00dd4c08(long param_1)

{
  FUN_015a7af4(*(long *)(*(long *)(param_1 + 8) +
                        (*(ulong *)(param_1 + 0x40) >> 6 & 0x3fffffffffffff8)) +
               (*(ulong *)(param_1 + 0x40) & 0x1ff) * 8);
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  FUN_021635a8(param_1);
  return;
}


