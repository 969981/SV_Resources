/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343e344; name: FUN_0343e344
 */


void FUN_0343e344(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x23;
  long lVar12;
  
  (**(code **)(*param_1 + 0xf8))();
  bVar3 = *(byte *)(param_1 + 0x18);
  if ((uint)bVar3 < *(uint *)(param_1 + 0x15)) {
    plVar11 = (long *)param_1[0x17];
    uVar8 = (uint)bVar3;
    if (uVar8 == 0) {
      unaff_x23 = (long *)0x0;
    }
    else {
      uVar5 = uVar8 & 3;
      if (2 < uVar8 - 1) {
        iVar9 = -(uVar8 & 0xfc);
        do {
          iVar9 = iVar9 + 4;
          unaff_x23 = (long *)**(long **)*plVar11;
          plVar11 = (long *)*unaff_x23;
        } while (iVar9 != 0);
      }
      if ((bVar3 & 3) != 0) {
        do {
          unaff_x23 = plVar11;
          plVar11 = (long *)*unaff_x23;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    lVar6 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar6 + 0x1e8));
    puVar4 = PTR_DAT_047e2fd0;
    while (plVar11 != (long *)0x0) {
      lVar12 = *plVar11;
      plVar2 = param_1 + 0x17;
      if ((long *)param_1[0x17] != plVar11) {
        plVar2 = unaff_x23;
      }
      *plVar2 = lVar12;
      if ((long *)param_1[0x16] == plVar11) {
        param_1[0x16] = (long)unaff_x23;
      }
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      lVar10 = *(long *)plVar11[1];
      uVar8 = *(uint *)((long *)plVar11[1] + 3);
      uVar5 = *(uint *)(param_1 + 0x12);
      uVar1 = lVar10 + (ulong)*(uint *)(plVar11 + 2);
      iVar9 = *(uint *)(plVar11 + 2) - uVar8;
      if (uVar1 < uVar5 && (ulong)uVar5 < lVar10 + (ulong)uVar8) {
        iVar9 = (int)uVar1 - uVar5;
      }
      *(int *)(param_1 + 0x13) = (int)param_1[0x13] + iVar9;
      lVar7 = param_1[10];
      lVar10 = plVar11[1];
      plVar11[1] = 0;
      if (lVar10 != 0) {
        FUN_03440670(lVar7 + 0x2a8);
      }
      (**(code **)(puVar4 + 0x30))(7,plVar11);
      plVar11 = (long *)lVar12;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e8));
  }
  FUN_0343e98c(param_1);
  return;
}


