/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02960ce4; name: FUN_02960ce4
 */


ulong FUN_02960ce4(ulong param_1)

{
  uint uVar1;
  
  if ((6 < ((uint)param_1 & 0xffff)) && (uVar1 = (uint)param_1 - 7, (uVar1 & 0xffff) < 7)) {
    param_1 = (ulong)*(ushort *)(&DAT_03d629ec + ((ulong)uVar1 & 0xffff) * 4);
  }
  return param_1;
}


