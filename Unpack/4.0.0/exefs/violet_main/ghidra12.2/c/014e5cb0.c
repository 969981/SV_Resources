/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e5cb0; name: FUN_014e5cb0
 */


void FUN_014e5cb0(long param_1,int param_2,uint param_3,byte param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char *__format;
  long *plVar4;
  long *local_c0;
  long *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  
  memset(&local_b0,0,0x80);
  if (param_2 == 0) {
    if (0x1d < param_3) goto LAB_014e5e88;
    __format = "L_grid_base_00/L_grid_%02d";
  }
  else if (param_2 == 1) {
    if (5 < param_3) {
LAB_014e5e88:
      local_c0 = (long *)0x0;
      goto LAB_014e5d14;
    }
    __format = "L_base_temochi_%02d";
  }
  else {
    if ((param_2 != 2) || (5 < param_3)) goto LAB_014e5e88;
    __format = "L_icon_team_%02d";
  }
  snprintf((char *)&local_b0,0x80,__format,(ulong)param_3);
  FUN_014a5c20(&local_c0,&local_b0);
LAB_014e5d14:
  FUN_014e5e9c(&local_b8,&local_c0,"/N_frame_00");
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  plVar4 = *(long **)(param_1 + 0x6cd0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  plVar2 = local_b8;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 6;
  }
  local_b0 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 7;
  }
  lStack_a8 = *plVar1;
  if (local_b8 == (long *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_b8[8];
  }
  local_98 = (long *)0x0;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x18))(local_b8);
  }
  local_98 = plVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4);
    lVar3 = FUN_00c8c7b4(plVar4[0x2e],&local_b0);
    (**(code **)(*plVar4 + 0x60))(plVar4);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | param_4 & 1;
    }
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x60))(plVar4);
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return;
}


