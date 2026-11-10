/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eb528; name: FUN_001eb528
 */


undefined * FUN_001eb528(void)

{
  if ((DAT_047ece95 & 1) == 0) {
    thunk_FUN_001ec43c(&DAT_047ece96,0x50);
    DAT_04484e70 = &DAT_047ece96;
    DAT_04484e68 = DAT_04484e68 & 0xffc00000 |
                   DAT_04484e68 & 0x1fffff |
                   (*(uint *)(*(long *)PTR_PTR_047cb968 + 0x10) >> 4 & 1) << 0x15;
    DAT_04484e80 = FUN_00385590();
    DAT_047ece95 = 1;
  }
  return &DAT_04484e48;
}


