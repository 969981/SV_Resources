/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03488384; name: FUN_03488384
 */


int FUN_03488384(long param_1,uint param_2,void *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  MutexType *pMVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  
  puVar12 = *(uint **)(param_1 + 0x18);
  uVar13 = *(uint *)(param_1 + 0x20);
  uVar18 = (ulong)uVar13;
  puVar11 = puVar12;
  if ((uVar13 != 0) && (*puVar12 != param_2)) {
    lVar15 = uVar18 * 0x48;
    puVar16 = puVar12;
    do {
      lVar15 = lVar15 + -0x48;
      if (lVar15 == 0) goto LAB_03488418;
      puVar11 = puVar16 + 0x12;
      puVar1 = puVar16 + 0x12;
      puVar16 = puVar11;
    } while (*puVar1 != param_2);
  }
  if (puVar11 == puVar12 + uVar18 * 0x12) {
LAB_03488418:
    puVar11 = puVar12;
    if ((uVar13 != 0) && (*puVar12 != param_2)) {
      lVar15 = uVar18 * 0x48;
      puVar16 = puVar12;
      do {
        lVar15 = lVar15 + -0x48;
        if (lVar15 == 0) goto LAB_034885dc;
        puVar11 = puVar16 + 0x12;
        puVar1 = puVar16 + 0x12;
        puVar16 = puVar11;
      } while (*puVar1 != param_2);
    }
    if (puVar11 == puVar12 + uVar18 * 0x12) {
LAB_034885dc:
      uVar21 = *(uint *)(param_1 + 0x24);
      if (uVar21 <= uVar13) {
        iVar7 = uVar21 + (uVar21 >> 1);
        if (uVar21 == 0) {
          iVar7 = 1;
        }
        uVar21 = iVar7 + uVar21;
        puVar12 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar12,(ulong)uVar21 * 0x48);
        if (puVar12 == (uint *)0x0) {
          return 0x34;
        }
        *(uint **)(param_1 + 0x18) = puVar12;
        *(uint *)(param_1 + 0x24) = uVar21;
      }
      if (uVar21 <= uVar13) {
        return 0x34;
      }
      uVar13 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
      if (puVar12 == (uint *)0x0) {
        return 0x34;
      }
      puVar12 = puVar12 + (ulong)uVar13 * 0x12;
      puVar11 = puVar12 + 2;
      *puVar11 = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[9] = 0;
      puVar12[10] = 1;
      puVar12[0xc] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      *puVar12 = param_2;
    }
    else {
      puVar11 = puVar11 + 2;
    }
    *puVar11 = param_2;
    if (*(long *)(puVar11 + 2) == 0) {
      pMVar19 = *(MutexType **)PTR_DAT_047e6f28;
      nn::os::LockMutex(pMVar19);
      uVar13 = *(uint *)(pMVar19 + 0x28);
      if (uVar13 != 0) {
        uVar21 = 0;
        if (uVar13 != 0) {
          uVar21 = param_2 / uVar13;
        }
        for (lVar15 = *(long *)(*(long *)(pMVar19 + 0x20) + (ulong)(param_2 - uVar21 * uVar13) * 8);
            lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
          if (*(uint *)(lVar15 + 0x10) == param_2) {
            plVar8 = (long *)(lVar15 + -8);
            *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar19);
            if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(lVar15 + 0x90) == 0)) {
              iVar7 = 1;
            }
            else if (*(long *)(lVar15 + 0x90) == *(long *)(param_1 + 0x30)) {
              *(long **)(puVar11 + 2) = plVar8;
              iVar7 = FUN_034a946c(plVar8,param_1);
              if (iVar7 != 1) {
                puVar11[2] = 0;
                puVar11[3] = 0;
              }
            }
            else {
              iVar7 = 2;
            }
            (**(code **)(*plVar8 + 0x30))(plVar8);
            if (iVar7 == 1) goto LAB_034884c4;
            puVar11 = *(uint **)(param_1 + 0x18);
            uVar13 = *(uint *)(param_1 + 0x20);
            puVar12 = puVar11 + (ulong)uVar13 * 0x12;
            if ((uVar13 == 0) || (*puVar11 == param_2)) goto LAB_03488978;
            lVar15 = (ulong)uVar13 * 0x48;
            goto LAB_0348892c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar19);
    }
  }
  else {
    puVar11 = puVar11 + 2;
  }
