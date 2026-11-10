/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0137d824; name: FUN_0137d824
 */


void FUN_0137d824(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + 0x14);
  FUN_0137e8b4(*(undefined8 *)(param_1 + 0xd0));
  FUN_0137deec(*(undefined8 *)(param_1 + 0x30));
  FUN_0137ddc8(*(undefined8 *)(param_1 + 0x50));
  FUN_0137dcb8(*(undefined8 *)(param_1 + 0x70));
  FUN_0137eb14(*(undefined8 *)(param_1 + 0x90));
  FUN_0137dcfc(*(undefined8 *)(param_1 + 0xb0));
  FUN_0137e2b8(*(undefined8 *)(param_1 + 0xf0),param_1);
  FUN_0137e548(*(undefined8 *)(param_1 + 0x110));
  memset((void *)(*(long *)(param_1 + 0x130) + 8),0,0x12c4);
  lVar1 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  FUN_0137e6e8(*(undefined8 *)(param_1 + 0x170));
  *(undefined4 *)(*(long *)(param_1 + 400) + 8) = 0;
  lVar1 = *(long *)(param_1 + 0x1b0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  lVar1 = *(long *)(param_1 + 0x1d0);
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x1f0) + 8) = 0;
  memset((void *)(*(long *)(param_1 + 0x210) + 8),0,0xd8);
  lVar1 = *(long *)(param_1 + 0x230);
  *(undefined8 *)(lVar1 + 8) = 0x505050500000000;
  *(undefined1 *)(lVar1 + 0x10) = 5;
  *(undefined1 *)(lVar1 + 0x13) = 0;
  *(undefined2 *)(lVar1 + 0x11) = 0;
  FUN_0137e0c8(*(undefined8 *)(param_1 + 0x250));
  *(undefined8 *)(*(long *)(param_1 + 0x270) + 8) = 0;
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (*(long *)(lVar1 + 0x60) != 0) {
    plVar8 = *(long **)(lVar1 + 0x38);
    if (plVar8 != (long *)0x0) {
      plVar9 = *(long **)(lVar1 + 0x40);
      plVar7 = (long *)*plVar8;
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x20,4);
      }
      else {
        FUN_00c48fe8(plVar9,plVar8,0x20,4);
      }
      while (plVar7 != (long *)0x0) {
        plVar8 = *(long **)(lVar1 + 0x40);
        plVar9 = (long *)*plVar7;
        uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,4);
          plVar7 = plVar9;
        }
        else {
          FUN_00c48fe8(plVar8,plVar7,0x20,4);
          plVar7 = plVar9;
        }
      }
    }
    uVar6 = *(ulong *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    if (uVar6 != 0) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 8) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 8) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 8) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(lVar1 + 8) + lVar5 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 8) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(lVar1 + 0x60) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x2f0);
  if (*(long *)(lVar1 + 0x60) != 0) {
    plVar8 = *(long **)(lVar1 + 0x38);
    if (plVar8 != (long *)0x0) {
      plVar9 = *(long **)(lVar1 + 0x40);
      plVar7 = (long *)*plVar8;
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x28,4);
      }
      else {
        FUN_00c48fe8(plVar9,plVar8,0x28,4);
      }
      while (plVar7 != (long *)0x0) {
        plVar8 = *(long **)(lVar1 + 0x40);
        plVar9 = (long *)*plVar7;
        uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x28,4);
          plVar7 = plVar9;
        }
        else {
          FUN_00c48fe8(plVar8,plVar7,0x28,4);
          plVar7 = plVar9;
        }
      }
    }
    uVar6 = *(ulong *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    if (uVar6 != 0) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 8) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 8) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar1 + 8) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(lVar1 + 8) + lVar5 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar1 + 8) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(lVar1 + 0x60) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x310);
  memcpy((void *)(lVar1 + 0x1c),(void *)(*(long *)(*(long *)(lVar1 + 8) + 0x38) + 0x514),0x4a);
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  (*(long **)(param_1 + 0x330))[2] = *(long *)(**(long **)(param_1 + 0x330) + 0x38) + 0x5b8;
  *(undefined8 *)(param_1 + 0x35d) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(undefined8 *)(lVar1 + 0x10) = 0x82a2b175229d6a5b;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x30) = *(undefined8 *)(param_2 + 8);
  return;
}


