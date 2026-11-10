/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060ae30; name: FUN_0060ae30
 */


void FUN_0060ae30(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar3 = puVar3 + 1;
      FUN_0060f904(*puVar3);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar3 = puVar3 + 1;
      FUN_0060ea14(*puVar3);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar2 = PTR_DAT_047cba80;
  pbVar4 = *(byte **)(param_1 + 0x40);
  if (pbVar4 != PTR_DAT_047cba80) {
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
      pbVar4 = *(byte **)(param_1 + 0x48);
      goto joined_r0x0060aeb4;
    }
    pbVar4[0] = 0;
    pbVar4[1] = 0;
  }
  pbVar4 = *(byte **)(param_1 + 0x48);
joined_r0x0060aeb4:
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
  uVar7 = *(ulong *)(param_1 + 8);
  plVar5 = (long *)(uVar7 & 0xfffffffffffffffe);
  plVar1 = plVar5;
  if ((uVar7 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0x50), lVar8 != 0)) {
    FUN_0060c7e0(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar7 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar7 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  plVar1 = plVar5;
  if ((uVar7 & 1) != 0) {
    plVar1 = (long *)*plVar5;
  }
  if ((plVar1 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0x58), lVar8 != 0)) {
    FUN_0060d08c(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar7 = *(ulong *)(param_1 + 8);
    plVar5 = (long *)(uVar7 & 0xfffffffffffffffe);
  }
  uVar6 = uVar7 & 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((uVar7 & 1) != 0) {
    plVar5 = (long *)*plVar5;
  }
  if ((plVar5 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0x60), lVar8 != 0)) {
    FUN_00264004(lVar8);
    FUN_0049e790(PTR_LAB_047cba48,lVar8);
    uVar7 = *(ulong *)(param_1 + 8);
    uVar6 = uVar7 & 1;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (uVar6 != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar7 + 8) & 1) != 0) {
      **(undefined1 **)(uVar7 + 0x18) = 0;
      *(undefined8 *)(uVar7 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar7 + 8) = 0;
  }
  return;
}


