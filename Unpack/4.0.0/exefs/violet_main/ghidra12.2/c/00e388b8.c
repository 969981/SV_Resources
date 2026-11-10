/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e388b8; name: FUN_00e388b8
 */


undefined2 FUN_00e388b8(long param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (*(ushort *)(lVar3 + 2) <= param_2) {
    if (*(char *)(param_3 + 0x54) == '\0') {
      return 0;
    }
    **(undefined2 **)(param_3 + 0x30) = 0;
    *(undefined2 *)(param_3 + 0x52) = 0;
    return 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (*(undefined4 *)(param_1 + 0x60) = 0, *(int *)(param_1 + 0x2c) != 0)) {
    uVar1 = (ulong)*(uint *)(lVar3 + 0xc);
    if (*(char *)(param_1 + 0xc0) == '\0') {
      *(ulong *)(param_1 + 0x70) = uVar1 + lVar3;
    }
    else {
      FUN_00e38c60(param_1,param_1 + 0x30,uVar1,*(undefined8 *)(param_1 + 0x70),4);
      FUN_00e38c60(param_1,param_1 + 0x30,uVar1,*(undefined4 **)(param_1 + 0x70),
                   **(undefined4 **)(param_1 + 0x70));
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar4 = (uint *)(param_1 + 0x78);
    FUN_00e38c60(param_1,param_1 + 0x30,
                 *(int *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x60) * 4 + 0xc) +
                 (param_2 << 3 | 4),puVar4,8);
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar5 = (ulong)*(ushort *)(param_1 + 0x7c) << 1;
      lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),lVar5,8);
      if (lVar3 != 0) {
        FUN_00e38c60(param_1,param_1 + 0x30,
                     *(int *)(param_1 + 0x78) +
                     *(int *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x60) * 4 + 0xc
                             ),lVar3,lVar5);
        FUN_00e38afc(param_1,lVar3,*(undefined2 *)(param_1 + 0x7c),param_2,param_3);
        plVar6 = *(long **)(param_1 + 8);
        uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar5,8);
        }
        else {
          FUN_00c48fe8(plVar6,lVar3,lVar5,8);
        }
      }
      goto LAB_00e38914;
    }
    lVar3 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x70);
    puVar4 = (uint *)(lVar3 + (ulong)param_2 * 8 + 4);
  }
  FUN_00e38afc(param_1,lVar3 + (ulong)*puVar4,(short)puVar4[1],param_2,param_3);
LAB_00e38914:
  return *(undefined2 *)((long)puVar4 + 6);
}


