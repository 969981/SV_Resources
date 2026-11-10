/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f7864; name: FUN_004f7864
 */


void FUN_004f7864(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  puVar2 = PTR_LAB_047cd728;
  puVar3 = *(ulong **)(param_4 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_50 = PTR_LAB_047cd728, local_58 = param_4, *puVar3 != 0xffffffffffffffff)) {
    local_40 = &puStack_50;
    plStack_38 = &local_58;
    local_48 = &local_40;
    std::__call_once(puVar3,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (*(char *)(param_4 + 0x43) != '\0') {
    uVar7 = *(uint *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_4 + 0x44);
    puVar3 = *(ulong **)(param_4 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_50 = puVar2, local_58 = param_4, *puVar3 != 0xffffffffffffffff)) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar3,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    FUN_005233e4(param_2 + (ulong)uVar7,uVar1,*(undefined4 *)(param_4 + 0x38),param_4,param_3);
    return;
  }
  lVar4 = *(long *)(param_4 + 0x58);
  if ((lVar4 != 0) &&
     ((*(int *)(lVar4 + 0x18) != 1 || (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) == '\0')))) {
    FUN_004f41b4(param_1,param_2);
    if (param_3 == 0) {
      return;
    }
    uVar5 = FUN_004fa4b0(param_1 + 8,param_4);
    *(long *)(param_2 + (uVar5 & 0xffffffff)) = param_3;
    *(undefined4 *)
     (param_2 +
     (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                  (int)((ulong)(*(long *)(param_4 + 0x58) -
                               *(long *)(*(long *)(*(long *)(param_4 + 0x58) + 0x10) + 0x30)) >> 4)
                  * -0x55555554)) = *(undefined4 *)(param_4 + 0x44);
    return;
  }
  if (param_3 == 0) {
    if (*(uint *)(param_1 + 0x20) == 0xffffffff) goto LAB_004f7a5c;
    lVar4 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
    uVar7 = (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
    uVar7 = *(uint *)(*(long *)(param_1 + 0x18) +
                     (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
    uVar5 = (ulong)(uVar7 >> 3) & 0x1ffffffc;
    uVar7 = *(uint *)(lVar4 + uVar5) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
  }
  else {
    if ((*(uint *)(param_1 + 0x20) == 0xffffffff) ||
       (uVar7 = (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x50) + 0x28)) >> 3) *
                0x286bca1b,
       uVar7 = *(uint *)(*(long *)(param_1 + 0x18) +
                        (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2)),
       uVar7 == 0xffffffff)) goto LAB_004f7a5c;
    lVar4 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
    uVar5 = (ulong)(uVar7 >> 3) & 0x1ffffffc;
    uVar7 = *(uint *)(lVar4 + uVar5) | 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar4 + uVar5) = uVar7;
LAB_004f7a5c:
  uVar5 = FUN_004fa4b0(param_1 + 8,param_4);
  uVar6 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  puVar3 = (ulong *)(uVar6 & 0xfffffffffffffffe);
  if ((uVar6 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if ((puVar3 == (ulong *)0x0) &&
     (puVar8 = *(undefined8 **)(param_2 + (uVar5 & 0xffffffff)), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)(puVar8);
    FUN_0049e790(PTR_LAB_047cba48,puVar8);
  }
  *(long *)(param_2 + (uVar5 & 0xffffffff)) = param_3;
  return;
}


