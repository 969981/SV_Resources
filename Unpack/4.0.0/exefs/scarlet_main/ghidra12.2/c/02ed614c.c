/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ed614c; name: FUN_02ed614c
 */


void FUN_02ed614c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_28;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_02ed6b4c(param_1,&local_60);
    puVar4 = PTR_DAT_047d1a08;
    if (&local_60 == param_1) {
      lVar9 = *param_1;
      uVar7 = *(uint *)((long)param_1 + 0xc);
    }
    else {
      uVar8 = local_58._4_4_;
      if (-1 < (long)local_58) {
        uVar7 = local_58._4_4_;
        if ((int)local_58._4_4_ <= (int)(uint)local_58) {
          uVar7 = (uint)local_58;
        }
        local_28 = (long)(int)uVar7 * 0x30;
        pvVar6 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
        pvVar1 = (void *)0x0;
        if (local_60 != 0) {
          pvVar1 = (void *)((long)&local_60 + local_60);
        }
        memcpy(pvVar6,pvVar1,(long)(int)(uint)local_58 * 0x30);
        if ((long)local_58 < 0) {
          lVar9 = 0;
          if (local_60 != 0) {
            lVar9 = (long)&local_60 + local_60;
          }
          (**(code **)(puVar4 + 8))(0,lVar9,0);
        }
        local_60 = 0;
        if (pvVar6 != (void *)0x0) {
          local_60 = (long)pvVar6 - (long)&local_60;
        }
        uVar8 = uVar7 | 0x80000000;
        local_58 = CONCAT44(uVar7,(uint)local_58) | 0x8000000000000000;
      }
      uVar7 = *(uint *)((long)param_1 + 0xc);
      if ((int)uVar7 < 0) {
        lVar9 = *param_1;
      }
      else {
        if ((int)uVar7 <= (int)*(uint *)(param_1 + 1)) {
          uVar7 = *(uint *)(param_1 + 1);
        }
        local_28 = (long)(int)uVar7 * 0x30;
        pvVar6 = (void *)(**(code **)puVar4)(0,&local_28,0);
        pvVar1 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar1 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar6,pvVar1,(long)(int)param_1[1] * 0x30);
        if (*(int *)((long)param_1 + 0xc) < 0) {
          lVar9 = 0;
          if (*param_1 != 0) {
            lVar9 = *param_1 + (long)param_1;
          }
          (**(code **)(puVar4 + 8))(0,lVar9,0);
        }
        lVar9 = 0;
        if (pvVar6 != (void *)0x0) {
          lVar9 = (long)pvVar6 - (long)param_1;
        }
        uVar7 = uVar7 | 0x80000000;
        *param_1 = lVar9;
        *(uint *)((long)param_1 + 0xc) = uVar7;
        uVar8 = local_58._4_4_;
      }
      lVar2 = 0;
      if (local_60 != 0) {
        lVar2 = (long)&local_60 + local_60;
      }
      lVar3 = 0;
      if (lVar9 != 0) {
        lVar3 = lVar9 + (long)param_1;
      }
      lVar9 = 0;
      if (lVar3 != 0) {
        lVar9 = lVar3 - (long)&local_60;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 - (long)param_1;
      }
      *param_1 = lVar3;
      uVar5 = (uint)local_58;
      local_58 = CONCAT44(uVar7,(int)param_1[1]);
      *(undefined4 *)(param_1 + 1) = uVar5;
      *(uint *)((long)param_1 + 0xc) = uVar8;
      local_60 = lVar9;
    }
    uVar5 = (undefined4)local_50;
    local_50 = CONCAT44(local_50._4_4_,(int)param_1[2]);
    *(undefined4 *)(param_1 + 2) = uVar5;
    *(undefined4 *)((long)param_1 + 0x1c) = 1;
    if ((int)uVar7 < 0) {
      lVar2 = 0;
      if (lVar9 != 0) {
        lVar2 = (long)&local_60 + lVar9;
      }
      (**(code **)(puVar4 + 8))(0,lVar2,0);
    }
  }
  return;
}


