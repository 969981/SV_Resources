/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789b7c; name: FUN_02789b7c
 */


void FUN_02789b7c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0860;
  if (*(long *)PTR_DAT_047d0860 != 0) {
    FUN_007f69ec();
    FUN_007ec6c8(*(long *)puVar1 + 0x10);
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_047d1560;
  lVar2 = *(long *)PTR_DAT_047d1560;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


