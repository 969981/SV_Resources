/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004daa7c; name: FUN_004daa7c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004daa7c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  uVar9 = *(ulong *)(param_2 + 8);
  puVar1 = (ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar6 = FUN_00264e54(puVar1);
    }
    else {
      lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar6,(uVar9 & 0xfffffffffffffffe) + 8);
  }
  puVar4 = PTR_DAT_047cba80;
  uVar5 = *(uint *)(param_2 + 0x10);
  if ((uVar5 & 0x3f) != 0) {
    if ((uVar5 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      plVar3 = (long *)(param_1 + 0x18);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar10 = (undefined *)*plVar3;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        puVar10 = (undefined *)*plVar3;
      }
      if (puVar10 == puVar4) {
        FUN_001fcdc8(plVar3,puVar7);
      }
      else {
        FUN_001fcec0(puVar10,uVar8);
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar2 = (undefined8 *)(param_1 + 0x20);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar10 = (undefined *)*puVar2;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        puVar10 = (undefined *)*puVar2;
      }
      if (puVar10 == puVar4) {
        FUN_001fcdc8(puVar2,puVar7);
      }
      else {
        FUN_001fcec0(puVar10,uVar8);
      }
    }
    if ((uVar5 >> 2 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      plVar3 = (long *)(param_1 + 0x28);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar10 = (undefined *)*plVar3;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        puVar10 = (undefined *)*plVar3;
      }
      if (puVar10 == puVar4) {
        FUN_001fcdc8(plVar3,puVar7);
      }
      else {
        FUN_001fcec0(puVar10,uVar8);
      }
    }
    if ((uVar5 >> 3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_004e73d0(puVar7);
        *(long *)(param_1 + 0x30) = lVar6;
      }
      puVar4 = PTR_DAT_047cd8f8;
      if (*(undefined **)(param_2 + 0x30) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_2 + 0x30);
      }
      FUN_004dac7c(lVar6,puVar4);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar5;
  }
  return;
}


