/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f63610; name: FUN_02f63610
 */


void FUN_02f63610(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  ulong local_48;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x2a10));
  puVar6 = PTR_DAT_047d1a08;
  if (0 < (int)param_3) {
    uVar14 = **(ulong **)(param_1 + 0x5c0) >> 0x20;
    iVar12 = (int)(**(ulong **)(param_1 + 0x5c0) >> 0x20);
    iVar16 = iVar12 * 3;
    uVar15 = (ulong)param_3;
    iVar12 = iVar12 << 1;
    do {
      lVar2 = param_1 + (ulong)*(uint *)(param_1 + 0x128) * 0x10;
      plVar17 = (long *)(lVar2 + 0x28);
      iVar13 = (int)uVar14;
      if (iVar13 == *(int *)(lVar2 + 0x34)) {
        uVar9 = iVar12 + *(int *)(lVar2 + 0x30) * -2;
        *(int *)(lVar2 + 0x40) = iVar13;
        *(int *)(lVar2 + 0x44) = iVar16 + *(int *)(lVar2 + 0x30) * -2;
        local_48 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar9 << 4;
        lVar7 = (**(code **)puVar6)(0,&local_48,0);
        plVar17 = (long *)(lVar2 + 0x38);
        *plVar17 = lVar7;
        DataMemoryBarrier(2,3);
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
      }
      uVar15 = uVar15 - 1;
      iVar16 = iVar16 + 3;
      puVar1 = (undefined8 *)(*plVar17 + (long)(iVar13 - (int)plVar17[1]) * 0x10);
      uVar3 = param_2[1];
      uVar14 = (ulong)(iVar13 + 1);
      iVar12 = iVar12 + 2;
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      param_2 = param_2 + 2;
    } while (uVar15 != 0);
  }
  DataMemoryBarrier(2,3);
  puVar8 = *(ulong **)(param_1 + 0x5c0);
  uVar10 = *puVar8;
  uVar14 = *puVar8;
  uVar9 = (uint)(uVar10 >> 0x20);
  uVar15 = uVar10 >> 0x20;
  if ((uint)uVar10 <= uVar9) {
    uVar15 = uVar10;
  }
  if (uVar14 == uVar10) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar5) {
      *puVar8 = uVar15 & 0xffffffff | (ulong)(uVar9 + param_3) << 0x20;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02f637b0;
  }
  else {
    ClearExclusiveLocal();
  }
  uVar9 = 0;
  do {
    if (uVar9 != 0x1f) {
      iVar16 = (1 << (ulong)(uVar9 & 0x1f)) + 1;
      do {
        iVar16 = iVar16 + -1;
        DataMemoryBarrier(2,2);
        Yield();
      } while (1 < iVar16);
    }
    puVar8 = *(ulong **)(param_1 + 0x5c0);
    if (uVar9 < 8) {
      uVar9 = uVar9 + 1;
    }
    uVar11 = (uint)(uVar14 >> 0x20);
    uVar10 = *puVar8;
    uVar15 = uVar14 >> 0x20;
    if ((uint)uVar14 <= uVar11) {
      uVar15 = uVar14;
    }
    if (uVar10 == uVar14) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar5) {
        *puVar8 = uVar15 & 0xffffffff | (ulong)(uVar11 + param_3) << 0x20;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02f637a4;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02f637a4:
      bVar5 = false;
    }
    uVar14 = uVar10;
  } while (!bVar5);
LAB_02f637b0:
  if ((0xf < (int)param_3) && (*(int *)(param_1 + 0x130) == 0)) {
    *(undefined4 *)(param_1 + 0x130) = 1;
    DataMemoryBarrier(2,3);
  }
  nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x2a10));
  return;
}


