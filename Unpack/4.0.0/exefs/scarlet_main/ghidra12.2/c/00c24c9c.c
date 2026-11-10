/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c24c9c; name: FUN_00c24c9c
 */


void FUN_00c24c9c(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  plVar7 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar7;
  if (plVar5 == (long *)0x0) {
LAB_00c24cf4:
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_60[0] = 3;
    local_50 = 0x337;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
    ;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    std::string::append(local_48);
    std::string::append(local_48);
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
    plVar3 = plVar7;
  }
  else {
    plVar3 = plVar7;
    do {
      if (param_2 <= (int)plVar5[4]) {
        plVar3 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar3 == plVar7) || (param_2 < (int)plVar3[4])) goto LAB_00c24cf4;
  }
  switch(*(undefined4 *)(PTR_DAT_047dad98 + (ulong)*(byte *)(plVar3 + 6) * 4)) {
  case 1:
  case 3:
  case 6:
  case 8:
    lVar4 = *(long *)(plVar3[5] + 8) + 8;
    uVar1 = *(undefined4 *)(lVar4 + (long)param_3 * 4);
    *(undefined4 *)(lVar4 + (long)param_3 * 4) = *(undefined4 *)(lVar4 + (long)param_4 * 4);
    *(undefined4 *)(lVar4 + (long)param_4 * 4) = uVar1;
    break;
  case 2:
  case 4:
  case 5:
    lVar4 = *(long *)(plVar3[5] + 8);
    goto LAB_00c24dbc;
  case 7:
    lVar4 = *(long *)(plVar3[5] + 8) + 8;
    uVar2 = *(undefined1 *)(lVar4 + param_3);
    *(undefined1 *)(lVar4 + param_3) = *(undefined1 *)(lVar4 + param_4);
    *(undefined1 *)(lVar4 + param_4) = uVar2;
    break;
  case 9:
  case 10:
    lVar4 = *(long *)(plVar3[5] + 0x10);
LAB_00c24dbc:
    lVar4 = lVar4 + 8;
    uVar6 = *(undefined8 *)(lVar4 + (long)param_3 * 8);
    *(undefined8 *)(lVar4 + (long)param_3 * 8) = *(undefined8 *)(lVar4 + (long)param_4 * 8);
    *(undefined8 *)(lVar4 + (long)param_4 * 8) = uVar6;
  }
  return;
}


