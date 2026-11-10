/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03468808; name: FUN_03468808
 */


void FUN_03468808(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  long alStack_450 [128];
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  uVar5 = *(uint *)(param_1 + 0xb8);
  if ((uVar5 == 0) || (uVar6 = *(uint *)(param_1 + 0xb0), uVar6 == 0)) {
LAB_034688b8:
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0xa8);
  plVar10 = (long *)*puVar8;
  if (plVar10 == (long *)0x0) {
    uVar9 = 0;
    do {
      if (uVar6 - 1 == uVar9) goto LAB_034688b8;
      uVar9 = uVar9 + 1;
      plVar10 = (long *)puVar8[uVar9 & 0xffffffff];
    } while (plVar10 == (long *)0x0);
  }
  else {
    uVar9 = 0;
  }
  uVar11 = 0;
  do {
    do {
      if ((int)plVar10[0xe] != 0) {
        lVar4 = plVar10[1];
        lVar2 = (long)(int)uVar11;
        uVar11 = uVar11 + 1;
        alStack_450[(ulong)uVar5 * -2 + lVar2 * 2 + 0x80] = *plVar10;
        (alStack_450 + (ulong)uVar5 * -2 + lVar2 * 2 + 0x80)[1] = lVar4;
      }
      plVar10 = (long *)plVar10[2];
    } while (plVar10 != (long *)0x0);
    do {
      uVar3 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar3;
      if (uVar6 <= uVar3) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
        puVar7 = PTR_DAT_047e70e0;
        if ((int)uVar11 < 1) {
          return;
        }
        uVar9 = (ulong)uVar11;
        goto LAB_034688fc;
      }
      plVar10 = (long *)puVar8[uVar3];
    } while (plVar10 == (long *)0x0);
  } while( true );
LAB_034688fc:
  lVar2 = alStack_450[(ulong)uVar5 * -2 + (uVar9 - 1 & 0xffffffff) * 2 + 0x80];
  lVar4 = (alStack_450 + (ulong)uVar5 * -2 + (uVar9 - 1 & 0xffffffff) * 2 + 0x80)[1];
  nn::os::LockMutex((MutexType *)puVar7);
  nn::os::LockMutex((MutexType *)puVar7);
  uVar6 = *(uint *)(param_1 + 0xb0);
  if (uVar6 != 0) {
    uVar12 = (uint)lVar2;
    uVar11 = (int)lVar4 + uVar12;
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar11 / uVar6;
    }
    for (puVar13 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar11 - uVar3 * uVar6) * 8);
        puVar13 != (uint *)0x0; puVar13 = *(uint **)(puVar13 + 4)) {
      if ((*puVar13 == uVar12) && (*(long *)(puVar13 + 2) == lVar4)) {
        nn::os::UnlockMutex((MutexType *)puVar7);
        if (puVar13[0x1c] == 0) goto LAB_03468960;
        nn::os::UnlockMutex((MutexType *)puVar7);
        nn::os::LockMutex((MutexType *)puVar7);
        uVar6 = *(uint *)(param_1 + 0xb0);
        if (uVar6 == 0) goto LAB_03468960;
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar12 / uVar6;
        }
        puVar13 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar12 - uVar11 * uVar6) * 8);
        goto joined_r0x034689b0;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)puVar7);
LAB_03468960:
  nn::os::UnlockMutex((MutexType *)puVar7);
LAB_03468968:
  bVar1 = (long)uVar9 < 2;
  uVar9 = uVar9 - 1;
  if (bVar1) {
    return;
  }
  goto LAB_034688fc;
joined_r0x034689b0:
  if (puVar13 == (uint *)0x0) goto LAB_03468960;
  if ((*puVar13 == uVar12) && (*(long *)(puVar13 + 2) == 0)) {
    nn::os::UnlockMutex((MutexType *)puVar7);
    if (puVar13[0x1c] != 0) {
      puVar13[0x1c] = puVar13[0x1c] - 1;
    }
    FUN_034607d0(puVar13,1);
    goto LAB_03468968;
  }
  puVar13 = *(uint **)(puVar13 + 4);
  goto joined_r0x034689b0;
}