LAB_034884c4:
  puVar6 = PTR_DAT_047e2fd0;
  puVar12 = puVar11 + 4;
  if (param_4 == 0) {
    if (*(long *)puVar12 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      puVar12[0] = 0;
      puVar12[1] = 0;
    }
    puVar11[6] = 0;
    puVar11[7] = 0;
  }
  else {
    if (*(long *)puVar12 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      puVar12[0] = 0;
      puVar12[1] = 0;
    }
    puVar11[6] = 0;
    puVar11[7] = 0;
    if (param_3 != (void *)0x0) {
      puVar11[8] = 1;
      puVar11[6] = param_4 + 2U;
      lVar15 = (**(code **)(puVar6 + 0x10))(0,(param_4 + 2U) * 0x14);
      *(long *)(puVar11 + 4) = lVar15;
      if (lVar15 == 0) {
        puVar11[6] = 0;
      }
      else {
        puVar11[7] = 0;
        memcpy((void *)(lVar15 + 0xc),param_3,(ulong)(uint)(param_4 * 0xc));
        *(undefined4 *)(*(long *)(puVar11 + 4) + 8) = 9;
        **(undefined4 **)(puVar11 + 4) = 0xff7fffff;
        *(undefined4 *)(*(long *)(puVar11 + 4) + 4) = *(undefined4 *)(*(long *)(puVar11 + 4) + 0x10)
        ;
        *(undefined4 *)(*(long *)(puVar11 + 4) + (ulong)(puVar11[6] - 1) * 0xc + 8) = 9;
        *(undefined4 *)(*(long *)(puVar11 + 4) + (ulong)(puVar11[6] - 1) * 0xc) = 0x7f7fffff;
        *(undefined4 *)(*(long *)(puVar11 + 4) + (ulong)(puVar11[6] - 1) * 0xc + 4) =
             *(undefined4 *)(*(long *)(puVar11 + 4) + (ulong)(puVar11[6] - 2) * 0xc + 4);
        FUN_0346cdac(puVar12);
      }
    }
  }
  if (*(long *)(puVar11 + 0xe) != 0) {
    *(undefined4 *)(*(long *)(puVar11 + 0xe) + 8) = 0;
  }
  uVar13 = puVar11[6];
  if ((uVar13 < 4) && (uVar13 != 1)) goto LAB_03488694;
  if (*(long *)(puVar11 + 0xe) == 0) {
    puVar9 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x10);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      uVar13 = puVar11[6];
      *(undefined8 **)(puVar11 + 0xe) = puVar9;
      goto LAB_03488704;
    }
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    goto LAB_034888a8;
  }
