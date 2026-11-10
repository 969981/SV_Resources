/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0214c67c; name: FUN_0214c67c
 */


void FUN_0214c67c(long param_1,undefined8 *param_2)

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
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  long *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  long *local_38;
  
  local_180 = 0;
  local_178 = (long *)0x0;
  local_48 = &DAT_03c886bc;
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
  local_118 = (long *)0x0;
  local_110 = &DAT_cbf29ce484222645;
  local_108 = &DAT_03c886bc;
  local_100 = 0;
  local_f8 = (long *)0x0;
  local_f0 = &DAT_cbf29ce484222645;
  local_e8 = &DAT_03c886bc;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_d0 = &DAT_cbf29ce484222645;
  local_c8 = &DAT_03c886bc;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_b0 = &DAT_cbf29ce484222645;
  local_a8 = &DAT_03c886bc;
  local_a0 = 0;
  local_98 = (long *)0x0;
  puStack_90 = &DAT_cbf29ce484222645;
  local_88 = &DAT_03c886bc;
  uStack_80 = 0;
  local_78 = (long *)0x0;
  puStack_70 = &DAT_cbf29ce484222645;
  local_68 = &DAT_03c886bc;
  uStack_60 = 0;
  local_58 = (long *)0x0;
  local_50 = &DAT_cbf29ce484222645;
  local_40 = 0;
  local_38 = (long *)0x0;
  local_130 = param_2[0x18];
  uStack_128 = param_2[0x19];
  local_120 = param_2[0x1a];
  plVar2 = (long *)param_2[0x1b];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_f0 = (undefined1 *)param_2[0x1c];
  local_e8 = (undefined1 *)param_2[0x1d];
  local_e0 = param_2[0x1e];
  plVar1 = (long *)param_2[0x1f];
  local_118 = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_110 = (undefined1 *)param_2[0x20];
  local_108 = (undefined1 *)param_2[0x21];
  local_100 = param_2[0x22];
  plVar2 = (long *)param_2[0x23];
  local_d8 = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_d0 = (undefined1 *)param_2[0x24];
  local_c8 = (undefined1 *)param_2[0x25];
  local_c0 = param_2[0x26];
  plVar1 = (long *)param_2[0x27];
  local_f8 = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_b0 = (undefined1 *)param_2[0x28];
  local_a8 = (undefined1 *)param_2[0x29];
  local_a0 = param_2[0x2a];
  plVar2 = (long *)param_2[0x2b];
  local_b8 = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_50 = (undefined1 *)param_2[0x48];
  local_48 = (undefined1 *)param_2[0x49];
  local_40 = param_2[0x4a];
  plVar1 = (long *)param_2[0x4b];
  local_98 = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_38 = plVar1;
  FUN_0104cbdc(param_1 + 0x130,&local_190);
  *(undefined8 *)(param_1 + 0x520) = *param_2;
  *(undefined8 *)(param_1 + 0x528) = param_2[1];
  *(undefined8 *)(param_1 + 0x530) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x538);
  *(long **)(param_1 + 0x538) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x540) = param_2[4];
  *(undefined8 *)(param_1 + 0x548) = param_2[5];
  *(undefined8 *)(param_1 + 0x550) = param_2[6];
  plVar2 = (long *)param_2[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x558);
  *(long **)(param_1 + 0x558) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x560) = param_2[8];
  *(undefined8 *)(param_1 + 0x568) = param_2[9];
  *(undefined8 *)(param_1 + 0x570) = param_2[10];
  plVar2 = (long *)param_2[0xb];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x578);
  *(long **)(param_1 + 0x578) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x580) = param_2[0xc];
  *(undefined8 *)(param_1 + 0x588) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x590) = param_2[0xe];
  plVar2 = (long *)param_2[0xf];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x598);
  *(long **)(param_1 + 0x598) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x5a0) = param_2[0x10];
  *(undefined8 *)(param_1 + 0x5a8) = param_2[0x11];
  *(undefined8 *)(param_1 + 0x5b0) = param_2[0x12];
  plVar2 = (long *)param_2[0x13];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x5b8);
  *(long **)(param_1 + 0x5b8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x5c0) = param_2[0x14];
  *(undefined8 *)(param_1 + 0x5c8) = param_2[0x15];
  *(undefined8 *)(param_1 + 0x5d0) = param_2[0x16];
  plVar2 = (long *)param_2[0x17];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x5d8);
  *(long **)(param_1 + 0x5d8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x5e0) = param_2[0x18];
  *(undefined8 *)(param_1 + 0x5e8) = param_2[0x19];
  *(undefined8 *)(param_1 + 0x5f0) = param_2[0x1a];
  plVar2 = (long *)param_2[0x1b];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x5f8);
  *(long **)(param_1 + 0x5f8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x600) = param_2[0x1c];
  *(undefined8 *)(param_1 + 0x608) = param_2[0x1d];
  *(undefined8 *)(param_1 + 0x610) = param_2[0x1e];
  plVar2 = (long *)param_2[0x1f];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x618);
  *(long **)(param_1 + 0x618) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x620) = param_2[0x20];
  *(undefined8 *)(param_1 + 0x628) = param_2[0x21];
  *(undefined8 *)(param_1 + 0x630) = param_2[0x22];
  plVar2 = (long *)param_2[0x23];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x638);
  *(long **)(param_1 + 0x638) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x640) = param_2[0x24];
  *(undefined8 *)(param_1 + 0x648) = param_2[0x25];
  *(undefined8 *)(param_1 + 0x650) = param_2[0x26];
  plVar2 = (long *)param_2[0x27];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x658);
  *(long **)(param_1 + 0x658) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x660) = param_2[0x28];
  *(undefined8 *)(param_1 + 0x668) = param_2[0x29];
  *(undefined8 *)(param_1 + 0x670) = param_2[0x2a];
  plVar2 = (long *)param_2[0x2b];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x678);
  *(long **)(param_1 + 0x678) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x680) = param_2[0x2c];
  *(undefined8 *)(param_1 + 0x688) = param_2[0x2d];
  *(undefined8 *)(param_1 + 0x690) = param_2[0x2e];
  plVar2 = (long *)param_2[0x2f];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x698);
  *(long **)(param_1 + 0x698) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x6a0) = param_2[0x30];
  *(undefined8 *)(param_1 + 0x6a8) = param_2[0x31];
  *(undefined8 *)(param_1 + 0x6b0) = param_2[0x32];
  plVar2 = (long *)param_2[0x33];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x6b8);
  *(long **)(param_1 + 0x6b8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x6c0) = param_2[0x34];
  *(undefined8 *)(param_1 + 0x6c8) = param_2[0x35];
  *(undefined8 *)(param_1 + 0x6d0) = param_2[0x36];
  plVar2 = (long *)param_2[0x37];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x6d8);
  *(long **)(param_1 + 0x6d8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x6e0) = param_2[0x38];
  *(undefined8 *)(param_1 + 0x6e8) = param_2[0x39];
  *(undefined8 *)(param_1 + 0x6f0) = param_2[0x3a];
  plVar2 = (long *)param_2[0x3b];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x6f8);
  *(long **)(param_1 + 0x6f8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x700) = param_2[0x3c];
  *(undefined8 *)(param_1 + 0x708) = param_2[0x3d];
  *(undefined8 *)(param_1 + 0x710) = param_2[0x3e];
  plVar2 = (long *)param_2[0x3f];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x718);
  *(long **)(param_1 + 0x718) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x720) = param_2[0x40];
  *(undefined8 *)(param_1 + 0x728) = param_2[0x41];
  *(undefined8 *)(param_1 + 0x730) = param_2[0x42];
  plVar2 = (long *)param_2[0x43];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x738);
  *(long **)(param_1 + 0x738) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x740) = param_2[0x44];
  *(undefined8 *)(param_1 + 0x748) = param_2[0x45];
  *(undefined8 *)(param_1 + 0x750) = param_2[0x46];
  plVar2 = (long *)param_2[0x47];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x758);
  *(long **)(param_1 + 0x758) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x760) = param_2[0x48];
  *(undefined8 *)(param_1 + 0x768) = param_2[0x49];
  *(undefined8 *)(param_1 + 0x770) = param_2[0x4a];
  plVar2 = (long *)param_2[0x4b];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x778);
  *(long **)(param_1 + 0x778) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x780) = param_2[0x4c];
  *(undefined8 *)(param_1 + 0x788) = param_2[0x4d];
  *(undefined8 *)(param_1 + 0x790) = param_2[0x4e];
  plVar2 = (long *)param_2[0x4f];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x798);
  *(long **)(param_1 + 0x798) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x7a0) = param_2[0x50];
  *(undefined8 *)(param_1 + 0x7a8) = param_2[0x51];
  *(undefined8 *)(param_1 + 0x7b0) = param_2[0x52];
  plVar2 = (long *)param_2[0x53];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x7b8);
  *(long **)(param_1 + 0x7b8) = plVar2;
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


