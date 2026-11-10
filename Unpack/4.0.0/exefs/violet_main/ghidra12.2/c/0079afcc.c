/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079afcc; name: FUN_0079afcc
 */


void FUN_0079afcc(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  (**(code **)(*param_1 + 0x360))();
  puVar2 = (undefined8 *)param_1[0x22e];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    param_1[0x22e] = 0;
  }
  puVar2 = (undefined8 *)param_1[0x22f];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_007bfaa0(puVar2);
    param_1[0x22f] = 0;
  }
  if (param_1[0x43] != 0) {
    (**(code **)(*param_1 + 0x248))(param_1);
    param_1[0x43] = 0;
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1);
    param_1[0x37] = 0;
  }
  if (param_1[0x32] != 0) {
    (**(code **)(*param_1 + 0x318))(param_1);
    param_1[0x32] = 0;
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*param_1 + 0x318))(param_1);
    param_1[0x31] = 0;
  }
  if (param_1[0x22b] != 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1);
    param_1[0x22b] = 0;
  }
  if (param_1[0x22c] != 0) {
    (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x22c] = 0;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(*param_1 + 600))(param_1);
    param_1[0x30] = 0;
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
    param_1[0x2e] = 0;
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
    param_1[0x2f] = 0;
  }
  if (param_1[0x2d] != 0) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    param_1[0x2d] = 0;
  }
  if (param_1[0x2c] != 0) {
    (**(code **)(*param_1 + 0x288))(param_1);
    param_1[0x2c] = 0;
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1);
    param_1[0x2b] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*param_1 + 0x2a8))(param_1);
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*param_1 + 0x278))(param_1);
    param_1[0x29] = 0;
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*param_1 + 0x268))(param_1);
    param_1[0x28] = 0;
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*param_1 + 0x298))(param_1);
    param_1[0x27] = 0;
  }
  lVar3 = param_1[0x26];
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    param_1[0x26] = 0;
  }
  if (param_1[0x4f] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x4f] = 0;
  }
  if (param_1[0x4e] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x4e] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x25] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x24] = 0;
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x23] = 0;
  }
  lVar3 = param_1[0x11];
  if (lVar3 != 0) {
    uVar1 = (ulong)*(ushort *)((long)param_1 + 0x114e);
    if (*(ushort *)((long)param_1 + 0x114e) == 0) {
LAB_0079b2e8:
      FUN_007bfae0(lVar3);
      FUN_007bfaa0(lVar3);
    }
    else {
      uVar4 = 0;
      do {
        if (*(long *)(lVar3 + uVar4 * 8) != 0) {
          (**(code **)(*param_1 + 0x238))(param_1);
          *(undefined8 *)(param_1[0x11] + uVar4 * 8) = 0;
          lVar3 = param_1[0x11];
          uVar1 = (ulong)*(ushort *)((long)param_1 + 0x114e);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      if (lVar3 != 0) goto LAB_0079b2e8;
    }
    param_1[0x11] = 0;
  }
  lVar3 = param_1[0x12];
  if (lVar3 == 0) {
    return;
  }
  uVar1 = (ulong)*(ushort *)((long)param_1 + 0x114e);
  if (*(ushort *)((long)param_1 + 0x114e) != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(lVar3 + uVar4 * 8) != 0) {
        (**(code **)(*param_1 + 0x238))(param_1);
        *(undefined8 *)(param_1[0x12] + uVar4 * 8) = 0;
        lVar3 = param_1[0x12];
        uVar1 = (ulong)*(ushort *)((long)param_1 + 0x114e);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    if (lVar3 == 0) goto LAB_0079b360;
  }
  FUN_007bfae0(lVar3);
  FUN_007bfaa0(lVar3);
LAB_0079b360:
  param_1[0x12] = 0;
  return;
}


