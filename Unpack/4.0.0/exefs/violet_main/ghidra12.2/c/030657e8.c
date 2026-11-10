/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030657e8; name: FUN_030657e8
 */


undefined8 FUN_030657e8(long param_1,ulong param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_120;
  float *pfStack_118;
  uint *local_110;
  undefined1 local_108;
  float local_100 [2];
  undefined8 local_f8;
  uint local_f0 [2];
  long local_e8;
  long lStack_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_90;
  long local_88;
  long lStack_80;
  long local_78;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 == (long *)0x0) && (*(long *)(param_1 + 0x28) == 0)) {
    return 1;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  lVar9 = *(long *)(*(long *)(lVar8 + (param_2 >> 0xe & 0x3ff00)) + 0x20);
  iVar3 = *(int *)(lVar9 + 0x60);
  uVar12 = (uint)param_2;
  uVar2 = uVar12 & 0x3fffff;
  uVar11 = uVar2 - *(int *)(lVar9 + 0x30);
  if ((int)uVar2 < *(int *)(lVar9 + 0x30)) {
    if (*(int *)(lVar9 + 0x78) == 0) {
      uVar11 = uVar2;
LAB_0306589c:
      lVar6 = *(long *)(lVar9 + 0x130) + (long)(int)(uVar11 * iVar3) * 4;
      lVar9 = *(long *)(lVar9 + 0xc0);
      goto LAB_030658ac;
    }
    uVar11 = *(uint *)(*(long *)(lVar9 + 0x70) + (ulong)uVar2 * 4);
    if (uVar11 != 0xffffffff) goto LAB_0306589c;
    lVar6 = *(long *)(lVar9 + 0x58) + (long)(int)(iVar3 * uVar2) * 4;
    lVar9 = *(long *)(lVar9 + 0x28) + (ulong)uVar2 * 0x14;
    lVar7 = lVar6 + (long)iVar3 * 4;
  }
  else {
    lVar6 = *(long *)(lVar9 + 0x150) + (long)(int)(iVar3 * uVar11) * 4;
    lVar9 = *(long *)(lVar9 + 0xe0);
LAB_030658ac:
    lVar7 = lVar6 + (long)iVar3 * 4;
    lVar9 = lVar9 + (long)(int)uVar11 * 0x14;
  }
  uVar11 = *(uint *)(lVar9 + 0xc);
  uVar2 = 0xffffffff;
  if (uVar11 != 0xffffffff) {
    uVar2 = uVar11 & 0x3fffff | uVar12 & 0xffc00000;
  }
  if ((*(byte *)(lVar9 + 0x10) & 0x40) == 0) {
    uVar11 = uVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + ((ulong)(uVar11 >> 0xe) & 0x3ff00)) + 0x20);
  iVar3 = *(int *)(lVar8 + 0x50);
  uVar2 = uVar11 & 0x3fffff;
  uVar10 = uVar2 - *(int *)(lVar8 + 0x20);
  if ((int)uVar2 < *(int *)(lVar8 + 0x20)) {
    if (*(int *)(lVar8 + 0x98) == 0) {
      uVar10 = uVar2;
    }
    else {
      uVar10 = *(uint *)(*(long *)(lVar8 + 0x90) + (ulong)uVar2 * 4);
      if (uVar10 == 0xffffffff) {
        lVar13 = *(long *)(lVar8 + 0x48) + (long)(int)(iVar3 * uVar2) * 4;
        lVar8 = *(long *)(lVar8 + 0x18) + (ulong)uVar2 * 0x10;
        lVar1 = lVar13 + (long)iVar3 * 4;
        goto joined_r0x03065970;
      }
    }
    lVar13 = *(long *)(lVar8 + 0x120) + (long)(int)(uVar10 * iVar3) * 4;
    lVar8 = *(long *)(lVar8 + 0xb0);
  }
  else {
    lVar13 = *(long *)(lVar8 + 0x140) + (long)(int)(iVar3 * uVar10) * 4;
    lVar8 = *(long *)(lVar8 + 0xd0);
  }
  lVar1 = lVar13 + (long)iVar3 * 4;
  lVar8 = lVar8 + (long)(int)uVar10 * 0x10;
joined_r0x03065970:
  if ((plVar4 != (long *)0x0) &&
     ((uVar5 = (**(code **)(*plVar4 + 0x28))
                         (plVar4,*(long *)(param_1 + 0x30),param_2 & 0xffffffff,lVar9),
      (uVar5 & 1) == 0 ||
      (uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                         (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),uVar11,lVar8,
                          lVar13,lVar1), (uVar5 & 1) == 0)))) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c0 = 0xffffffff;
    pfStack_118 = local_100;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    local_100[0] = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
    local_f8 = *(undefined8 *)(param_1 + 0x48);
    local_120 = *(undefined8 *)(param_1 + 0x30);
    local_110 = local_f0;
    local_108 = param_3;
    local_f0[0] = uVar12;
    local_e8 = lVar9;
    lStack_e0 = lVar6;
    local_d8 = lVar7;
    local_90 = uVar11;
    local_88 = lVar8;
    lStack_80 = lVar13;
    local_78 = lVar1;
    uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_120);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


