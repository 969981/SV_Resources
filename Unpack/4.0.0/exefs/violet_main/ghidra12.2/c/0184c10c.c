/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184c10c; name: FUN_0184c10c
 */


undefined8 FUN_0184c10c(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  uint *puVar11;
  long *local_118;
  undefined4 local_110;
  long *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long local_e0;
  long *plStack_d8;
  undefined1 auStack_b8 [24];
  long *local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    local_108 = (long *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    local_108 = (long *)0x0;
    if (uVar5 != 0) {
      puVar11 = (uint *)((long)param_3 + uVar5);
      local_108 = (long *)((long)puVar11 + (ulong)*puVar11);
    }
  }
  FUN_00ea0a7c(&local_38,&local_108);
  if (*(ushort *)((long)param_3 - (long)*param_3) < 7) {
    local_108 = (long *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3];
    local_108 = (long *)0x0;
    if (uVar5 != 0) {
      puVar11 = (uint *)((long)param_3 + uVar5);
      local_108 = (long *)((long)puVar11 + (ulong)*puVar11);
    }
  }
  FUN_00ea0a7c(&local_58,&local_108);
  if (*(ushort *)((long)param_3 - (long)*param_3) < 0xd) {
    local_108 = (long *)0x0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[6];
    local_108 = (long *)0x0;
    if (uVar5 != 0) {
      puVar11 = (uint *)((long)param_3 + uVar5);
      local_108 = (long *)((long)puVar11 + (ulong)*puVar11);
    }
  }
  FUN_00ea0a7c(&local_60,&local_108);
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 0xf) ||
     (uVar5 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[7], uVar5 == 0)) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = (uint *)((long)param_3 + uVar5);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
  }
  plStack_80 = (long *)*param_1;
  local_68 = 0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_88 = 0;
  local_78 = 0x1fffffffffffffff;
  uStack_70 = 0;
  if ((puVar11 != (uint *)0x0) && (FUN_011bda1c(&local_98,*puVar11), *puVar11 != 0)) {
    lVar10 = 0;
    uVar5 = 0;
    do {
      local_108 = (long *)((long)puVar11 + lVar10 + (ulong)puVar11[uVar5 + 1] + 4);
      FUN_0184cb0c(&local_98,&local_108);
      uVar5 = uVar5 + 1;
      lVar10 = lVar10 + 4;
    } while (uVar5 < *puVar11);
  }
  puVar6 = (ushort *)((long)param_3 - (long)*param_3);
  if (*puVar6 < 9) {
    uVar9 = 0;
  }
  else {
    if ((ulong)puVar6[4] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)param_3 + (ulong)puVar6[4]);
    }
    if ((10 < *puVar6) && ((ulong)puVar6[5] != 0)) {
      uVar7 = *(undefined4 *)((long)param_3 + (ulong)puVar6[5]);
      goto LAB_0184c270;
    }
  }
  uVar7 = 0;
LAB_0184c270:
  FUN_0135d26c(auStack_b8,&local_58);
  local_108 = local_38;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_f8 = local_60;
  local_100 = uVar9;
  uStack_fc = uVar7;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  FUN_00e3c378(&local_f0,&local_98);
  plVar1 = local_38;
  local_118 = local_38;
  local_110 = uVar9;
  if (local_38 == (long *)0x0) {
    FUN_0184c590(param_2,auStack_b8,&local_108,&local_118);
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    FUN_0184c590(param_2,auStack_b8,&local_108,&local_118);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar1 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar8 = local_e8;
    if (local_e8 == local_f0) {
      plVar8 = local_f0;
    }
    else {
      do {
        plVar8 = plVar8 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x20))();
        }
      } while (plVar1 != plVar8);
      plVar8 = local_f0;
    }
    local_e8 = plVar1;
    uVar5 = (**(code **)(*plStack_d8 + 0xf8))(plStack_d8);
    if (((uVar5 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plStack_d8 + 0x18))(plStack_d8,plVar8,local_e0 - (long)plVar8,8);
    }
    else {
      FUN_00c48fe8(plStack_d8,plVar8,local_e0 - (long)plVar8,8);
    }
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  plVar3 = local_98;
  plVar1 = local_98;
  plVar8 = local_90;
  plVar2 = plStack_80;
  if (local_98 != (long *)0x0) {
    while (local_98 = plVar1, plStack_80 = plVar2, plVar8 != plVar3) {
      plVar8 = plVar8 + -1;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x20))();
        plVar1 = local_98;
        plVar2 = plStack_80;
      }
    }
    local_90 = plVar3;
    lVar10 = local_88 - (long)plVar1;
    uVar5 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar2,plVar1,lVar10,8);
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return param_2;
}


