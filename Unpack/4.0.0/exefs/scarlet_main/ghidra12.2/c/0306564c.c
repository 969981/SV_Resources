/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0306564c; name: FUN_0306564c
 */


undefined8 FUN_0306564c(long param_1,ulong param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_f0;
  float *pfStack_e8;
  uint *local_e0;
  undefined1 local_d8;
  float local_d0 [2];
  undefined8 local_c8;
  uint local_c0 [2];
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 == (long *)0x0) && (*(long *)(param_1 + 0x28) == 0)) {
    return 1;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) +
                             (param_2 >> 0xe & 0x3ff00)) + 0x20);
  iVar3 = *(int *)(lVar6 + 0x60);
  uVar2 = (uint)param_2 & 0x3fffff;
  uVar7 = uVar2 - *(int *)(lVar6 + 0x30);
  if ((int)uVar2 < *(int *)(lVar6 + 0x30)) {
    if (*(int *)(lVar6 + 0x78) == 0) {
      uVar7 = uVar2;
    }
    else {
      uVar7 = *(uint *)(*(long *)(lVar6 + 0x70) + (ulong)uVar2 * 4);
      if (uVar7 == 0xffffffff) {
        lVar8 = *(long *)(lVar6 + 0x58) + (long)(int)(iVar3 * uVar2) * 4;
        lVar6 = *(long *)(lVar6 + 0x28) + (ulong)uVar2 * 0x14;
        lVar1 = lVar8 + (long)iVar3 * 4;
        goto joined_r0x03065724;
      }
    }
    lVar8 = *(long *)(lVar6 + 0x130) + (long)(int)(uVar7 * iVar3) * 4;
    lVar6 = *(long *)(lVar6 + 0xc0);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x150) + (long)(int)(iVar3 * uVar7) * 4;
    lVar6 = *(long *)(lVar6 + 0xe0);
  }
  lVar1 = lVar8 + (long)iVar3 * 4;
  lVar6 = lVar6 + (long)(int)uVar7 * 0x14;
joined_r0x03065724:
  if (plVar4 == (long *)0x0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      return 1;
    }
  }
  else if (((*(byte *)(lVar6 + 0x10) >> 4 & 1) == 0) &&
          (uVar5 = (**(code **)(*plVar4 + 0x28))
                             (plVar4,*(long *)(param_1 + 0x30),param_2 & 0xffffffff,lVar6,lVar8,
                              lVar1), (uVar5 & 1) == 0)) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    local_90 = 0xffffffff;
    local_78 = 0;
    pfStack_e8 = local_d0;
    local_98 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_a0 = 0;
    local_d0[0] = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
    local_c8 = *(undefined8 *)(param_1 + 0x48);
    local_f0 = *(undefined8 *)(param_1 + 0x30);
    local_e0 = local_c0;
    local_d8 = param_3;
    local_c0[0] = (uint)param_2;
    local_b8 = lVar6;
    lStack_b0 = lVar8;
    local_a8 = lVar1;
    uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_f0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


