/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0c32c; name: FUN_02f0c32c
 */


void FUN_02f0c32c(long *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  MutexType *pMVar9;
  byte *pbVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  
  param_2 = param_2 & 0xffffff;
  if (param_2 != 0xffffff) {
    plVar4 = (long *)*param_1;
    lVar7 = plVar4[7];
    if (((*(uint *)(lVar7 + param_2 * 0xc0 + 0x54) ^ 0xffffffff) & 10) == 0) {
      bVar2 = *(byte *)(param_1 + 2);
      uVar12 = (ulong)bVar2;
      if (uVar12 == 0xff) {
        lVar7 = (**(code **)(*plVar4 + 0x270))
                          (plVar4,*(undefined4 *)(lVar7 + param_2 * 0xc0 + 0x80));
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(lVar7 + 0x5e);
      }
      else {
        plVar4 = (long *)param_1[1];
        uVar1 = *(uint *)(lVar7 + param_2 * 0xc0 + 0x80);
        lVar7 = plVar4[2] + (ulong)uVar1 * 0x80;
        pbVar10 = (byte *)(lVar7 + 0x5e);
        uVar13 = (ulong)*pbVar10;
        if (*pbVar10 != bVar2) {
          puVar11 = (uint *)(lVar7 + 0x4c);
          if (*puVar11 == 0 || *puVar11 == 0x7fffffff) {
            *pbVar10 = bVar2;
          }
          else {
            pMVar9 = (MutexType *)plVar4[0x68];
            nn::os::LockMutex(pMVar9);
            uVar5 = *puVar11;
            plVar6 = plVar4 + uVar13 * 3 + 9;
            lVar8 = (long)(int)*plVar6 + -1;
            if (uVar5 < (uint)lVar8) {
              iVar3 = *(int *)(plVar4[uVar13 * 3 + 8] + lVar8 * 4);
              *(uint *)(plVar4[2] + (long)iVar3 * 0x80 + 0x4c) = uVar5;
              *(int *)(plVar4[uVar13 * 3 + 8] + (long)(int)uVar5 * 4) = iVar3;
            }
            *pbVar10 = 0xff;
            *puVar11 = 0x7fffffff;
            *(int *)plVar6 = (int)*plVar6 + -1;
            nn::os::UnlockMutex(pMVar9);
            *pbVar10 = bVar2;
            pMVar9 = (MutexType *)plVar4[0x68];
            nn::os::LockMutex(pMVar9);
            puVar14 = (uint *)(plVar4 + uVar12 * 3 + 9);
            *puVar11 = *puVar14;
            uVar5 = *puVar14;
            lVar8 = (long)(int)uVar5;
            if ((int)(*(uint *)((long)plVar4 + uVar12 * 0x18 + 0x4c) & 0x7fffffff) <= (int)uVar5) {
              FUN_02f1dbfc(plVar4 + uVar12 * 3 + 8,PTR_PTR_047d1a50,lVar8 + 1);
              uVar5 = *puVar14;
            }
            *(uint *)(plVar4[uVar12 * 3 + 8] + (long)(int)uVar5 * 4) = uVar1;
            *puVar14 = (uint)(lVar8 + 1);
            nn::os::UnlockMutex(pMVar9);
          }
          uVar1 = *(uint *)(lVar7 + 0x48);
          lVar7 = *plVar4;
          uVar5 = uVar1;
          do {
            lVar8 = *(long *)(lVar7 + 0x10);
            uVar12 = (ulong)uVar5 & 0xffffff;
            if ((*(byte *)(lVar8 + uVar12 * 0xc0 + 0x54) >> 3 & 1) != 0) {
              *(byte *)(*(long *)(lVar7 + 0xd0) + uVar12) = bVar2;
            }
            lVar8 = lVar8 + uVar12 * 0xc0;
            *(ushort *)(lVar8 + 0x58) = *(ushort *)(lVar8 + 0x58) | 0x20;
            uVar5 = *(uint *)(lVar8 + 0x84);
          } while (uVar5 != uVar1);
        }
      }
    }
  }
  return;
}


