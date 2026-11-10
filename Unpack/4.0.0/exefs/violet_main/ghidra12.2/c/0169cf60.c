/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169cf60; name: FUN_0169cf60
 */


undefined4
FUN_0169cf60(long param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x46) = 1;
  FUN_0169d290(param_1,0xe,param_7);
  if ((param_6 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar6 = FUN_015713f8(param_1,param_6);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar6 & 0xffffffff | 0xc00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0xd) {
      uVar9 = 0xc;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  if ((param_5 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar6 = FUN_015713f8(param_1,param_5);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar6 & 0xffffffff | 0xa00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0xb) {
      uVar9 = 10;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  if ((param_4 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar6 = FUN_015713f8(param_1,param_4);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar6 & 0xffffffff | 0x800000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 9) {
      uVar9 = 8;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  if ((param_3 != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar6 = FUN_015713f8(param_1,param_3);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar6 & 0xffffffff | 0x600000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 7) {
      uVar9 = 6;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  if ((param_2 != '\0') || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar7 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar7 + -1;
    *(char *)(lVar7 + -1) = param_2;
    lVar7 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar2 - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar7 - lVar2) + lVar4 & 0xffffffffU | 0x400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 5) {
      uVar9 = 4;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  uVar5 = FUN_01571a80(param_1,((int)uVar10 - (int)uVar3) + (int)uVar1);
  return uVar5;
}


