/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1c86c; name: FUN_02f1c86c
 */


uint FUN_02f1c86c(long param_1,char *param_2)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ulong *puVar5;
  MutexType *pMVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  
  pMVar6 = *(MutexType **)(param_1 + 0x40);
  nn::os::LockMutex(pMVar6);
  lVar8 = *(long *)(param_1 + 0x48);
  uVar9 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_02f1c8fc:
    uVar7 = 0xffff;
  }
  else {
    uVar1 = uVar9 + 1;
    if (0.0 <= *(float *)(lVar8 + 0x28)) {
      uVar10 = 0;
    }
    else {
      if (uVar1 < 2) {
        uVar9 = 0;
      }
      lVar3 = 0;
      uVar7 = 0xffff;
      pfVar4 = (float *)(lVar8 + 0x78);
      do {
        if (-lVar3 == (ulong)uVar9) goto LAB_02f1c988;
        fVar11 = *pfVar4;
        lVar3 = lVar3 + -1;
        pfVar4 = pfVar4 + 0x14;
      } while (fVar11 < 0.0);
      if ((int)lVar3 == 1) goto LAB_02f1c8fc;
      uVar10 = -lVar3;
    }
    uVar9 = (uint)uVar10;
    if (param_2 == (char *)0x0) {
      if (1 < *(ulong *)(lVar8 + (uVar10 & 0xffffffff) * 0x50)) {
        uVar9 = uVar9 + 1;
        puVar5 = (ulong *)(lVar8 + (ulong)uVar9 * 0x50);
        uVar7 = 0xffff;
        for (; uVar9 < uVar1; uVar9 = uVar9 + 1) {
          if ((0.0 <= *(float *)(puVar5 + 5)) && (*puVar5 < 2)) goto LAB_02f1c984;
          puVar5 = puVar5 + 10;
        }
        goto LAB_02f1c988;
      }
    }
    else {
      uVar7 = 0xffff;
      while( true ) {
        uVar9 = (uint)uVar10;
        __s1 = (char *)(*(ulong *)(lVar8 + (uVar10 & 0xffffffff) * 0x50) & 0xfffffffffffffffe);
        iVar2 = -(uint)(param_2 != (char *)0x0);
        if (__s1 != (char *)0x0) {
          iVar2 = strcmp(__s1,param_2);
        }
        if (iVar2 == 0) break;
        pfVar4 = (float *)(lVar8 + 0x28 + (ulong)(uVar9 + 1) * 0x50);
        do {
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar9;
          if (uVar1 <= uVar9) goto LAB_02f1c988;
          fVar11 = *pfVar4;
          pfVar4 = pfVar4 + 0x14;
        } while (fVar11 < 0.0);
      }
    }
LAB_02f1c984:
    uVar7 = uVar9 & 0xffff;
  }
LAB_02f1c988:
  nn::os::UnlockMutex(pMVar6);
  return uVar7;
}


