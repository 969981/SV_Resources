/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c14c90; name: FUN_00c14c90
 */


void FUN_00c14c90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  string *this;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  undefined4 local_70 [2];
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_70[0] = 3;
    local_60 = 0x72;
    local_68 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
    ;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    std::string::append(local_58);
    std::string::append(local_58);
    std::string::append(local_58);
    FUN_00bb0e90(local_70);
    FUN_00bb0d74(local_70);
    iVar2 = *(int *)(param_2 + 1);
  }
  if (*(int *)(param_1 + 1) == iVar2) {
    switch(iVar2) {
    case 1:
    case 3:
switchD_00c14d54_caseD_1:
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      break;
    case 2:
    case 4:
switchD_00c14d54_caseD_2:
      *param_1 = *param_2;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
switchD_00c14d54_caseD_5:
      local_70[0] = 3;
      local_58[0x10] = '\0';
      local_58[0x11] = '\0';
      local_58[0x12] = '\0';
      local_58[0x13] = '\0';
      local_58[0x14] = '\0';
      local_58[0x15] = '\0';
      local_58[0x16] = '\0';
      local_58[0x17] = '\0';
      local_60 = 0xf3;
      local_68 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
      ;
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      std::string::append(local_58);
      FUN_00bb0e90(local_70);
      FUN_00bb0d74(local_70);
      return;
    case 7:
switchD_00c14d54_caseD_7:
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      return;
    case 9:
      this = (string *)*param_1;
LAB_00c14e9c:
      std::string::operator=(this,(string *)*param_2);
    default:
      break;
    }
switchD_00c14d54_default:
    return;
  }
  if ((*(int *)(param_1 + 1) == 9) && (pbVar6 = (byte *)*param_1, pbVar6 != (byte *)0x0)) {
    if (((*pbVar6 & 1) != 0) && (lVar4 = *(long *)(pbVar6 + 0x10), lVar4 != 0)) {
      lVar5 = tpidr_el0;
      plVar7 = *(long **)(lVar5 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar4,0,8);
      }
    }
    lVar4 = tpidr_el0;
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,pbVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,pbVar6,0,8);
    }
  }
  *(int *)(param_1 + 1) = iVar2;
  switch(iVar2) {
  case 1:
  case 3:
    goto switchD_00c14d54_caseD_1;
  case 2:
  case 4:
    goto switchD_00c14d54_caseD_2;
  case 5:
  case 6:
  case 8:
  case 10:
    goto switchD_00c14d54_caseD_5;
  case 7:
    goto switchD_00c14d54_caseD_7;
  case 9:
    lVar4 = tpidr_el0;
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    this = (string *)(**(code **)(*plVar7 + 0x10))(plVar7,0x18,8);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *param_1 = this;
    goto LAB_00c14e9c;
  default:
    goto switchD_00c14d54_default;
  }
}


