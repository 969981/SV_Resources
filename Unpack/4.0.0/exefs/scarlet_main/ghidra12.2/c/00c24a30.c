/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c24a30; name: FUN_00c24a30
 */


void FUN_00c24a30(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  char local_38 [24];
  
  plVar6 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar6;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar6;
    do {
      if (param_2 <= (int)plVar4[4]) {
        plVar1 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar1 != plVar6) && ((int)plVar1[4] <= param_2)) goto LAB_00c24adc;
  }
  local_38[0x10] = '\0';
  local_38[0x11] = '\0';
  local_38[0x12] = '\0';
  local_38[0x13] = '\0';
  local_38[0x14] = '\0';
  local_38[0x15] = '\0';
  local_38[0x16] = '\0';
  local_38[0x17] = '\0';
  local_50[0] = 3;
  local_40 = 0x304;
  local_48 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
  ;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  std::string::append(local_38);
  std::string::append(local_38);
  FUN_00bb0e90(local_50);
  FUN_00bb0d74(local_50);
  plVar1 = plVar6;
LAB_00c24adc:
  switch(*(undefined4 *)(PTR_DAT_047dad98 + (ulong)*(byte *)(plVar1 + 6) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(int *)plVar1[5] = *(int *)plVar1[5] + -1;
    break;
  case 9:
    lVar2 = plVar1[5];
    lVar5 = (long)*(int *)(lVar2 + 8) + -1;
    *(int *)(lVar2 + 8) = (int)lVar5;
    pbVar3 = *(byte **)(*(long *)(lVar2 + 0x10) + lVar5 * 8 + 8);
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
    break;
  case 10:
    lVar2 = plVar1[5];
    lVar5 = (long)*(int *)(lVar2 + 8) + -1;
    *(int *)(lVar2 + 8) = (int)lVar5;
    (**(code **)(**(long **)(*(long *)(lVar2 + 0x10) + lVar5 * 8 + 8) + 0x38))();
  }
  return;
}


