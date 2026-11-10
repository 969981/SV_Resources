/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e9e20; name: FUN_030e9e20
 */


void FUN_030e9e20(long param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  uint *puVar18;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    uVar8 = *(ulong *)(param_2 + 0x20);
    uVar6 = uVar8;
  }
  else {
    uVar6 = FUN_0307d71c();
    uVar8 = *(ulong *)(param_2 + 0x20);
  }
  lVar15 = (long)*param_4;
  lVar16 = *(long *)(uVar6 + 0xe0);
  uVar1 = *(int *)(uVar8 + 0x30) + *param_3;
  pbVar17 = (byte *)(lVar16 + lVar15 * 0x14 + 0x10);
  DataMemoryBarrier(2,3);
  if ((*pbVar17 >> 6 & 1) == 0) {
    iVar7 = *param_3;
    iVar4 = *param_4;
    if (iVar7 != iVar4) {
      puVar14 = (undefined4 *)(*(long *)(uVar6 + 0xe0) + (long)iVar4 * 0x14);
      puVar12 = (undefined4 *)(*(long *)(uVar6 + 0xe0) + (long)iVar7 * 0x14);
      *puVar12 = *puVar14;
      puVar12[1] = puVar14[1];
      uVar13 = *(undefined8 *)(puVar14 + 2);
      *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar14 + 4);
      *(undefined8 *)(puVar12 + 2) = uVar13;
      *(undefined2 *)((long)puVar12 + 0x12) = *(undefined2 *)((long)puVar14 + 0x12);
      *(undefined2 *)(*(long *)(uVar6 + 0x110) + (long)iVar7 * 2) =
           *(undefined2 *)(*(long *)(uVar6 + 0x110) + (long)iVar4 * 2);
      iVar5 = *(int *)(uVar6 + 0x60);
      memcpy((void *)(*(long *)(uVar6 + 0x150) + (long)(iVar5 * iVar7) * 4),
             (void *)(*(long *)(uVar6 + 0x150) + (long)(iVar5 * iVar4) * 4),(long)iVar5 << 2);
      iVar7 = *param_3;
    }
    lVar10 = *(long *)(uVar6 + 0xe0);
    uVar3 = *(uint *)(lVar10 + (long)iVar7 * 0x14 + 8);
    if (uVar3 != 0xffffffff) {
      uVar8 = (ulong)uVar3 & 0x3fffff;
      iVar7 = (int)uVar8 - *(int *)(uVar6 + 0x30);
      if ((int)uVar8 < *(int *)(uVar6 + 0x30)) {
        if (*(int *)(uVar6 + 0x78) != 0) {
          uVar8 = (ulong)*(uint *)(*(long *)(uVar6 + 0x70) + uVar8 * 4);
        }
        iVar7 = (int)uVar8;
        lVar10 = *(long *)(uVar6 + 0xc0);
      }
      *(uint *)(lVar10 + (long)iVar7 * 0x14 + 8) = uVar1;
      *(undefined4 *)(lVar16 + lVar15 * 0x14 + 0xc) = 0xffffffff;
    }
    *pbVar17 = 0x80;
    lVar16 = lVar16 + lVar15 * 0x14;
    *(uint *)(lVar16 + 8) = uVar1;
  }
  else {
    puVar18 = (uint *)(lVar16 + lVar15 * 0x14 + 8);
    DataMemoryBarrier(2,3);
    if (*puVar18 == 0xffffffff) {
      nn::os::LockMutex(*(MutexType **)(uVar6 + 0x1a8));
      iVar7 = *param_3;
      iVar4 = *param_4;
      if (iVar7 != iVar4) {
        puVar14 = (undefined4 *)(*(long *)(uVar6 + 0xe0) + (long)iVar4 * 0x14);
        puVar12 = (undefined4 *)(*(long *)(uVar6 + 0xe0) + (long)iVar7 * 0x14);
        *puVar12 = *puVar14;
        puVar12[1] = puVar14[1];
        uVar13 = *(undefined8 *)(puVar14 + 2);
        *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar14 + 4);
        *(undefined8 *)(puVar12 + 2) = uVar13;
        *(undefined2 *)((long)puVar12 + 0x12) = *(undefined2 *)((long)puVar14 + 0x12);
        *(undefined2 *)(*(long *)(uVar6 + 0x110) + (long)iVar7 * 2) =
             *(undefined2 *)(*(long *)(uVar6 + 0x110) + (long)iVar4 * 2);
        iVar5 = *(int *)(uVar6 + 0x60);
        memcpy((void *)(*(long *)(uVar6 + 0x150) + (long)(iVar5 * iVar7) * 4),
               (void *)(*(long *)(uVar6 + 0x150) + (long)(iVar5 * iVar4) * 4),(long)iVar5 << 2);
      }
      *pbVar17 = 0x80;
      *puVar18 = uVar1;
      *(undefined4 *)(lVar16 + lVar15 * 0x14 + 0xc) = 0xffffffff;
      nn::os::UnlockMutex(*(MutexType **)(uVar6 + 0x1a8));
      return;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(*puVar18 >> 0xe) & 0x3ff00));
    if (lVar10 == 0) {
      uVar8 = 0;
    }
    else if (*(char *)(lVar10 + 0x30) == '\x01') {
      uVar8 = *(ulong *)(lVar10 + 0x20);
    }
    else {
      uVar8 = FUN_0307d71c();
    }
    uVar9 = uVar6;
    if (uVar8 <= uVar6) {
      uVar9 = uVar8;
    }
    uVar2 = uVar8;
    if (uVar8 <= uVar6) {
      uVar2 = uVar6;
    }
    nn::os::LockMutex(*(MutexType **)(uVar9 + 0x1a8));
    nn::os::LockMutex(*(MutexType **)(uVar2 + 0x1a8));
    iVar7 = *param_3;
    iVar4 = *param_4;
    if (iVar7 != iVar4) {
      puVar14 = (undefined4 *)(*(long *)(uVar6 + 0xe0) + (long)iVar4 * 0x14);
      puVar12 = (undefined4 *)(*(long *)(uVar6 + 0xe0) + (long)iVar7 * 0x14);
      *puVar12 = *puVar14;
      puVar12[1] = puVar14[1];
      uVar13 = *(undefined8 *)(puVar14 + 2);
      *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar14 + 4);
      *(undefined8 *)(puVar12 + 2) = uVar13;
      *(undefined2 *)((long)puVar12 + 0x12) = *(undefined2 *)((long)puVar14 + 0x12);
      *(undefined2 *)(*(long *)(uVar6 + 0x110) + (long)iVar7 * 2) =
           *(undefined2 *)(*(long *)(uVar6 + 0x110) + (long)iVar4 * 2);
      iVar5 = *(int *)(uVar6 + 0x60);
      memcpy((void *)(*(long *)(uVar6 + 0x150) + (long)(iVar5 * iVar7) * 4),
             (void *)(*(long *)(uVar6 + 0x150) + (long)(iVar5 * iVar4) * 4),(long)iVar5 << 2);
    }
    if (*puVar18 != 0xffffffff) {
      uVar9 = (ulong)*puVar18 & 0x3fffff;
      iVar7 = (int)uVar9 - *(int *)(uVar8 + 0x30);
      if ((int)uVar9 < *(int *)(uVar8 + 0x30)) {
        if (*(int *)(uVar8 + 0x78) != 0) {
          uVar9 = (ulong)*(uint *)(*(long *)(uVar8 + 0x70) + uVar9 * 4);
        }
        iVar7 = (int)uVar9;
        plVar11 = (long *)(uVar8 + 0xc0);
      }
      else {
        plVar11 = (long *)(uVar8 + 0xe0);
      }
      lVar10 = *plVar11 + (long)iVar7 * 0x14;
      *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) & 0xffc00000 | uVar1;
    }
    nn::os::UnlockMutex(*(MutexType **)(uVar6 + 0x1a8));
    nn::os::UnlockMutex(*(MutexType **)(uVar8 + 0x1a8));
    *pbVar17 = 0x80;
    *puVar18 = uVar1;
    lVar16 = lVar16 + lVar15 * 0x14;
  }
  *(undefined4 *)(lVar16 + 0xc) = 0xffffffff;
  return;
}


