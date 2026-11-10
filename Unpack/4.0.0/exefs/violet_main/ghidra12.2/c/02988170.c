/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02988170; name: FUN_02988170
 */


void FUN_02988170(long param_1,byte param_2,undefined4 param_3)

{
  if ((ushort)param_2 < (*(ushort *)(param_1 + 2) >> 7 & 0x7f)) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 4) = param_3;
  }
  return;
}


