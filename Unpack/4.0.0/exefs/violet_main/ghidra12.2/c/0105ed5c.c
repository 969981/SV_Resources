/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105ed5c; name: FUN_0105ed5c
 */


bool FUN_0105ed5c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = *(long **)(param_1 + 0x1d0);
  if (plVar5 != (long *)0x0) {
    do {
      FUN_0106041c(param_1 + 0x208,plVar5 + 2,plVar5 + 6);
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    plVar5 = (long *)*(long *)(param_1 + 0x1d0);
    while (plVar5 != (long *)0x0) {
      plVar7 = (long *)*plVar5;
      FUN_00e4ff18(plVar5 + 2);
      plVar6 = *(long **)(param_1 + 0x1d8);
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x90,8);
        plVar5 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0x90,8);
        plVar5 = plVar7;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x238);
  if (plVar5 != (long *)0x0) {
    do {
      FUN_0105f008(param_1,plVar5 + 6);
      FUN_0106041c(param_1 + 0x138,plVar5 + 2,plVar5 + 6);
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    plVar5 = (long *)*(long *)(param_1 + 0x238);
    while (plVar5 != (long *)0x0) {
      plVar7 = (long *)*plVar5;
      FUN_00e4ff18(plVar5 + 2);
      plVar6 = *(long **)(param_1 + 0x240);
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x90,8);
        plVar5 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0x90,8);
        plVar5 = plVar7;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x208) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x208) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  return *(long *)(param_1 + 0x1f8) == 0;
}


