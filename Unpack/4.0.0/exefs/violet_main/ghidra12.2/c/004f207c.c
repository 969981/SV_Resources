/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f207c; name: FUN_004f207c
 */


void FUN_004f207c(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long local_60;
  undefined *puStack_58;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined ***local_38;
  
  if (*(char *)(param_3 + 0x43) != '\0') {
    FUN_0052166c(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44));
    return;
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    puVar2 = *(ulong **)(param_3 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
      local_50 = &puStack_58;
      local_38 = &local_50;
      puStack_48 = (undefined1 *)&local_60;
      std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    uVar12 = *(uint *)(param_3 + 0x38);
    switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar12 * 4)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
      *(undefined4 *)(param_2 + (uVar3 & 0xffffffff)) = 0;
      return;
    case 9:
      uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
      param_2 = param_2 + (uVar3 & 0xffffffff);
      uVar3 = (ulong)*(uint *)(param_2 + 8);
      if ((int)*(uint *)(param_2 + 8) < 1) {
        return;
      }
      puVar6 = (undefined8 *)(*(long *)(param_2 + 0x10) + 8);
      break;
    case 10:
      puVar2 = *(ulong **)(param_3 + 0x30);
      if (puVar2 != (ulong *)0x0) {
        puStack_58 = PTR_LAB_047cd728;
        local_60 = param_3;
        if (*puVar2 != 0xffffffffffffffff) {
          local_50 = &puStack_58;
          local_38 = &local_50;
          puStack_48 = (undefined1 *)&local_60;
          std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
        }
        uVar12 = *(uint *)(param_3 + 0x38);
      }
      if ((uVar12 == 0xb) && (uVar3 = FUN_004a64c0(param_3), (uVar3 & 1) != 0)) {
        uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
        (**(code **)(*(long *)(param_2 + (uVar3 & 0xffffffff)) + 0x58))();
        return;
      }
      uVar3 = FUN_004fa4b0(param_1 + 8,param_3);
      param_2 = param_2 + (uVar3 & 0xffffffff);
      uVar3 = (ulong)*(uint *)(param_2 + 8);
      if ((int)*(uint *)(param_2 + 8) < 1) {
        return;
      }
      puVar6 = *(undefined8 **)(param_2 + 0x10);
      do {
        puVar6 = puVar6 + 1;
        (**(code **)(*(long *)*puVar6 + 0x28))();
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      *(undefined4 *)(param_2 + 8) = 0;
      return;
    default:
      return;
    }
    do {
      while (pbVar9 = (byte *)*puVar6, (*pbVar9 & 1) != 0) {
        **(undefined1 **)(pbVar9 + 0x10) = 0;
        pbVar9[8] = 0;
        pbVar9[9] = 0;
        pbVar9[10] = 0;
        pbVar9[0xb] = 0;
        pbVar9[0xc] = 0;
        pbVar9[0xd] = 0;
        pbVar9[0xe] = 0;
        pbVar9[0xf] = 0;
        puVar6 = puVar6 + 1;
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) goto LAB_004f226c;
      }
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      puVar6 = puVar6 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
LAB_004f226c:
    *(undefined4 *)(param_2 + 8) = 0;
    return;
  }
  lVar5 = *(long *)(param_3 + 0x58);
  if ((lVar5 != 0) &&
     ((*(int *)(lVar5 + 0x18) != 1 || (*(char *)(**(long **)(lVar5 + 0x20) + 0x41) == '\0')))) {
    if (*(int *)(param_2 +
                (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                             (int)((ulong)(lVar5 - *(long *)(*(long *)(lVar5 + 0x10) + 0x30)) >> 4)
                             * -0x55555554)) == *(int *)(param_3 + 0x44)) {
      FUN_004f41b4(param_1,param_2);
      return;
    }
    return;
  }
  uVar3 = FUN_004f4588(param_1,param_2,param_3);
  if ((uVar3 & 1) == 0) {
    return;
  }
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
    uVar12 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
    uVar12 = *(uint *)(*(long *)(param_1 + 0x18) +
                      (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2));
    lVar5 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
    uVar3 = (ulong)(uVar12 >> 3) & 0x1ffffffc;
    *(uint *)(lVar5 + uVar3) =
         *(uint *)(lVar5 + uVar3) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
    local_50 = &puStack_58;
    local_38 = &local_50;
    puStack_48 = (undefined1 *)&local_60;
    std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (9 < *(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_3 + 0x38) * 4) - 1U) {
    return;
  }
  lVar5 = param_1 + 8;
  switch(*(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_3 + 0x38) * 4)) {
  default:
    uVar11 = *(undefined4 *)(param_3 + 0x90);
    goto LAB_004f2448;
  case 2:
  case 4:
  case 5:
    uVar13 = *(undefined8 *)(param_3 + 0x90);
    uVar3 = FUN_004fa4b0(lVar5,param_3);
    *(undefined8 *)(param_2 + (uVar3 & 0xffffffff)) = uVar13;
    break;
  case 7:
    uVar1 = *(undefined1 *)(param_3 + 0x90);
    uVar3 = FUN_004fa4b0(lVar5,param_3);
    *(undefined1 *)(param_2 + (uVar3 & 0xffffffff)) = uVar1;
    break;
  case 8:
    lVar4 = FUN_004a6930(param_3);
    uVar11 = *(undefined4 *)(lVar4 + 0x10);
LAB_004f2448:
    uVar3 = FUN_004fa4b0(lVar5,param_3);
    *(undefined4 *)(param_2 + (uVar3 & 0xffffffff)) = uVar11;
    break;
  case 9:
    uVar3 = FUN_004f9a80(lVar5,param_3);
    lVar4 = *(long *)(param_1 + 8);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar12 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
      uVar12 = *(uint *)(*(long *)(param_1 + 0x10) +
                        (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2));
      puVar2 = *(ulong **)(param_3 + 0x30);
      if ((puVar2 != (ulong *)0x0) &&
         (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
        local_50 = &puStack_58;
        local_38 = &local_50;
        puStack_48 = (undefined1 *)&local_60;
        std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar12 = uVar12 & 0xfffffffe;
      }
      pbVar9 = *(byte **)(lVar4 + (ulong)uVar12);
      uVar3 = FUN_004fa4b0(lVar5,param_3);
      uVar8 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
      puVar2 = (ulong *)(uVar8 & 0xfffffffffffffffe);
      if ((uVar8 & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if (((puVar2 == (ulong *)0x0) &&
          (pbVar10 = *(byte **)(param_2 + (uVar3 & 0xffffffff)), pbVar10 != pbVar9)) &&
         (pbVar10 != (byte *)0x0)) {
        if ((*pbVar10 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar10 + 0x10));
        }
        FUN_0049e790(PTR_LAB_047cba48,pbVar10);
      }
      *(byte **)(param_2 + (uVar3 & 0xffffffff)) = pbVar9;
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
      uVar12 = (int)((ulong)(param_3 - *plVar7) >> 3) * 0x286bca1b;
      uVar12 = *(uint *)(*(long *)(param_1 + 0x10) +
                        (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2));
      puVar2 = *(ulong **)(param_3 + 0x30);
      if ((puVar2 != (ulong *)0x0) &&
         (puStack_58 = PTR_LAB_047cd728, local_60 = param_3, *puVar2 != 0xffffffffffffffff)) {
        local_50 = &puStack_58;
        local_38 = &local_50;
        puStack_48 = (undefined1 *)&local_60;
        std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar12 = uVar12 & 0xfffffffe;
      }
      uVar3 = FUN_004fa4b0(lVar5,param_3);
      FUN_001fcec0(param_2 + (uVar3 & 0xffffffff),lVar4 + (ulong)uVar12);
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x20) == -1) {
      uVar3 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
      puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
      if ((uVar3 & 1) != 0) {
        puVar2 = (ulong *)*puVar2;
      }
      if (puVar2 == (ulong *)0x0) {
        uVar3 = FUN_004fa4b0(lVar5,param_3);
        puVar6 = *(undefined8 **)(param_2 + (uVar3 & 0xffffffff));
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
          FUN_0049e790(PTR_LAB_047cba48,puVar6);
        }
      }
      uVar3 = FUN_004fa4b0(lVar5,param_3);
      *(undefined8 *)(param_2 + (uVar3 & 0xffffffff)) = 0;
    }
    else {
      uVar3 = FUN_004fa4b0(lVar5,param_3);
      (**(code **)(**(long **)(param_2 + (uVar3 & 0xffffffff)) + 0x28))();
    }
  }
  return;
}


