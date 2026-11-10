/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a6204; name: FUN_014a6204
 */


void FUN_014a6204(long *param_1,int param_2)

{
  long *plVar1;
  long local_a8;
  char acStack_a0 [128];
  
  memset(param_1,0,0x98);
  memset(acStack_a0,0,0x80);
  snprintf(acStack_a0,0x80,"L_icon_box_%03d",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *param_1 = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/P_icon_poke_00",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[1] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/P_icon_poke_shadow",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[2] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/N_icon_poke_state_00",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[3] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/P_icon_bsetting_base_00",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[4] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/P_icon_lock",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[5] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/P_icon_lock_live_01",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[6] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/P_check",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[7] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/lift_default",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[8] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/release_default",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[9] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/disable",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[10] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/black",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xb] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/disable",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xc] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/active",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xd] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/default",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xe] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/byebye",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0xf] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/trade_offer",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0x10] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/trade_reset",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0x11] = local_a8;
  snprintf(acStack_a0,0x80,"L_icon_box_%03d/btl_team",param_2);
  FUN_014a5c20(&local_a8,acStack_a0);
  plVar1 = (long *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  param_1[0x12] = local_a8;
  return;
}


