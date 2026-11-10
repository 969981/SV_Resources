/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e9bd0; name: FUN_030e9bd0
 */


void FUN_030e9bd0(long param_1,ulong param_2,int *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  
  if (0 < param_4) {
    iVar12 = 0;
    puVar1 = (undefined8 *)(param_2 + 0x1a8);
    do {
      iVar2 = iVar12 + *param_3;
      lVar14 = *(long *)(param_2 + 0xe0);
      lVar9 = lVar14 + (long)iVar2 * 0x14;
      pbVar13 = (byte *)(lVar9 + 0x10);
      DataMemoryBarrier(2,3);
      puVar10 = (uint *)(lVar9 + 8);
      uVar3 = *puVar10;
      if ((*pbVar13 >> 6 & 1) == 0) {
        if (uVar3 != 0xffffffff) {
          uVar3 = uVar3 & 0x3fffff;
          uVar5 = uVar3 - *(int *)(param_2 + 0x30);
          if ((int)uVar3 < *(int *)(param_2 + 0x30)) {
            plVar8 = (long *)(param_2 + 0xc0);
            if (*(int *)(param_2 + 0x78) == 0) {
              uVar5 = uVar3;
              goto LAB_030e9dac;
            }
            uVar5 = *(uint *)(*(long *)(param_2 + 0x70) + (ulong)uVar3 * 4);
            if (uVar5 != 0xffffffff) goto LAB_030e9dac;
            lVar9 = 0;
          }
          else {
            plVar8 = (long *)(param_2 + 0xe0);
LAB_030e9dac:
            lVar9 = *plVar8 + (long)(int)uVar5 * 0x14;
          }
          *(undefined4 *)(lVar14 + (long)iVar2 * 0x14 + 0xc) = 0xffffffff;
          *puVar10 = 0xffffffff;
          *pbVar13 = *pbVar13 & 0xbf;
          *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
          *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) & 0xbf;
        }
      }
      else {
        DataMemoryBarrier(2,3);
        if (uVar3 == 0xffffffff) goto LAB_030e9de4;
        lVar9 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar3 >> 0xe) & 0x3ff00));
        if (*(char *)(lVar9 + 0x30) == '\x01') {
          uVar11 = *(ulong *)(lVar9 + 0x20);
        }
        else {
          uVar11 = FUN_0307d71c();
        }
        if (param_2 < uVar11) {
          nn::os::LockMutex((MutexType *)*puVar1);
          puVar6 = (undefined8 *)(uVar11 + 0x1a8);
        }
        else {
          nn::os::LockMutex(*(MutexType **)(uVar11 + 0x1a8));
          puVar6 = puVar1;
        }
        nn::os::LockMutex((MutexType *)*puVar6);
        if (*puVar10 != 0xffffffff) {
          uVar7 = (ulong)*puVar10 & 0x3fffff;
          iVar4 = (int)uVar7 - *(int *)(uVar11 + 0x30);
          if ((int)uVar7 < *(int *)(uVar11 + 0x30)) {
            if ((*(int *)(uVar11 + 0x78) == 0) ||
               (uVar3 = *(uint *)(*(long *)(uVar11 + 0x70) + uVar7 * 4), uVar7 = (ulong)uVar3,
               uVar3 != 0xffffffff)) {
              iVar4 = (int)uVar7;
              plVar8 = (long *)(uVar11 + 0xc0);
              goto LAB_030e9d50;
            }
            lVar9 = 0;
          }
          else {
            plVar8 = (long *)(uVar11 + 0xe0);
LAB_030e9d50:
            lVar9 = *plVar8 + (long)iVar4 * 0x14;
          }
          *(undefined4 *)(lVar14 + (long)iVar2 * 0x14 + 0xc) = 0xffffffff;
          *puVar10 = 0xffffffff;
          *pbVar13 = *pbVar13 & 0xbf;
          *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
          DataMemoryBarrier(2,3);
          *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) & 0xbf;
        }
        nn::os::UnlockMutex((MutexType *)*puVar1);
        nn::os::UnlockMutex(*(MutexType **)(uVar11 + 0x1a8));
      }
LAB_030e9de4:
      iVar12 = iVar12 + 1;
    } while (param_4 != iVar12);
  }
  return;
}


