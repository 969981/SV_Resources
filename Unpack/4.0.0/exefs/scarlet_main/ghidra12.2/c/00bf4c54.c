/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf4c54; name: FUN_00bf4c54
 */


void FUN_00bf4c54(uint *param_1,uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_70 [2];
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  if (param_2 == param_1) {
    local_70[0] = 3;
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_60 = 0x47a;
    local_68 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/repeated_field.h"
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
  }
  if (*param_2 != 0) {
    uVar4 = *param_1 + *param_2;
    if ((int)param_1[1] < (int)uVar4) {
      plVar5 = *(long **)(param_1 + 2);
      if (plVar5 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar5;
      }
      uVar2 = param_1[1] * 2;
      if ((int)uVar4 <= (int)uVar2) {
        uVar4 = uVar2;
      }
      if ((int)uVar4 < 5) {
        uVar4 = 4;
      }
      uVar7 = (ulong)(uVar4 + 8);
      if (lVar6 == 0) {
        plVar3 = operator_new__(uVar7);
      }
      else {
        plVar3 = (long *)FUN_00c0e238(lVar6,0,uVar7);
      }
      *(long **)(param_1 + 2) = plVar3;
      *plVar3 = lVar6;
      lVar6 = *(long *)(param_1 + 2);
      uVar1 = lVar6 + uVar7;
      if (lVar6 + uVar7 <= lVar6 + 9U) {
        uVar1 = lVar6 + 9U;
      }
      param_1[1] = uVar4;
      memset((void *)(lVar6 + 8),0,(uVar1 - lVar6) - 8);
      if (0 < (int)*param_1) {
        memcpy((void *)(*(long *)(param_1 + 2) + 8),plVar5 + 1,(ulong)*param_1);
      }
      if ((plVar5 != (long *)0x0) && (*plVar5 == 0)) {
        operator_delete__(plVar5);
      }
    }
    memcpy((void *)(*(long *)(param_1 + 2) + (long)(int)*param_1 + 8),
           (void *)(*(long *)(param_2 + 2) + 8),(long)(int)*param_2);
    *param_1 = *param_1 + *param_2;
  }
  return;
}


