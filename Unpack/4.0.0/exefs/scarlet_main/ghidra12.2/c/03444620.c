/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03444620; name: FUN_03444620
 */


/* WARNING: Removing unreachable block (ram,0x0344477c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03444620(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0x40) + 0x50);
  nn::os::LockMutex((MutexType *)(lVar14 + 0x1e8));
  lVar13 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar4 = *(ulong **)(lVar13 + 8);
  puVar6 = (undefined8 *)puVar4[2];
  puVar6[8] = 0;
  *puVar6 = 0;
  if (*(long *)(lVar14 + 0x640) == 0) {
    puVar8 = (undefined8 *)(lVar14 + 0x640);
  }
  else {
    puVar8 = *(undefined8 **)(lVar14 + 0x638);
  }
  *puVar8 = puVar6;
  *(undefined8 **)(lVar14 + 0x638) = puVar6;
  *(int *)(lVar14 + 0x630) = *(int *)(lVar14 + 0x630) + 1;
  puVar4[2] = 0;
  if ((param_2 == 1) || (uVar2 = (uint)puVar4[4], uVar2 == 0xffffffff)) {
LAB_03444760:
    nn::os::UnlockMutex((MutexType *)(lVar14 + 0x1e8));
    if (lVar13 != 0) {
      lVar14 = *(long *)(lVar13 + 0x18);
      (**(code **)(**(long **)(lVar13 + 0x20) + 0x30))(*(long **)(lVar13 + 0x20),lVar13,param_2,1);
      lVar13 = lVar14;
      while (lVar14 != 0) {
        lVar15 = *(long *)(lVar14 + 0x18);
        lVar9 = lVar15;
        if (lVar13 != lVar14) {
          lVar9 = lVar13;
          _DAT_00000018 = lVar15;
        }
        (**(code **)(**(long **)(lVar14 + 0x20) + 0x30))(*(long **)(lVar14 + 0x20),lVar14,param_2,0)
        ;
        lVar14 = lVar15;
        lVar13 = lVar9;
      }
    }
    return;
  }
  iVar5 = *(uint *)(lVar14 + 0x2d8) - 1;
  lVar9 = *(long *)(lVar14 + 0x2d0);
  iVar10 = 0;
  iVar11 = iVar5;
  do {
    iVar3 = iVar11 - iVar10;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    uVar1 = iVar10 + (iVar3 >> 1);
    puVar12 = *(ulong **)(lVar9 + (ulong)uVar1 * 8);
    if (uVar2 < (uint)puVar12[4]) {
LAB_034446dc:
      iVar11 = uVar1 - 1;
    }
    else {
      if (uVar2 == (uint)puVar12[4]) {
        if (*puVar12 < *puVar4) goto LAB_034446dc;
        if (*puVar12 <= *puVar4) {
          if (puVar4[1] < puVar12[1]) goto LAB_034446dc;
          if (puVar4[1] <= puVar12[1]) {
            puVar8 = (undefined8 *)((lVar9 + (ulong)*(uint *)(lVar14 + 0x2d8) * 8) - 8);
            puVar6 = (undefined8 *)(lVar9 + (ulong)uVar1 * 8);
            if (puVar6 < puVar8) {
              do {
                puVar7 = puVar6 + 1;
                *puVar6 = *puVar7;
                puVar6 = puVar7;
              } while (puVar7 < puVar8);
              iVar5 = *(int *)(lVar14 + 0x2d8) + -1;
            }
            *(int *)(lVar14 + 0x2d8) = iVar5;
LAB_03444758:
            *(undefined4 *)(puVar4 + 4) = 0xffffffff;
            goto LAB_03444760;
          }
        }
      }
      iVar10 = uVar1 + 1;
    }
    if (iVar11 < iVar10) goto LAB_03444758;
  } while( true );
}


