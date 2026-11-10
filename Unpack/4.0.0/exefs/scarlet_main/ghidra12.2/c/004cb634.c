/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cb634; name: FUN_004cb634
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004cb634(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    do {
      while (pbVar4 = (byte *)*puVar3, (*pbVar4 & 1) != 0) {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) goto LAB_004cb690;
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
LAB_004cb690:
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x38);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar3 = puVar3 + 1;
      FUN_004d0064(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x50);
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar3 = puVar3 + 1;
      FUN_004d65dc(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x68);
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar3 = puVar3 + 1;
      FUN_004d8cf4(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      puVar3 = puVar3 + 1;
      FUN_004d3588(*puVar3);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0xb0);
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
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0xb8);
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
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0xc0);
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
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_004cb870(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0xd0);
      uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      if (0 < (int)*(uint *)(lVar5 + 0x18)) {
        puVar3 = *(undefined8 **)(lVar5 + 0x20);
        do {
          puVar3 = puVar3 + 1;
          FUN_004e3568(*puVar3);
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      if (((*(ulong *)(lVar5 + 8) & 1) != 0) &&
         (uVar2 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar2 + 8) != *(long *)(uVar2 + 0x10))) {
        FUN_00514600();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar2 + 8) == *(long *)(uVar2 + 0x10))) {
    return;
  }
  FUN_00514600();
  return;
}


