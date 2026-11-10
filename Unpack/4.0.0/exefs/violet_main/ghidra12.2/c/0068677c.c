/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068677c; name: FUN_0068677c
 */


void FUN_0068677c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar5 = FUN_0021d48c(puVar1);
    }
    else {
      lVar5 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar8 + 0x10);
    lVar4 = *(long *)(uVar8 + 0x18);
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      lVar4 = uVar8 + 9;
      uVar3 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar4,uVar3);
  }
  if (param_2 != PTR_DAT_047cf5a8) {
    puVar7 = *(undefined **)(param_2 + 0x10);
    if (puVar7 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar5 = FUN_0068cd98(puVar6);
        *(long *)(param_1 + 0x10) = lVar5;
        puVar7 = *(undefined **)(param_2 + 0x10);
      }
      puVar2 = PTR_DAT_047cf5c0;
      if (puVar7 != (undefined *)0x0) {
        puVar2 = puVar7;
      }
      FUN_006885fc(lVar5,puVar2);
    }
    puVar7 = *(undefined **)(param_2 + 0x18);
    if (puVar7 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar5 = FUN_0026ae18(puVar6);
        *(long *)(param_1 + 0x18) = lVar5;
        puVar7 = *(undefined **)(param_2 + 0x18);
      }
      puVar2 = PTR_DAT_047cc2c0;
      if (puVar7 != (undefined *)0x0) {
        puVar2 = puVar7;
      }
      FUN_00269254(lVar5,puVar2);
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  return;
}


