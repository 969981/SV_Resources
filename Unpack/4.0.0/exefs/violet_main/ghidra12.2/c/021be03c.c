/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021be03c; name: FUN_021be03c
 */


long FUN_021be03c(long param_1,int *param_2)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  ushort *puVar4;
  uint *local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  long *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined4 local_58;
  long *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined4 local_28;
  
  puVar4 = (ushort *)((long)param_2 - (long)*param_2);
  puVar1 = (uint *)((long)param_2 + (ulong)puVar4[2]);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  if (((4 < *puVar1) &&
      (4 < *(uint *)((long)((long)param_2 + (ulong)puVar4[3]) +
                    (ulong)*(uint *)((long)param_2 + (ulong)puVar4[3])))) &&
     (4 < *(uint *)((long)((long)param_2 + (ulong)puVar4[4]) +
                   (ulong)*(uint *)((long)param_2 + (ulong)puVar4[4])))) {
    local_98 = 0;
    local_90 = (long *)0x0;
    local_e8 = (uint *)0x0;
    if (puVar4[2] != 0 && 4 < *puVar4) {
      local_e8 = puVar1;
    }
    local_b0 = (long *)0x0;
    puStack_a8 = &DAT_cbf29ce484222645;
    local_a0 = &DAT_03c886bc;
    local_88 = 0;
    local_58 = 0;
    local_60 = (long *)0x0;
    local_30 = (long *)0x0;
    local_28 = 0;
    local_80 = (long *)0x0;
    puStack_78 = &DAT_cbf29ce484222645;
    local_70 = &DAT_03c886bc;
    uStack_68 = 0;
    local_50 = (long *)0x0;
    puStack_48 = &DAT_cbf29ce484222645;
    local_40 = &DAT_03c886bc;
    uStack_38 = 0;
    FUN_00cf95c4(&local_e0,&local_e8);
    plVar2 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = local_90;
    local_b0 = local_e0;
    local_e0 = (long *)0x0;
    puStack_a8 = (undefined1 *)uStack_d8;
    local_a0 = (undefined1 *)local_d0;
    local_98 = uStack_c8;
    local_90 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    local_90 = local_c0;
    local_c0 = (long *)0x0;
    local_88 = local_b8;
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
      local_e8 = (uint *)0x0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
      local_e8 = (uint *)0x0;
      if (uVar3 != 0) {
        local_e8 = (uint *)((long)param_2 + uVar3);
        local_e8 = (uint *)((long)local_e8 + (ulong)*local_e8);
      }
    }
    FUN_00cf95c4(&local_e0,&local_e8);
    plVar2 = local_80;
    local_80 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = local_60;
    local_80 = local_e0;
    local_e0 = (long *)0x0;
    puStack_78 = (undefined1 *)uStack_d8;
    local_70 = (undefined1 *)local_d0;
    uStack_68 = uStack_c8;
    local_60 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    local_60 = local_c0;
    local_c0 = (long *)0x0;
    local_58 = local_b8;
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
      local_e8 = (uint *)0x0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
      local_e8 = (uint *)0x0;
      if (uVar3 != 0) {
        local_e8 = (uint *)((long)param_2 + uVar3);
        local_e8 = (uint *)((long)local_e8 + (ulong)*local_e8);
      }
    }
    FUN_00cf95c4(&local_e0,&local_e8);
    plVar2 = local_50;
    local_50 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar2 = local_30;
    local_50 = local_e0;
    local_e0 = (long *)0x0;
    puStack_48 = (undefined1 *)uStack_d8;
    local_40 = (undefined1 *)local_d0;
    uStack_38 = uStack_c8;
    local_30 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    local_30 = local_c0;
    local_c0 = (long *)0x0;
    local_28 = local_b8;
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    FUN_021be3c4(param_1,*(undefined8 *)(param_1 + 8),&local_b0);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  return param_1;
}


