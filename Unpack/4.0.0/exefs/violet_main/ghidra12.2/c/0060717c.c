/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060717c; name: FUN_0060717c
 */


void FUN_0060717c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar2 = puVar2 + 1;
      FUN_0060f904(*puVar2);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar2 = puVar2 + 1;
      FUN_0060ea14(*puVar2);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x40);
  if (pbVar3 != PTR_DAT_047cba80) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3 = *(byte **)(param_1 + 0x48);
      goto joined_r0x00607200;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x48);
joined_r0x00607200:
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6 & 1;
  puVar5 = (ulong *)(uVar6 & 0xfffffffffffffffe);
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if ((puVar5 == (ulong *)0x0) && (lVar7 = *(long *)(param_1 + 0x50), lVar7 != 0)) {
    FUN_0060d08c(lVar7);
    FUN_0049e790(PTR_LAB_047cba48,lVar7);
    uVar6 = *(ulong *)(param_1 + 8);
    uVar4 = uVar6 & 1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (uVar4 != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) != 0) {
      **(undefined1 **)(uVar6 + 0x18) = 0;
      *(undefined8 *)(uVar6 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar6 + 8) = 0;
  }
  return;
}


