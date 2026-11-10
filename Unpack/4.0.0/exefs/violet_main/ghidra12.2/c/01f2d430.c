/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f2d430; name: FUN_01f2d430
 */


undefined4 FUN_01f2d430(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x46) = 1;
  if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x50) != '\0')) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined8 *)(param_1 + 0x48) = 1;
    }
    lVar6 = lVar3;
    if (lVar3 == *(long *)(param_1 + 0x38)) {
      FUN_0157184c(param_1,1);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar6 + -1;
    *(byte *)(lVar6 + -1) = param_2 & 1;
    lVar6 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    puVar7 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(lVar2 - (long)puVar7) < 8) {
      FUN_0157184c(param_1,8);
      puVar7 = *(ulong **)(param_1 + 0x38);
    }
    *puVar7 = (lVar6 - lVar2) + lVar4 & 0xffffffffU | 0x400000000;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    uVar8 = *(ushort *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (uVar8 < 5) {
      uVar8 = 4;
    }
    *(ushort *)(param_1 + 0x44) = uVar8;
  }
  uVar5 = FUN_01571a80(param_1,((int)uVar9 - (int)lVar3) + (int)uVar1);
  return uVar5;
}


