/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f11d0; name: FUN_004f11d0
 */


void FUN_004f11d0(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *__src;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  void *__dest;
  undefined8 extraout_x1;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **local_80;
  long *plStack_78;
  void *local_70;
  long local_60;
  undefined *puStack_58;
  undefined1 *local_48;
  
  iVar5 = *(int *)(param_4 + 0x3c);
  puVar8 = *(ulong **)(param_4 + 0x30);
  if ((puVar8 != (ulong *)0x0) &&
     (puStack_58 = PTR_LAB_047cd728, local_60 = param_4, *puVar8 != 0xffffffffffffffff)) {
    local_80 = &puStack_58;
    plStack_78 = &local_60;
    local_48 = (undefined1 *)&local_80;
    std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  uVar14 = *(uint *)(param_4 + 0x38);
  if (iVar5 != 3) {
    switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar14 * 4)) {
    case 1:
    case 3:
    case 6:
    case 8:
      uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar6 = *(undefined4 *)(param_2 + (uVar10 & 0xffffffff));
      *(undefined4 *)(param_2 + (uVar10 & 0xffffffff)) =
           *(undefined4 *)(param_3 + (uVar9 & 0xffffffff));
      *(undefined4 *)(param_3 + (uVar9 & 0xffffffff)) = uVar6;
      return;
    case 2:
    case 4:
    case 5:
      uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar13 = *(undefined8 *)(param_2 + (uVar10 & 0xffffffff));
      *(undefined8 *)(param_2 + (uVar10 & 0xffffffff)) =
           *(undefined8 *)(param_3 + (uVar9 & 0xffffffff));
      *(undefined8 *)(param_3 + (uVar9 & 0xffffffff)) = uVar13;
      return;
    case 7:
      uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar7 = *(undefined1 *)(param_2 + (uVar10 & 0xffffffff));
      *(undefined1 *)(param_2 + (uVar10 & 0xffffffff)) =
           *(undefined1 *)(param_3 + (uVar9 & 0xffffffff));
      *(undefined1 *)(param_3 + (uVar9 & 0xffffffff)) = uVar7;
      return;
    case 9:
      goto switchD_004f12cc_caseD_9;
    case 10:
      uVar10 = (ulong)*(uint *)(param_1 + 0x24);
      plVar15 = (long *)(*(ulong *)(param_2 + uVar10) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + uVar10) & 1) == 0) {
        uVar10 = *(ulong *)(param_3 + uVar10);
      }
      else {
        plVar15 = (long *)*plVar15;
        uVar10 = *(ulong *)(param_3 + uVar10);
      }
      puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
      if ((uVar10 & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
      }
      uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar10 = uVar10 & 0xffffffff;
      uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
      uVar9 = uVar9 & 0xffffffff;
      if ((ulong *)plVar15 == puVar8) {
        uVar13 = *(undefined8 *)(param_2 + uVar10);
        *(undefined8 *)(param_2 + uVar10) = *(undefined8 *)(param_3 + uVar9);
        *(undefined8 *)(param_3 + uVar9) = uVar13;
        return;
      }
      plVar15 = *(long **)(param_2 + uVar10);
      plVar12 = *(long **)(param_3 + uVar9);
      if (plVar15 == (long *)0x0) {
        if (plVar12 == (long *)0x0) {
          return;
        }
        puVar8 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_2 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        plVar15 = (long *)(**(code **)(*plVar12 + 0x20))(plVar12,puVar8);
        *(long **)(param_2 + uVar10) = plVar15;
        (**(code **)(*plVar15 + 0x70))(plVar15,*(undefined8 *)(param_3 + uVar9));
      }
      else {
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x98))();
          FUN_004f1998(extraout_x1,*(undefined8 *)(param_2 + uVar10),
                       *(undefined8 *)(param_3 + uVar9));
          return;
        }
        puVar8 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_3 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        plVar15 = (long *)(**(code **)(*plVar15 + 0x20))(plVar15,puVar8);
        *(long **)(param_3 + uVar9) = plVar15;
        (**(code **)(*plVar15 + 0x70))(plVar15,*(undefined8 *)(param_2 + uVar10));
        param_3 = param_2;
      }
      FUN_004f207c(param_1,param_3,param_4);
      return;
    default:
      return;
    }
  }
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar14 * 4)) {
  case 1:
  case 8:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00531280(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 2:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00531850(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 3:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00531568(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 4:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00531b38(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 5:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00532108(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 6:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00531e20(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 7:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    uVar9 = FUN_004fa4b0(param_1 + 8,param_4);
    FUN_00530fa0(param_2 + (uVar10 & 0xffffffff),param_3 + (uVar9 & 0xffffffff));
    break;
  case 9:
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    plVar15 = (long *)(param_2 + (uVar10 & 0xffffffff));
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    plVar12 = (long *)(param_3 + (uVar10 & 0xffffffff));
    if (*plVar12 != *plVar15) {
      FUN_004fa8d0(plVar15);
      return;
    }
    goto LAB_004f16ac;
  case 10:
    puVar8 = *(ulong **)(param_4 + 0x30);
    if (puVar8 != (ulong *)0x0) {
      puStack_58 = PTR_LAB_047cd728;
      local_60 = param_4;
      if (*puVar8 != 0xffffffffffffffff) {
        local_80 = &puStack_58;
        plStack_78 = &local_60;
        local_48 = (undefined1 *)&local_80;
        std::__call_once(puVar8,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
      }
      uVar14 = *(uint *)(param_4 + 0x38);
    }
    if ((uVar14 == 0xb) && (uVar10 = FUN_004a64c0(param_4), (uVar10 & 1) != 0)) {
      uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
      plVar15 = (long *)(param_2 + (uVar10 & 0xffffffff));
      uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
      (**(code **)(*plVar15 + 0x48))(plVar15,param_3 + (uVar10 & 0xffffffff));
      return;
    }
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    plVar15 = (long *)(param_2 + (uVar10 & 0xffffffff));
    uVar10 = FUN_004fa4b0(param_1 + 8,param_4);
    plVar12 = (long *)(param_3 + (uVar10 & 0xffffffff));
    if (*plVar12 != *plVar15) {
      FUN_004fab98(plVar15);
      return;
    }
LAB_004f16ac:
    lVar19 = plVar12[1];
    lVar3 = plVar15[1];
    lVar4 = plVar15[2];
    plVar15[2] = plVar12[2];
    plVar15[1] = lVar19;
    plVar12[1] = lVar3;
    plVar12[2] = lVar4;
  }
  return;
switchD_004f12cc_caseD_9:
  uVar10 = (ulong)*(uint *)(param_1 + 0x24);
  plVar15 = (long *)(*(ulong *)(param_2 + uVar10) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + uVar10) & 1) == 0) {
    uVar10 = *(ulong *)(param_3 + uVar10);
  }
  else {
    plVar15 = (long *)*plVar15;
    uVar10 = *(ulong *)(param_3 + uVar10);
  }
  puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
  if ((uVar10 & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  lVar3 = param_1 + 8;
  uVar10 = FUN_004f9a80(lVar3,param_4);
  uVar9 = FUN_004fa4b0(lVar3,param_4);
  puVar1 = (undefined8 *)(param_2 + (uVar9 & 0xffffffff));
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_004fa4b0(lVar3,param_4);
    uVar20 = puVar1[1];
    uVar17 = *puVar1;
    puVar2 = (undefined8 *)(param_3 + (uVar10 & 0xffffffff));
    uVar13 = puVar1[2];
    uVar21 = puVar2[1];
    uVar18 = *puVar2;
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar21;
    *puVar1 = uVar18;
    puVar2[2] = uVar13;
    puVar2[1] = uVar20;
    *puVar2 = uVar17;
    return;
  }
  uVar10 = FUN_004fa4b0(lVar3,param_4);
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(param_4 + 0x43) == '\0') {
    plVar12 = (long *)(*(long *)(param_4 + 0x50) + 0x28);
  }
  else if (*(long *)(param_4 + 0x60) == 0) {
    plVar12 = (long *)(*(long *)(param_4 + 0x28) + 0x80);
  }
  else {
    plVar12 = (long *)(*(long *)(param_4 + 0x60) + 0x50);
  }
  uVar14 = (int)((ulong)(param_4 - *plVar12) >> 3) * 0x286bca1b;
  uVar14 = *(uint *)(*(long *)(param_1 + 0x10) +
                    (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2));
  puVar11 = *(ulong **)(param_4 + 0x30);
  if ((puVar11 != (ulong *)0x0) &&
     (puStack_58 = PTR_LAB_047cd728, local_60 = param_4, *puVar11 != 0xffffffffffffffff)) {
    local_80 = &puStack_58;
    plStack_78 = &local_60;
    local_48 = (undefined1 *)&local_80;
    std::__call_once(puVar11,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if ((*(int *)(param_4 + 0x38) == 0xc) || (*(int *)(param_4 + 0x38) == 9)) {
    uVar14 = uVar14 & 0xfffffffe;
  }
  puVar2 = (undefined8 *)(param_3 + (uVar10 & 0xffffffff));
  if ((ulong *)plVar15 == puVar8) {
    uVar13 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar13;
    return;
  }
  puVar11 = (ulong *)*puVar1;
  puVar16 = *(ulong **)(lVar3 + (ulong)uVar14);
  if ((*puVar11 & 1) == 0) {
    plStack_78 = (long *)puVar11[1];
    local_80 = (undefined **)*puVar11;
    local_70 = (void *)puVar11[2];
  }
  else {
    plVar12 = (long *)puVar11[1];
    __src = (void *)puVar11[2];
    if (plVar12 < (long *)0x17) {
      __dest = (void *)((ulong)&local_80 | 1);
      local_80 = (undefined **)CONCAT71(local_80._1_7_,(char)((int)plVar12 << 1));
    }
    else {
      if ((long *)0xffffffffffffffef < plVar12) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar12 + 2) & 0xfffffffffffffff0);
      local_80 = (undefined **)((ulong)(plVar12 + 2) & 0xfffffffffffffff0 | 1);
      plStack_78 = plVar12;
      local_70 = __dest;
    }
    memcpy(__dest,__src,(long)plVar12 + 1);
    puVar11 = (ulong *)*puVar1;
  }
  if (puVar11 == puVar16) {
    FUN_001fcdc8(puVar1,plVar15);
  }
  else {
                    /* try { // try from 004f18b8 to 004f18f7 has its CatchHandler @ 004f1974 */
    FUN_001fcec0(puVar11,*puVar2);
  }
  if ((ulong *)*puVar2 == puVar16) {
    FUN_001fcdc8(puVar2,puVar8,&local_80);
  }
  else {
    FUN_001fcec0((ulong *)*puVar2,&local_80);
  }
  if (((ulong)local_80 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_70);
  return;
}


