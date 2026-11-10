/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333b21c; name: FUN_0333b21c
 */


void FUN_0333b21c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_047d1a50;
  iVar5 = (int)param_1[10];
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_1[9] + lVar7 * 8);
      if (lVar8 != 0) {
        lVar4 = *(long *)(lVar8 + 0x60);
        if (lVar4 != 0) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,lVar4,
                     (-(*(ulong *)(lVar4 + 8) >> 0x1f & 1) & 0xfffffff000000000 |
                     (*(ulong *)(lVar4 + 8) & 0xffffffff) << 4) + 0x10);
        }
        *(undefined4 *)(lVar8 + 0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x5c)) && (*(long *)(lVar8 + 0x50) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar8 + 0x50),(ulong)*(uint *)(lVar8 + 0x5c) << 4);
        }
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined4 *)(lVar8 + 0x5c) = 0x80000000;
        *(undefined4 *)(lVar8 + 0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x4c)) && (*(long *)(lVar8 + 0x40) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar8 + 0x40),(ulong)*(uint *)(lVar8 + 0x4c) << 3);
        }
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined4 *)(lVar8 + 0x4c) = 0x80000000;
        *(undefined4 *)(lVar8 + 0x38) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x3c)) && (*(long *)(lVar8 + 0x30) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar8 + 0x30),(ulong)*(uint *)(lVar8 + 0x3c) << 3);
        }
        *(undefined8 *)(lVar8 + 0x30) = 0;
        *(undefined4 *)(lVar8 + 0x3c) = 0x80000000;
        *(undefined4 *)(lVar8 + 0x28) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + 0x2c)) && (*(long *)(lVar8 + 0x20) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar8 + 0x20),(ulong)*(uint *)(lVar8 + 0x2c) << 3);
        }
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined4 *)(lVar8 + 0x2c) = 0x80000000;
        iVar5 = (int)param_1[10];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  if (0 < (int)*(uint *)((long)param_1 + 0x154)) {
    lVar8 = 0;
    lVar7 = (ulong)*(uint *)((long)param_1 + 0x154) + 1;
    do {
      if (*(long *)(param_1[0x29] + lVar8) != -1) {
        *(undefined8 *)(param_1[0x29] + lVar8) = 0xffffffffffffffff;
      }
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x2a);
  *(uint *)(param_1 + 0x2a) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x29],(long)*(int *)((long)param_1 + 0x154) * 0x10 + 0x10);
  }
  param_1[0x29] = 0;
  param_1[0x2a] = -0x100000000;
  if (0 < (int)*(uint *)((long)param_1 + 0x144)) {
    lVar8 = 0;
    lVar7 = (ulong)*(uint *)((long)param_1 + 0x144) + 1;
    do {
      if (*(long *)(param_1[0x27] + lVar8) != -1) {
        *(undefined8 *)(param_1[0x27] + lVar8) = 0xffffffffffffffff;
      }
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[0x27] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x27],(long)*(int *)((long)param_1 + 0x144) * 0x10 + 0x10);
  }
  param_1[0x27] = 0;
  param_1[0x28] = -0x100000000;
  puVar2 = PTR_DAT_047d1a08;
  lVar7 = param_1[0x25];
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar3[8],lVar7,0);
    param_1[0x25] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  if ((int)param_1[0x24] != 0) {
    lVar8 = param_1[0x23];
    lVar7 = (long)(int)param_1[0x24] << 4;
    do {
      uVar6 = *(ulong *)(lVar8 + -0x10 + lVar7);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar6 - 1,0);
      }
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x124)) && (param_1[0x23] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x23],(ulong)*(uint *)((long)param_1 + 0x124) << 4);
  }
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 0x80000000;
  (**(code **)(puVar2 + 8))(puVar3[8],param_1[0x1d],0);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x1b],(ulong)*(uint *)((long)param_1 + 0xe4) << 3);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  if ((int)param_1[0x1a] != 0) {
    lVar8 = param_1[0x19];
    lVar7 = (long)(int)param_1[0x1a] << 5;
    do {
      uVar6 = *(ulong *)(lVar8 + -0x20 + lVar7);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar6 - 1,0);
      }
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x19],(ulong)*(uint *)((long)param_1 + 0xd4) << 5);
  }
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  param_1[0x19] = 0;
  if ((int)param_1[0x18] != 0) {
    lVar8 = param_1[0x17];
    lVar7 = (long)(int)param_1[0x18] << 5;
    do {
      uVar6 = *(ulong *)(lVar8 + -0x20 + lVar7);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar6 - 1,0);
      }
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x17],(ulong)*(uint *)((long)param_1 + 0xc4) << 5);
  }
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  param_1[0x17] = 0;
  if (0 < (int)*(uint *)((long)param_1 + 0xb4)) {
    lVar8 = 0;
    lVar7 = (ulong)*(uint *)((long)param_1 + 0xb4) + 1;
    do {
      if (*(long *)(param_1[0x15] + lVar8) != -1) {
        *(undefined8 *)(param_1[0x15] + lVar8) = 0xffffffffffffffff;
      }
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x16);
  *(uint *)(param_1 + 0x16) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0x15],(long)*(int *)((long)param_1 + 0xb4) * 0x10 + 0x10);
  }
  param_1[0x15] = 0;
  param_1[0x16] = -0x100000000;
  if ((int)param_1[0xe] != 0) {
    lVar8 = param_1[0xd];
    lVar7 = (long)(int)param_1[0xe] << 3;
    do {
      uVar6 = *(ulong *)(lVar8 + -8 + lVar7);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar6 - 1,0);
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  param_1[0xd] = 0;
  if (0 < (int)*(uint *)((long)param_1 + 100)) {
    lVar8 = 0;
    lVar7 = (ulong)*(uint *)((long)param_1 + 100) + 1;
    do {
      if (*(long *)(param_1[0xb] + lVar8) != -1) {
        *(undefined8 *)(param_1[0xb] + lVar8) = 0xffffffffffffffff;
      }
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[0xb],(long)*(int *)((long)param_1 + 100) * 0x10 + 0x10);
  }
  param_1[0xb] = 0;
  param_1[0xc] = -0x100000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar3 + 0x20))
              (puVar3,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *param_1 = (long)(PTR_DAT_047e5b60 + 0x10);
  FUN_031d98b8(param_1);
  return;
}


