/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be5160; name: FUN_00be5160
 */


void FUN_00be5160(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80 [2];
  char *local_78;
  undefined4 local_70;
  char local_68 [24];
  
  if (param_1 == param_2) {
    return;
  }
  plVar3 = (long *)param_1[1];
  if (plVar3 == (long *)0x0) {
    plVar5 = (long *)param_2[1];
    if (plVar5 != (long *)0x0) {
      lVar6 = 0;
      goto LAB_00be51c0;
    }
LAB_00be5268:
    param_1[1] = param_2[1];
    param_2[1] = (ulong)plVar3;
    uVar1 = *param_1;
    *(int *)param_1 = (int)*param_2;
    *(int *)param_2 = (int)uVar1;
    iVar8 = *(int *)((long)param_1 + 4);
    *(int *)((long)param_1 + 4) = *(int *)((long)param_2 + 4);
    *(int *)((long)param_2 + 4) = iVar8;
  }
  else {
    lVar6 = *plVar3;
    plVar5 = (long *)param_2[1];
    if (plVar5 == (long *)0x0) {
      if (lVar6 == 0) goto LAB_00be5268;
      local_90 = 0;
      local_88 = (long *)0x0;
    }
    else {
LAB_00be51c0:
      lVar7 = *plVar5;
      if (lVar6 == lVar7) goto LAB_00be5268;
      local_90 = 0;
      local_88 = (long *)0x0;
      if (lVar7 != 0) {
        local_88 = (long *)FUN_00c0e238(lVar7,0,8);
        *local_88 = lVar7;
      }
    }
    if (&local_90 == param_1) {
      local_80[0] = 3;
      local_68[0x10] = '\0';
      local_68[0x11] = '\0';
      local_68[0x12] = '\0';
      local_68[0x13] = '\0';
      local_68[0x14] = '\0';
      local_68[0x15] = '\0';
      local_68[0x16] = '\0';
      local_68[0x17] = '\0';
      local_70 = 0x47a;
      local_78 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/repeated_field.h"
      ;
      local_68[0] = '\0';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      local_68[0xc] = '\0';
      local_68[0xd] = '\0';
      local_68[0xe] = '\0';
      local_68[0xf] = '\0';
      std::string::append(local_68);
      FUN_00bb0e90(local_80);
      FUN_00bb0d74(local_80);
    }
    plVar3 = local_88;
    if ((int)*param_1 != 0) {
      uVar4 = (int)local_90 + (int)*param_1;
      iVar8 = (int)local_90;
      if (local_90._4_4_ < (int)uVar4) {
        if (local_88 == (long *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *local_88;
        }
        if ((int)uVar4 <= local_90._4_4_ * 2) {
          uVar4 = local_90._4_4_ * 2;
        }
        if ((int)uVar4 < 5) {
          uVar4 = 4;
        }
        uVar1 = (ulong)uVar4 * 4 + 8;
        if (lVar6 == 0) {
          local_88 = operator_new__(uVar1);
        }
        else {
          local_88 = (long *)FUN_00c0e238(lVar6,0,uVar1);
        }
        *local_88 = lVar6;
        uVar2 = (long)local_88 + uVar1;
        if ((long)local_88 + uVar1 <= (long)local_88 + 0xcU) {
          uVar2 = (long)local_88 + 0xcU;
        }
        local_90 = CONCAT44(uVar4,(int)local_90);
        memset(local_88 + 1,0,(uVar2 - (long)local_88) - 5 & 0xfffffffffffffffc);
        iVar8 = (int)local_90;
        if (0 < (int)local_90) {
          memcpy(local_88 + 1,plVar3 + 1,(local_90 & 0xffffffff) << 2);
        }
        if ((plVar3 != (long *)0x0) && (*plVar3 == 0)) {
          operator_delete__(plVar3);
          iVar8 = (int)local_90;
        }
      }
      memcpy((void *)((long)local_88 + (long)iVar8 * 4 + 8),(void *)(param_1[1] + 8),
             (long)(int)*param_1 << 2);
      local_90 = CONCAT44(local_90._4_4_,(int)local_90 + (int)*param_1);
    }
    *(int *)param_1 = 0;
    if ((int)*param_2 != 0) {
      FUN_00ba867c(param_1);
      memcpy((void *)(param_1[1] + (long)(int)*param_1 * 4 + 8),(void *)(param_2[1] + 8),
             (long)(int)*param_2 << 2);
      *(int *)param_1 = (int)*param_1 + (int)*param_2;
    }
    if (&local_90 == param_2) {
      plVar3 = (long *)param_2[1];
    }
    else {
      plVar3 = (long *)param_2[1];
      param_2[1] = (ulong)local_88;
      uVar1 = *param_2;
      *(int *)param_2 = (int)local_90;
      *(int *)((long)param_2 + 4) = local_90._4_4_;
      local_90 = uVar1;
      local_88 = plVar3;
    }
    if ((plVar3 != (long *)0x0) && (*plVar3 == 0)) {
      operator_delete__(plVar3);
    }
  }
  return;
}


