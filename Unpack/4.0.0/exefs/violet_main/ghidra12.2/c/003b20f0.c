/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b20f0; name: FUN_003b20f0
 */


ulong FUN_003b20f0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (DAT_047f17dc == '\x01') {
    if ((DAT_047f17d8 & 1) == 0) {
      DAT_047f17d8 = 1;
      FUN_004806c0(0x14,0x156,0x46,"external/openssl/ssl/ssl_init.c",0xdc);
      return 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00446030(param_1 | 0x8000c);
    if ((int)uVar2 != 0) {
      iVar1 = FUN_0047e650(&DAT_047f17ec,&LAB_003b2230);
      uVar2 = 0;
      if ((iVar1 != 0) && (DAT_047f17f0 != 0)) {
        if (((uint)param_1 >> 0x14 & 1) != 0) {
          iVar1 = FUN_0047e650(&DAT_047f17f4,&LAB_003b23a0);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_047f17e0 == '\0') {
            return 0;
          }
        }
        if (((uint)param_1 >> 0x15 & 1) != 0) {
          iVar1 = FUN_0047e650(&DAT_047f17f4,&LAB_003b23b0);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_047f17e0 == '\0') {
            return 0;
          }
        }
        FUN_0047e650(&DAT_047f17f8,&LAB_003b23e0);
        iVar1 = FUN_0049dbf0();
        return (ulong)(iVar1 != 0);
      }
    }
  }
  return uVar2;
}


