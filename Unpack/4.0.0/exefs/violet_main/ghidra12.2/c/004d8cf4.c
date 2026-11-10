/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d8cf4; name: FUN_004d8cf4
 */


void FUN_004d8cf4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar2 = puVar2 + 1;
      FUN_004d9f28(*puVar2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x30);
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
    if ((uVar1 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      FUN_00523908(lVar5 + 0x10);
      uVar4 = (ulong)*(uint *)(lVar5 + 0x38);
      if (0 < (int)*(uint *)(lVar5 + 0x38)) {
        puVar2 = *(undefined8 **)(lVar5 + 0x40);
        do {
          puVar2 = puVar2 + 1;
          FUN_004e22f4(*puVar2);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        *(undefined4 *)(lVar5 + 0x38) = 0;
      }
      *(undefined1 *)(lVar5 + 0x48) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 0;
      if (((*(ulong *)(lVar5 + 8) & 1) != 0) &&
         (uVar4 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar4 + 8) != *(long *)(uVar4 + 0x10))) {
        FUN_00514600();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar4 + 8) == *(long *)(uVar4 + 0x10))) {
    return;
  }
  FUN_00514600();
  return;
}


