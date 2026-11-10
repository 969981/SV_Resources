/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018b7f6c; name: FUN_018b7f6c
 */


void FUN_018b7f6c(long param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ushort uVar8;
  ulong uVar9;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  uVar3 = -((*(int *)(param_1 + 0x20) - (int)lVar6) + *(int *)(param_1 + 0x28));
  uVar9 = (ulong)uVar3 & 3;
  if ((ulong)(lVar6 - *(long *)(param_1 + 0x38)) < uVar9) {
    FUN_0157184c(param_1,uVar9);
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar9);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
  }
  else {
    puVar4 = (undefined1 *)(lVar6 - uVar9);
    *(undefined1 **)(param_1 + 0x30) = puVar4;
    if ((uVar3 & 3) == 0) goto LAB_018b7fc8;
  }
  *puVar4 = 0;
  if ((uVar9 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar9 != 2)) {
    uVar5 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar5) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar9 != uVar5);
  }
LAB_018b7fc8:
  lVar6 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar6 - *(long *)(param_1 + 0x38)) < 0x68) {
    FUN_0157184c(param_1,0x68);
    lVar6 = *(long *)(param_1 + 0x30);
  }
  *(void **)(param_1 + 0x30) = (void *)(lVar6 + -0x68);
  memcpy((void *)(lVar6 + -0x68),param_2,0x68);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  puVar7 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar1 - (long)puVar7) < 8) {
    FUN_0157184c(param_1,8);
    puVar7 = *(ulong **)(param_1 + 0x38);
  }
  *puVar7 = (lVar6 - lVar1) + lVar2 & 0xffffffffU | 0x400000000;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  uVar8 = *(ushort *)(param_1 + 0x44);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (uVar8 < 5) {
    uVar8 = 4;
  }
  *(ushort *)(param_1 + 0x44) = uVar8;
  return;
}


