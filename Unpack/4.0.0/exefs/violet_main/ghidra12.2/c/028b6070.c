/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b6070; name: FUN_028b6070
 */


undefined4
FUN_028b6070(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,byte param_7,undefined4 param_8,int param_9,
            int param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,int param_14,
            undefined1 param_15,int param_16,undefined4 param_17,byte param_18,undefined4 param_19)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ushort uVar9;
  undefined8 uVar10;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  FUN_018df678(param_1,10,param_5,0x438);
  FUN_018df678(param_1,8,param_4,0x780);
  FUN_028b7678(param_1,param_19);
  FUN_028b77d8(param_1,param_17);
  if ((param_16 != 3) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_1,param_16);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x2000000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0x21) {
      uVar9 = 0x20;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  if ((param_14 != 0x800) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_1,param_14);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x1c00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0x1d) {
      uVar9 = 0x1c;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  FUN_0169d290(param_1,0x1a,param_13);
  FUN_028b7938(param_1,param_12);
  FUN_028b7a94(param_1,param_11);
  if ((param_10 != 4) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_1,param_10);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x1400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0x15) {
      uVar9 = 0x14;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  if ((param_9 != 0x800) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_1,param_9);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = uVar4 & 0xffffffff | 0x1200000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0x13) {
      uVar9 = 0x12;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  FUN_028b7bf4(param_1,param_8);
  FUN_028b7d50(param_1,param_3);
  FUN_028b7eac(param_1,param_2);
  if (((param_18 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar7 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_18 & 1;
    lVar7 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0x2400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0x25) {
      uVar9 = 0x24;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  FUN_01a04714(param_1,0x1e,param_15,1);
  if (((param_7 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar7 = *(long *)(param_1 + 0x30);
    if (lVar7 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar7 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar7 + -1;
    *(byte *)(lVar7 + -1) = param_7 & 1;
    lVar7 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    puVar8 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar1 - (long)puVar8) < 8) {
      FUN_0157184c(param_1,8);
      puVar8 = *(ulong **)(param_1 + 0x38);
    }
    *puVar8 = (lVar7 - lVar1) + lVar2 & 0xffffffffU | 0xe00000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar9 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar9 < 0xf) {
      uVar9 = 0xe;
    }
    *(ushort *)(param_1 + 0x44) = uVar9;
  }
  FUN_01a04714(param_1,0xc,param_6,1);
  uVar3 = FUN_01571a80(param_1,((int)uVar5 - (int)uVar10) + (int)uVar6);
  return uVar3;
}


