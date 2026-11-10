/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a5938; name: FUN_034a5938
 */


void FUN_034a5938(long *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  
  lVar13 = param_1[0x2b];
  *(undefined4 *)((long)param_1 + 300) = 0x42ca0000;
  if (lVar13 == 0) {
    uVar5 = *(uint *)((long)param_1 + 0x144);
    if (uVar5 != 0) {
      lVar13 = *(long *)PTR_DAT_047e6f28;
      pMVar2 = (MutexType *)(lVar13 + 0x150);
      nn::os::LockMutex(pMVar2);
      uVar6 = *(uint *)(lVar13 + 0x178);
      if (uVar6 != 0) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        for (lVar13 = *(long *)(*(long *)(lVar13 + 0x170) + (ulong)(uVar5 - uVar8 * uVar6) * 8);
            lVar13 != 0; lVar13 = *(long *)(lVar13 + 8)) {
          if (*(uint *)(lVar13 + 0x10) == uVar5) {
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar2);
            param_1[0x2b] = lVar13;
            goto LAB_034a595c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar2);
      param_1[0x2b] = 0;
    }
  }
  else {
LAB_034a595c:
    puVar9 = PTR_DAT_047e6cb8;
    if ((-1 < *(char *)((long)param_1 + 0x154)) || ((*(byte *)(param_1 + 0x36) >> 3 & 1) == 0)) {
      lVar4 = *(long *)(param_1[5] + 0x28);
      plVar10 = *(long **)(param_1[5] + 0x30);
      if ((plVar10 == (long *)0x0) && (plVar10 = *(long **)PTR_DAT_047e6cb8, plVar10 == (long *)0x0)
         ) {
        plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
        if (plVar10 == (long *)0x0) {
          *(undefined8 *)puVar9 = 0;
        }
        else {
          *plVar10 = (long)(PTR_DAT_047e6e40 + 0x10);
          plVar10[1] = 0;
          puVar1 = PTR_DAT_047e6958;
          lVar12 = *(long *)(PTR_DAT_047e6958 + 8);
          plVar10[2] = 0;
          plVar10[3] = lVar12;
          plVar3 = (long *)(puVar1 + 0x10);
          if (*(long *)(puVar1 + 0x10) != 0) {
            plVar3 = (long *)(lVar12 + 0x10);
          }
          *plVar3 = (long)plVar10;
          *(long **)(puVar1 + 8) = plVar10;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          puVar1 = PTR_DAT_047e6e48 + 0x10;
          plVar10[8] = 0;
          plVar10[9] = 0;
          *plVar10 = (long)puVar1;
          plVar10[0xc] = 0;
          plVar10[0xd] = 0;
          plVar10[0x12] = 0;
          plVar10[0x13] = 0;
          plVar10[0x16] = 0;
          plVar10[0x17] = 0;
          plVar10[0x1a] = 0;
          plVar10[0x1b] = 0;
          *(long **)puVar9 = plVar10;
          *(undefined2 *)(plVar10 + 0x1c) = 0x101;
        }
      }
      fVar14 = (float)FUN_034e77ec(lVar4 + 0x20,plVar10 + 0x18);
      (**(code **)(*param_1 + 0xb8))
                (fVar14 / *(float *)(*(long *)(param_1[5] + 0x28) + 0x50),param_1,lVar13);
    }
  }
  if ((((param_1[0x30] == 0) || (param_1[0x21] == 0)) ||
      (iVar7 = *(int *)(param_1[0x30] + 0x30),
      *(byte *)(param_1[0x21] + 0x2d) = (byte)((uint)iVar7 >> 0x1f), -1 < iVar7)) ||
     ((piVar11 = (int *)param_1[0x21], (*(byte *)(piVar11 + 10) >> 1 & 1) == 0 || (*piVar11 != 0))))
  {
    return;
  }
  lVar13 = param_1[0x31];
  do {
    if (*(long *)(lVar13 + 0x88) != 0) {
      lVar13 = *(long *)(lVar13 + 0x88) + 0x38;
      goto LAB_034a5b44;
    }
    lVar13 = *(long *)(lVar13 + 0x98);
  } while (lVar13 != 0);
  lVar13 = 0;
LAB_034a5b44:
  FUN_034b2e64(*(undefined8 *)PTR_DAT_047e7040,piVar11,lVar13);
  return;
}


