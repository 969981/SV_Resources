/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03099a80; name: FUN_03099a80
 */


void FUN_03099a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar3 = *(int *)(param_1 + 0xa8);
  if (0 < iVar3) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0xa0) + lVar7 * 4) != -1) {
        FUN_03099f90(param_1,param_2,*(long *)(param_1 + 0xb0) + lVar6,param_3);
        *(undefined4 *)
         (*(long *)(param_1 + 0x90) + (long)*(int *)(*(long *)(param_1 + 0xa0) + lVar7 * 4) * 4) =
             0xffffffff;
        iVar3 = *(int *)(param_1 + 0xa8);
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < iVar3);
  }
  puVar2 = PTR_DAT_047e4f38;
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar6;
  }
  if (*(long *)(lVar6 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  iVar3 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (0 < iVar3) {
    lVar8 = 0;
    lVar6 = 0;
    do {
      if ((*(int *)(param_1 + 0x108) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x100) + (long)((int)lVar6 + *(int *)(param_1 + 0x20))) & 1
          ) == 0)) {
        FUN_03099f90(param_1,param_2,*(long *)(param_1 + 0xd0) + lVar8,param_3);
        iVar3 = *(int *)puVar2;
        lVar5 = *(long *)(lVar7 + 0x1000b8);
        if (lVar5 == 0) {
          lVar5 = FUN_00e5d3b4();
          *(long *)(lVar7 + 0x1000b8) = lVar5;
        }
        if (*(long *)(lVar5 + (long)iVar3 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        iVar3 = *(int *)(param_1 + 0xd8);
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 < iVar3);
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar6 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x70) + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  puVar1 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)(param_1 + 0xbc)) && (*(long *)(param_1 + 0xb0) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0xb0),(ulong)*(uint *)(param_1 + 0xbc) << 4);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 200) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xcc)) && (*(long *)(param_1 + 0xc0) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0xc0),(ulong)*(uint *)(param_1 + 0xcc) * 0x14);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xdc)) && (*(long *)(param_1 + 0xd0) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0xd0),(ulong)*(uint *)(param_1 + 0xdc) << 4);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xec)) && (*(long *)(param_1 + 0xe0) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0xe0),(ulong)*(uint *)(param_1 + 0xec) * 0x14);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x80000000;
  iVar3 = *(int *)puVar2;
  lVar6 = *(long *)(lVar7 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar6;
  }
  if (*(long *)(lVar6 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xfc)) && (*(long *)(param_1 + 0xf0) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0xf0),(ulong)*(uint *)(param_1 + 0xfc) << 4);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x11c)) && (*(long *)(param_1 + 0x110) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x110),(ulong)*(uint *)(param_1 + 0x11c) << 1);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 300)) && (*(long *)(param_1 + 0x120) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x120),(ulong)*(uint *)(param_1 + 300) << 2);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x13c)) && (*(long *)(param_1 + 0x130) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x130),(ulong)*(uint *)(param_1 + 0x13c) << 2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14c)) && (*(long *)(param_1 + 0x140) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x140),(ulong)*(uint *)(param_1 + 0x14c) << 2);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x15c)) && (*(long *)(param_1 + 0x150) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,*(long *)(param_1 + 0x150),(ulong)*(uint *)(param_1 + 0x15c) << 2);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x80000000;
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) < iVar3) {
    FUN_03095450(param_1 + 0x100,PTR_PTR_047d1a50,(long)iVar3);
  }
  iVar4 = *(int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x108) != iVar3) {
    *(int *)(param_1 + 0x108) = iVar3;
    iVar4 = iVar3;
  }
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x100) + lVar7) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x108));
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x174) & 0x7fffffff) < iVar3) {
    FUN_02e9b320(param_1 + 0x168,PTR_PTR_047d1a50,(long)iVar3);
  }
  if (*(int *)(param_1 + 0x170) != iVar3) {
    *(int *)(param_1 + 0x170) = iVar3;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x168) + lVar7 * 4) = 0xffffffff;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_030924a0(param_1 + 0x188);
  return;
}


