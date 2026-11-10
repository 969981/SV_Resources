/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e7520; name: FUN_029e7520
 */


undefined4 FUN_029e7520(long param_1,undefined8 param_2,byte param_3)

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
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x46) = 1;
  FUN_018df678(param_1,4,param_2,0);
  if (((param_3 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_3 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar2 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar2) + lVar4 & 0xffffffffU | 0x600000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 7) {
      uVar8 = 6;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  uVar5 = FUN_01571a80(param_1,((int)uVar9 - (int)uVar3) + (int)uVar1);
  return uVar5;
}


