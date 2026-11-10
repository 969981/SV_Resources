/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f617c; name: FUN_002f617c
 */


undefined * FUN_002f617c(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_0038dcd0(&DAT_047ef29c,PTR_LAB_047cc9d0);
  uVar1 = *(ulong *)(PTR_DAT_047cc9d8 + 8) & 0xff;
  if (*(long *)PTR_DAT_047cc9d8 != 0) {
    uVar1 = *(ulong *)(PTR_DAT_047cc9d8 + 8);
  }
  puVar2 = PTR_DAT_047cc9d8 + 9;
  if (*(long *)PTR_DAT_047cc9d8 != 0) {
    puVar2 = *(undefined **)(PTR_DAT_047cc9d8 + 0x10);
  }
  puVar3 = (undefined *)0x0;
  if (uVar1 != 0) {
    puVar3 = puVar2;
  }
  return puVar3;
}


