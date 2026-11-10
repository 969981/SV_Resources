/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008aca04; name: FUN_008aca04
 */


undefined8 FUN_008aca04(long param_1)

{
  if ((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 0xd4) == 1)) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x78) == 0) || (*(int *)(*(long *)(param_1 + 0x78) + 0xd4) != 1)) {
    return 0;
  }
  return 1;
}


