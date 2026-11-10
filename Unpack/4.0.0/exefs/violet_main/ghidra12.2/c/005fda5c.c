/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005fda5c; name: FUN_005fda5c
 */


void FUN_005fda5c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar2 = puVar2 + 1;
      FUN_0060f904(*puVar2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    do {
      while (pbVar3 = (byte *)*puVar2, (*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) goto LAB_005fdadc;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
LAB_005fdadc:
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x50) + 8);
    do {
      while (pbVar3 = (byte *)*puVar2, (*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        puVar2 = puVar2 + 1;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) goto LAB_005fdb2c;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
LAB_005fdb2c:
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x58);
  if (pbVar3 == PTR_DAT_047cba80) {
LAB_005fdb50:
    pbVar3 = *(byte **)(param_1 + 0x60);
  }
  else {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_005fdb50;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = *(byte **)(param_1 + 0x60);
  }
  if (pbVar3 != puVar1) {
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
      uVar4 = *(ulong *)(param_1 + 8);
      goto joined_r0x005fdba8;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar4 = *(ulong *)(param_1 + 8);
joined_r0x005fdba8:
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar4 = uVar4 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar4 + 8) & 1) == 0) {
    *(undefined2 *)(uVar4 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar4 + 0x18) = 0;
  *(undefined8 *)(uVar4 + 0x10) = 0;
  return;
}


