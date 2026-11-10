/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f3465c; name: FUN_02f3465c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f3465c(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  MutexType *pMVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  float fVar19;
  float fVar20;
  
  uVar9 = *(uint *)(param_2 + 0x50);
  uVar16 = (ulong)uVar9;
  uVar2 = *(uint *)(param_2 + 0x80);
  uVar14 = (ulong)uVar2;
  lVar17 = *(long *)(param_1 + 0x150);
  if ((((*(byte *)(param_2 + 0x54) & 9) == 0) && ((*(byte *)(param_2 + 0x88) & 1) != 0)) &&
     (*(long *)(param_1 + 0x698) != 0)) {
    FUN_02f5cd98(*(long *)(param_1 + 0x698),uVar16,1);
  }
  uVar3 = *(uint *)(param_2 + 0x84);
  if (uVar3 == uVar9) {
    FUN_02f34a04(param_1 + 0x710,param_1,uVar14);
    *(undefined4 *)(lVar17 + uVar14 * 0x80 + 0x48) = 0xffffff;
    if (*(int *)(param_1 + 0x158) <= (int)uVar2) goto LAB_02f349e4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x150) + (long)(int)uVar2 * 0x80);
    if (*(char *)((long)puVar1 + 0x5f) == '\0') goto LAB_02f349e4;
    lVar17 = (long)(int)uVar2 * 0x80;
    memset(puVar1 + 2,0,0x70);
    uVar7 = _UNK_03cabe58;
    uVar6 = _DAT_03cabe50;
    *(undefined1 *)((long)puVar1 + 0x5e) = 0xff;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    puVar1[1] = uVar7;
    *puVar1 = uVar6;
    *(char *)((long)puVar1 + 0x5f) = '\0';
    *(undefined4 *)((long)puVar1 + 0x4c) = 0x7fffffff;
    uVar3 = *(uint *)(param_1 + 0x16c);
    uVar9 = uVar3 & 0xffffff;
    if (uVar9 == 0xffffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(*(long *)(param_1 + 0x150) + lVar17) = uVar9;
    puVar18 = (uint *)(param_1 + 0x16c);
    uVar9 = *puVar18;
    if (uVar9 == uVar3) {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar18,0x10);
      if (bVar10) {
        *puVar18 = uVar3 & 0xff000000 | uVar2 & 0xffffff;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02f348f8;
      bVar10 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02f348f8:
      bVar10 = false;
    }
    if (!bVar10) {
      do {
        uVar3 = uVar9 & 0xffffff;
        if (uVar3 == 0xffffff) {
          uVar3 = 0xffffffff;
        }
        *(uint *)(*(long *)(param_1 + 0x150) + lVar17) = uVar3;
        uVar3 = *puVar18;
        if (uVar3 == uVar9) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar18,0x10);
          if (bVar10) {
            *puVar18 = uVar9 & 0xff000000 | uVar2 & 0xffffff;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02f34944;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02f34944:
          bVar10 = false;
        }
        uVar9 = uVar3;
      } while (!bVar10);
    }
    piVar8 = (int *)(param_1 + 0x170);
    do {
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar10) {
        *piVar8 = *piVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_02f349e4;
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    lVar12 = *(long *)(param_1 + 0x38);
    uVar2 = uVar3;
    do {
      uVar11 = uVar2;
      uVar13 = (ulong)(uVar11 & 0xffffff);
      uVar2 = *(uint *)(lVar12 + uVar13 * 0xc0 + 0x84);
    } while (uVar2 != uVar9);
    if (lVar12 + uVar13 * 0xc0 == param_2) goto LAB_02f3480c;
LAB_02f347fc:
    *(uint *)(lVar12 + uVar13 * 0xc0 + 0x84) = uVar3;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x38);
    uVar11 = *(uint *)(*(long *)(param_1 + 0x70) + (uVar16 & 0xffffff) * 4);
    uVar13 = (ulong)uVar11 & 0xffffff;
    if (lVar12 + uVar13 * 0xc0 != param_2) {
      *(undefined4 *)(*(long *)(param_1 + 0x70) + ((ulong)uVar3 & 0xffffff) * 4) =
           *(undefined4 *)(lVar12 + uVar13 * 0xc0 + 0x50);
      goto LAB_02f347fc;
    }
LAB_02f3480c:
    uVar11 = 0xffffff;
  }
  lVar17 = lVar17 + uVar14 * 0x80;
  *(uint *)(lVar17 + 0x48) = uVar11;
  *(uint *)(param_2 + 0x84) = uVar9;
  if (*(char *)(param_1 + 0x68) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x70) + (uVar16 & 0xffffff) * 4) = 0xffffff;
  }
  fVar19 = 0.0;
  uVar9 = *(uint *)(lVar17 + 0x48);
  do {
    lVar12 = *(long *)(param_1 + 0x38) + (ulong)(uVar9 & 0xffffff) * 0xc0;
    fVar20 = *(float *)(lVar12 + 0x3c);
    uVar9 = *(uint *)(lVar12 + 0x84);
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
  } while (uVar9 != *(uint *)(lVar17 + 0x48));
  *(short *)(lVar17 + 0x5a) = (short)((uint)(fVar19 * 1.0039062) >> 0x10);
  iVar4 = *(int *)(param_2 + 0x80);
  if ((iVar4 != 0) && (*(long *)(param_1 + 0x698) != 0)) {
    lVar17 = *(long *)(param_1 + 0x150) + (long)iVar4 * 0x80;
    uVar9 = *(uint *)(lVar17 + 0x48);
    do {
      if ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)(uVar9 & 0xffffff) * 0xc0 + 0x88) & 1) != 0)
      goto LAB_02f349e4;
      uVar9 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)(uVar9 & 0xffffff) * 0xc0 + 0x84);
    } while (uVar9 != *(uint *)(lVar17 + 0x48));
    puVar18 = (uint *)(lVar17 + 0x4c);
    if (*puVar18 == 0x7fffffff) {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) + (long)iVar4 * 0x20 + 0x10) =
           0xffffffff;
    }
    else {
      uVar14 = (ulong)*(byte *)(lVar17 + 0x5e);
      pMVar15 = *(MutexType **)(param_1 + 0x480);
      nn::os::LockMutex(pMVar15);
      uVar9 = *puVar18;
      piVar8 = (int *)(param_1 + uVar14 * 0x18 + 0x188);
      if (uVar9 < (uint)((long)*piVar8 + -1)) {
        lVar12 = param_1 + uVar14 * 0x18;
        iVar4 = *(int *)(*(long *)(lVar12 + 0x180) + ((long)*piVar8 + -1) * 4);
        *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar4 * 0x80 + 0x4c) = uVar9;
        *(int *)(*(long *)(lVar12 + 0x180) + (long)(int)uVar9 * 4) = iVar4;
      }
      *(byte *)(lVar17 + 0x5e) = 0xff;
      *puVar18 = 0x7fffffff;
      *piVar8 = *piVar8 + -1;
      nn::os::UnlockMutex(pMVar15);
    }
  }
LAB_02f349e4:
  *(undefined4 *)(param_2 + 0x80) = 0x7fffffff;
  return;
}


