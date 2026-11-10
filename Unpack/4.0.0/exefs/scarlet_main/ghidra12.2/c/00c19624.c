/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c19624; name: FUN_00c19624
 */


bool FUN_00c19624(uint *param_1,uint *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *__s1;
  byte *__s2;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  uVar5 = param_1[2];
  if (uVar5 != param_2[2]) {
    local_60[0] = 3;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0xd2;
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
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
    uVar5 = param_1[2];
  }
  if (uVar5 == 0) {
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_60[0] = 3;
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
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
    uVar5 = param_1[2];
  }
  switch(uVar5) {
  case 1:
  case 3:
    uVar5 = *param_1;
    uVar7 = *param_2;
    break;
  case 2:
  case 4:
    return *(long *)param_1 == *(long *)param_2;
  case 5:
  case 6:
  case 8:
  case 10:
    local_60[0] = 3;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0xd9;
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
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
  default:
    local_60[0] = 3;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0xe8;
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
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
    return false;
  case 7:
    uVar5 = (uint)(byte)*param_1;
    uVar7 = (uint)(byte)*param_2;
    break;
  case 9:
    pbVar8 = *(byte **)param_1;
    bVar2 = *pbVar8;
    pbVar9 = *(byte **)param_2;
    uVar6 = (ulong)(bVar2 >> 1);
    __n = uVar6;
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(pbVar8 + 8);
    }
    bVar3 = *pbVar9;
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (__n != sVar1) {
      return false;
    }
    __s1 = *(byte **)(pbVar8 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = pbVar8 + 1;
    }
    __s2 = *(byte **)(pbVar9 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s2 = pbVar9 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        do {
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 != *__s2) {
            return false;
          }
          uVar6 = uVar6 - 1;
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
        return true;
      }
    }
    else if (__n != 0) {
      iVar4 = memcmp(__s1,__s2,__n);
      return iVar4 == 0;
    }
    return true;
  }
  return uVar5 == uVar7;
}


