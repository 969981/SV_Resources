/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343e614; name: FUN_0343e614
 */


undefined8 FUN_0343e614(long *param_1,float *param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  float fVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  float fVar20;
  
  if (100 < *(byte *)((long)param_2 + 0xd)) {
    return 0x1f;
  }
  *(byte *)((long)param_1 + 100) = *(byte *)((long)param_2 + 0xd);
  fVar20 = *param_2;
  fVar7 = param_2[2];
  if ((*(long *)param_1[4] < (long)(ulong)(uint)fVar7) && (*(char *)((long)param_1 + 0x69) != '\0'))
  {
    fVar7 = (float)*(long *)param_1[4];
  }
  if (fVar20 <= 1.0) {
    fVar20 = 1.0;
  }
  if ((*(float *)(param_1 + 0x12) == fVar7) && (*(float *)((long)param_1 + 0x8c) == param_2[1])) {
    cVar3 = *(char *)(param_2 + 3);
    if (cVar3 == '\0') {
      cVar3 = '\x01';
    }
    if ((*(float *)((long)param_1 + 0x84) == fVar20) && (*(char *)((long)param_1 + 0xc1) == cVar3))
    {
      return 1;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 5));
    *(char *)((long)param_1 + 0xc1) = cVar3;
    *(float *)((long)param_1 + 0x84) = fVar20;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 5));
    *(float *)((long)param_1 + 0x84) = fVar20;
    cVar3 = *(char *)(param_2 + 3);
    if (cVar3 == '\0') {
      cVar3 = '\x01';
    }
    *(char *)((long)param_1 + 0xc1) = cVar3;
    uVar12 = *(uint *)(param_1 + 0xc);
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = (uint)param_2[1] / uVar12;
    }
    uVar5 = uVar5 * uVar12;
    *(uint *)((long)param_1 + 0x8c) = uVar5;
    (**(code **)(*param_1 + 0x110))(param_1,fVar7);
    plVar8 = param_1 + 0x17;
    plVar10 = (long *)*plVar8;
    bVar4 = *(byte *)(param_1 + 0x18);
    if (bVar4 == 0) {
      uVar15 = param_1[0xf];
      plVar13 = (long *)0x0;
    }
    else {
      uVar12 = (uint)bVar4;
      if (bVar4 < 2) {
        uVar12 = 1;
      }
      plVar13 = (long *)(ulong)uVar12;
      uVar1 = uVar12 & 3;
      plVar19 = plVar10;
      if (2 < uVar12 - 1) {
        iVar14 = -(uVar12 & 0xfc);
        do {
          iVar14 = iVar14 + 4;
          plVar13 = (long *)**(undefined8 **)*plVar10;
          plVar10 = (long *)*plVar13;
          plVar19 = plVar10;
        } while (iVar14 != 0);
      }
      for (; plVar10 = plVar19, uVar1 != 0; uVar1 = uVar1 - 1) {
        plVar19 = (long *)*plVar10;
        plVar13 = plVar10;
      }
      uVar15 = *(long *)plVar13[1] + (ulong)*(uint *)((long *)plVar13[1] + 3);
    }
    uVar18 = uVar15;
    if ((uint)fVar7 <= uVar15 && fVar7 != 0.0) {
      uVar18 = (ulong)uVar5;
    }
    if (plVar10 != (long *)0x0) {
      plVar19 = (long *)0x0;
      if (fVar7 == 0.0) {
        uVar18 = uVar15;
        do {
          lVar16 = *(long *)plVar10[1];
          if (lVar16 + (ulong)*(uint *)(plVar10 + 2) == uVar18) {
            uVar18 = lVar16 + (ulong)*(uint *)((long *)plVar10[1] + 3);
            plVar13 = plVar10;
            plVar17 = (long *)*plVar10;
          }
          else {
            plVar17 = (long *)*plVar10;
            plVar2 = plVar8;
            if ((long *)param_1[0x17] != plVar10) {
              plVar2 = plVar13;
            }
            *plVar2 = (long)plVar17;
            if ((long *)param_1[0x16] == plVar10) {
              param_1[0x16] = (long)plVar13;
            }
            *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
            if (plVar19 == (long *)0x0) {
              *plVar10 = 0;
            }
            else {
              *plVar10 = (long)plVar19;
            }
            plVar19 = plVar10;
          }
          plVar10 = plVar17;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          lVar16 = *(long *)plVar10[1];
          if (lVar16 + (ulong)*(uint *)(plVar10 + 2) == uVar18) {
            uVar18 = lVar16 + (ulong)*(uint *)((long *)plVar10[1] + 3);
            if ((uint)fVar7 <= uVar18) {
              uVar18 = (ulong)uVar5;
            }
            plVar13 = plVar10;
            plVar17 = (long *)*plVar10;
          }
          else {
            plVar17 = (long *)*plVar10;
            plVar2 = plVar8;
            if ((long *)param_1[0x17] != plVar10) {
              plVar2 = plVar13;
            }
            *plVar2 = (long)plVar17;
            if ((long *)param_1[0x16] == plVar10) {
              param_1[0x16] = (long)plVar13;
            }
            *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
            if (plVar19 == (long *)0x0) {
              *plVar10 = 0;
            }
            else {
              *plVar10 = (long)plVar19;
            }
            plVar19 = plVar10;
          }
          plVar10 = plVar17;
        } while (plVar10 != (long *)0x0);
      }
      if (plVar19 != (long *)0x0) {
        lVar16 = param_1[10];
        nn::os::LockMutex((MutexType *)(lVar16 + 0x1e8));
        puVar6 = PTR_DAT_047e2fd0;
        do {
          plVar10 = (long *)*plVar19;
          lVar11 = *(long *)plVar19[1];
          uVar12 = *(uint *)((long *)plVar19[1] + 3);
          uVar5 = *(uint *)(param_1 + 0x12);
          uVar15 = lVar11 + (ulong)*(uint *)(plVar19 + 2);
          iVar14 = *(uint *)(plVar19 + 2) - uVar12;
          if (uVar15 < uVar5 && (ulong)uVar5 < lVar11 + (ulong)uVar12) {
            iVar14 = (int)uVar15 - uVar5;
          }
          *(int *)(param_1 + 0x13) = (int)param_1[0x13] + iVar14;
          lVar9 = param_1[10];
          lVar11 = plVar19[1];
          plVar19[1] = 0;
          if (lVar11 != 0) {
            FUN_03440670(lVar9 + 0x2a8);
          }
          (**(code **)(puVar6 + 0x30))(7,plVar19);
          plVar19 = plVar10;
        } while (plVar10 != (long *)0x0);
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x1e8));
      }
    }
    (**(code **)(*param_1 + 0x100))(param_1,uVar18);
  }
  FUN_0343e98c(param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return 1;
}


