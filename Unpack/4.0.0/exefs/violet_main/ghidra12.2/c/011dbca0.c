/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011dbca0; name: FUN_011dbca0
 */


ulong FUN_011dbca0(long param_1)

{
  ulong uVar1;
  char local_18 [2];
  ushort local_16;
  
  FUN_015ede48(local_18,param_1 + 0x48);
  uVar1 = 0;
  if (local_18[0] != '\0') {
    uVar1 = (ulong)local_16 << 0x10;
  }
  return uVar1 | local_18[0] != '\0';
}


