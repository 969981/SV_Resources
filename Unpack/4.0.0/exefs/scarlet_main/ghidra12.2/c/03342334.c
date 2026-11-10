/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03342334; name: FUN_03342334
 */


undefined1  [16] FUN_03342334(long *param_1,undefined8 *param_2,long param_3)

{
  ulong *puVar1;
  uint *puVar2;
  long *plVar3;
  ulong uVar4;
  void *__s;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  uint local_6c;
  ulong local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 10));
  FUN_031ca554(&local_68,*param_2,param_2[1]);
  lVar12 = param_1[9];
  iVar8 = FUN_03341604(param_1,&local_68);
  lVar7 = param_1[1];
  if ((int)lVar7 == iVar8) {
    iVar11 = iVar8;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar8) {
      FUN_0334108c(param_1,PTR_PTR_047d1a50,(long)(iVar8 + 1));
      iVar11 = (int)param_1[1];
    }
    puVar1 = (ulong *)(*param_1 + (long)iVar11 * 0x10);
    *puVar1 = local_68;
    local_68 = 0;
    *(int *)(puVar1 + 1) = (int)lVar12;
    *(int *)(param_1 + 1) = iVar8 + 1;
  }
  lVar12 = *param_1;
  if ((local_68 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_68 - 1,0);
  }
  uVar5 = *(uint *)(lVar12 + (long)iVar8 * 0x10 + 8);
  uVar4 = (ulong)uVar5 | param_3 << 0x20;
  uVar13 = uVar4;
  local_6c = uVar5;
  if ((int)lVar7 == iVar8) {
    iVar8 = (int)param_1[9];
    lVar12 = (long)iVar8;
    if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) <= iVar8) {
      FUN_03348d24(param_1 + 8,lVar12 + 1);
      iVar8 = (int)param_1[9];
    }
    FUN_031ca554(param_1[8] + (long)iVar8 * 8,*param_2,param_2[1]);
    *(int *)(param_1 + 9) = (int)(lVar12 + 1);
    __s = (void *)*param_2;
    if ((param_2[1] - (long)__s != 0) &&
       (pvVar10 = memchr(__s,0x3c,param_2[1] - (long)__s), pvVar10 != (void *)0x0)) {
      FUN_031ca554(&local_68,__s);
      lVar12 = param_1[9];
      iVar8 = FUN_03341604(param_1,&local_68);
      lVar7 = param_1[1];
      if ((int)lVar7 == iVar8) {
        iVar11 = iVar8;
        if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar8) {
          FUN_0334108c(param_1,PTR_PTR_047d1a50,(long)(iVar8 + 1));
          iVar11 = (int)param_1[1];
        }
        puVar1 = (ulong *)(*param_1 + (long)iVar11 * 0x10);
        *puVar1 = local_68;
        local_68 = 0;
        *(int *)(puVar1 + 1) = (int)lVar12;
        *(int *)(param_1 + 1) = iVar8 + 1;
      }
      lVar12 = *param_1;
      if ((local_68 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_68 - 1,0);
      }
      uVar6 = *(uint *)(lVar12 + (long)iVar8 * 0x10 + 8);
      if ((int)lVar7 == iVar8) {
        iVar8 = (int)param_1[9];
        lVar12 = (long)iVar8;
        if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) <= iVar8) {
          FUN_03348d24(param_1 + 8,lVar12 + 1);
          iVar8 = (int)param_1[9];
        }
        FUN_031ca554(param_1[8] + (long)iVar8 * 8,__s,pvVar10);
        *(int *)(param_1 + 9) = (int)(lVar12 + 1);
      }
      plVar3 = param_1 + 4;
      uVar13 = param_3 << 0x20 | (ulong)uVar6;
      uVar9 = FUN_03348870(plVar3,&local_6c);
      if (*(uint *)(param_1 + 5) == uVar9) {
        iVar8 = uVar9 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) <= (int)uVar9) {
          FUN_031d35f4(plVar3,PTR_PTR_047d1a50,(long)iVar8);
          uVar9 = *(uint *)(param_1 + 5);
        }
        puVar2 = (uint *)(param_1[4] + (long)(int)uVar9 * 8);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(int *)(param_1 + 5) = iVar8;
      }
      else {
        *(uint *)(*plVar3 + ((long)((ulong)uVar9 << 0x20) >> 0x1d) + 4) = uVar6;
      }
    }
  }
  else {
    lVar12 = FUN_03348800(param_1 + 4,&local_6c);
    if (lVar12 != 0) {
      uVar13 = param_3 << 0x20 | (ulong)*(uint *)(param_1[4] + (long)*(int *)(lVar12 + 4) * 8 + 4);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 10));
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = uVar4;
  return auVar14;
}


