/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344e1a4; name: FUN_0344e1a4
 */


undefined8 FUN_0344e1a4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(uint *)(param_1 + 0x28) < 0xc) && (*(uint *)(param_1 + 0x2c) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x2c) - (ulong)*(uint *)(param_1 + 0x28)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x20),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x20) = lVar2;
    *(int *)(param_1 + 0x2c) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((*(uint *)(param_1 + 0x60) < 0xc) && (*(uint *)(param_1 + 100) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 100) - (ulong)*(uint *)(param_1 + 0x60)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x58),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x58) = lVar2;
    *(int *)(param_1 + 100) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((*(uint *)(param_1 + 0x98) < 0xc) && (*(uint *)(param_1 + 0x9c) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x9c) - (ulong)*(uint *)(param_1 + 0x98)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x90),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x90) = lVar2;
    *(int *)(param_1 + 0x9c) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((*(uint *)(param_1 + 0xd0) < 0xc) && (*(uint *)(param_1 + 0xd4) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0xd4) - (ulong)*(uint *)(param_1 + 0xd0)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 200),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 200) = lVar2;
    *(int *)(param_1 + 0xd4) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 200) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0xd0));
  *(undefined4 *)(param_1 + 0x110) = 0;
  if ((*(uint *)(param_1 + 0x108) < 0xc) && (*(uint *)(param_1 + 0x10c) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x10c) - (ulong)*(uint *)(param_1 + 0x108)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x100),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    *(int *)(param_1 + 0x10c) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x100) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((*(uint *)(param_1 + 0x140) < 0xc) && (*(uint *)(param_1 + 0x144) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x144) - (ulong)*(uint *)(param_1 + 0x140)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x138),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x138) = lVar2;
    *(int *)(param_1 + 0x144) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x138) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x180) = 0;
  if ((*(uint *)(param_1 + 0x178) < 0xc) && (*(uint *)(param_1 + 0x17c) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x17c) - (ulong)*(uint *)(param_1 + 0x178)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x170),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x170) = lVar2;
    *(int *)(param_1 + 0x17c) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x178) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x170) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if ((*(uint *)(param_1 + 0x1b0) < 0xc) && (*(uint *)(param_1 + 0x1b4) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x1b4) - (ulong)*(uint *)(param_1 + 0x1b0)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x1a8),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x1a8) = lVar2;
    *(int *)(param_1 + 0x1b4) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x1a8) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x1b0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((*(uint *)(param_1 + 0x1e8) < 0xc) && (*(uint *)(param_1 + 0x1ec) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x1ec) - (ulong)*(uint *)(param_1 + 0x1e8)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x1e0),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x1e0) = lVar2;
    *(int *)(param_1 + 0x1ec) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x1e0) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x1e8));
  *(undefined4 *)(param_1 + 0x228) = 0;
  if ((*(uint *)(param_1 + 0x220) < 0xc) && (*(uint *)(param_1 + 0x224) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x224) - (ulong)*(uint *)(param_1 + 0x220)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x218),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x218) = lVar2;
    *(int *)(param_1 + 0x224) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x220) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x218) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x220));
  *(undefined4 *)(param_1 + 0x260) = 0;
  if ((*(uint *)(param_1 + 600) < 0xc) && (*(uint *)(param_1 + 0x25c) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x25c) - (ulong)*(uint *)(param_1 + 600)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x250),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x250) = lVar2;
    *(int *)(param_1 + 0x25c) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 600) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x250) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 600));
  *(undefined4 *)(param_1 + 0x298) = 0;
  if ((*(uint *)(param_1 + 0x290) < 0xc) && (*(uint *)(param_1 + 0x294) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x294) - (ulong)*(uint *)(param_1 + 0x290)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x288),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x288) = lVar2;
    *(int *)(param_1 + 0x294) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x288) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x290));
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if ((*(uint *)(param_1 + 0x2c8) < 0xc) && (*(uint *)(param_1 + 0x2cc) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x2cc) - (ulong)*(uint *)(param_1 + 0x2c8)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x2c0),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x2c0) = lVar2;
    *(int *)(param_1 + 0x2cc) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x2c0) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x2c8));
  *(undefined4 *)(param_1 + 0x308) = 0;
  if ((*(uint *)(param_1 + 0x300) < 0xc) && (*(uint *)(param_1 + 0x304) < 0xb)) {
    lVar1 = ((ulong)*(uint *)(param_1 + 0x304) - (ulong)*(uint *)(param_1 + 0x300)) + 0xb;
    lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*(undefined8 *)(param_1 + 0x2f8),lVar1 * 8);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x2f8) = lVar2;
    *(int *)(param_1 + 0x304) = (int)lVar1;
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x300) = 0xb;
  do {
    *(undefined8 *)(*(long *)(param_1 + 0x2f8) + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0x300));
  return 1;
}


