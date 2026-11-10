/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f098c8; name: FUN_02f098c8
 */


void FUN_02f098c8(long *param_1,ulong param_2,long *param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  MutexType *pMVar13;
  int *piVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  long *plVar20;
  undefined8 local_70;
  ulong uStack_68;
  
  iVar2 = *(int *)(param_1[2] + (param_2 & 0xffffff) * 0xc0 + 0x80);
  lVar10 = *(long *)(param_1[1] + 0x10) + (long)iVar2 * 0x80;
  local_70 = CONCAT44((float)*(double *)(lVar10 + 0x18),(float)*(double *)(lVar10 + 0x10));
  uStack_68 = (ulong)(uint)(float)*(double *)(lVar10 + 0x20);
  bVar4 = (**(code **)(*param_3 + 0x20))(param_3,&local_70);
  plVar20 = (long *)param_1[1];
  pbVar19 = (byte *)(lVar10 + 0x5e);
  uVar15 = (ulong)*pbVar19;
  if (*pbVar19 != bVar4) {
    puVar16 = (uint *)(lVar10 + 0x4c);
    if (*puVar16 == 0 || *puVar16 == 0x7fffffff) {
      *pbVar19 = bVar4;
    }
    else {
      pMVar13 = (MutexType *)plVar20[0x68];
      nn::os::LockMutex(pMVar13);
      uVar5 = *puVar16;
      plVar7 = plVar20 + uVar15 * 3 + 9;
      lVar8 = (long)(int)*plVar7 + -1;
      if (uVar5 < (uint)lVar8) {
        iVar6 = *(int *)(plVar20[uVar15 * 3 + 8] + lVar8 * 4);
        *(uint *)(plVar20[2] + (long)iVar6 * 0x80 + 0x4c) = uVar5;
        *(int *)(plVar20[uVar15 * 3 + 8] + (long)(int)uVar5 * 4) = iVar6;
      }
      *pbVar19 = 0xff;
      *puVar16 = 0x7fffffff;
      *(int *)plVar7 = (int)*plVar7 + -1;
      nn::os::UnlockMutex(pMVar13);
      *pbVar19 = bVar4;
      pMVar13 = (MutexType *)plVar20[0x68];
      nn::os::LockMutex(pMVar13);
      puVar18 = (uint *)(plVar20 + (ulong)bVar4 * 3 + 9);
      *puVar16 = *puVar18;
      uVar5 = *puVar18;
      lVar8 = (long)(int)uVar5;
      if ((int)(*(uint *)((long)plVar20 + (ulong)bVar4 * 0x18 + 0x4c) & 0x7fffffff) <= (int)uVar5) {
        FUN_02f1dbfc(plVar20 + (ulong)bVar4 * 3 + 8,PTR_PTR_047d1a50,lVar8 + 1);
        uVar5 = *puVar18;
      }
      *(int *)(plVar20[(ulong)bVar4 * 3 + 8] + (long)(int)uVar5 * 4) = iVar2;
      *puVar18 = (uint)(lVar8 + 1);
      nn::os::UnlockMutex(pMVar13);
    }
    uVar5 = *(uint *)(lVar10 + 0x48);
    lVar8 = *plVar20;
    uVar3 = uVar5;
    do {
      lVar12 = *(long *)(lVar8 + 0x10);
      uVar15 = (ulong)uVar3 & 0xffffff;
      if ((*(byte *)(lVar12 + uVar15 * 0xc0 + 0x54) >> 3 & 1) != 0) {
        *(byte *)(*(long *)(lVar8 + 0xd0) + uVar15) = bVar4;
      }
      lVar12 = lVar12 + uVar15 * 0xc0;
      *(ushort *)(lVar12 + 0x58) = *(ushort *)(lVar12 + 0x58) | 0x20;
      uVar3 = *(uint *)(lVar12 + 0x84);
    } while (uVar3 != uVar5);
  }
  lVar8 = param_1[2];
  uVar15 = param_2 & 0xffffffff;
  do {
    uVar15 = uVar15 & 0xffffff;
    puVar16 = (uint *)(lVar8 + uVar15 * 0xc0 + 0x54);
    uVar5 = *puVar16;
    if (((uVar5 >> 3 & 1) == 0) && ((*(byte *)(lVar8 + uVar15 * 0xc0 + 0x88) & 1) != 0)) {
      lVar17 = lVar8 + uVar15 * 0xc0;
      *puVar16 = uVar5 | 8;
      *(ushort *)(lVar17 + 0x58) = *(ushort *)(lVar17 + 0x58) | 0x220;
      pMVar13 = (MutexType *)param_1[0x20];
      nn::os::LockMutex(pMVar13);
      *(int *)(param_1[0x1c] + uVar15 * 4) = (int)param_1[0x19];
      lVar12 = param_1[0x19];
      uVar5 = *(uint *)(lVar17 + 0x50);
      puVar11 = (undefined8 *)(param_1[0x18] + (long)(int)lVar12 * 0x10);
      *puVar11 = *(undefined8 *)(lVar17 + 0xb0);
      puVar11[1] = (ulong)uVar5;
      *(int *)(param_1 + 0x19) = (int)lVar12 + 1;
      nn::os::UnlockMutex(pMVar13);
      *(byte *)(param_1[0x1a] + uVar15) = *pbVar19;
      if (*(int *)(*param_1 + 0x818) - 4U < 0x1d) {
        lVar8 = lVar8 + uVar15 * 0xc0;
        puVar11 = (undefined8 *)(param_1[0xb] + uVar15 * 0x18);
        uVar1 = *(undefined8 *)(lVar8 + 0x60);
        uVar9 = *(undefined8 *)(lVar8 + 0x70);
        puVar11[1] = *(undefined8 *)(lVar8 + 0x68);
        puVar11[2] = uVar9;
        *puVar11 = uVar1;
      }
    }
    lVar8 = param_1[2];
    uVar5 = *(uint *)(lVar8 + uVar15 * 0xc0 + 0x84);
    uVar15 = (ulong)uVar5;
  } while (uVar5 != (uint)param_2);
  if (*(int *)(lVar10 + 0x4c) == 0x7fffffff) {
    lVar8 = param_1[1] + (ulong)*pbVar19 * 0x18;
    pMVar13 = *(MutexType **)(param_1[1] + 0x340);
    nn::os::LockMutex(pMVar13);
    piVar14 = (int *)(lVar8 + 0x48);
    *(int *)(lVar10 + 0x4c) = *piVar14;
    iVar6 = *piVar14;
    lVar10 = (long)iVar6;
    if ((int)(*(uint *)(lVar8 + 0x4c) & 0x7fffffff) <= iVar6) {
      FUN_02f1dbfc((long *)(lVar8 + 0x40),PTR_PTR_047d1a50,lVar10 + 1);
      iVar6 = *piVar14;
    }
    *(int *)(*(long *)(lVar8 + 0x40) + (long)iVar6 * 4) = iVar2;
    *piVar14 = (int)(lVar10 + 1);
    nn::os::UnlockMutex(pMVar13);
  }
  return;
}


