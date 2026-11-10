/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080b8e0; name: FUN_0080b8e0
 */


void FUN_0080b8e0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047d1770 + 0x10);
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  if (lVar2 != 0) {
    lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_007ae4cc();
    }
    lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
    if (*(long *)(lVar2 + 8) != 0) {
      FUN_007a5444();
    }
  }
  puVar1 = PTR_DAT_047d15d8;
  (**(code **)(**(long **)PTR_DAT_047d15d8 + 0x18))();
  FUN_00799c28(*(undefined8 *)puVar1);
  FUN_007fe464(param_1);
  return;
}


