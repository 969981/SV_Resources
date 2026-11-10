/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033670d0; name: FUN_033670d0
 */


undefined4 FUN_033670d0(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  uVar3 = *param_1;
  puVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    puVar4 = param_1;
    do {
      puVar4 = (ulong *)puVar4[1];
    } while ((*puVar4 & 1) == 0);
    if (param_1 == (ulong *)0x0) {
      return 0;
    }
    if ((puVar4[2] & 0x1f) != 8) {
      return 0;
    }
    if ((uVar3 & 1) == 0) {
      do {
        puVar2 = (ulong *)puVar2[1];
      } while ((*puVar2 & 1) == 0);
    }
  }
  else if ((param_1[2] & 0x1f) != 8) {
    return 0;
  }
  puVar4 = param_1;
  if ((puVar2[2] & 0x1f) != 8) {
    puVar4 = (ulong *)0x0;
  }
  while (((byte)*puVar4 >> 1 & 1) == 0) {
    puVar4 = (ulong *)puVar4[1];
    if (puVar4 == (ulong *)0x0) {
      return 0;
    }
  }
  if (puVar4[3] == 0) {
    return 0;
  }
  puVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    do {
      puVar2 = (ulong *)puVar2[1];
    } while ((*puVar2 & 1) == 0);
  }
  puVar4 = param_1;
  if ((puVar2[2] & 0x1f) != 8) {
    puVar4 = (ulong *)0x0;
  }
  do {
    if (((byte)*puVar4 >> 1 & 1) != 0) {
      pbVar5 = (byte *)puVar4[3];
      goto LAB_033671a0;
    }
    puVar4 = (ulong *)puVar4[1];
  } while (puVar4 != (ulong *)0x0);
  pbVar5 = (byte *)0x0;
LAB_033671a0:
  pbVar6 = pbVar5;
  if ((*pbVar5 & 1) == 0) {
    do {
      pbVar6 = *(byte **)(pbVar6 + 8);
    } while ((*pbVar6 & 1) == 0);
  }
  if (pbVar5 == (byte *)0x0) {
    return 0;
  }
  if ((*(ulong *)(pbVar6 + 0x10) & 0x1f) != 5) {
    return 0;
  }
  puVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    do {
      puVar2 = (ulong *)puVar2[1];
    } while ((*puVar2 & 1) == 0);
  }
  if ((puVar2[2] & 0x1f) != 8) {
    param_1 = (ulong *)0x0;
  }
  do {
    if ((*param_1 & 1) != 0) {
      uVar1 = 0;
      if (param_1 != (ulong *)0x0) {
        uVar1 = (uint)(param_1[2] >> 8);
      }
      goto LAB_03367230;
    }
    param_1 = (ulong *)param_1[1];
  } while (param_1 != (ulong *)0x0);
  uVar1 = 0;
LAB_03367230:
  uVar1 = uVar1 >> 2 | uVar1 << 0x1e;
  if (uVar1 - 1 < 4) {
    return 1;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return 0;
}


