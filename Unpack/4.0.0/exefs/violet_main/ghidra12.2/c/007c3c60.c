/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3c60; name: FUN_007c3c60
 */


void FUN_007c3c60(void)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  FUN_007c9e3c(PTR_DAT_047d1068);
  *(undefined8 *)(PTR_DAT_047d1080 + 8) = 0;
  puVar4 = PTR_DAT_047d1088;
  iVar1 = *(int *)PTR_DAT_047d1088;
  piVar2 = (int *)PTR_DAT_047d0898;
  while (PTR_DAT_047d0898 = (undefined *)piVar2, iVar1 != 0) {
    (**(code **)(**(long **)(*(long *)(puVar4 + 8) + (long)(iVar1 + -1) * 8) + 0x20))();
    iVar1 = *(int *)puVar4;
    piVar2 = (int *)PTR_DAT_047d0898;
    if (0 < iVar1) {
      *(int *)puVar4 = iVar1 + -1;
      iVar1 = iVar1 + -1;
      piVar2 = (int *)PTR_DAT_047d0898;
    }
  }
  iVar1 = *piVar2;
  puVar3 = (undefined8 *)PTR_DAT_047d1078;
  while (PTR_DAT_047d1078 = (undefined *)puVar3, iVar1 != 0) {
    (**(code **)(**(long **)(*(long *)(piVar2 + 2) + (long)(iVar1 + -1) * 8) + 0x20))();
    iVar1 = *piVar2;
    puVar3 = (undefined8 *)PTR_DAT_047d1078;
    if (0 < iVar1) {
      *piVar2 = iVar1 + -1;
      iVar1 = iVar1 + -1;
      puVar3 = (undefined8 *)PTR_DAT_047d1078;
    }
  }
  *(undefined8 *)PTR_DAT_047d0fc0 = 0;
  puVar5 = (undefined8 *)*puVar3;
  *puVar5 = 0;
  puVar5[1] = 0;
  *puVar3 = 0;
  FUN_007c9e44(PTR_DAT_047d1068);
  return;
}


