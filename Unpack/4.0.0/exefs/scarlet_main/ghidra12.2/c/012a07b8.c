/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a07b8; name: FUN_012a07b8
 */


undefined1  [16] FUN_012a07b8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  piVar1 = (int *)((long)*param_3 + (ulong)*(uint *)*param_3);
  puVar4 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar2 = *puVar4;
  lVar5 = *(long *)(param_2 + 0x10);
  if (uVar2 < 5) {
    uVar7 = 0;
    uVar6 = 0;
LAB_012a08d0:
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    if ((ulong)puVar4[2] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)((long)piVar1 + (ulong)puVar4[2]);
    }
    if (uVar2 < 7) {
      uVar7 = 0;
      goto LAB_012a08d0;
    }
    if ((ulong)puVar4[3] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + (ulong)puVar4[3]);
    }
    if (uVar2 < 9) goto LAB_012a08d0;
    if ((ulong)puVar4[4] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((long)piVar1 + (ulong)puVar4[4]);
    }
    if (uVar2 < 0xb) {
      uVar9 = 0;
    }
    else {
      if ((ulong)puVar4[5] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((long)piVar1 + (ulong)puVar4[5]);
      }
      if ((0xc < uVar2) && ((ulong)puVar4[6] != 0)) {
        uVar10 = *(undefined4 *)((long)piVar1 + (ulong)puVar4[6]);
        goto LAB_012a0870;
      }
    }
  }
  uVar10 = 0;
LAB_012a0870:
  lVar3 = FUN_012a08f4(lVar5,*(undefined8 *)(lVar5 + 8));
  *(undefined4 *)(lVar3 + 0x120) = uVar6;
  *(undefined4 *)(lVar3 + 0x124) = uVar7;
  *(undefined4 *)(lVar3 + 0x128) = uVar8;
  *(undefined4 *)(lVar3 + 300) = uVar9;
  *(undefined4 *)(lVar3 + 0x130) = uVar10;
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = (ulong)(lVar5 != 0) << 1;
  return auVar11;
}


