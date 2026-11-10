/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007efb98; name: FUN_007efb98
 */


undefined8 FUN_007efb98(long param_1)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x40) + uVar1 * 8) != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50));
  }
  return 0;
}


