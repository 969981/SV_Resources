/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ed9e0; name: FUN_034ed9e0
 */


undefined8 FUN_034ed9e0(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_50;
  undefined2 local_48;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0xa0) != 0) {
    lVar6 = *(long *)(**(long **)(param_1 + 0x98) + 0x70);
    if ((lVar6 != 0) && (uVar2 = (ulong)*(uint *)(lVar6 + 0x18), *(uint *)(lVar6 + 0x18) != 0)) {
      uVar5 = *(undefined8 *)(**(long **)(param_1 + 0x98) + 0x68);
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar4 = lVar3;
      do {
        if (*(long *)(lVar4 + 0x18) == param_2) {
          uVar1 = FUN_034f3918(uVar1,lVar4 + 8,uVar5);
          if ((uVar1 & 1) == 0) {
            return 1;
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar3 + uVar2 * 0x20);
    }
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar6 = *(long *)(**(long **)(param_1 + 200) + 0x70);
    if ((lVar6 != 0) && (uVar2 = (ulong)*(uint *)(lVar6 + 0x18), *(uint *)(lVar6 + 0x18) != 0)) {
      uVar5 = *(undefined8 *)(**(long **)(param_1 + 200) + 0x68);
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar4 = lVar3;
      do {
        if (*(long *)(lVar4 + 0x18) == param_2) {
          uVar1 = FUN_034f3918(uVar1,lVar4 + 8,uVar5);
          if ((uVar1 & 1) == 0) {
            return 1;
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar3 + uVar2 * 0x20);
    }
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    lVar6 = *(long *)(**(long **)(param_1 + 0xf8) + 0x70);
    if ((lVar6 != 0) && (uVar2 = (ulong)*(uint *)(lVar6 + 0x18), *(uint *)(lVar6 + 0x18) != 0)) {
      uVar5 = *(undefined8 *)(**(long **)(param_1 + 0xf8) + 0x68);
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar4 = lVar3;
      do {
        if (*(long *)(lVar4 + 0x18) == param_2) {
          uVar1 = FUN_034f3918(uVar1,lVar4 + 8,uVar5);
          if ((uVar1 & 1) == 0) {
            return 1;
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar3 + uVar2 * 0x20);
    }
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    lVar6 = *(long *)(**(long **)(param_1 + 0x128) + 0x70);
    if ((lVar6 != 0) && (uVar2 = (ulong)*(uint *)(lVar6 + 0x18), *(uint *)(lVar6 + 0x18) != 0)) {
      uVar5 = *(undefined8 *)(**(long **)(param_1 + 0x128) + 0x68);
      lVar3 = *(long *)(lVar6 + 0x10);
      lVar4 = lVar3;
      do {
        if (*(long *)(lVar4 + 0x18) == param_2) {
          uVar1 = FUN_034f3918(uVar1,lVar4 + 8,uVar5);
          if ((uVar1 & 1) == 0) {
            return 1;
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar3 + uVar2 * 0x20);
    }
  }
  if ((((*(long *)(param_1 + 0x60) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0xf8), lVar6 != 0)) &&
      (*(int *)(lVar6 + 4) != 0)) &&
     (uVar1 = (ulong)*(uint *)(param_1 + 0x188), *(uint *)(param_1 + 0x188) != 0)) {
    lVar4 = *(long *)(param_1 + 0x180);
    lVar6 = lVar4;
    do {
      if (*(long *)(lVar6 + 0x18) == param_2) {
        local_50 = (long *)0x0;
        if (*(long *)(param_1 + 0x60) == 0) {
          local_50 = (long *)0x0;
          local_48 = 0;
        }
        else {
          FUN_03474a5c(*(long *)(param_1 + 0x60),&local_50);
        }
        uVar1 = FUN_034f3918(param_2,lVar6 + 8,*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x60));
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x18))();
        }
        if ((uVar1 & 1) == 0) {
          return 1;
        }
        lVar4 = *(long *)(param_1 + 0x180);
        uVar1 = (ulong)*(uint *)(param_1 + 0x188);
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != lVar4 + uVar1 * 0x20);
  }
  return 0;
}


