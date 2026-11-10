/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bba77c; name: FUN_00bba77c
 */


void FUN_00bba77c(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(uint *)(param_1 + 0x10) & 3) != 0) {
    if (((*(uint *)(param_1 + 0x10) & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if (((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x20), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xe00) != 0) {
    if (((uVar1 >> 9 & 1) != 0) && (*(long *)(param_1 + 0xc0) != 0)) {
      FUN_00bbaa08();
      uVar1 = *(uint *)(param_1 + 0x10);
    }
    if (((uVar1 >> 10 & 1) != 0) && (lVar4 = *(long *)(param_1 + 200), lVar4 != 0)) {
      uVar5 = (ulong)*(uint *)(lVar4 + 0x20);
      if (0 < (int)*(uint *)(lVar4 + 0x20)) {
        puVar3 = *(undefined8 **)(lVar4 + 0x28);
        do {
          puVar3 = puVar3 + 1;
          (**(code **)(*(long *)*puVar3 + 0x38))();
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        *(undefined4 *)(lVar4 + 0x20) = 0;
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
        if (*(long *)(*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe) != 0) {
          FUN_00bfee44();
        }
      }
    }
    if (((*(byte *)(param_1 + 0x11) >> 3 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0xd0), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    do {
      puVar3 = puVar3 + 1;
      pbVar2 = (byte *)*puVar3;
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x68)) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x80);
  if (0 < (int)*(uint *)(param_1 + 0x80)) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x98);
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    puVar3 = *(undefined8 **)(param_1 + 0xa0);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0xb0);
  if (0 < (int)*(uint *)(param_1 + 0xb0)) {
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    if (*(long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) != 0) {
      FUN_00bfee44();
      return;
    }
  }
  return;
}


