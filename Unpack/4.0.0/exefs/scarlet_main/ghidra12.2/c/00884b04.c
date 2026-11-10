/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00884b04; name: FUN_00884b04
 */


void FUN_00884b04(long param_1,long *param_2,uint param_3,byte param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  uint in_stack_ffffffffffffff38;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90 [8];
  
  lVar11 = 0x40;
  if (*(char *)(param_1 + 0xba) != '\0') {
    lVar11 = 0x60;
  }
  lVar11 = lVar11 * *(int *)(param_1 + 0x9c);
  if (*param_2 == 0) {
    pbVar9 = *(byte **)(param_1 + 0xb0);
    uVar12 = (lVar11 + *(long *)(pbVar9 + 0x20)) - 1U & -*(long *)(pbVar9 + 0x20);
    if ((*pbVar9 & 1) != 0) {
      puVar10 = *(ulong **)(pbVar9 + 0x40);
      do {
        uVar15 = *puVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar7) {
          *puVar10 = uVar15 + uVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_00884ba8;
    }
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0xb0);
    uVar12 = (*(long *)(pbVar9 + 0x20) + lVar11 * 2) - 1U & -*(long *)(pbVar9 + 0x20);
    if ((*pbVar9 & 1) != 0) {
      puVar10 = *(ulong **)(pbVar9 + 0x40);
      do {
        uVar15 = *puVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar7) {
          *puVar10 = uVar15 + uVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_00884ba8;
    }
  }
  uVar15 = *(ulong *)(pbVar9 + 0x40);
  *(ulong *)(pbVar9 + 0x40) = uVar15 + uVar12;
LAB_00884ba8:
  *(int *)(param_1 + 4) = (int)uVar15;
  uVar22 = *(undefined4 *)((long)param_2 + 0x14);
  uVar3 = (undefined4)param_2[2];
  lVar11 = *param_2;
  lVar2 = param_2[1];
  if ((param_5 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x9c);
    if (uVar4 == 0) {
      uVar13 = 0;
    }
    else {
      uVar12 = 0;
      uVar15 = 0;
      do {
        uVar19 = *(ulong *)(*(long *)(param_1 + 0xa0) + uVar12 * 0x38 + 0x28);
        uVar20 = uVar19 & 0xfffffffffffffffe;
        uVar1 = (uint)uVar19 & 1;
        bVar18 = 0;
        uVar13 = (uint)uVar15;
        if (uVar13 != 0) {
          do {
            if ((*(ulong *)(param_1 + (ulong)bVar18 * 0x10 + 0x10) == uVar20) &&
               ((*(uint *)(param_1 + (ulong)bVar18 * 0x10 + 0x1c) >> 1 & 1) == uVar1)) {
              lVar21 = param_1 + (ulong)bVar18 * 0x10;
              *(int *)(lVar21 + 0x18) = *(int *)(lVar21 + 0x18) + 1;
              goto LAB_00884bf8;
            }
            bVar18 = bVar18 + 1;
          } while (bVar18 < uVar13);
        }
        lVar21 = param_1 + uVar15 * 0x10;
        uVar13 = uVar13 + 1;
        uVar15 = (ulong)uVar13;
        *(ulong *)(lVar21 + 0x10) = uVar20;
        *(undefined8 *)(lVar21 + 0x18) = 1;
        *(uint *)(lVar21 + 0x1c) = (uint)*(byte *)(uVar20 + 0x17) | uVar1 << 1;
        if (7 < uVar13) break;
LAB_00884bf8:
        uVar13 = (uint)uVar15;
        *(byte *)(*(long *)(param_1 + 0xa8) + uVar12) = bVar18;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar4);
      uVar15 = (ulong)*(uint *)(param_1 + 4);
    }
    *(uint *)(param_1 + 0x90) = uVar13;
  }
  uVar15 = uVar15 & 0xffffffff;
  lVar21 = *(long *)(*(long *)(param_1 + 0xb0) + 0x38);
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  uVar4 = *(uint *)(param_1 + 0x90);
  if (0 < (int)uVar4) {
    if (uVar4 == 1) {
      uVar12 = 0;
      iVar14 = 0;
    }
    else {
      uVar12 = 0;
      iVar14 = 0;
      piVar16 = (int *)(param_1 + 0x28);
      piVar17 = (int *)((ulong)local_90 | 4);
      do {
        piVar17[-1] = iVar14;
        iVar5 = piVar16[-4];
        *piVar17 = iVar5 + iVar14;
        uVar12 = uVar12 + 2;
        iVar14 = *piVar16 + iVar5 + iVar14;
        piVar16 = piVar16 + 8;
        piVar17 = piVar17 + 2;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar12);
    }
    if ((uVar4 & 1) != 0) {
      local_90[uVar12] = iVar14;
    }
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (lVar21 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x9c);
  uVar8 = 1;
  if (lVar11 != 0) {
    uVar8 = 2;
    if ((param_3 & 1) == 0) {
      if ((int)uVar4 < 1) {
        return;
      }
      uVar13 = 0;
      do {
        in_stack_ffffffffffffff38 = uVar13;
        FUN_00884efc(uVar22,param_1,uVar15,lVar2,uVar3,lVar11,local_90,lVar21,2,&local_b0,uVar13,
                     param_4 & 1);
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
    }
    else {
      if ((int)uVar4 < 1) {
        return;
      }
      iVar14 = uVar4 + 1;
      do {
        in_stack_ffffffffffffff38 = iVar14 - 2;
        FUN_00884efc(uVar22,param_1,uVar15,lVar2,uVar3,lVar11,local_90,lVar21,2,&local_b0,
                     in_stack_ffffffffffffff38,param_4 & 1);
        iVar14 = iVar14 + -1;
      } while (1 < iVar14);
    }
  }
  if ((param_3 & 1) == 0) {
    if (0 < (int)uVar4) {
      uVar13 = 0;
      do {
        in_stack_ffffffffffffff38 =
             CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
        FUN_0088517c(uVar22,param_1,uVar15,lVar2,uVar3,local_90,lVar21,uVar8,&local_b0,uVar13,
                     in_stack_ffffffffffffff38);
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
    }
  }
  else if (0 < (int)uVar4) {
    iVar14 = uVar4 + 1;
    do {
      in_stack_ffffffffffffff38 =
           CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
      FUN_0088517c(uVar22,param_1,uVar15,lVar2,uVar3,local_90,lVar21,uVar8,&local_b0,iVar14 + -2,
                   in_stack_ffffffffffffff38);
      iVar14 = iVar14 + -1;
    } while (1 < iVar14);
  }
  return;
}


