/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03335924; name: FUN_03335924
 */


byte * FUN_03335924(long param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  byte *local_70;
  undefined8 local_68;
  
  puVar2 = PTR_PTR_047d1a50;
  local_70 = (byte *)0x0;
  local_68 = 0x8000000000000000;
  if (param_3 == 0xffffffff) {
  }
  else {
    if ((int)param_3 < 1) {
      uVar11 = 0;
    }
    else {
      FUN_030b4a20(&local_70,PTR_PTR_047d1a50 + 0x20,param_3);
      uVar11 = param_3 & 3;
      pbVar5 = local_70;
      if (2 < param_3 - 1) {
        iVar3 = -(param_3 & 0xfffffffc);
        pbVar8 = local_70;
        do {
          *pbVar8 = *param_2;
          pbVar8[1] = param_2[1];
          pbVar8[2] = param_2[2];
          pbVar1 = param_2 + 3;
          pbVar5 = pbVar8 + 4;
          param_2 = param_2 + 4;
          iVar3 = iVar3 + 4;
          pbVar8[3] = *pbVar1;
          pbVar8 = pbVar5;
        } while (iVar3 != 0);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar5 = *param_2;
        pbVar5 = pbVar5 + 1;
        param_2 = param_2 + 1;
      }
      uVar11 = local_68._4_4_ & 0x7fffffff;
    }
    iVar3 = param_3 + 1;
    if ((int)uVar11 <= (int)param_3) {
      local_68._0_4_ = param_3;
      FUN_031bca38(&local_70,puVar2 + 0x20,(long)iVar3);
      param_3 = (uint)local_68;
    }
    local_70[(int)param_3] = 0;
    local_68 = CONCAT44(local_68._4_4_,iVar3);
    param_4 = 1;
    param_2 = local_70;
  }
  uVar11 = 0x811c9dc5;
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  uVar7 = (uint)*param_2;
  if (*param_2 != 0) {
    pbVar5 = param_2;
    do {
      pbVar5 = pbVar5 + 1;
      uVar11 = (uVar11 ^ uVar7) * 0x1000193;
      uVar7 = (uint)*pbVar5;
    } while (uVar7 != 0);
  }
  uVar7 = *(uint *)(param_1 + 0x44);
  uVar10 = (ulong)(uVar7 & uVar11);
  lVar9 = *(long *)(param_1 + 0x38);
  uVar6 = *(ulong *)(lVar9 + uVar10 * 0x18);
  if (uVar6 != 0xffffffffffffffff) {
    do {
      if ((uVar6 == uVar11) &&
         (iVar3 = strcmp((char *)param_2,*(char **)(lVar9 + uVar10 * 0x18 + 8)), iVar3 == 0))
      goto LAB_03335ad8;
      uVar10 = uVar10 + 1 & (long)(int)uVar7;
      uVar6 = *(ulong *)(lVar9 + uVar10 * 0x18);
    } while (uVar6 != 0xffffffffffffffff);
  }
  uVar10 = (ulong)(uVar7 + 1);
LAB_03335ad8:
  if ((int)uVar7 < (int)uVar10) {
    pbVar5 = param_2;
    if ((param_4 & 1) != 0) {
      sVar4 = strlen((char *)param_2);
      sVar4 = (size_t)((int)sVar4 + 1);
      pbVar5 = (byte *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar4);
      memcpy(pbVar5,param_2,sVar4);
    }
    FUN_0324e488(param_1 + 0x38,pbVar5,param_4 & 1);
  }
  else {
    pbVar5 = *(byte **)(lVar9 + (long)(int)uVar10 * 0x18 + 8);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  uVar6 = local_68;
  local_68 = local_68 & 0xffffffff00000000;
  if ((-1 < (long)uVar6) && (local_70 != (byte *)0x0)) {
    (**(code **)(*(long *)(puVar2 + 0x20) + 0x20))(puVar2 + 0x20);
  }
  return pbVar5;
}


