/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b72f0; name: FUN_028b72f0
 */


undefined4
FUN_028b72f0(undefined1 param_1 [16],long param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ushort uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x46) = 1;
  FUN_015c8088(param_1,0x41f00000,param_2,0x10);
  if ((param_8 != 1) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_2,param_8);
    puVar5 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_2,8);
      puVar5 = *(ulong **)(param_2 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0xe00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar6 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar6 < 0xf) {
      uVar6 = 0xe;
    }
    *(ushort *)(param_2 + 0x44) = uVar6;
  }
  if ((param_7 != 1) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_2,param_7);
    puVar5 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_2,8);
      puVar5 = *(ulong **)(param_2 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0xc00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar6 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar6 < 0xd) {
      uVar6 = 0xc;
    }
    *(ushort *)(param_2 + 0x44) = uVar6;
  }
  if ((param_6 != 3) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_2,param_6);
    puVar5 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_2,8);
      puVar5 = *(ulong **)(param_2 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0xa00000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar6 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar6 < 0xb) {
      uVar6 = 10;
    }
    *(ushort *)(param_2 + 0x44) = uVar6;
  }
  if ((param_5 != 2) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_2,param_5);
    puVar5 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_2,8);
      puVar5 = *(ulong **)(param_2 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0x800000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar6 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    *(ushort *)(param_2 + 0x44) = uVar6;
  }
  if ((param_4 != 2) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_2,param_4);
    puVar5 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_2,8);
      puVar5 = *(ulong **)(param_2 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0x600000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar6 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar6 < 7) {
      uVar6 = 6;
    }
    *(ushort *)(param_2 + 0x44) = uVar6;
  }
  if ((param_3 != 3) || (*(char *)(param_2 + 0x50) != '\0')) {
    uVar4 = FUN_01692a74(param_2,param_3);
    puVar5 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar5) < 8) {
      FUN_0157184c(param_2,8);
      puVar5 = *(ulong **)(param_2 + 0x38);
    }
    *puVar5 = uVar4 & 0xffffffff | 0x400000000;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    uVar6 = *(ushort *)(param_2 + 0x44);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (uVar6 < 5) {
      uVar6 = 4;
    }
    *(ushort *)(param_2 + 0x44) = uVar6;
  }
  uVar3 = FUN_01571a80(param_2,((int)uVar7 - (int)uVar2) + (int)uVar1);
  return uVar3;
}


