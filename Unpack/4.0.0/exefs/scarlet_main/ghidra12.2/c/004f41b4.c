/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f41b4; name: FUN_004f41b4
 */


void FUN_004f41b4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  undefined **local_60;
  long *plStack_58;
  
  if ((*(int *)(param_3 + 0x18) == 1) && (*(char *)(**(long **)(param_3 + 0x20) + 0x41) != '\0')) {
    FUN_004f207c(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 +
              (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                           (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >> 4
                                ) * -0x55555554)) == 0) {
    return;
  }
  lVar1 = FUN_004a5180(*param_1);
  uVar4 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
  puVar3 = (ulong *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) goto LAB_004f4260;
  puVar3 = *(ulong **)(lVar1 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_047cd728, local_78 = lVar1, *puVar3 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar3,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  uVar2 = *(uint *)(lVar1 + 0x38);
  if (*(int *)(PTR_DAT_047cd750 + (ulong)uVar2 * 4) == 10) {
    uVar4 = FUN_004fa4b0(param_1 + 1,lVar1);
    pbVar7 = *(byte **)(param_2 + (uVar4 & 0xffffffff));
    if (pbVar7 == (byte *)0x0) goto LAB_004f4260;
    (*(code *)**(undefined8 **)pbVar7)(pbVar7);
  }
  else {
    if (*(int *)(PTR_DAT_047cd750 + (ulong)uVar2 * 4) != 9) goto LAB_004f4260;
    lVar8 = param_1[1];
    if (*(char *)(lVar1 + 0x43) == '\0') {
      plVar6 = (long *)(*(long *)(lVar1 + 0x50) + 0x28);
    }
    else if (*(long *)(lVar1 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(lVar1 + 0x28) + 0x80);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar1 + 0x60) + 0x50);
    }
    uVar10 = (int)((ulong)(lVar1 - *plVar6) >> 3) * 0x286bca1b;
    uVar10 = *(uint *)(param_1[2] +
                      (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2));
    puVar3 = *(ulong **)(lVar1 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      puStack_70 = PTR_LAB_047cd728;
      local_78 = lVar1;
      if (*puVar3 != 0xffffffffffffffff) {
        local_60 = &puStack_70;
        plStack_58 = &local_78;
        local_68 = &local_60;
        std::__call_once(puVar3,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
      }
      uVar2 = *(uint *)(lVar1 + 0x38);
    }
    if ((uVar2 == 0xc) || (uVar2 == 9)) {
      uVar10 = uVar10 & 0xfffffffe;
    }
    pbVar9 = *(byte **)(lVar8 + (ulong)uVar10);
    lVar8 = *(long *)(lVar1 + 0x58);
    if ((lVar8 == 0) ||
       ((*(int *)(lVar8 + 0x18) == 1 && (*(char *)(**(long **)(lVar8 + 0x20) + 0x41) != '\0')))) {
      if (*(uint *)(param_1 + 4) != 0xffffffff) {
        if (*(char *)(lVar1 + 0x43) == '\0') {
          plVar6 = (long *)(*(long *)(lVar1 + 0x50) + 0x28);
        }
        else if (*(long *)(lVar1 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(lVar1 + 0x28) + 0x80);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar1 + 0x60) + 0x50);
        }
        uVar2 = (int)((ulong)(lVar1 - *plVar6) >> 3) * 0x286bca1b;
        uVar2 = *(uint *)(param_1[3] +
                         (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
        if (uVar2 != 0xffffffff) {
          lVar8 = param_2 + (ulong)*(uint *)(param_1 + 4);
          uVar4 = (ulong)(uVar2 >> 3) & 0x1ffffffc;
          *(uint *)(lVar8 + uVar4) = *(uint *)(lVar8 + uVar4) | 1 << (ulong)(uVar2 & 0x1f);
        }
      }
    }
    else {
      *(undefined4 *)
       (param_2 +
       (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                    (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x30)) >> 4) *
                    -0x55555554)) = *(undefined4 *)(lVar1 + 0x44);
    }
    uVar4 = FUN_004fa4b0(param_1 + 1,lVar1);
    uVar5 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
    puVar3 = (ulong *)(uVar5 & 0xfffffffffffffffe);
    if ((uVar5 & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    if ((puVar3 != (ulong *)0x0) ||
       (pbVar7 = *(byte **)(param_2 + (uVar4 & 0xffffffff)),
       pbVar7 == pbVar9 || pbVar7 == (byte *)0x0)) goto LAB_004f4260;
    if ((*pbVar7 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar7 + 0x10));
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,pbVar7);
LAB_004f4260:
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x10) + 0x30)) >> 4) *
                -0x55555554)) = 0;
  return;
}


