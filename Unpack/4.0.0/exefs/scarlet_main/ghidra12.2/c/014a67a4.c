/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a67a4; name: FUN_014a67a4
 */


void FUN_014a67a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_a8;
  undefined7 local_a0;
  char cStack_99;
  undefined7 uStack_98;
  char local_91;
  char acStack_90 [48];
  
  plVar6 = (long *)*param_2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  plVar5 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))();
  }
  FUN_014a6cfc(param_1,6,0x1e,0);
  FUN_014a6cfc(param_1,7,0x1f,1);
  FUN_014a6cfc(param_1,8,0x20,2);
  FUN_014a6cfc(param_1,9,0x21,3);
  FUN_014a6cfc(param_1,10,0x22,4);
  FUN_014a6cfc(param_1,0xb,0x23,5);
  FUN_014a6cfc(param_1,0x12,0x5a,0xc);
  FUN_014a6cfc(param_1,0x13,0x5b,0xd);
  FUN_014a6cfc(param_1,0x14,0x5c,0xe);
  FUN_014a6cfc(param_1,0x15,0x5d,0xf);
  FUN_014a6cfc(param_1,0x16,0x5e,0x10);
  FUN_014a6cfc(param_1,0x17,0x5f,0x11);
  FUN_014a6cfc(param_1,0x36,0,0x18);
  FUN_014a6cfc(param_1,0x37,1,0x19);
  FUN_014a6cfc(param_1,0x38,2,0x1a);
  FUN_014a6cfc(param_1,0x39,3,0x1b);
  FUN_014a6cfc(param_1,0x3a,4,0x1c);
  FUN_014a6cfc(param_1,0x3b,5,0x1d);
  FUN_014a6cfc(param_1,0x3c,6,0x1e);
  FUN_014a6cfc(param_1,0x3d,7,0x1f);
  FUN_014a6cfc(param_1,0x3e,8,0x20);
  FUN_014a6cfc(param_1,0x3f,9,0x21);
  FUN_014a6cfc(param_1,0x40,10,0x22);
  FUN_014a6cfc(param_1,0x41,0xb,0x23);
  FUN_014a6cfc(param_1,0x42,0xc,0x24);
  FUN_014a6cfc(param_1,0x43,0xd,0x25);
  FUN_014a6cfc(param_1,0x44,0xe,0x26);
  FUN_014a6cfc(param_1,0x45,0xf,0x27);
  FUN_014a6cfc(param_1,0x46,0x10,0x28);
  FUN_014a6cfc(param_1,0x47,0x11,0x29);
  FUN_014a6cfc(param_1,0x48,0x12,0x2a);
  FUN_014a6cfc(param_1,0x49,0x13,0x2b);
  FUN_014a6cfc(param_1,0x4a,0x14,0x2c);
  FUN_014a6cfc(param_1,0x4b,0x15,0x2d);
  FUN_014a6cfc(param_1,0x4c,0x16,0x2e);
  FUN_014a6cfc(param_1,0x4d,0x17,0x2f);
  FUN_014a6cfc(param_1,0x4e,0x18,0x30);
  FUN_014a6cfc(param_1,0x4f,0x19,0x31);
  FUN_014a6cfc(param_1,0x50,0x1a,0x32);
  FUN_014a6cfc(param_1,0x51,0x1b,0x33);
  FUN_014a6cfc(param_1,0x52,0x1c,0x34);
  FUN_014a6cfc(param_1,0x53,0x1d,0x35);
  FUN_014a6df4(param_1,0xa2,0,0x9c);
  FUN_014a6df4(param_1,0xa3,1,0x9d);
  FUN_014a6df4(param_1,0xa4,2,0x9e);
  FUN_014a6df4(param_1,0xa5,3,0x9f);
  FUN_014a6df4(param_1,0xa6,4,0xa0);
  FUN_014a6df4(param_1,0xa7,5,0xa1);
  acStack_90[0x2f] = 0;
  acStack_90[0x27] = '\0';
  acStack_90[0x28] = '\0';
  acStack_90[0x29] = '\0';
  acStack_90[0x2a] = '\0';
  acStack_90[0x2b] = '\0';
  acStack_90[0x2c] = '\0';
  acStack_90[0x2d] = '\0';
  acStack_90[0x2e] = '\0';
  acStack_90[0x1f] = '\0';
  acStack_90[0x20] = '\0';
  acStack_90[0x21] = '\0';
  acStack_90[0x22] = '\0';
  acStack_90[0x23] = '\0';
  acStack_90[0x24] = '\0';
  acStack_90[0x25] = '\0';
  acStack_90[0x26] = '\0';
  acStack_90[0x17] = '\0';
  acStack_90[0x18] = '\0';
  acStack_90[0x19] = '\0';
  acStack_90[0x1a] = '\0';
  acStack_90[0x1b] = '\0';
  acStack_90[0x1c] = '\0';
  acStack_90[0x1d] = '\0';
  acStack_90[0x1e] = '\0';
  acStack_90[0xf] = '\0';
  acStack_90[0x10] = '\0';
  acStack_90[0x11] = '\0';
  acStack_90[0x12] = '\0';
  acStack_90[0x13] = '\0';
  acStack_90[0x14] = '\0';
  acStack_90[0x15] = '\0';
  acStack_90[0x16] = '\0';
  acStack_90[7] = 0;
  acStack_90[8] = '\0';
  acStack_90[9] = '\0';
  acStack_90[10] = '\0';
  acStack_90[0xb] = '\0';
  acStack_90[0xc] = '\0';
  acStack_90[0xd] = '\0';
  acStack_90[0xe] = 0;
  local_91 = 0;
  acStack_90[0] = '\0';
  acStack_90[1] = '\0';
  acStack_90[2] = '\0';
  acStack_90[3] = '\0';
  acStack_90[4] = '\0';
  acStack_90[5] = '\0';
  acStack_90[6] = 0;
  local_a0._0_1_ = s_L_icon_item_01_03c11d65[0];
  local_a0._1_1_ = s_L_icon_item_01_03c11d65[1];
  local_a0._2_1_ = s_L_icon_item_01_03c11d65[2];
  local_a0._3_1_ = s_L_icon_item_01_03c11d65[3];
  local_a0._4_1_ = s_L_icon_item_01_03c11d65[4];
  local_a0._5_1_ = s_L_icon_item_01_03c11d65[5];
  local_a0._6_1_ = s_L_icon_item_01_03c11d65[6];
  cStack_99 = s_L_icon_item_01_03c11d65[7];
  uStack_98._0_1_ = s_L_icon_item_01_03c11d65[8];
  uStack_98._1_1_ = s_L_icon_item_01_03c11d65[9];
  uStack_98._2_1_ = s_L_icon_item_01_03c11d65[10];
  uStack_98._3_1_ = s_L_icon_item_01_03c11d65[0xb];
  uStack_98._4_1_ = s_L_icon_item_01_03c11d65[0xc];
  uStack_98._5_1_ = s_L_icon_item_01_03c11d65[0xd];
  uStack_98._6_1_ = s_L_icon_item_01_03c11d65[0xe];
  FUN_01343c78(&local_a8,&local_a0);
  plVar6 = *(long **)(param_1 + 0xab8);
  *(undefined8 *)(param_1 + 0xab8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  uVar3 = s_L_icon_item_01_P_icon_item_00_03c9f361._16_6_;
  uVar2 = s_L_icon_item_01_P_icon_item_00_03c9f361._8_8_;
  uVar1 = s_L_icon_item_01_P_icon_item_00_03c9f361._0_8_;
  *(undefined8 *)(param_1 + 0xab8) = local_a8;
  uVar4 = s_L_icon_item_01_P_icon_item_00_03c9f361._16_6_;
  local_a0 = (undefined7)uVar1;
  cStack_99 = SUB81(uVar1,7);
  uStack_98 = (undefined7)uVar2;
  local_91 = SUB81(uVar2,7);
  s_L_icon_item_01_P_icon_item_00_03c9f361[0x10] = (char)uVar3;
  s_L_icon_item_01_P_icon_item_00_03c9f361[0x11] = SUB61(uVar3,1);
  s_L_icon_item_01_P_icon_item_00_03c9f361[0x12] = SUB61(uVar3,2);
  s_L_icon_item_01_P_icon_item_00_03c9f361[0x13] = SUB61(uVar3,3);
  s_L_icon_item_01_P_icon_item_00_03c9f361[0x14] = SUB61(uVar3,4);
  s_L_icon_item_01_P_icon_item_00_03c9f361[0x15] = SUB61(uVar3,5);
  acStack_90[0] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x10];
  acStack_90[1] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x11];
  acStack_90[2] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x12];
  acStack_90[3] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x13];
  acStack_90[4] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x14];
  acStack_90[5] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x15];
  acStack_90[6] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x16];
  acStack_90[7] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x17];
  acStack_90[8] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x18];
  acStack_90[9] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x19];
  acStack_90[10] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x1a];
  acStack_90[0xb] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x1b];
  acStack_90[0xc] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x1c];
  acStack_90[0xd] = s_L_icon_item_01_P_icon_item_00_03c9f361[0x1d];
  s_L_icon_item_01_P_icon_item_00_03c9f361._16_6_ = uVar4;
  FUN_01343c78(&local_a8,&local_a0);
  plVar6 = *(long **)(param_1 + 0xac0);
  *(undefined8 *)(param_1 + 0xac0) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xac0) = local_a8;
  memcpy(&local_a0,"L_icon_item_01/P_icon_item_shadow",0x22);
  FUN_01343c78(&local_a8,&local_a0);
  plVar6 = *(long **)(param_1 + 0xad0);
  *(undefined8 *)(param_1 + 0xad0) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xad0) = local_a8;
  return;
}


