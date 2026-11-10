/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb732c; name: FUN_00fb732c
 */


void FUN_00fb732c(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_b8 [2];
  ulong local_b0;
  undefined8 uStack_a8;
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  char local_60;
  locale alStack_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  
  if ((char)param_1[0x17] == '\0') {
    std::locale::locale((locale *)local_b8);
  }
  else {
    std::locale::locale((locale *)local_b8,(locale *)(param_1 + 0x18));
  }
  plVar3 = (long *)std::locale::use_facet((id *)local_b8);
  uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
  std::locale::~locale((locale *)local_b8);
  if (param_1[1] - *param_1 == 0) {
    local_b8[0] = 0xffffffff;
    local_b0 = 0;
    uStack_a8 = 0;
    local_60 = '\0';
    local_64 = 0;
    local_48 = 0;
    local_80 = 0;
    uStack_78 = 6;
    local_6c = 0x1002;
    local_50 = 0x7fffffffffffffff;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_70 = (char)uVar1;
    FUN_00fb8bf8(param_1,param_2,local_b8);
    if (local_60 != '\0') {
      std::locale::~locale(alStack_58);
      local_60 = '\0';
    }
    lVar6 = local_88;
    if (((local_98 & 1) != 0) && (local_88 != 0)) {
      lVar5 = tpidr_el0;
      plVar3 = *(long **)(lVar5 + 0x30);
      if (plVar3 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar3 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar3,lVar6,0,8);
      }
    }
    lVar6 = local_a0;
    if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
      lVar5 = tpidr_el0;
      plVar3 = *(long **)(lVar5 + 0x30);
      if (plVar3 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar3 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,0,8);
      }
      else {
        FUN_00c48fe8(plVar3,lVar6,0,8);
      }
    }
  }
  else {
    if ((ulong)((param_1[1] - *param_1 >> 3) * -0x1111111111111111) < param_2) {
      local_b8[0] = 0xffffffff;
      local_b0 = 0;
      uStack_a8 = 0;
      local_80 = 0;
      uStack_78 = 6;
      local_6c = 0x1002;
      local_60 = '\0';
      local_64 = 0;
      local_50 = 0x7fffffffffffffff;
      local_48 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_70 = (char)uVar1;
      FUN_00fb70bc(param_1,param_2,local_b8);
      if (local_60 != '\0') {
        std::locale::~locale(alStack_58);
        local_60 = '\0';
      }
      lVar6 = local_88;
      if (((local_98 & 1) != 0) && (local_88 != 0)) {
        lVar5 = tpidr_el0;
        plVar3 = *(long **)(lVar5 + 0x30);
        if (plVar3 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar3 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar3,lVar6,0,8);
        }
      }
      lVar6 = local_a0;
      if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
        lVar5 = tpidr_el0;
        plVar3 = *(long **)(lVar5 + 0x30);
        if (plVar3 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar3 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar3,lVar6,0,8);
        }
      }
      FUN_00fbf8c8(param_1 + 3,0,0);
    }
    else {
      FUN_00fbf8c8(param_1 + 3,0,0);
      if (param_2 == 0) goto LAB_00fb73fc;
    }
    FUN_00fc03c8(*param_1,uVar1);
    lVar6 = param_2 - 1;
    if (lVar6 != 0) {
      lVar5 = 0x78;
      do {
        FUN_00fc03c8(*param_1 + lVar5,uVar1);
        lVar6 = lVar6 + -1;
        lVar5 = lVar5 + 0x78;
      } while (lVar6 != 0);
    }
  }
LAB_00fb73fc:
  std::string::resize((ulong)(param_1 + 8),'\0');
  return;
}


