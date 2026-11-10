/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


