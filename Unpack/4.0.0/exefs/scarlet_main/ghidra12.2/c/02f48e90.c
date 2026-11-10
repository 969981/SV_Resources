/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f48e90; name: FUN_02f48e90
 */


void FUN_02f48e90(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  MutexType *pMVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined8 local_48;
  
  pMVar11 = *(MutexType **)(param_1 + 0x48);
  lVar12 = *(long *)(param_2 + 0x78);
  nn::os::LockMutex(pMVar11);
  puVar6 = PTR_DAT_047d1a08;
  uVar8 = *(uint *)(param_1 + 0x24);
  plVar1 = (long *)(param_1 + 0x18);
  iVar14 = (int)((ulong)lVar12 >> 0x20);
  if (0 < (int)uVar8) {
    uVar3 = (int)lVar12 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = iVar14 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar7 = (ulong)((uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3) & uVar8);
    lVar10 = *(long *)(*plVar1 + uVar7 * 0x10);
    if (lVar10 != -1) {
      if (lVar10 != lVar12) {
        do {
          uVar7 = (ulong)((int)uVar7 + 1U & uVar8);
          lVar10 = *(long *)(*plVar1 + uVar7 * 0x10);
          if (lVar10 == -1) goto LAB_02f48f4c;
        } while (lVar10 != lVar12);
      }
      goto LAB_02f48f50;
    }
  }
LAB_02f48f4c:
  uVar7 = (ulong)(uVar8 + 1);
LAB_02f48f50:
  if ((int)uVar8 < (int)uVar7) {
    if (*(int *)(param_1 + 0x30) == 0) {
      local_48 = 0x30;
      plVar13 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
      if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
        (**(code **)(puVar6 + 0x10))(plVar13,"MutableShapeInfo");
      }
      plVar13[2] = 0;
      plVar13[3] = -0x8000000000000000;
      *(undefined4 *)(plVar13 + 4) = 0;
      *(undefined1 *)(plVar13 + 5) = 0;
      *plVar13 = param_1;
      plVar13[1] = 0;
      iVar5 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar5 + 1;
      *(int *)((long)plVar13 + 0x2c) = iVar5;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x30) + -1;
      plVar13 = *(long **)(*(long *)(param_1 + 0x28) + (long)iVar5 * 8);
      *(int *)(param_1 + 0x30) = iVar5;
    }
    plVar13[1] = lVar12;
    lVar10 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 + 0x48
                         ))(lVar12);
    FUN_02f49ab0(lVar10,plVar13,FUN_02f49b6c,0);
    FUN_02f49bec(lVar10 + 8,plVar13,FUN_02f49ca8,0);
    uVar8 = *(uint *)(param_1 + 0x24);
    if ((int)uVar8 < *(int *)(param_1 + 0x20) * 2) {
      FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar8 * 2 + 2);
      uVar8 = *(uint *)(param_1 + 0x24);
    }
    uVar3 = (int)lVar12 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = iVar14 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
    while( true ) {
      uVar3 = uVar8 & uVar3;
      lVar10 = *(long *)(*plVar1 + (ulong)uVar3 * 0x10);
      if (lVar10 == -1) break;
      if (lVar10 == lVar12) {
        iVar14 = 0;
        goto LAB_02f490c4;
      }
      uVar3 = uVar3 + 1;
    }
    iVar14 = 1;
LAB_02f490c4:
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar14;
    *(long *)(*plVar1 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) = lVar12
    ;
    *(long **)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 0x10 + 8) = plVar13;
  }
  else {
    plVar13 = *(long **)(*plVar1 + ((long)(uVar7 << 0x20) >> 0x1c) + 8);
  }
  iVar14 = (int)plVar13[3];
  iVar5 = *(int *)(param_2 + 0x50);
  if (iVar14 <= (int)plVar13[4] * 2) {
    FUN_02f4a24c(plVar13 + 2,iVar14 << 1);
    iVar14 = (int)plVar13[3];
  }
  uVar8 = (iVar5 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar5 * -0x61c8864f & 0xff00ffU) << 8;
  uVar8 = iVar14 - 1U & (uVar8 >> 0x10 | uVar8 << 0x10);
  lVar12 = plVar13[2];
  piVar9 = (int *)(lVar12 + (long)(int)uVar8 * 4);
  if (*piVar9 == -1) {
    iVar14 = 1;
  }
  else if (*piVar9 == iVar5) {
    iVar14 = 0;
  }
  else {
    do {
      uVar8 = uVar8 + 1 & iVar14 - 1U;
      iVar2 = *(int *)(lVar12 + (long)(int)uVar8 * 4);
      if (iVar2 == -1) {
        iVar14 = 1;
        goto LAB_02f49170;
      }
    } while (iVar2 != iVar5);
    iVar14 = 0;
LAB_02f49170:
    piVar9 = (int *)(lVar12 + (long)(int)uVar8 * 4);
  }
  *(int *)(plVar13 + 4) = (int)plVar13[4] + iVar14;
  *piVar9 = iVar5;
  nn::os::UnlockMutex(pMVar11);
  return;
}


