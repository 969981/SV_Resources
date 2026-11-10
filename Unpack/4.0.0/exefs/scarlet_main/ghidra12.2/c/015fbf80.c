/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fbf80; name: FUN_015fbf80
 */


void FUN_015fbf80(long param_1,void *param_2,ulong param_3,short *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  short *psVar3;
  long lVar4;
  short *psVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined4 local_12c;
  long local_128;
  undefined2 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_df [143];
  
  psVar5 = *(short **)(param_1 + 0x4090);
  psVar3 = *(short **)(param_1 + 0x4098);
  if (psVar5 != psVar3) {
    while (*psVar5 != *param_4) {
      psVar5 = psVar5 + 0xe4;
      if (psVar3 == psVar5) {
        return;
      }
    }
  }
  if (psVar5 == psVar3) {
    return;
  }
  if (*(long *)(psVar5 + 4) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(psVar5 + 4) + 0x10);
  if (lVar7 == 0) {
    return;
  }
  if (*(long *)(psVar5 + 0x1c) == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(psVar5 + 0x1c) + 0x10);
  if (lVar4 == 0) {
    return;
  }
  local_120 = 0x300;
  FUN_01667884(&local_110);
  memset(&uStack_e0,0,0x81);
  memcpy(&local_120,param_2,param_3 & 0xffffffff);
  *(undefined8 *)(lVar7 + 0xa0) = uStack_108;
  *(undefined8 *)(lVar7 + 0x98) = local_110;
  if (*(char *)(lVar7 + 0xcc) == '\0') {
    *(undefined1 *)(lVar7 + 0xcc) = 1;
    plVar6 = (long *)(lVar7 + -0x28);
    (**(code **)(*(long *)(lVar7 + -0x28) + 0x78))(plVar6);
    *(undefined8 *)(lVar7 + 0xb0) = uStack_f8;
    *(undefined8 *)(lVar7 + 0xa8) = local_100;
    if (*(char *)(lVar7 + 0xcc) == '\0') {
      *(undefined1 *)(lVar7 + 0xcc) = 1;
      (**(code **)(*(long *)(lVar7 + -0x28) + 0x78))(plVar6);
      *(undefined8 *)(lVar7 + 0xc0) = uStack_e8;
      *(undefined8 *)(lVar7 + 0xb8) = local_f0;
      if (*(char *)(lVar7 + 0xcc) == '\0') {
        *(undefined1 *)(lVar7 + 0xcc) = 1;
        (**(code **)(*plVar6 + 0x78))(plVar6);
      }
      goto LAB_015fc0cc;
    }
  }
  else {
    *(undefined8 *)(lVar7 + 0xb0) = uStack_f8;
    *(undefined8 *)(lVar7 + 0xa8) = local_100;
  }
  *(undefined8 *)(lVar7 + 0xc0) = uStack_e8;
  *(undefined8 *)(lVar7 + 0xb8) = local_f0;
LAB_015fc0cc:
  FUN_01896cc0(lVar4 + -0x28,auStack_df);
  *(undefined1 *)(psVar5 + 0x44) = 2;
  *(undefined1 *)(psVar5 + 0x40) = (undefined1)local_120;
  if (((*(long *)(psVar5 + 0xc) != 0) &&
      (lVar7 = *(long *)(*(long *)(psVar5 + 0xc) + 0x10), lVar7 != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0xf8), lVar7 != 0)) {
    *(undefined1 *)(lVar7 + 0x210) = (undefined1)local_120;
  }
  local_12c = 0x20;
  uVar2 = FUN_01751f58(*(undefined8 *)(param_1 + 8),&local_12c);
  FUN_015f9d34(&local_128,uVar2);
  if (local_128 != 0) {
    local_150 = 0x3ff82c3de12efbb4;
    pcStack_148 = "BallChange";
    local_140 = 10;
    local_138 = (long *)0x0;
    FUN_017527fc(local_128,&local_150);
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    FUN_019437fc(local_128,local_120._1_1_);
    uVar2 = FUN_00f42d24(local_128);
    uVar1 = FUN_00f42d3c(local_128);
    FUN_015f9b98(param_1,uVar2,uVar1,psVar5);
  }
  FUN_01751d6c(&local_128);
  local_12c = 0x20;
  uVar2 = FUN_01751f58(*(undefined8 *)(param_1 + 8),&local_12c);
  FUN_015f9d34(&local_128,uVar2);
  if (local_128 != 0) {
    local_170 = 0x959389dba6cbf4b4;
    pcStack_168 = "PB_Visibility";
    local_160 = 0xd;
    local_158 = (long *)0x0;
    FUN_017527fc(local_128,&local_170);
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    FUN_01df6e38(local_128,0);
    uVar2 = FUN_00f42d24(local_128);
    uVar1 = FUN_00f42d3c(local_128);
    FUN_015f9b98(param_1,uVar2,uVar1,psVar5);
  }
  FUN_01751d6c(&local_128);
  return;
}


