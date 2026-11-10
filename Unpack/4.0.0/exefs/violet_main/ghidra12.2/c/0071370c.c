/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071370c; name: FUN_0071370c
 */


void FUN_0071370c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047cba80;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 == PTR_DAT_047cba80) {
LAB_00713738:
    pbVar4 = *(byte **)(param_1 + 0x18);
    if (pbVar4 == puVar2) goto LAB_0071376c;
LAB_00713760:
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      goto LAB_0071376c;
    }
    **(undefined1 **)(pbVar4 + 0x10) = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4 = *(byte **)(param_1 + 0x20);
  }
  else {
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      goto LAB_00713738;
    }
    **(undefined1 **)(pbVar4 + 0x10) = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4 = *(byte **)(param_1 + 0x18);
    if (pbVar4 != puVar2) goto LAB_00713760;
LAB_0071376c:
    pbVar4 = *(byte **)(param_1 + 0x20);
  }
  if (pbVar4 != puVar2) {
    if ((*pbVar4 & 1) != 0) {
      **(undefined1 **)(pbVar4 + 0x10) = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      pbVar4 = *(byte **)(param_1 + 0x28);
      goto joined_r0x007137a8;
    }
    pbVar4[0] = 0;
    pbVar4[1] = 0;
  }
  pbVar4 = *(byte **)(param_1 + 0x28);
joined_r0x007137a8:
  if (pbVar4 != puVar2) {
    if ((*pbVar4 & 1) == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar4 + 0x10) = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
    }
  }
  uVar3 = *(ulong *)(param_1 + 8);
  plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  plVar1 = plVar5;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x30), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar1 = plVar5;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x38), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar1 = plVar5;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x40), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar1 = plVar5;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x48), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar6 = uVar3 & 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)*plVar5;
  }
  if ((plVar5 == (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x50), lVar7 != 0)) {
    FUN_00513c68(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar3 = *(ulong *)(param_1 + 8);
    uVar6 = uVar3 & 1;
  }
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (uVar6 != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar3 + 8) & 1) != 0) {
      **(undefined1 **)(uVar3 + 0x18) = 0;
      *(undefined8 *)(uVar3 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar3 + 8) = 0;
  }
  return;
}


