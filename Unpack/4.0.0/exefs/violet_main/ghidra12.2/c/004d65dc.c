/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d65dc; name: FUN_004d65dc
 */


void FUN_004d65dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar3 = puVar3 + 1;
      FUN_004d7e0c(*puVar3);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    plVar4 = *(long **)(param_1 + 0x40);
    do {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
      if ((*(byte *)(lVar5 + 0x10) & 3) != 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      *(undefined4 *)(lVar5 + 0x10) = 0;
      if (((*(ulong *)(lVar5 + 8) & 1) != 0) &&
         (uVar2 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar2 + 8) != *(long *)(uVar2 + 0x10))) {
        FUN_00514600();
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while (pbVar6 = (byte *)*puVar3, (*pbVar6 & 1) != 0) {
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
        puVar3 = puVar3 + 1;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_004d66c4;
      }
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      puVar3 = puVar3 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
LAB_004d66c4:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar6 = *(byte **)(param_1 + 0x60);
      if ((*pbVar6 & 1) == 0) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x68);
      FUN_00523908(lVar5 + 0x10);
      uVar7 = (ulong)*(uint *)(lVar5 + 0x38);
      if (0 < (int)*(uint *)(lVar5 + 0x38)) {
        puVar3 = *(undefined8 **)(lVar5 + 0x40);
        do {
          puVar3 = puVar3 + 1;
          FUN_004e22f4(*puVar3);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined2 *)(lVar5 + 0x48) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if (((*(ulong *)(lVar5 + 8) & 1) != 0) &&
         (uVar7 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar7 + 8) != *(long *)(uVar7 + 0x10))) {
        FUN_00514600();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar7 + 8) == *(long *)(uVar7 + 0x10))) {
    return;
  }
  FUN_00514600();
  return;
}


