/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a7a10; name: FUN_019a7a10
 */


uint FUN_019a7a10(long param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  piVar6 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x290) + 8) + 0x50)
                              );
  if (piVar6 == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar6;
    if (4 < iVar9) {
      iVar9 = 0;
    }
  }
  lVar7 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),iVar9);
  if (lVar7 != 0) {
    bVar2 = FUN_019a7b1c(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x290),iVar9);
    bVar1 = *(byte *)(lVar7 + 0x30);
    if (bVar2 < bVar1) {
      plVar8 = *(long **)(lVar7 + (ulong)bVar2 * 8);
      uVar3 = (**(code **)(*plVar8 + 0x208))(plVar8);
      uVar4 = bVar2 + 1;
      if (uVar4 == bVar1) {
        return uVar3 & 1;
      }
      uVar4 = (**(code **)(**(long **)(lVar7 + (ulong)(uVar4 & 0xff) * 8) + 0x208))();
      uVar3 = (uVar3 & 1) + (uVar4 & 1);
      for (uVar4 = bVar2 + 2; uVar4 != bVar1; uVar4 = uVar4 + 1) {
        uVar5 = (**(code **)(**(long **)(lVar7 + (ulong)(uVar4 & 0xff) * 8) + 0x208))();
        uVar3 = uVar3 + (uVar5 & 1);
      }
      return uVar3;
    }
  }
  return 0;
}


