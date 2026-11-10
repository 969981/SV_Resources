/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f8484; name: FUN_004f8484
 */


long FUN_004f8484(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  puVar3 = PTR_LAB_047cd728;
  puVar5 = *(ulong **)(param_3 + 0x30);
  if (puVar5 != (ulong *)0x0) {
    puStack_50 = PTR_LAB_047cd728;
    local_58 = param_3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (param_6 != 0) {
    FUN_004a5124(param_3);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar5 = *(ulong **)(param_3 + 0x30);
    if (puVar5 != (ulong *)0x0) {
      puStack_50 = puVar3;
      local_58 = param_3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_40 = &puStack_50;
        plStack_38 = &local_58;
        local_48 = &local_40;
        std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    if ((*(int *)(param_3 + 0x38) == 0xb) && (uVar6 = FUN_004a64c0(param_3), (uVar6 & 1) != 0)) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar8 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
      uVar8 = *(uint *)(*(long *)(param_1 + 0x10) +
                       (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2));
      puVar5 = *(ulong **)(param_3 + 0x30);
      if (puVar5 != (ulong *)0x0) {
        puStack_50 = puVar3;
        local_58 = param_3;
        if (*puVar5 != 0xffffffffffffffff) {
          local_40 = &puStack_50;
          plStack_38 = &local_58;
          local_48 = &local_40;
          std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
        }
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar8 = uVar8 & 0xfffffffe;
      }
      param_2 = FUN_004fdbc0(param_2 + (ulong)uVar8);
    }
    else {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar8 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
      uVar8 = *(uint *)(*(long *)(param_1 + 0x10) +
                       (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2));
      puVar5 = *(ulong **)(param_3 + 0x30);
      if (puVar5 != (ulong *)0x0) {
        puStack_50 = puVar3;
        if (*puVar5 != 0xffffffffffffffff) {
          local_40 = &puStack_50;
          plStack_38 = &local_58;
          local_48 = &local_40;
          local_58 = param_3;
          std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
        }
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar8 = uVar8 & 0xfffffffe;
      }
      param_2 = param_2 + (ulong)uVar8;
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    puVar5 = *(ulong **)(param_3 + 0x30);
    if (puVar5 != (ulong *)0x0) {
      puStack_50 = puVar3;
      local_58 = param_3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_40 = &puStack_50;
        plStack_38 = &local_58;
        local_48 = &local_40;
        std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar4 = FUN_004a8fc4(param_3);
    param_2 = FUN_00522a94(param_2 + (ulong)uVar8,uVar1,uVar2,uVar4 & 1,param_3);
  }
  return param_2;
}


