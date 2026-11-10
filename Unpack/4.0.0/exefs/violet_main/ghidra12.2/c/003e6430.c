/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e6430; name: FUN_003e6430
 */


undefined8 FUN_003e6430(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00446030(0x100,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_0049e5d0(&DAT_047f1808);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar3;
}


