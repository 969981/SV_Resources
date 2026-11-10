/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088c324; name: FUN_0088c324
 */


float FUN_0088c324(undefined8 *param_1,float *param_2,float *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  uVar2 = *(uint *)(param_1 + 10);
  fVar3 = 0.0;
  if (((uVar2 & 0x333) == 0) || ((uVar2 & 0x333) == 0x300)) {
    fVar4 = 0.0;
    fVar6 = 0.0;
    uVar2 = uVar2 & 0x30;
    if (uVar2 != 0x20) goto LAB_0088c470;
LAB_0088c490:
    *param_2 = *param_2 - fVar6;
  }
  else {
    if (param_4 == 0) {
      fVar8 = 0.0;
      fVar6 = 0.0;
      fVar4 = 0.0;
      fVar3 = 0.0;
    }
    else {
      local_e0 = *param_1;
      fVar8 = 0.0;
      uStack_d8 = param_1[1];
      local_c0 = param_1[4];
      local_d0 = (undefined4)param_1[2];
      uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
      local_b8 = param_1[5];
      local_b0 = param_1[6];
      uVar1 = (ulong)param_5;
      local_a8 = param_1[7];
      uStack_a0 = param_1[8];
      local_98 = param_1[9];
      uStack_90 = param_1[10];
      local_88 = param_1[0xb];
      uStack_80 = param_1[0xc];
      uStack_cc = 0;
      local_c8 = 0;
      fVar9 = 0.0;
      fVar7 = 0.0;
      fVar5 = 0.0;
      local_68 = param_4;
      do {
        local_78 = 0;
        local_70 = 0;
        FUN_0088b314(&local_e0,&local_78,&local_68,uVar1);
        fVar3 = (float)local_78;
        if (fVar8 <= (float)local_78) {
          fVar3 = fVar8;
        }
        fVar8 = fVar3;
        fVar6 = local_78._4_4_;
        if (fVar5 <= local_78._4_4_) {
          fVar6 = fVar5;
        }
        uVar1 = (ulong)((param_4 + (long)(int)param_5 * 2) - local_68) >> 1;
        fVar4 = (float)local_70;
        if ((float)local_70 <= fVar7) {
          fVar4 = fVar7;
        }
        fVar3 = local_70._4_4_;
        if (local_70._4_4_ <= fVar9) {
          fVar3 = fVar9;
        }
        fVar9 = fVar3;
        fVar7 = fVar4;
        fVar5 = fVar6;
      } while (0 < (int)uVar1);
      FUN_00884284(&local_e0);
      uVar2 = *(uint *)(param_1 + 10);
    }
    fVar4 = fVar4 - fVar8;
    fVar3 = fVar3 - fVar6;
    uVar2 = uVar2 & 0x30;
    fVar6 = fVar4;
    if (uVar2 == 0x20) goto LAB_0088c490;
LAB_0088c470:
    if (uVar2 == 0x10) {
      fVar6 = fVar4 * 0.5;
      if (*(char *)(param_1 + 0xc) != '\0') {
        fVar6 = (float)(int)(fVar4 * 0.5);
      }
      goto LAB_0088c490;
    }
  }
  fVar6 = fVar3;
  if ((*(uint *)(param_1 + 10) & 0x300) != 0x200) {
    if ((*(uint *)(param_1 + 10) & 0x300) != 0x100) goto LAB_0088c4d8;
    fVar6 = fVar3 * 0.5;
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar6 = (float)(int)(fVar3 * 0.5);
    }
  }
  *param_3 = *param_3 - fVar6;
LAB_0088c4d8:
  if (*(char *)((long)param_1 + 0x62) != '\0') {
    fVar6 = *param_3;
    local_70 = 0;
    local_78 = 0;
    uStack_d8 = param_1[1];
    local_c0 = param_1[4];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    local_e0 = *param_1;
    local_b8 = param_1[5];
    local_b0 = param_1[6];
    local_a8 = param_1[7];
    uStack_a0 = param_1[8];
    local_98 = param_1[9];
    uStack_90 = param_1[10];
    local_88 = param_1[0xb];
    uStack_80 = param_1[0xc];
    uStack_cc = 0;
    local_c8 = 0;
    local_68 = param_4;
    FUN_0088b314(&local_e0,&local_78,&local_68,param_5);
    fVar8 = local_70._4_4_ - local_78._4_4_;
    FUN_00884284(&local_e0);
    fVar3 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
    *param_3 = fVar6 + (fVar8 - fVar3);
  }
  if ((*(uint *)(param_1 + 10) & 3) == 2) {
    local_70 = 0;
    local_78 = 0;
    uStack_d8 = param_1[1];
    local_c0 = param_1[4];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    local_e0 = *param_1;
    local_b8 = param_1[5];
    local_b0 = param_1[6];
    local_a8 = param_1[7];
    uStack_a0 = param_1[8];
    local_98 = param_1[9];
    uStack_90 = param_1[10];
    local_88 = param_1[0xb];
    uStack_80 = param_1[0xc];
    uStack_cc = 0;
    local_c8 = 0;
    local_68 = param_4;
    FUN_0088b314(&local_e0,&local_78,&local_68,param_5);
    fVar3 = (float)local_70 - (float)local_78;
    FUN_00884284(&local_e0);
    *(float *)((long)param_1 + 0x14) = (fVar4 - fVar3) + *param_2;
  }
  else if ((*(uint *)(param_1 + 10) & 3) == 1) {
    local_70 = 0;
    local_78 = 0;
    uStack_d8 = param_1[1];
    local_c0 = param_1[4];
    local_d0 = (undefined4)param_1[2];
    uStack_c4 = (undefined4)((ulong)param_1[3] >> 0x20);
    local_e0 = *param_1;
    local_b8 = param_1[5];
    local_b0 = param_1[6];
    local_a8 = param_1[7];
    uStack_a0 = param_1[8];
    local_98 = param_1[9];
    uStack_90 = param_1[10];
    local_88 = param_1[0xb];
    uStack_80 = param_1[0xc];
    uStack_cc = 0;
    local_c8 = 0;
    local_68 = param_4;
    FUN_0088b314(&local_e0,&local_78,&local_68,param_5);
    fVar6 = (float)local_70 - (float)local_78;
    FUN_00884284(&local_e0);
    fVar6 = fVar6 * 0.5;
    fVar3 = fVar4 * 0.5;
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar3 = (float)(int)(fVar4 * 0.5);
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      fVar6 = (float)(int)fVar6;
    }
    *(float *)((long)param_1 + 0x14) = *param_2 + (fVar3 - fVar6);
  }
  else {
    *(float *)((long)param_1 + 0x14) = *param_2;
  }
  fVar3 = *param_3;
  if ((~*(uint *)(param_1 + 10) & 0x300) != 0) {
    fVar6 = (float)FUN_008842c0(param_1);
    fVar3 = fVar3 + fVar6;
  }
  *(float *)(param_1 + 3) = fVar3;
  return fVar4;
}


