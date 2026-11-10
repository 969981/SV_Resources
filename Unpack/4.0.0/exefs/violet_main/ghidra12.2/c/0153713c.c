/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153713c; name: FUN_0153713c
 */


void FUN_0153713c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  long *local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined8 local_160;
  long *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  long *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
  long *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_180 = 0;
  local_178 = (long *)0x0;
  local_190 = &DAT_cbf29ce484222645;
  puStack_188 = &DAT_03c886bc;
  local_170 = &DAT_cbf29ce484222645;
  puStack_168 = &DAT_03c886bc;
  local_160 = 0;
  local_158 = (long *)0x0;
  local_150 = &DAT_cbf29ce484222645;
  puStack_148 = &DAT_03c886bc;
  local_140 = 0;
  local_138 = (long *)0x0;
  local_130 = &DAT_cbf29ce484222645;
  puStack_128 = &DAT_03c886bc;
  local_120 = 0;
  local_118 = (long *)0x0;
  local_110 = &DAT_cbf29ce484222645;
  puStack_108 = &DAT_03c886bc;
  local_100 = 0;
  local_f8 = (long *)0x0;
  local_f0 = &DAT_cbf29ce484222645;
  puStack_e8 = &DAT_03c886bc;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_d0 = &DAT_cbf29ce484222645;
  puStack_c8 = &DAT_03c886bc;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_b0 = &DAT_cbf29ce484222645;
  puStack_a8 = &DAT_03c886bc;
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_90 = &DAT_cbf29ce484222645;
  puStack_88 = &DAT_03c886bc;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_70 = &DAT_cbf29ce484222645;
  puStack_68 = &DAT_03c886bc;
  local_60 = 0;
  local_58 = (long *)0x0;
  local_50 = param_2[0xc];
  uStack_48 = param_2[0xd];
  local_40 = param_2[0xe];
  local_38 = (long *)0x0;
  plVar2 = (long *)param_2[0xf];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_d0 = (undefined1 *)param_2[4];
  puStack_c8 = (undefined1 *)param_2[5];
  local_c0 = param_2[6];
  plVar1 = (long *)param_2[7];
  local_38 = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_b0 = (undefined1 *)param_2[8];
  puStack_a8 = (undefined1 *)param_2[9];
  local_a0 = param_2[10];
  plVar2 = (long *)param_2[0xb];
  local_b8 = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_130 = (undefined1 *)*param_2;
  puStack_128 = (undefined1 *)param_2[1];
  local_120 = param_2[2];
  plVar1 = (long *)param_2[3];
  local_98 = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_118 = plVar1;
  FUN_0104cbdc(param_1 + 0x130,&local_190);
  *(undefined8 *)(param_1 + 0x4a0) = *param_2;
  *(undefined8 *)(param_1 + 0x4a8) = param_2[1];
  *(undefined8 *)(param_1 + 0x4b0) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x4b8);
  *(long **)(param_1 + 0x4b8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x4c0) = param_2[4];
  *(undefined8 *)(param_1 + 0x4c8) = param_2[5];
  *(undefined8 *)(param_1 + 0x4d0) = param_2[6];
  plVar2 = (long *)param_2[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x4d8);
  *(long **)(param_1 + 0x4d8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x4e0) = param_2[8];
  *(undefined8 *)(param_1 + 0x4e8) = param_2[9];
  *(undefined8 *)(param_1 + 0x4f0) = param_2[10];
  plVar2 = (long *)param_2[0xb];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x4f8);
  *(long **)(param_1 + 0x4f8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x500) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x508) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x510) = param_2[0xe];
  plVar2 = (long *)param_2[0xf];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x518);
  *(long **)(param_1 + 0x518) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x520) = param_2[0x10];
  *(undefined8 *)(param_1 + 0x528) = param_2[0x11];
  *(undefined8 *)(param_1 + 0x530) = param_2[0x12];
  plVar2 = (long *)param_2[0x13];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x538);
  *(long **)(param_1 + 0x538) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x540) = param_2[0x14];
  *(undefined8 *)(param_1 + 0x548) = param_2[0x15];
  *(undefined8 *)(param_1 + 0x550) = param_2[0x16];
  plVar2 = (long *)param_2[0x17];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x558);
  *(long **)(param_1 + 0x558) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  return;
}


