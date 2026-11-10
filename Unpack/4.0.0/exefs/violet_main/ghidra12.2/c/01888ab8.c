/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01888ab8; name: FUN_01888ab8
 */


void FUN_01888ab8(long param_1,int param_2,uint param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long *plVar5;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long *local_18;
  
  local_c8 = 0xacd0f69d3f20d1e6;
  pcStack_c0 = "/select";
  local_b8 = 7;
  local_e0 = 0x8d68530119e5bb45;
  pcStack_d8 = "/unselect";
  local_d0 = 9;
  if ((param_4 & 1) == 0) {
    memset(&local_b0,0,0x80);
    if (param_2 == 0) {
      if (0x1d < param_3) goto LAB_01888d14;
      pcVar4 = "L_grid_base_00/L_grid_%02d";
LAB_01888b8c:
      snprintf((char *)&local_b0,0x80,pcVar4,(ulong)param_3);
      FUN_014a5c20(&local_e8,&local_b0);
    }
    else {
      if (param_2 != 1) {
        if ((param_2 != 2) || (5 < param_3)) goto LAB_01888d14;
        pcVar4 = "L_icon_team_%02d";
        goto LAB_01888b8c;
      }
      if (param_3 < 6) {
        pcVar4 = "L_base_temochi_%02d";
        goto LAB_01888b8c;
      }
LAB_01888d14:
      local_e8 = (long *)0x0;
    }
    puVar3 = &local_e0;
    goto LAB_01888bb4;
  }
  memset(&local_b0,0,0x80);
  if (param_2 == 0) {
    if (0x1d < param_3) goto LAB_01888cfc;
    pcVar4 = "L_grid_base_00/L_grid_%02d";
LAB_01888b48:
    snprintf((char *)&local_b0,0x80,pcVar4,(ulong)param_3);
    FUN_014a5c20(&local_e8,&local_b0);
  }
  else {
    if (param_2 != 1) {
      if ((param_2 != 2) || (5 < param_3)) goto LAB_01888cfc;
      pcVar4 = "L_icon_team_%02d";
      goto LAB_01888b48;
    }
    if (param_3 < 6) {
      pcVar4 = "L_base_temochi_%02d";
      goto LAB_01888b48;
    }
LAB_01888cfc:
    local_e8 = (long *)0x0;
  }
  puVar3 = &local_c8;
LAB_01888bb4:
  FUN_01888d34(&local_18,&local_e8,puVar3);
  plVar1 = local_18;
  plVar5 = (long *)PTR_DAT_047d8b70;
  if (local_18 != (long *)0x0) {
    plVar5 = local_18 + 6;
  }
  local_b0 = *plVar5;
  plVar5 = (long *)PTR_PTR_047d4508;
  if (local_18 != (long *)0x0) {
    plVar5 = local_18 + 7;
  }
  lStack_a8 = *plVar5;
  if (local_18 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_18[8];
  }
  local_98 = (long *)0x0;
  if (local_18 == (long *)0x0) {
    local_98 = local_18;
  }
  else {
    (**(code **)(*local_18 + 0x18))(local_18);
    local_98 = plVar1;
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  plVar5 = *(long **)(param_1 + 0x6cd0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5);
    lVar2 = FUN_00e895f4(plVar5[0x2e],&local_b0);
    if (lVar2 != 0) {
      FUN_00dfcea4();
    }
    (**(code **)(*plVar5 + 0x60))(plVar5);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  return;
}


