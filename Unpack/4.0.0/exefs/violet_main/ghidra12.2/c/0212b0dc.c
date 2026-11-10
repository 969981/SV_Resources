/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212b0dc; name: FUN_0212b0dc
 */


void FUN_0212b0dc(undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  
  local_128 = 0x8b122487cf66ea75;
  pcStack_120 = "TreeNear:Start";
  local_118 = 0xe;
  local_110 = (long *)0x0;
  local_108 = 0x6474aae35d54c34c;
  pcStack_100 = "TreeNear:End";
  local_f8 = 0xc;
  local_f0 = (long *)0x0;
  local_e8 = 0xcb9b664a303c681d;
  pcStack_e0 = "GrassNear:Start";
  local_d8 = 0xf;
  local_d0 = (long *)0x0;
  local_c8 = 0x2d927685be30d0e4;
  pcStack_c0 = "GrassNear:End";
  local_a8 = 0xf245bfbc32da7760;
  pcStack_a0 = "TreeFar:Start";
  local_b8 = 0xd;
  local_b0 = (long *)0x0;
  local_98 = 0xd;
  local_90 = (long *)0x0;
  local_88 = 0x3ee668ae7aea2981;
  pcStack_80 = "TreeFar:End";
  local_68 = &local_128;
  local_78 = 0xb;
  local_70 = (long *)0x0;
  local_150 = *(undefined8 *)(param_2 + 8);
  local_160 = &local_158;
  uStack_148 = 0x3ffffffffffffff;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  lVar2 = FUN_0212be14(&local_160,&local_128,&local_68);
  *(undefined8 *)(lVar2 + 0x40) = 0x49e043f7c831bf1c;
  *(char **)(lVar2 + 0x48) = "WorldInstanceFadeNearStart";
  *(undefined8 *)(lVar2 + 0x50) = 0x1a;
  plVar3 = *(long **)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  local_68 = &local_108;
  lVar2 = FUN_0212be14(&local_160,&local_108,&local_68);
  *(undefined8 *)(lVar2 + 0x40) = 0x249cc2805586b665;
  *(char **)(lVar2 + 0x48) = "WorldInstanceFadeNearEnd";
  *(undefined8 *)(lVar2 + 0x50) = 0x18;
  plVar3 = *(long **)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  local_68 = &local_e8;
  lVar2 = FUN_0212be14(&local_160,&local_e8,&local_68);
  *(undefined8 *)(lVar2 + 0x40) = 0x900b8d8d3691fc09;
  *(char **)(lVar2 + 0x48) = "DetailInstanceFadeNearStart";
  *(undefined8 *)(lVar2 + 0x50) = 0x1b;
  plVar3 = *(long **)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  local_68 = &local_c8;
  lVar2 = FUN_0212be14(&local_160,&local_c8,&local_68);
  *(undefined8 *)(lVar2 + 0x40) = 0x812d60652befb5f8;
  *(char **)(lVar2 + 0x48) = "DetailInstanceFadeNearEnd";
  *(undefined8 *)(lVar2 + 0x50) = 0x19;
  plVar3 = *(long **)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  local_68 = &local_a8;
  lVar2 = FUN_0212be14(&local_160,&local_a8,&local_68);
  *(undefined8 *)(lVar2 + 0x40) = 0xc5e5d8a7ea22b261;
  *(char **)(lVar2 + 0x48) = "WorldInstanceFadeFarStart";
  *(undefined8 *)(lVar2 + 0x50) = 0x19;
  plVar3 = *(long **)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  local_68 = &local_88;
  lVar2 = FUN_0212be14(&local_160,&local_88,&local_68);
  *(undefined8 *)(lVar2 + 0x40) = 0xd94a1e2d442e7240;
  *(char **)(lVar2 + 0x48) = "WorldInstanceFadeFarEnd";
  *(undefined8 *)(lVar2 + 0x50) = 0x17;
  plVar3 = *(long **)(lVar2 + 0x58);
  *(undefined8 *)(lVar2 + 0x58) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined8 *)(lVar2 + 0x58) = 0;
  uVar4 = FUN_0212bec8(param_1,&local_128);
  uVar1 = FUN_012595d8(param_1,uVar4);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    lVar2 = FUN_0212bec8(param_1,&local_128);
    uVar5 = FUN_021237ec(param_1,lVar2 + 0x100000000U & 0xffffffff00000000 | 1);
    uVar6 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar6 = uVar5 >> 0x20;
    }
    local_68 = &local_128;
    lVar2 = FUN_0212be14(&local_160,&local_128,&local_68);
    FUN_01f990fc(uVar6,lVar2 + 0x40);
  }
  uVar4 = FUN_0212bec8(param_1,&local_108);
  uVar1 = FUN_012595d8(param_1,uVar4);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    lVar2 = FUN_0212bec8(param_1,&local_108);
    uVar5 = FUN_021237ec(param_1,lVar2 + 0x100000000U & 0xffffffff00000000 | 1);
    uVar6 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar6 = uVar5 >> 0x20;
    }
    local_68 = &local_108;
    lVar2 = FUN_0212be14(&local_160,&local_108,&local_68);
    FUN_01f990fc(uVar6,lVar2 + 0x40);
  }
  uVar4 = FUN_0212bec8(param_1,&local_e8);
  uVar1 = FUN_012595d8(param_1,uVar4);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    lVar2 = FUN_0212bec8(param_1,&local_e8);
    uVar5 = FUN_021237ec(param_1,lVar2 + 0x100000000U & 0xffffffff00000000 | 1);
    uVar6 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar6 = uVar5 >> 0x20;
    }
    local_68 = &local_e8;
    lVar2 = FUN_0212be14(&local_160,&local_e8,&local_68);
    FUN_01f990fc(uVar6,lVar2 + 0x40);
  }
  uVar4 = FUN_0212bec8(param_1,&local_c8);
  uVar1 = FUN_012595d8(param_1,uVar4);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    lVar2 = FUN_0212bec8(param_1,&local_c8);
    uVar5 = FUN_021237ec(param_1,lVar2 + 0x100000000U & 0xffffffff00000000 | 1);
    uVar6 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar6 = uVar5 >> 0x20;
    }
    local_68 = &local_c8;
    lVar2 = FUN_0212be14(&local_160,&local_c8,&local_68);
    FUN_01f990fc(uVar6,lVar2 + 0x40);
  }
  uVar4 = FUN_0212bec8(param_1,&local_a8);
  uVar1 = FUN_012595d8(param_1,uVar4);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    lVar2 = FUN_0212bec8(param_1,&local_a8);
    uVar5 = FUN_021237ec(param_1,lVar2 + 0x100000000U & 0xffffffff00000000 | 1);
    uVar6 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar6 = uVar5 >> 0x20;
    }
    local_68 = &local_a8;
    lVar2 = FUN_0212be14(&local_160,&local_a8,&local_68);
    FUN_01f990fc(uVar6,lVar2 + 0x40);
  }
  uVar4 = FUN_0212bec8(param_1,&local_88);
  uVar1 = FUN_012595d8(param_1,uVar4);
  if (((uVar1 & 0xff) != 0) && (0xff < uVar1)) {
    lVar2 = FUN_0212bec8(param_1,&local_88);
    uVar5 = FUN_021237ec(param_1,lVar2 + 0x100000000U & 0xffffffff00000000 | 1);
    uVar6 = 0;
    if ((uVar5 & 0xff) != 0) {
      uVar6 = uVar5 >> 0x20;
    }
    local_68 = &local_88;
    lVar2 = FUN_0212be14(&local_160,&local_88,&local_68);
    FUN_01f990fc(uVar6,lVar2 + 0x40);
  }
  FUN_0212bfcc(&local_160,local_158);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  return;
}


