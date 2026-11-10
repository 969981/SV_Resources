/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0070d194; name: FUN_0070d194
 */


void FUN_0070d194(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *local_50;
  long lStack_48;
  ulong local_40;
  long *local_38;
  long lStack_30;
  ulong local_28;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(lVar3 + 0x18);
  plVar2 = local_50;
  lVar8 = lStack_48;
  uVar7 = local_40;
  if (uVar4 < *(ulong *)(lVar3 + 8)) {
LAB_0070d1c0:
    plVar6 = *(long **)(*(long *)(lVar3 + 0x20) + uVar4 * 8);
    if (plVar6 == (long *)0x0) goto code_r0x0070d1c8;
    if (plVar6 == *(long **)(*(long *)(lVar3 + 0x20) + (uVar4 ^ 1) * 8)) {
      plVar6 = *(long **)(*plVar6 + 0x20);
    }
    while (local_50 = plVar6, local_40 = uVar4, lStack_48 = lVar3, local_50 != (long *)0x0) {
      FUN_0071e3bc(&local_38,param_1 + 0x10,&local_50);
      lVar3 = lStack_30;
      uVar4 = local_28;
      plVar6 = local_38;
      uVar7 = local_40;
      lVar8 = lStack_48;
      plVar2 = local_50;
    }
  }
LAB_0070d218:
  local_40 = uVar7;
  lStack_48 = lVar8;
  local_50 = plVar2;
  lVar3 = *(long *)(param_1 + 0x38);
  uVar4 = *(ulong *)(lVar3 + 0x18);
  plVar2 = local_50;
  lVar8 = lStack_48;
  uVar7 = local_40;
  if (uVar4 < *(ulong *)(lVar3 + 8)) {
LAB_0070d234:
    plVar6 = *(long **)(*(long *)(lVar3 + 0x20) + uVar4 * 8);
    if (plVar6 == (long *)0x0) goto code_r0x0070d23c;
    if (plVar6 == *(long **)(*(long *)(lVar3 + 0x20) + (uVar4 ^ 1) * 8)) {
      plVar6 = *(long **)(*plVar6 + 0x20);
    }
    while (local_50 = plVar6, local_40 = uVar4, lStack_48 = lVar3, local_50 != (long *)0x0) {
      FUN_0071e3bc(&local_38,param_1 + 0x28,&local_50);
      lVar3 = lStack_30;
      uVar4 = local_28;
      plVar6 = local_38;
      plVar2 = local_50;
      lVar8 = lStack_48;
      uVar7 = local_40;
    }
  }
LAB_0070d28c:
  local_40 = uVar7;
  lStack_48 = lVar8;
  local_50 = plVar2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  pbVar5 = *(byte **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar1 = PTR_DAT_047cba80;
  if (pbVar5 == PTR_DAT_047cba80) {
LAB_0070d2b8:
    pbVar5 = *(byte **)(param_1 + 0x90);
    if (pbVar5 == puVar1) goto LAB_0070d2ec;
LAB_0070d2e0:
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_0070d2ec;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0x98);
    if (pbVar5 != puVar1) goto LAB_0070d314;
LAB_0070d320:
    pbVar5 = *(byte **)(param_1 + 0xa0);
    if (pbVar5 == puVar1) goto LAB_0070d354;
LAB_0070d348:
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_0070d354;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0xa8);
  }
  else {
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_0070d2b8;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0x90);
    if (pbVar5 != puVar1) goto LAB_0070d2e0;
LAB_0070d2ec:
    pbVar5 = *(byte **)(param_1 + 0x98);
    if (pbVar5 == puVar1) goto LAB_0070d320;
LAB_0070d314:
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_0070d320;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0xa0);
    if (pbVar5 != puVar1) goto LAB_0070d348;
LAB_0070d354:
    pbVar5 = *(byte **)(param_1 + 0xa8);
  }
  if (pbVar5 != puVar1) {
    if ((*pbVar5 & 1) != 0) {
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5 = *(byte **)(param_1 + 0xb0);
      goto joined_r0x0070d390;
    }
    pbVar5[0] = 0;
    pbVar5[1] = 0;
  }
  pbVar5 = *(byte **)(param_1 + 0xb0);
joined_r0x0070d390:
  if (pbVar5 != puVar1) {
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
    }
  }
  uVar4 = *(ulong *)(param_1 + 8);
  plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xb8), lVar8 != 0)) {
    FUN_0026a1cc(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xc0), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 200), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xd0), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xd8), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xe0), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xe8), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  plVar2 = plVar6;
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar6;
  }
  if ((plVar2 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xf0), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    plVar6 = (long *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar7 = uVar4 & 1;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if ((uVar4 & 1) != 0) {
    plVar6 = (long *)*plVar6;
  }
  if ((plVar6 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xf8), lVar8 != 0)) {
    FUN_00513c68(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar4 = *(ulong *)(param_1 + 8);
    uVar7 = uVar4 & 1;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (uVar7 != 0) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar4 + 8) & 1) != 0) {
      **(undefined1 **)(uVar4 + 0x18) = 0;
      *(undefined8 *)(uVar4 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar4 + 8) = 0;
  }
  return;
code_r0x0070d1c8:
  uVar4 = uVar4 + 1;
  if (*(ulong *)(lVar3 + 8) == uVar4) goto LAB_0070d218;
  goto LAB_0070d1c0;
code_r0x0070d23c:
  uVar4 = uVar4 + 1;
  if (*(ulong *)(lVar3 + 8) == uVar4) goto LAB_0070d28c;
  goto LAB_0070d234;
}


