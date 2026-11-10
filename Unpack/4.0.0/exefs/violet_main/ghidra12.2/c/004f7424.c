/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f7424; name: FUN_004f7424
 */


void FUN_004f7424(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long local_60;
  undefined *puStack_58;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined ***local_38;
  
  puVar2 = *(ulong **)(param_3 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
    local_50 = &puStack_58;
    local_38 = &local_50;
    puStack_48 = (undefined1 *)&local_60;
    std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x40);
    cVar1 = *(char *)(param_3 + 0x43);
  }
  else {
    cVar1 = *(char *)(param_3 + 0x43);
  }
  if (cVar1 != '\0') {
    FUN_004ee184(param_2 + (ulong)*(uint *)(param_1 + 0x28),param_3,param_4);
    return;
  }
  uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
  lVar5 = *(long *)(param_3 + 0x58);
  if ((lVar5 == 0) ||
     ((*(int *)(lVar5 + 0x18) == 1 && (*(char *)(**(long **)(lVar5 + 0x20) + 0x41) != '\0')))) {
    if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
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
      uVar8 = *(uint *)(*(long *)(param_1 + 0x18) +
                       (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2));
      if (uVar8 != 0xffffffff) {
        lVar5 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
        uVar6 = (ulong)(uVar8 >> 3) & 0x1ffffffc;
        *(uint *)(lVar5 + uVar6) = *(uint *)(lVar5 + uVar6) | 1 << (ulong)(uVar8 & 0x1f);
      }
    }
  }
  else if (*(int *)(param_2 +
                   (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                                (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x30)) >>
                                     4) * -0x55555554)) != *(int *)(param_3 + 0x44)) {
    FUN_004f41b4(param_1,param_2);
    lVar5 = *(long *)(param_3 + 0x58);
    if ((lVar5 == 0) ||
       ((*(int *)(lVar5 + 0x18) == 1 && (*(char *)(**(long **)(lVar5 + 0x20) + 0x41) != '\0')))) {
      if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
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
        uVar8 = *(uint *)(*(long *)(param_1 + 0x18) +
                         (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2));
        if (uVar8 != 0xffffffff) {
          lVar5 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
          uVar3 = (ulong)(uVar8 >> 3) & 0x1ffffffc;
          *(uint *)(lVar5 + uVar3) = *(uint *)(lVar5 + uVar3) | 1 << (ulong)(uVar8 & 0x1f);
        }
      }
    }
    else {
      *(undefined4 *)
       (param_2 +
       (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                    (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x30)) >> 4) *
                    -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
    }
    uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
    lVar5 = *(long *)(param_1 + 8);
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
    puVar2 = *(ulong **)(param_3 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
      local_50 = &puStack_58;
      local_38 = &local_50;
      puStack_48 = (undefined1 *)&local_60;
      std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
      uVar8 = uVar8 & 0xfffffffe;
    }
    plVar7 = (long *)(param_2 + (uVar3 & 0xffffffff));
    puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    plVar4 = *(long **)(lVar5 + (ulong)uVar8);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
    *plVar7 = lVar5;
    goto joined_r0x004f7628;
  }
  plVar7 = (long *)(param_2 + (uVar3 & 0xffffffff));
  lVar5 = *plVar7;
joined_r0x004f7628:
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 8);
    if (*(char *)(param_3 + 0x43) == '\0') {
      plVar4 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar4 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
    }
    else {
      plVar4 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
    }
    uVar8 = (int)((ulong)(param_3 - *plVar4) >> 3) * 0x286bca1b;
    uVar8 = *(uint *)(*(long *)(param_1 + 0x10) +
                     (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2));
    puVar2 = *(ulong **)(param_3 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (local_60 = param_3, puStack_58 = PTR_LAB_047cd728, *puVar2 != 0xffffffffffffffff)) {
      local_50 = &puStack_58;
      local_38 = &local_50;
      puStack_48 = (undefined1 *)&local_60;
      std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
      uVar8 = uVar8 & 0xfffffffe;
    }
    puVar2 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    plVar4 = *(long **)(lVar5 + (ulong)uVar8);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
    *plVar7 = lVar5;
  }
  return;
}


