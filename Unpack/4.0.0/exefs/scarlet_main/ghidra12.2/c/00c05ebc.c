/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c05ebc; name: FUN_00c05ebc
 */


void FUN_00c05ebc(long *param_1,int param_2,long param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_98 [2];
  char *local_90;
  undefined4 local_88;
  char local_80 [24];
  long local_68;
  long local_60;
  undefined8 uStack_58;
  
  lVar4 = (**(code **)(*param_1 + 0xb8))();
  plVar5 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  iVar3 = *(int *)(param_3 + 0x10);
  iVar1 = *(int *)(param_3 + 0x14);
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  (**(code **)(*plVar5 + 0x80))(plVar5,param_1,&local_68);
  if (local_60 != local_68) {
    uVar8 = 0;
    do {
      FUN_00c060f8(*(undefined8 *)(local_68 + uVar8 * 8),param_1,param_3);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)(local_60 - local_68 >> 3));
  }
  cVar2 = *(char *)(*(long *)(lVar4 + 0x20) + 0x50);
  uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
  if (cVar2 == '\0') {
    FUN_00c02020(uVar6,param_3);
  }
  else {
    FUN_00c03038();
  }
  if (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10) != (iVar1 + param_2) - iVar3) {
    local_80[0x10] = '\0';
    local_80[0x11] = '\0';
    local_80[0x12] = '\0';
    local_80[0x13] = '\0';
    local_80[0x14] = '\0';
    local_80[0x15] = '\0';
    local_80[0x16] = '\0';
    local_80[0x17] = '\0';
    local_98[0] = 3;
    local_88 = 0x32a;
    local_90 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/wire_format.cc"
    ;
    local_80[0] = '\0';
    local_80[1] = '\0';
    local_80[2] = '\0';
    local_80[3] = '\0';
    local_80[4] = '\0';
    local_80[5] = '\0';
    local_80[6] = '\0';
    local_80[7] = '\0';
    local_80[8] = '\0';
    local_80[9] = '\0';
    local_80[10] = '\0';
    local_80[0xb] = '\0';
    local_80[0xc] = '\0';
    local_80[0xd] = '\0';
    local_80[0xe] = '\0';
    local_80[0xf] = '\0';
    std::string::append(local_80);
    std::string::append(local_80);
    FUN_00bb0e90(local_98);
    FUN_00bb0d74(local_98);
  }
  lVar4 = local_68;
  if (local_68 != 0) {
    local_60 = local_68;
    lVar7 = tpidr_el0;
    plVar5 = *(long **)(lVar7 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar8 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar5,lVar4,0,8);
      return;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0,8);
  }
  return;
}


