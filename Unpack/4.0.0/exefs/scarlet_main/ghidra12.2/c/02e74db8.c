/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e74db8; name: FUN_02e74db8
 */


void FUN_02e74db8(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  MutexType *pMVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined **local_1078;
  char local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  undefined8 **local_1058;
  int *local_1050;
  undefined8 local_1048 [500];
  int local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  uint *local_90;
  uint local_88;
  uint local_84;
  long local_78;
  long lStack_70;
  
  pMVar10 = (MutexType *)param_1[0x381];
  lVar12 = *param_1;
  nn::os::LockMutex(pMVar10);
  uVar1 = *(uint *)(param_1 + 0x380);
  *(uint *)(param_1 + 0x380) = uVar1 + 1;
  *(undefined4 *)((long)param_1 + (ulong)uVar1 * 4 + 0x1b00) = param_4;
  nn::os::UnlockMutex(pMVar10);
  lVar8 = *(long *)(lVar12 + 0x28);
  piVar11 = *(int **)(*(long *)(param_5 + 0x10) + 0x10);
  lVar17 = (long)*piVar11;
  puVar16 = (undefined8 *)(lVar8 + lVar17 * 0x110);
  if (*(char *)(puVar16 + 0x20) == '\0') {
    puVar13 = *(undefined8 **)(piVar11 + 0x138);
    lVar7 = lVar8 + lVar17 * 0x110;
    plVar5 = (long *)*puVar13;
    *puVar16 = plVar5;
    *(undefined4 *)(lVar7 + 8) = 0;
    *(undefined1 *)(lVar7 + 0xc) = 0;
    uVar4 = *(int *)(puVar13 + 0xb) - 1;
    if (*(int *)(puVar13 + 0xb) < 1) {
      lVar7 = puVar13[1];
      (**(code **)(*plVar5 + 0x20))(plVar5,lVar7,6);
      *(undefined4 *)(puVar13 + 0xb) = 5;
      puVar13 = (undefined8 *)(lVar7 + 0x28);
    }
    else {
      *(uint *)(puVar13 + 0xb) = uVar4;
      puVar13 = (undefined8 *)(puVar13[1] + (ulong)uVar4 * 8);
    }
    puVar13 = (undefined8 *)*puVar13;
    lVar14 = lVar8 + lVar17 * 0x110;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    piVar15 = (int *)(lVar14 + 0x18);
    *(int *)((long)puVar13 + 4) = *piVar15;
    iVar6 = *piVar15;
    lVar7 = (long)iVar6;
    if ((int)(*(uint *)(lVar14 + 0x1c) & 0x7fffffff) <= iVar6) {
      FUN_031c25b4((long *)(lVar14 + 0x10),PTR_PTR_047d1a50,lVar7 + 1);
      iVar6 = *piVar15;
    }
    *(undefined8 **)(*(long *)(lVar14 + 0x10) + (long)iVar6 * 8) = puVar13;
    *piVar15 = (int)(lVar7 + 1);
    *(char **)(lVar8 + lVar17 * 0x110 + 0xf0) =
         "hknpSimdTreeBroadPhaseInternal::ThreadCollisionPairs::m_newPairs";
    *(undefined1 *)(puVar16 + 0x20) = 1;
  }
  lVar8 = lVar8 + lVar17 * 0x110;
  local_98 = *(undefined8 **)(piVar11 + 0x138);
  local_90 = *(uint **)(*(long *)(lVar8 + 0x10) + (long)*(int *)(lVar8 + 0x18) * 8 + -8);
  local_88 = *local_90 >> 0x10;
  local_84 = *local_90 & 0xffff;
  *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) - (*local_90 & 0xffff);
  local_1078 = &PTR_LAB_0460d218;
  local_a8 = 0;
  local_1058 = &local_a0;
  local_1070 = '\x01';
  local_1060 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
  local_1068 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x58);
  local_78 = 0;
  if (*param_2 != 0) {
    local_78 = *param_2 + (long)param_2;
  }
  local_1050 = piVar11;
  local_a0 = puVar16;
  lStack_70 = local_78;
  FUN_03259290(param_2,param_2,&local_1078,param_4,param_4,&local_78);
  if (local_a8 != 0) {
    plVar5 = *(long **)(*(long *)(local_1050 + 2) + 0x4b8);
    if (plVar5 == (long *)0x0) {
LAB_02e75020:
      if (0 < local_a8) {
        lVar8 = 0;
        do {
          if (*(int *)(local_1058 + 3) < 0xf99) {
            puVar16 = (undefined8 *)((long)local_1058[2] + (long)*(int *)(local_1058 + 3) + 0x20);
          }
          else {
            puVar16 = (undefined8 *)FUN_031c36f4();
          }
          *puVar16 = local_1048[lVar8];
          *(int *)(local_1058 + 3) = *(int *)(local_1058 + 3) + 8;
          *(int *)((long)local_1058 + 0x1c) = *(int *)((long)local_1058 + 0x1c) + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < local_a8);
      }
    }
    else {
      local_a8 = (**(code **)(*plVar5 + 0x20))(plVar5,*(long *)(local_1050 + 2),local_1048);
      if (local_a8 != 0) goto LAB_02e75020;
    }
    local_a8 = 0;
  }
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      uVar2 = *(undefined4 *)((long)param_1 + uVar9 * 4 + 0x1b00);
      if (local_1070 == '\0') {
        FUN_0325a240(param_2,param_2,&local_1078,param_4,uVar2,&local_78);
      }
      else {
        local_78 = 0;
        if (*param_2 != 0) {
          local_78 = *param_2 + (long)param_2;
        }
        lStack_70 = local_78;
        FUN_03259290(param_2,param_2,&local_1078,param_4,uVar2,&local_78);
      }
      if (local_a8 != 0) {
        plVar5 = *(long **)(*(long *)(local_1050 + 2) + 0x4b8);
        if (plVar5 == (long *)0x0) {
LAB_02e75124:
          if (0 < local_a8) {
            lVar8 = 0;
            do {
              if (*(int *)(local_1058 + 3) < 0xf99) {
                puVar16 = (undefined8 *)
                          ((long)local_1058[2] + (long)*(int *)(local_1058 + 3) + 0x20);
              }
              else {
                puVar16 = (undefined8 *)FUN_031c36f4();
              }
              *puVar16 = local_1048[lVar8];
              *(int *)(local_1058 + 3) = *(int *)(local_1058 + 3) + 8;
              *(int *)((long)local_1058 + 0x1c) = *(int *)((long)local_1058 + 0x1c) + 1;
              lVar8 = lVar8 + 1;
            } while (lVar8 < local_a8);
          }
        }
        else {
          local_a8 = (**(code **)(*plVar5 + 0x20))(plVar5,*(long *)(local_1050 + 2),local_1048);
          if (local_a8 != 0) goto LAB_02e75124;
        }
        local_a8 = 0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
  }
  puVar16 = local_98;
  if (local_84 == 0) {
    piVar11 = (int *)(local_a0 + 3);
    iVar6 = *piVar11;
    if (1 < iVar6) {
      iVar3 = *(int *)(local_98 + 0xb);
      lVar12 = *(long *)(local_a0[2] + (long)(iVar6 + -2) * 8);
      lVar8 = local_98[1];
      *(undefined8 *)(lVar8 + (long)iVar3 * 8) =
           *(undefined8 *)(local_a0[2] + (long)(iVar6 + -1) * 8);
      *(int *)(local_98 + 0xb) = iVar3 + 1;
      if (*(int *)((long)local_98 + 0x5c) <= iVar3 + 1) {
        (**(code **)(*(long *)*local_98 + 0x28))((long *)*local_98,lVar8 + (long)(iVar3 + -5) * 8,6)
        ;
        *(int *)(puVar16 + 0xb) = iVar3 + -5;
      }
      *(undefined8 *)(lVar12 + 8) = 0;
      local_84 = 0xffffffff;
      goto LAB_02e75238;
    }
  }
  piVar11 = (int *)(local_a0 + 1);
  local_90[2] = 0;
  local_90[3] = 0;
  *local_90 = *local_90 & 0xffff0000 | local_84 & 0xffff;
  *local_90 = *local_90 & 0xffff | local_88 << 0x10;
LAB_02e75238:
  *piVar11 = *piVar11 + local_84;
  return;
}


