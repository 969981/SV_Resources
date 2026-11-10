/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f097d8; name: FUN_02f097d8
 */


void FUN_02f097d8(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  MutexType *pMVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = param_1[2];
  param_2 = param_2 & 0xffffff;
  lVar9 = lVar5 + param_2 * 0xc0;
  lVar10 = *(long *)(param_1[1] + 0x10);
  *(uint *)(lVar9 + 0x54) = *(uint *)(lVar9 + 0x54) | 8;
  *(ushort *)(lVar9 + 0x58) = *(ushort *)(lVar9 + 0x58) | 0x220;
  pMVar8 = (MutexType *)param_1[0x20];
  iVar3 = *(int *)(lVar9 + 0x80);
  nn::os::LockMutex(pMVar8);
  *(int *)(param_1[0x1c] + param_2 * 4) = (int)param_1[0x19];
  lVar4 = param_1[0x19];
  uVar2 = *(uint *)(lVar9 + 0x50);
  puVar7 = (undefined8 *)(param_1[0x18] + (long)(int)lVar4 * 0x10);
  *puVar7 = *(undefined8 *)(lVar9 + 0xb0);
  puVar7[1] = (ulong)uVar2;
  *(int *)(param_1 + 0x19) = (int)lVar4 + 1;
  nn::os::UnlockMutex(pMVar8);
  *(undefined1 *)(param_1[0x1a] + param_2) = *(undefined1 *)(lVar10 + (long)iVar3 * 0x80 + 0x5e);
  if (*(int *)(*param_1 + 0x818) - 4U < 0x1d) {
    lVar5 = lVar5 + param_2 * 0xc0;
    puVar7 = (undefined8 *)(param_1[0xb] + param_2 * 0x18);
    uVar1 = *(undefined8 *)(lVar5 + 0x60);
    uVar6 = *(undefined8 *)(lVar5 + 0x70);
    puVar7[1] = *(undefined8 *)(lVar5 + 0x68);
    puVar7[2] = uVar6;
    *puVar7 = uVar1;
  }
  return;
}


