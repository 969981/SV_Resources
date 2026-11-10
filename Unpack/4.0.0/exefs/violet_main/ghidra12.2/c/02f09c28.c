/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f09c28; name: FUN_02f09c28
 */


void FUN_02f09c28(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  MutexType *pMVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar12 = *(long *)(param_1 + 0x10);
  uVar4 = param_2 & 0xffffffff;
  do {
    uVar4 = (ulong)((uint)uVar4 & 0xffffff);
    if ((*(byte *)(lVar12 + uVar4 * 0xc0 + 0x88) & 1) != 0) {
      pMVar9 = *(MutexType **)(param_1 + 0x100);
      uVar13 = (ulong)*(uint *)(lVar12 + uVar4 * 0xc0 + 0x50) & 0xffffff;
      nn::os::LockMutex(pMVar9);
      uVar6 = (long)*(int *)(param_1 + 200) - 1;
      iVar3 = *(int *)(*(long *)(param_1 + 0xe0) + uVar13 * 4);
      if (iVar3 < (int)uVar6) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0xc0) + uVar6 * 0x10);
        uVar7 = *puVar1;
        uVar2 = *(uint *)(puVar1 + 1);
        *(int *)(*(long *)(param_1 + 0xe0) + ((ulong)uVar2 & 0xffffff) * 4) = iVar3;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0xc0) + (long)iVar3 * 0x10);
        *puVar1 = uVar7;
        *(uint *)(puVar1 + 1) = uVar2;
        uVar6 = (ulong)(*(int *)(param_1 + 200) - 1);
      }
      *(int *)(param_1 + 200) = (int)uVar6;
      nn::os::UnlockMutex(pMVar9);
      *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar13) = 0xff;
      lVar12 = lVar12 + uVar13 * 0xc0;
      *(uint *)(lVar12 + 0x54) = *(uint *)(lVar12 + 0x54) & 0xfffffff7;
      *(ushort *)(lVar12 + 0x58) = *(ushort *)(lVar12 + 0x58) | 0x228;
      *(undefined4 *)(*(long *)(param_1 + 0xe0) + uVar13 * 4) = 0xffffffff;
      lVar12 = *(long *)(param_1 + 0x10);
    }
    uVar2 = *(uint *)(lVar12 + uVar4 * 0xc0 + 0x84);
    uVar4 = (ulong)uVar2;
  } while (uVar2 != (uint)param_2);
  lVar11 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(lVar11 + 0x10) +
           (long)*(int *)(lVar12 + (param_2 & 0xffffff) * 0xc0 + 0x80) * 0x80;
  pbVar10 = (byte *)(lVar12 + 0x5e);
  uVar4 = (ulong)*pbVar10;
  pMVar9 = *(MutexType **)(lVar11 + 0x340);
  nn::os::LockMutex(pMVar9);
  puVar8 = (uint *)(lVar12 + 0x4c);
  uVar2 = *puVar8;
  piVar5 = (int *)(lVar11 + uVar4 * 0x18 + 0x48);
  if (uVar2 < (uint)((long)*piVar5 + -1)) {
    lVar12 = lVar11 + uVar4 * 0x18;
    iVar3 = *(int *)(*(long *)(lVar12 + 0x40) + ((long)*piVar5 + -1) * 4);
    *(uint *)(*(long *)(lVar11 + 0x10) + (long)iVar3 * 0x80 + 0x4c) = uVar2;
    *(int *)(*(long *)(lVar12 + 0x40) + (long)(int)uVar2 * 4) = iVar3;
  }
  *pbVar10 = 0xff;
  *puVar8 = 0x7fffffff;
  *piVar5 = *piVar5 + -1;
  nn::os::UnlockMutex(pMVar9);
  return;
}


