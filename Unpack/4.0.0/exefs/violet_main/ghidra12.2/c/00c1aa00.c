/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1aa00; name: FUN_00c1aa00
 */


ulong FUN_00c1aa00(long param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  char local_38 [24];
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_50[0] = 3;
    local_40 = 0x72;
    local_48 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    std::string::append(local_38);
    FUN_00bb0e90(local_50);
    FUN_00bb0d74(local_50);
    iVar1 = *(int *)(param_1 + 8);
  }
  switch(iVar1) {
  case 1:
    iVar1 = FUN_00c168d8(param_1);
    uVar2 = (ulong)iVar1;
    break;
  case 2:
    uVar2 = FUN_00c166fc(param_1);
    break;
  case 3:
    uVar2 = FUN_00c16c90(param_1);
    uVar2 = uVar2 & 0xffffffff;
    break;
  case 4:
    uVar2 = FUN_00c16ab4(param_1);
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    local_50[0] = 3;
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_40 = 0x6b6;
    local_48 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    FUN_00bb0e90(local_50);
    FUN_00bb0d74(local_50);
  default:
    local_50[0] = 3;
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_40 = 0x6c5;
    local_48 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    FUN_00bb0e90(local_50);
    FUN_00bb0d74(local_50);
LAB_00c1ab40:
    uVar2 = 0;
    break;
  case 7:
    uVar2 = FUN_00c16e6c(param_1);
    uVar2 = uVar2 & 1;
    break;
  case 9:
    pbVar3 = (byte *)FUN_00c16520(param_1);
    pbVar5 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar5 = pbVar3 + 1;
    }
    bVar4 = *pbVar5;
    if (bVar4 != 0) {
      uVar2 = 0;
      do {
        pbVar5 = pbVar5 + 1;
        uVar2 = uVar2 * 5 + (ulong)bVar4;
        bVar4 = *pbVar5;
      } while (bVar4 != 0);
      return uVar2;
    }
    goto LAB_00c1ab40;
  }
  return uVar2;
}