LAB_03488704:
  iVar7 = 1;
  if ((uVar13 == 0) || (uVar18 = (ulong)(uVar13 - 2), uVar13 - 2 == 0)) goto LAB_03488698;
  lVar15 = 0;
  bVar14 = false;
  uVar20 = 0xff7fffff;
  uVar22 = 2;
  iVar7 = 0x34;
  do {
    lVar10 = *(long *)(puVar11 + 4) + lVar15;
    if (bVar14) {
      if ((*(float *)(lVar10 + 0x10) <= 0.0) &&
         ((uVar22 - 2 == (ulong)((int)uVar18 - 1) ||
          (*(float *)(*(long *)(puVar11 + 4) + (uVar22 & 0xffffffff) * 0xc + 4) <= 0.0)))) {
        plVar8 = *(long **)(puVar11 + 0xe);
        uVar21 = *(uint *)(plVar8 + 1);
        uVar13 = *(uint *)((long)plVar8 + 0xc);
        uVar5 = *(undefined4 *)(lVar10 + 0xc);
        if (uVar13 <= uVar21) {
          iVar2 = uVar13 + (uVar13 >> 1);
          if (uVar13 == 0) {
            iVar2 = 1;
          }
          uVar13 = iVar2 + uVar13;
          lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar8,(ulong)uVar13 << 3);
          if (lVar10 == 0) goto LAB_03488698;
          *plVar8 = lVar10;
          *(uint *)((long)plVar8 + 0xc) = uVar13;
        }
        if (uVar21 < uVar13) {
          uVar13 = *(uint *)(plVar8 + 1);
          *(uint *)(plVar8 + 1) = uVar13 + 1;
          if (*plVar8 != 0) {
            puVar3 = (undefined4 *)(*plVar8 + (ulong)uVar13 * 8);
            *puVar3 = uVar20;
            puVar3[1] = uVar5;
            uVar13 = puVar11[6];
            goto LAB_034887f0;
          }
        }
        goto LAB_03488698;
      }
LAB_034887fc:
      bVar14 = true;
    }
    else {
      if ((0.0 < *(float *)(lVar10 + 0x10)) || (*(int *)(lVar10 + 0x14) != 9)) {
        uVar20 = *(undefined4 *)(lVar10 + 0xc);
        goto LAB_034887fc;
      }
LAB_034887f0:
      bVar14 = false;
    }
    uVar21 = 0;
    if (uVar13 != 0) {
      uVar21 = uVar13 - 2;
    }
    uVar18 = (ulong)uVar21;
    uVar17 = uVar22 - 1;
    uVar22 = uVar22 + 1;
    lVar15 = lVar15 + 0xc;
  } while (uVar17 < uVar18);
  if (bVar14) {
    plVar8 = *(long **)(puVar11 + 0xe);
    uVar4 = *(uint *)(plVar8 + 1);
    uVar21 = *(uint *)((long)plVar8 + 0xc);
    uVar5 = *(undefined4 *)(*(long *)(puVar11 + 4) + (ulong)(uVar13 - 2) * 0xc);
    if (uVar21 <= uVar4) {
      iVar7 = uVar21 + (uVar21 >> 1);
      if (uVar21 == 0) {
        iVar7 = 1;
      }
      uVar21 = iVar7 + uVar21;
      lVar15 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar8,(ulong)uVar21 << 3);
      if (lVar15 == 0) goto LAB_034888a8;
      *plVar8 = lVar15;
      *(uint *)((long)plVar8 + 0xc) = uVar21;
    }
    if (uVar4 < uVar21) {
      uVar13 = *(uint *)(plVar8 + 1);
      *(uint *)(plVar8 + 1) = uVar13 + 1;
      if (*plVar8 != 0) {
        puVar3 = (undefined4 *)(*plVar8 + (ulong)uVar13 * 8);
        *puVar3 = uVar20;
        puVar3[1] = uVar5;
        goto LAB_03488694;
      }
    }
LAB_034888a8:
    iVar7 = 0x34;
  }
  else {
LAB_03488694:
    iVar7 = 1;
  }
LAB_03488698:
  plVar8 = *(long **)(puVar11 + 2);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x180))(plVar8,0,0);
  }
  return iVar7;
  while (puVar16 = puVar11 + 0x12, puVar11 = puVar11 + 0x12, *puVar16 != param_2) {
LAB_0348892c:
    lVar15 = lVar15 + -0x48;
    if (lVar15 == 0) {
      puVar11 = puVar12;
      goto LAB_03488978;
    }
  }
LAB_03488978:
  if (puVar12 == puVar11) {
    return iVar7;
  }
  if (puVar11 < puVar12 + -0x12) {
    do {
      puVar16 = puVar11 + 0x12;
      memcpy(puVar11,puVar16,0x48);
      puVar11 = puVar16;
    } while (puVar16 < puVar12 + -0x12);
    uVar13 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x20) = uVar13 - 1;
  return iVar7;
}


