/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00beb99c; name: FUN_00beb99c
 */


undefined4 FUN_00beb99c(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,"GetInt32","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) == 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"GetInt32",
                 "Field is repeated; the method requires a singular field.");
  }
  if ((0x28020U >> ((ulong)*(uint *)(param_3 + 0x3c) & 0x3f) & 1) == 0) {
    FUN_00beafb0(*(undefined8 *)(param_1 + 8),param_3,"GetInt32",1);
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    iVar2 = *(int *)(param_3 + 0x38);
    uVar1 = *(undefined4 *)(param_3 + 0x88);
    plVar7 = (long *)(param_2 + *(int *)(param_1 + 0x34) + 8);
    plVar8 = (long *)*plVar7;
    if (plVar8 == (long *)0x0) {
      return uVar1;
    }
    plVar6 = plVar7;
    do {
      if (iVar2 <= (int)plVar8[4]) {
        plVar6 = plVar8;
      }
      plVar8 = (long *)plVar8[(int)plVar8[4] < iVar2];
    } while (plVar8 != (long *)0x0);
    if (plVar6 == plVar7) {
      return uVar1;
    }
    if (iVar2 < (int)plVar6[4]) {
      return uVar1;
    }
    if ((*(byte *)((long)plVar6 + 0x32) & 1) == 0) {
      return (int)plVar6[5];
    }
    return uVar1;
  }
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
    iVar2 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
  }
  else {
    lVar3 = lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40) >> 4;
    uVar4 = lVar3 * -0x5555555555555555;
    if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                (-(uVar4 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar3 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      param_2 = *(long *)(param_1 + 0x18);
      piVar5 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 -
                                                         *(long *)(*(long *)(param_3 + 0x50) + 0x30)
                                                         ) >> 4) * 0x38e38e39) << 0x20) >> 0x1e));
      goto LAB_00bebb34;
    }
    iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar4;
  }
  piVar5 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
LAB_00bebb34:
  return *(undefined4 *)(param_2 + *piVar5);
}


