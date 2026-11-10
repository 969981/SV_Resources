/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e71c4; name: FUN_007e71c4
 */


int FUN_007e71c4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f74c0(*(undefined8 *)PTR_DAT_047d0860);
  uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x48))();
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_007f74c0(*(undefined8 *)puVar1);
    uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))();
    if ((uVar3 & 1) != 0) {
      return *(byte *)(*(long *)puVar1 + 0x50) - 1;
    }
  }
  return 0;
}


