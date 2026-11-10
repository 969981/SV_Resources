/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01254e9c; name: FUN_01254e9c
 */


void FUN_01254e9c(undefined8 param_1,undefined8 param_2,void *param_3)

{
  long lVar1;
  ushort uVar2;
  undefined1 auStack_d0 [48];
  undefined2 local_a0;
  undefined8 local_7c;
  undefined1 local_74;
  undefined1 auStack_70 [36];
  undefined8 local_4c;
  
  uVar2 = *(ushort *)((long)param_3 + 0x30);
  lVar1 = (long)param_3 + 0x60;
  if ((uVar2 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 1;
    FUN_029800c0(param_1,auStack_d0);
    uVar2 = *(ushort *)((long)param_3 + 0x30);
  }
  if ((uVar2 >> 1 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 2;
    FUN_029800c0(param_1,auStack_d0);
    uVar2 = *(ushort *)((long)param_3 + 0x30);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 4;
    FUN_029800c0(param_1,auStack_d0);
    uVar2 = *(ushort *)((long)param_3 + 0x30);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 8;
    FUN_029800c0(param_1,auStack_d0);
    uVar2 = *(ushort *)((long)param_3 + 0x30);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 0x10;
    FUN_029800c0(param_1,auStack_d0);
    uVar2 = *(ushort *)((long)param_3 + 0x30);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 0x20;
    FUN_029800c0(param_1,auStack_d0);
    uVar2 = *(ushort *)((long)param_3 + 0x30);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    memcpy(auStack_d0,param_3,0x54);
    local_7c = *(undefined8 *)((long)param_3 + 0x54);
    local_74 = *(undefined1 *)((long)param_3 + 0x5c);
    FUN_029800b8(auStack_70,lVar1);
    local_4c = *(undefined8 *)((long)param_3 + 0x84);
    local_a0 = 0x40;
    FUN_029800c0(param_1,auStack_d0);
  }
  FUN_01255138(param_1,param_3);
  return;
}


