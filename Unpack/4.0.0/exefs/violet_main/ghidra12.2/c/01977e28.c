/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01977e28; name: FUN_01977e28
 */


void FUN_01977e28(byte param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  if ((((*(long *)PTR_DAT_047d0a08 != 0) && (iVar1 = FUN_00f21480(), iVar1 == 1 && param_1 < 8)) &&
      (*(long *)PTR_DAT_047d0860 != 0)) &&
     ((lVar2 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[param_1],0x81),
      lVar2 != 0 && (*(char *)(lVar2 + 0x78) == '\x04' || *(char *)(lVar2 + 0x78) == '\x01')))) {
    FUN_01977ebc(auStack_30);
  }
  return;
}


