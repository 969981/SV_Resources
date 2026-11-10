/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006121b0; name: FUN_006121b0
 */


void FUN_006121b0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  
  puVar1 = PTR_DAT_047cba80;
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar4 = *(long **)(param_1 + 0x20);
    do {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
      pbVar7 = *(byte **)(lVar5 + 0x10);
      if (pbVar7 == puVar1) {
LAB_00612208:
        pbVar7 = *(byte **)(lVar5 + 0x18);
        if (pbVar7 == puVar1) goto LAB_0061223c;
LAB_00612230:
        if ((*pbVar7 & 1) == 0) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          goto LAB_0061223c;
        }
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        pbVar7 = *(byte **)(lVar5 + 0x20);
        if (pbVar7 != puVar1) goto LAB_00612264;
LAB_00612270:
        *(undefined8 *)(lVar5 + 0x28) = 0;
        uVar6 = *(ulong *)(lVar5 + 8);
      }
      else {
        if ((*pbVar7 & 1) == 0) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          goto LAB_00612208;
        }
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        pbVar7 = *(byte **)(lVar5 + 0x18);
        if (pbVar7 != puVar1) goto LAB_00612230;
LAB_0061223c:
        pbVar7 = *(byte **)(lVar5 + 0x20);
        if (pbVar7 == puVar1) goto LAB_00612270;
LAB_00612264:
        if ((*pbVar7 & 1) == 0) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          goto LAB_00612270;
        }
        **(undefined1 **)(pbVar7 + 0x10) = 0;
        pbVar7[8] = 0;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        uVar6 = *(ulong *)(lVar5 + 8);
      }
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar6 + 8) & 1) == 0) {
          *(undefined2 *)(uVar6 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar6 + 0x18) = 0;
          *(undefined8 *)(uVar6 + 0x10) = 0;
        }
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pbVar7 = *(byte **)(param_1 + 0x28);
  if (pbVar7 != puVar1) {
    if ((*pbVar7 & 1) == 0) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar7 + 0x10) = 0;
      pbVar7[8] = 0;
      pbVar7[9] = 0;
      pbVar7[10] = 0;
      pbVar7[0xb] = 0;
      pbVar7[0xc] = 0;
      pbVar7[0xd] = 0;
      pbVar7[0xe] = 0;
      pbVar7[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar4 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar4 = (long *)*plVar3;
  }
  if ((plVar4 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) {
    FUN_00613648(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar4 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar4 = (long *)*plVar3;
  }
  if ((plVar4 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) {
    FUN_004eb088(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar4 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar4 = (long *)*plVar3;
  }
  if ((plVar4 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x40), lVar5 != 0)) {
    FUN_00513c68(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar6 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if ((plVar3 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x48), lVar5 != 0)) {
    FUN_004eb088(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar6 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (uVar6 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


