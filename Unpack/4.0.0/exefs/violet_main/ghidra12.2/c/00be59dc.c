/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be59dc; name: FUN_00be59dc
 */


void FUN_00be59dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80 [2];
  char *local_78;
  undefined4 local_70;
  char local_68 [24];
  
  if (param_1 == param_2) {
    return;
  }
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    plVar4 = (long *)param_2[1];
    if (plVar4 != (long *)0x0) {
      lVar5 = 0;
      goto LAB_00be5a3c;
    }
LAB_00be5ae4:
    param_1[1] = param_2[1];
    param_2[1] = (ulong)plVar2;
    uVar1 = *param_1;
    *(int *)param_1 = (int)*param_2;
    *(int *)param_2 = (int)uVar1;
    iVar7 = *(int *)((long)param_1 + 4);
    *(int *)((long)param_1 + 4) = *(int *)((long)param_2 + 4);
    *(int *)((long)param_2 + 4) = iVar7;
  }
  else {
    lVar5 = *plVar2;
    plVar4 = (long *)param_2[1];
    if (plVar4 == (long *)0x0) {
      if (lVar5 == 0) goto LAB_00be5ae4;
      local_90 = 0;
      local_88 = (long *)0x0;
    }
    else {
LAB_00be5a3c:
      lVar6 = *plVar4;
      if (lVar5 == lVar6) goto LAB_00be5ae4;
      local_90 = 0;
      local_88 = (long *)0x0;
      if (lVar6 != 0) {
        local_88 = (long *)FUN_00c0e238(lVar6,0,8);
        *local_88 = lVar6;
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
    plVar2 = local_88;
    if ((int)*param_1 != 0) {
      uVar3 = (int)local_90 + (int)*param_1;
      iVar7 = (int)local_90;
      if (local_90._4_4_ < (int)uVar3) {
        if (local_88 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *local_88;
        }
        if ((int)uVar3 <= local_90._4_4_ * 2) {
          uVar3 = local_90._4_4_ * 2;
        }
        if ((int)uVar3 < 5) {
          uVar3 = 4;
        }
        uVar1 = (ulong)uVar3 * 8 + 8;
        if (lVar5 == 0) {
          local_88 = operator_new__(uVar1);
        }
        else {
          local_88 = (long *)FUN_00c0e238(lVar5,0,uVar1);
        }
        *local_88 = lVar5;
        plVar4 = local_88 + (ulong)uVar3 + 1;
        if (local_88 + (ulong)uVar3 + 1 <= local_88 + 2) {
          plVar4 = local_88 + 2;
        }
        local_90 = CONCAT44(uVar3,(int)local_90);
        memset(local_88 + 1,0,~(ulong)local_88 + (long)plVar4 & 0xfffffffffffffff8);
        iVar7 = (int)local_90;
        if (0 < (int)local_90) {
          memcpy(local_88 + 1,plVar2 + 1,(local_90 & 0xffffffff) << 3);
        }
        if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
          operator_delete__(plVar2);
          iVar7 = (int)local_90;
        }
      }
      memcpy(local_88 + (long)iVar7 + 1,(void *)(param_1[1] + 8),(long)(int)*param_1 << 3);
      local_90 = CONCAT44(local_90._4_4_,(int)local_90 + (int)*param_1);
    }
    *(int *)param_1 = 0;
    if ((int)*param_2 != 0) {
      FUN_00bf493c(param_1);
      memcpy((void *)(param_1[1] + (long)(int)*param_1 * 8 + 8),(void *)(param_2[1] + 8),
             (long)(int)*param_2 << 3);
      *(int *)param_1 = (int)*param_1 + (int)*param_2;
    }
    if (&local_90 == param_2) {
      plVar2 = (long *)param_2[1];
    }
    else {
      plVar2 = (long *)param_2[1];
      param_2[1] = (ulong)local_88;
      uVar1 = *param_2;
      *(int *)param_2 = (int)local_90;
      *(int *)((long)param_2 + 4) = local_90._4_4_;
      local_90 = uVar1;
      local_88 = plVar2;
    }
    if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
      operator_delete__(plVar2);
    }
  }
  return;
}


