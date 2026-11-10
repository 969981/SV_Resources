/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea783c; name: FUN_00ea783c
 */


undefined8 FUN_00ea783c(long param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 2) {
    lVar7 = *(long *)(param_1 + 0x70);
    if (*(int *)(lVar7 + 0x15c) != 1) {
      return 0;
    }
    uVar4 = FUN_00ea79f4(lVar7);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    lVar6 = *(long *)(lVar7 + 0x108);
    if (lVar6 == 0) {
      return 0;
    }
    for (lVar3 = *(long *)(lVar6 + 0x38); lVar3 != *(long *)(lVar6 + 0x40); lVar3 = lVar3 + 0x40) {
      if (*(long *)(lVar3 + 8) == 0) {
        return 0;
      }
      if ((*(byte *)(*(long *)(lVar3 + 8) + 0x1e8) & 1) == 0) {
        return 0;
      }
    }
    if (*(long *)(lVar7 + 0x110) != 0) {
      lVar6 = *(long *)(*(long *)(lVar7 + 0x110) + 0x38);
      if (lVar6 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar6 + 0x1e8) & 1) == 0) {
        return 0;
      }
    }
    if (*(long *)(lVar7 + 0x118) != 0) {
      lVar7 = *(long *)(*(long *)(lVar7 + 0x118) + 0x38);
      if (lVar7 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar7 + 0x1e8) & 1) == 0) {
        return 0;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x90) = 1L << ((ulong)uVar2 & 0x3f) | *(ulong *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x84) < (int)uVar2) {
      *(uint *)(param_1 + 0x88) = uVar2 - 1;
      FUN_00ec80ec(*(undefined8 *)(param_1 + 0x70),1,uVar2 - 1,*(undefined8 *)(param_1 + 0x120),
                   *(undefined1 *)(param_1 + 0x82),param_1 + 0x130);
      return 0;
    }
    uVar5 = 3;
LAB_00ea78f8:
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    return 0;
  }
  if (iVar1 == 3) {
    uVar4 = FUN_00ea8ac8(param_1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar5 = 4;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 - 4U < 2) {
        return 1;
      }
      return 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x70) + 0x15c) == 1) {
      FUN_00ea7d2c(param_1);
      uVar5 = 2;
      goto LAB_00ea78f8;
    }
    if (*(int *)(*(long *)(param_1 + 0x70) + 0x15c) != 2) {
      return 0;
    }
    uVar5 = 5;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  return 1;
}


