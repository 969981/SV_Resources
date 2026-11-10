/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147ac98; name: FUN_0147ac98
 */


undefined8 FUN_0147ac98(long param_1,ulong param_2,byte param_3)

{
  if (param_3 < *(byte *)(param_1 + (param_2 & 0xff) * 0x38 + 0x58)) {
    return *(undefined8 *)(param_1 + (param_2 & 0xff) * 0x38 + (ulong)param_3 * 8 + 0x28);
  }
  return 0;
}


