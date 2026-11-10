/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fe8d8; name: FUN_007fe8d8
 */


void FUN_007fe8d8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  *(undefined1 *)(*(long *)(lVar2 + 0x10) + 0xa8) = 1;
  lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
  *(undefined1 *)(*(long *)(lVar2 + 8) + 0x82) = 1;
  return;
}


