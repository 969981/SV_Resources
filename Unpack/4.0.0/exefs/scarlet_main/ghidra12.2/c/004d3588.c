/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d3588; name: FUN_004d3588
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004d3588(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x18);
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
      pbVar3 = *(byte **)(param_1 + 0x20);
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
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x28);
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
    if ((uVar1 >> 3 & 1) != 0) {
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
    if ((uVar1 >> 4 & 1) != 0) {
      pbVar3 = *(byte **)(param_1 + 0x38);
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
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x40);
      FUN_00523908(lVar4 + 0x10);
      uVar5 = (ulong)*(uint *)(lVar4 + 0x38);
      if (0 < (int)*(uint *)(lVar4 + 0x38)) {
        puVar2 = *(undefined8 **)(lVar4 + 0x40);
        do {
          puVar2 = puVar2 + 1;
          FUN_004e22f4(*puVar2);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(undefined4 *)(lVar4 + 0x38) = 0;
      }
      if ((*(byte *)(lVar4 + 0x28) & 0x3f) != 0) {
        *(undefined4 *)(lVar4 + 0x50) = 0;
        *(undefined8 *)(lVar4 + 0x48) = 0;
      }
      *(undefined4 *)(lVar4 + 0x28) = 0;
      if (((*(ulong *)(lVar4 + 8) & 1) != 0) &&
         (uVar5 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar5 + 8) != *(long *)(uVar5 + 0x10))) {
        FUN_00514600();
      }
    }
  }
  if ((uVar1 & 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if ((uVar1 & 0x700) != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0x100000001;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar5 + 8) == *(long *)(uVar5 + 0x10))) {
    return;
  }
  FUN_00514600();
  return;
}


