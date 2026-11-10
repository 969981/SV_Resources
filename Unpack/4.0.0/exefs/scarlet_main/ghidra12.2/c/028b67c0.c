/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b67c0; name: FUN_028b67c0
 */


undefined4
FUN_028b67c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,byte param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  FUN_018df678(param_1,0x12,param_9,0x200);
  FUN_018df678(param_1,0x10,param_8,0x2000);
  FUN_018df678(param_1,0xe,param_7,0x3000000);
  FUN_018df678(param_1,0xc,param_6,0x14000000);
  FUN_018df678(param_1,10,param_5,0x18000000);
  FUN_018df678(param_1,8,param_4,0x2000000);
  FUN_018df678(param_1,6,param_3,0x3000000);
  FUN_018df678(param_1,4,param_2,0x1000000);
  if (((param_10 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_10 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar2 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar2) + lVar4 & 0xffffffffU | 0x1400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 0x15) {
      uVar8 = 0x14;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  uVar5 = FUN_01571a80(param_1,((int)uVar1 - (int)uVar9) + (int)uVar3);
  return uVar5;
}


