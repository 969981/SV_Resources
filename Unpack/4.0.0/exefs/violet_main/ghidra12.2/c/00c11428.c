/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c11428; name: FUN_00c11428
 */


bool FUN_00c11428(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long local_f0;
  long lStack_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  int local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0 [3];
  undefined4 local_88 [2];
  char *local_80;
  undefined4 local_78;
  char local_70 [40];
  ulong local_48;
  
  lStack_e8 = param_2 + param_3;
  local_e0 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0x400000000000000;
  uStack_b8 = *(undefined4 *)PTR_DAT_047dac98;
  local_b0 = 0;
  uStack_a8 = 0;
  local_bc = 0x2000000;
  local_f0 = param_2;
  local_d8 = param_3;
  local_c8 = param_3;
  local_b4 = uStack_b8;
  (**(code **)(*param_1 + 0x38))();
  uVar3 = (**(code **)(*param_1 + 0x58))(param_1,&local_f0);
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar3 & 1) == 0) {
      local_88[0] = 2;
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
      local_78 = 0x77;
      local_80 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/message_lite.cc"
      ;
      local_70[0x10] = '\0';
      local_70[0x11] = '\0';
      local_70[0x12] = '\0';
      local_70[0x13] = '\0';
      local_70[0x14] = '\0';
      local_70[0x15] = '\0';
      local_70[0x16] = '\0';
      local_70[0x17] = '\0';
      local_a0[0] = 0;
      local_a0[1] = 0;
      local_a0[2] = 0;
      std::string::append((char *)local_a0);
      std::string::append((char *)local_a0);
      std::string::append((char *)local_a0);
      (**(code **)(*param_1 + 0x10))(local_70 + 0x18,param_1);
      uVar3 = (ulong)(local_70 + 0x18) | 1;
      if ((local_70[0x18] & 1U) != 0) {
        uVar3 = local_48;
      }
      std::string::append((char *)local_a0,uVar3);
      uVar3 = local_48;
      if (((local_70[0x18] & 1U) != 0) && (local_48 != 0)) {
        lVar5 = tpidr_el0;
        plVar6 = *(long **)(lVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,uVar3,0,8);
        }
      }
      std::string::append((char *)local_a0);
      (**(code **)(*param_1 + 0x48))(local_70 + 0x18,param_1);
      uVar3 = (ulong)(local_70 + 0x18) | 1;
      if ((local_70[0x18] & 1U) != 0) {
        uVar3 = local_48;
      }
      std::string::append((char *)local_a0,uVar3);
      if (((local_70[0x18] & 1U) != 0) && (local_48 != 0)) {
        lVar5 = tpidr_el0;
        plVar6 = *(long **)(lVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,local_48,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,local_48,0,8);
        }
      }
      uVar3 = (ulong)local_a0 | 1;
      if ((local_a0[0] & 1) != 0) {
        uVar3 = local_a0[2];
      }
      std::string::append(local_70,uVar3);
      FUN_00bb0e90(local_88);
      uVar3 = local_a0[2];
      if (((local_a0[0] & 1) != 0) && (local_a0[2] != 0)) {
        lVar5 = tpidr_el0;
        plVar6 = *(long **)(lVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,uVar3,0,8);
        }
      }
      FUN_00bb0d74(local_88);
      bVar1 = false;
    }
    else {
      bVar1 = (char)local_cc != '\0';
    }
  }
  FUN_00c08dac(&local_f0);
  return bVar1;
}


