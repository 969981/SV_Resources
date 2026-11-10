/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980c28; name: FUN_02980c28
 */


undefined4 FUN_02980c28(long param_1,uint param_2)

{
  if (((int)param_2 < 0xe) && (*(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0)) {
    return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x70);
  }
  return 0;
}


