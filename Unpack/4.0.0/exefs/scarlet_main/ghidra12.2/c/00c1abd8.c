/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1abd8; name: FUN_00c1abd8
 */


ulong FUN_00c1abd8(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *local_60;
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  uVar4 = (uint)param_1[1];
  if (uVar4 != (uint)param_2[1]) {
    local_60 = (byte *)CONCAT44(local_60._4_4_,3);
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0xb6;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
    uVar4 = (uint)param_1[1];
  }
  if (uVar4 == 0) {
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_60 = (byte *)CONCAT44(local_60._4_4_,3);
    local_50 = 0x72;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    std::string::append(local_48);
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
    uVar4 = (uint)param_1[1];
  }
  switch(uVar4) {
  case 1:
    bVar2 = SBORROW4((uint)*param_1,(uint)*param_2);
    bVar1 = (int)((uint)*param_1 - (uint)*param_2) < 0;
    goto LAB_00c1ad54;
  case 2:
    bVar2 = SBORROW8(*param_1,*param_2);
    bVar1 = (long)(*param_1 - *param_2) < 0;
LAB_00c1ad54:
    return (ulong)(bVar1 != bVar2);
  case 3:
    uVar4 = (uint)*param_1;
    uVar6 = (uint)*param_2;
    break;
  case 4:
    bVar1 = *param_2 <= *param_1;
    goto LAB_00c1adb8;
  case 5:
  case 6:
  case 8:
  case 10:
    local_60 = (byte *)CONCAT44(local_60._4_4_,3);
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0xbd;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
    return 0;
  case 7:
    uVar4 = (uint)(byte)*param_1;
    uVar6 = (uint)(byte)*param_2;
    break;
  case 9:
    pbVar5 = (byte *)*param_2;
    local_58 = *(char **)(pbVar5 + 8);
    local_60 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      local_60 = pbVar5 + 1;
      local_58 = (char *)(ulong)(*pbVar5 >> 1);
    }
    uVar3 = FUN_028a8144(*param_1,&local_60);
    return uVar3 >> 0x1f & 1;
  default:
    return 0;
  }
  bVar1 = uVar6 <= uVar4;
LAB_00c1adb8:
  return (ulong)!bVar1;
}


