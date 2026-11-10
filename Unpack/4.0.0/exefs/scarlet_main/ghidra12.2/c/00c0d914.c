/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0d914; name: FUN_00c0d914
 */


undefined8 FUN_00c0d914(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x3;
  long *plVar5;
  ulong unaff_x23;
  uint uVar6;
  uint local_88;
  undefined4 uStack_84;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70 [24];
  ulong local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  uVar2 = FUN_00c0de30();
  if ((uVar2 & 1) == 0) {
    local_58 = local_58 & 0xffffffffffff0000;
    if (in_x3 == 0) {
      uVar6 = 0;
    }
    else {
      FUN_00c0e030(&local_88," \'%s\'",in_x3);
      if (((local_58 & 1) != 0) && (local_48 != 0)) {
        lVar4 = tpidr_el0;
        plVar5 = *(long **)(lVar4 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,local_48,0,8);
        }
        else {
          FUN_00c48fe8(plVar5,local_48,0,8);
        }
      }
      local_58 = CONCAT44(uStack_84,local_88);
      uVar6 = local_88 & 0xff;
      unaff_x23 = CONCAT44(uStack_74,local_78);
      uStack_50 = local_80;
      local_48 = unaff_x23;
    }
    local_70[0x10] = '\0';
    local_70[0x11] = '\0';
    local_70[0x12] = '\0';
    local_70[0x13] = '\0';
    local_70[0x14] = '\0';
    local_70[0x15] = '\0';
    local_70[0x16] = '\0';
    local_70[0x17] = '\0';
    local_88 = 2;
    local_78 = 0x217;
    local_80 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/wire_format_lite.cc"
    ;
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    local_70[0xc] = '\0';
    local_70[0xd] = '\0';
    local_70[0xe] = '\0';
    local_70[0xf] = '\0';
    std::string::append(local_70);
    uVar2 = (ulong)&local_58 | 1;
    if ((uVar6 & 1) != 0) {
      uVar2 = unaff_x23;
    }
    std::string::append(local_70,uVar2);
    std::string::append(local_70);
    std::string::append(local_70);
    std::string::append(local_70);
    std::string::append(local_70);
    std::string::append(local_70);
    std::string::append(local_70);
    FUN_00bb0e90(&local_88);
    FUN_00bb0d74(&local_88);
    if (((local_58 & 1) != 0) && (local_48 != 0)) {
      lVar4 = tpidr_el0;
      plVar5 = *(long **)(lVar4 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,local_48,0,8);
      }
      else {
        FUN_00c48fe8(plVar5,local_48,0,8);
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


