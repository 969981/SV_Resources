/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d7188; name: FUN_007d7188
 */


ulong FUN_007d7188(long param_1)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) == 0) {
    return 0xfd;
  }
  uVar1 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x788) + uVar1) == '\0') {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while (*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) != uVar1);
  return 0xfd;
}


