/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c7f20; name: FUN_015c7f20
 */


void FUN_015c7f20(long param_1,ushort param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  uVar4 = -((*(int *)(param_1 + 0x20) - (int)lVar7) + *(int *)(param_1 + 0x28));
  uVar9 = (ulong)uVar4 & 3;
  if ((ulong)(lVar7 - *(long *)(param_1 + 0x38)) < uVar9) {
    FUN_0157184c(param_1,uVar9);
    puVar5 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar9);
    *(undefined1 **)(param_1 + 0x30) = puVar5;
  }
  else {
    puVar5 = (undefined1 *)(lVar7 - uVar9);
    *(undefined1 **)(param_1 + 0x30) = puVar5;
    if ((uVar4 & 3) == 0) goto LAB_015c7f80;
  }
  *puVar5 = 0;
  if ((uVar9 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar9 != 2)) {
    uVar6 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar6) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar9 != uVar6);
  }
LAB_015c7f80:
  lVar7 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar7 - *(long *)(param_1 + 0x38)) < 0x10) {
    FUN_0157184c(param_1,0x10);
    lVar7 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar7 + -0x10;
  uVar2 = param_3[1];
  *(undefined8 *)(lVar7 + -0x10) = *param_3;
  *(undefined8 *)(lVar7 + -8) = uVar2;
  lVar7 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  puVar8 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(lVar1 - (long)puVar8) < 8) {
    FUN_0157184c(param_1,8);
    puVar8 = *(ulong **)(param_1 + 0x38);
  }
  *puVar8 = (lVar7 - lVar1) + lVar3 & 0xffffffffU | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (param_2 <= *(ushort *)(param_1 + 0x44)) {
    param_2 = *(ushort *)(param_1 + 0x44);
  }
  *(ushort *)(param_1 + 0x44) = param_2;
  return;
}


