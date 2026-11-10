/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034652dc; name: FUN_034652dc
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_034652dc(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  MutexType *pMVar9;
  int *piVar10;
  ushort uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  long *plVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  code *pcVar26;
  uint *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  MutexType *pMVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  float fVar36;
  byte local_80;
  uint local_7f;
  uint local_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint local_64;
  
  lVar2 = param_1 + 8;
  local_74 = 0;
  uStack_70 = 0;
  iVar17 = FUN_0346d17c(lVar2,&local_74,4,&uStack_70);
  iVar18 = 0x38;
  if (uStack_70 == 4) {
    iVar18 = 1;
  }
  if (iVar17 != 1) {
    iVar18 = iVar17;
  }
  if ((local_74 != 0) && (iVar18 == 1)) {
    uVar31 = *(int *)(param_2 + 0x5c) + local_74;
    lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                       (0,*(undefined8 *)(param_2 + 0x50),(ulong)uVar31 << 3);
    if (lVar19 == 0) {
      return 2;
    }
    *(long *)(param_2 + 0x50) = lVar19;
    *(uint *)(param_2 + 0x5c) = uVar31;
  }
  if (iVar18 != 1 || local_74 == 0) {
    return iVar18;
  }
  plVar3 = (long *)(param_1 + 0x18);
  puVar4 = PTR_DAT_047e7120 + 0x10;
  puVar5 = PTR_DAT_047e7128 + 0x10;
  uVar31 = 0;
  plVar6 = (long *)(param_1 + 0x58);
  plVar7 = (long *)(param_1 + 0x40);
  puVar8 = PTR_DAT_047e7130 + 0x10;
LAB_034653e0:
  uStack_70 = 0;
  iVar17 = FUN_0346d17c(lVar2,&local_80,5,&uStack_70);
  uVar23 = local_7f;
  iVar18 = 0x38;
  if (uStack_70 == 5) {
    iVar18 = 1;
  }
  if (iVar17 != 1) {
    iVar18 = iVar17;
  }
  if (iVar18 != 1) goto LAB_03467614;
  switch(local_80) {
  case 1:
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 != 0) {
        uVar15 = 0;
        if (uVar30 != 0) {
          uVar15 = 0x20 - uVar30;
        }
        puVar27 = (uint *)(lVar19 + (ulong)uVar15);
        iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
        if ((iVar18 == 1) && (uStack_70 == uVar23)) {
          if (puVar27 != (uint *)0x0) goto LAB_03466180;
        }
        else {
LAB_03465e50:
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*plVar7);
          *plVar7 = 0;
        }
        goto LAB_03465e6c;
      }
LAB_03465e78:
      iVar18 = 2;
      goto LAB_03467614;
    }
    *puVar27 = uVar30 - local_7f;
    puVar27 = (uint *)*plVar6;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)*plVar3;
      *plVar3 = (long)puVar27 + (ulong)local_7f;
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
LAB_03466180:
    uVar23 = *puVar27;
    lVar19 = *(long *)PTR_DAT_047e6f28;
    pMVar32 = (MutexType *)(lVar19 + 0x70);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x98);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x90) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) {
          *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
          goto LAB_03467438;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_034d9fe0(uVar23);
    if (plVar34 == (long *)0x0) {
      iVar18 = 2;
LAB_03467570:
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
      break;
    }
    uVar11 = (ushort)puVar27[1];
    uVar33 = (ulong)uVar11;
    if (uVar33 == 0) {
      if (plVar34[3] != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        plVar34[3] = 0;
      }
    }
    else {
      uVar35 = (ulong)((uint)uVar11 * 2 + 5) & 0x3fffc;
      puVar21 = (ushort *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar34[3],uVar35 + uVar33 * 4);
      if (puVar21 == (ushort *)0x0) {
        (**(code **)(*plVar34 + 0x18))(plVar34);
        iVar18 = 0x34;
        goto LAB_03467570;
      }
      *puVar21 = uVar11;
      memcpy(puVar21 + 1,(void *)((long)puVar27 + 6),uVar33 << 1);
      memcpy((void *)((long)puVar21 + uVar35),(void *)((long)puVar27 + 6 + uVar33 * 2),uVar33 << 2);
      plVar34[3] = (long)puVar21;
    }
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
LAB_03467438:
    nn::os::UnlockMutex(pMVar32);
LAB_034675d0:
    uVar23 = *(uint *)(param_2 + 0x58);
    if (uVar23 < *(uint *)(param_2 + 0x5c)) {
      *(uint *)(param_2 + 0x58) = uVar23 + 1;
      if (*(long *)(param_2 + 0x50) != 0) {
        *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34;
      }
    }
    goto LAB_034675f0;
  case 2:
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar19 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x0346626c:
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto joined_r0x0346626c;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
    uVar23 = *puVar27;
    pMVar32 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(pMVar32 + 0x28);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(pMVar32 + 0x20) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) {
          plVar34 = (long *)(lVar19 + -8);
          *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar32);
          puVar16 = PTR_DAT_047e6d30;
          if (((*(ushort *)(lVar19 + 0xfc) & 0x7c) != 0) &&
             ((*(ushort *)(lVar19 + 0xfc) >> 7 & 1) != 0)) goto LAB_034671e0;
          nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
          iVar18 = FUN_034ca468(plVar34,puVar27,local_7f,param_2,1);
          nn::os::UnlockMutex((MutexType *)puVar16);
          if (iVar18 == 1) goto LAB_034671e0;
          (**(code **)(*plVar34 + 0x30))(plVar34);
          if (*plVar7 != 0) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *plVar7 = 0;
          }
          if (iVar18 == 0x5b) {
            iVar18 = 1;
          }
          goto LAB_03467614;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_034c9dc8(uVar23);
    if (plVar34 == (long *)0x0) {
      iVar18 = 2;
    }
    else {
      iVar18 = FUN_034ca468(plVar34,puVar27,local_7f,param_2,0);
      if (iVar18 == 1) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
LAB_034671e0:
        uVar23 = *(uint *)(param_2 + 0x58);
        if (uVar23 < *(uint *)(param_2 + 0x5c)) {
          *(uint *)(param_2 + 0x58) = uVar23 + 1;
          if (*(long *)(param_2 + 0x50) != 0) {
            *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34 + 1;
          }
        }
        iVar18 = 1;
        break;
      }
      (**(code **)(*plVar34 + 0x30))(plVar34);
    }
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
LAB_0346706c:
    nn::os::UnlockMutex(pMVar32);
    break;
  case 3:
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 == 0) goto LAB_03465e6c;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar19 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466318:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto joined_r0x03466318;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
    uVar23 = *puVar27;
    uVar15 = puVar27[1];
    lVar19 = *(long *)PTR_DAT_047e6f28;
    pMVar32 = (MutexType *)(lVar19 + 0xe0);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x108);
    if (uVar30 != 0) {
      uVar14 = 0;
      if (uVar30 != 0) {
        uVar14 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x100) + (ulong)(uVar23 - uVar14 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) {
          *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar32);
          if (((short)uVar15 != 0x403) || ((*(byte *)((long)plVar34 + 0x36) >> 5 & 1) != 0))
          goto LAB_034675d0;
          nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
          iVar18 = FUN_034589b0(plVar34,puVar27,local_7f);
          goto joined_r0x0346726c;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_03457ffc((short)uVar15,uVar23);
    if (plVar34 == (long *)0x0) {
      iVar18 = 2;
    }
    else {
      iVar18 = FUN_034589b0(plVar34,puVar27,local_7f);
joined_r0x0346726c:
      if (iVar18 != 1) {
        (**(code **)(*plVar34 + 0x18))(plVar34);
      }
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
    if (iVar18 == 1) goto LAB_034675d0;
    break;
  case 4:
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      pMVar32 = (MutexType *)PTR_DAT_047e6d30;
      if (lVar19 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar19 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x034663e0:
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      pMVar32 = (MutexType *)PTR_DAT_047e6d30;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto joined_r0x034663e0;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
    uVar23 = *puVar27;
    lVar19 = *(long *)PTR_DAT_047e6f28;
    pMVar9 = (MutexType *)(lVar19 + 0xa8);
    nn::os::LockMutex(pMVar9);
    uVar30 = *(uint *)(lVar19 + 0xd0);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 200) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) {
          *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar9);
          goto LAB_034675d0;
        }
      }
    }
    nn::os::UnlockMutex(pMVar9);
    plVar34 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,0x28);
    if (plVar34 != (long *)0x0) {
      *(uint *)(plVar34 + 2) = uVar23;
      *(undefined4 *)((long)plVar34 + 0x14) = 1;
      plVar34[3] = 0;
      *(undefined4 *)(plVar34 + 4) = 0;
      *plVar34 = (long)puVar4;
      nn::os::LockMutex(pMVar32);
      iVar18 = FUN_0347e6e4(plVar34,puVar27,local_7f);
      if (iVar18 == 1) {
        lVar19 = *(long *)PTR_DAT_047e6f28;
        nn::os::LockMutex((MutexType *)(lVar19 + 0xa8));
        uVar23 = *(uint *)(lVar19 + 0xd0);
        if ((uVar23 == 0) ||
           (fVar36 = (float)NEON_ucvtf(*(undefined4 *)(lVar19 + 0xd8)), 0.9 < fVar36 / (float)uVar23
           )) {
          FUN_03458ccc(lVar19 + 200);
          uVar23 = *(uint *)(lVar19 + 0xd0);
          pMVar32 = (MutexType *)PTR_DAT_047e6d30;
          if (uVar23 != 0) goto LAB_0346758c;
        }
        else {
LAB_0346758c:
          pMVar32 = (MutexType *)PTR_DAT_047e6d30;
          uVar30 = 0;
          if (uVar23 != 0) {
            uVar30 = *(uint *)(plVar34 + 2) / uVar23;
          }
          uVar23 = *(uint *)(plVar34 + 2) - uVar30 * uVar23;
          plVar34[1] = *(long *)(*(long *)(lVar19 + 200) + (ulong)uVar23 * 8);
          *(long **)(*(long *)(lVar19 + 200) + (ulong)uVar23 * 8) = plVar34;
          *(int *)(lVar19 + 0xd8) = *(int *)(lVar19 + 0xd8) + 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar19 + 0xa8));
        nn::os::UnlockMutex(pMVar32);
        goto LAB_034675d0;
      }
      (**(code **)(*plVar34 + 0x18))(plVar34);
      goto LAB_0346706c;
    }
    iVar18 = 2;
    break;
  case 5:
    pMVar32 = *(MutexType **)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar19 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466504:
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + uVar33;
        goto joined_r0x03466504;
      }
      *plVar6 = (long)puVar27 + uVar33;
    }
    uVar23 = *puVar27;
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(pMVar32 + 0x28);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(pMVar32 + 0x20) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) goto LAB_034666c0;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_034c0414(uVar23,1);
    if (plVar34 == (long *)0x0) goto LAB_034666ac;
    iVar18 = FUN_034bf864(plVar34,puVar27,uVar33);
LAB_0346668c:
    if (iVar18 == 1) goto LAB_034666d4;
    (**(code **)(*plVar34 + 0x30))(plVar34);
    goto LAB_03467108;
  case 6:
    pMVar32 = *(MutexType **)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar19 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466590:
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + uVar33;
        goto joined_r0x03466590;
      }
      *plVar6 = (long)puVar27 + uVar33;
    }
    uVar23 = *puVar27;
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(pMVar32 + 0x28);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(pMVar32 + 0x20) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) goto LAB_034666c0;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_034e04f0(uVar23);
    if (plVar34 != (long *)0x0) {
      iVar18 = FUN_034df724(plVar34,puVar27,uVar33);
      goto LAB_0346668c;
    }
    goto LAB_034666ac;
  case 7:
    pMVar32 = *(MutexType **)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar19 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466618:
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + uVar33;
        goto joined_r0x03466618;
      }
      *plVar6 = (long)puVar27 + uVar33;
    }
    uVar23 = *puVar27;
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(pMVar32 + 0x28);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(pMVar32 + 0x20) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) goto LAB_034666c0;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_0346a530(uVar23);
    if (plVar34 != (long *)0x0) {
      iVar18 = FUN_0346a714(plVar34,puVar27,uVar33);
      goto LAB_0346668c;
    }
LAB_034666ac:
    iVar18 = 2;
    goto LAB_03467108;
  case 8:
    if (*(int *)(PTR_DAT_047e7138 + 8) == 0) {
      plVar34 = (long *)0x0;
    }
    else {
      plVar34 = (long *)**(undefined8 **)PTR_DAT_047e7138;
    }
    lVar19 = *(long *)PTR_DAT_047e6f28;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 != 0) {
        uVar15 = 0;
        if (uVar30 != 0) {
          uVar15 = 0x20 - uVar30;
        }
        puVar27 = (uint *)(lVar20 + (ulong)uVar15);
        iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
        if ((iVar18 == 1) && (uStack_70 == uVar23)) goto LAB_03466f08;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*plVar7);
        *plVar7 = 0;
      }
LAB_03466fb8:
      iVar18 = 2;
      goto LAB_03467614;
    }
    *puVar27 = uVar30 - local_7f;
    puVar27 = (uint *)*plVar6;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)*plVar3;
      *plVar3 = (long)puVar27 + (ulong)local_7f;
LAB_03466f08:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x38);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x60);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(lVar19 + 0x58) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) {
          plVar22 = (long *)(lVar19 + -8);
          *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar32);
          if (*(long *)(lVar19 + 0x98) != 0) goto LAB_034673ac;
          nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
          puVar16 = PTR_DAT_047e7138;
          puVar25 = *(undefined8 **)PTR_DAT_047e7138;
          uVar23 = *(uint *)(PTR_DAT_047e7138 + 8);
          puVar28 = puVar25;
          if ((uVar23 == 0) || ((long *)*puVar25 == plVar22)) goto LAB_034676f4;
          lVar19 = (ulong)uVar23 * 8;
          puVar29 = puVar25;
          goto LAB_03467670;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar22 = (long *)FUN_03470e04(uVar23);
    if (plVar22 == (long *)0x0) {
      iVar18 = 2;
    }
    else {
      iVar18 = (**(code **)(*plVar22 + 0x270))(plVar22,puVar27,local_7f);
      if (iVar18 != 1) {
        (**(code **)(*plVar22 + 0x30))(plVar22);
        plVar22 = (long *)0x0;
      }
    }
    goto LAB_03467018;
  case 9:
    pMVar32 = *(MutexType **)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar19;
      if (lVar19 != 0) {
        uVar15 = 0;
        if (uVar30 != 0) {
          uVar15 = 0x20 - uVar30;
        }
        puVar27 = (uint *)(lVar19 + (ulong)uVar15);
        iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
        if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
        if (puVar27 != (uint *)0x0) goto LAB_03466744;
      }
LAB_03465e6c:
      iVar18 = 2;
      goto LAB_03467614;
    }
    *puVar27 = uVar30 - local_7f;
    puVar27 = (uint *)*plVar6;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)*plVar3;
      *plVar3 = (long)puVar27 + uVar33;
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *plVar6 = (long)puVar27 + uVar33;
    }
LAB_03466744:
    uVar23 = *puVar27;
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(pMVar32 + 0x28);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(pMVar32 + 0x20) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) {
          *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
          plVar34 = (long *)(lVar19 + -8);
          goto LAB_034666d4;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    iVar18 = 2;
    plVar34 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x140);
    if (plVar34 == (long *)0x0) {
LAB_03467460:
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
      if (*plVar7 != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        *plVar7 = 0;
      }
      if (iVar18 == 0x5b) {
        iVar18 = 1;
      }
      goto LAB_03467614;
    }
    *(uint *)(plVar34 + 3) = uVar23;
    *(undefined4 *)((long)plVar34 + 0x1c) = 1;
    *(undefined1 *)(plVar34 + 5) = 1;
    plVar34[6] = 0;
    plVar34[8] = 0;
    *(uint *)(plVar34 + 9) = uVar23;
    plVar34[0xc] = 0;
    plVar34[10] = 0;
    plVar34[0xb] = (long)puVar5;
    *(uint *)(plVar34 + 0xd) = uVar23;
    memset(plVar34 + 0xe,0,0x50);
    *(byte *)(plVar34 + 0x1e) = *(byte *)(plVar34 + 0x1e) & 199;
    *(uint *)((long)plVar34 + 0xda) = *(uint *)((long)plVar34 + 0xda) & 0xe0090000 | 0x4000;
    plVar34[0x19] = (long)plVar34;
    plVar34[0x1a] = 0;
    plVar34[0x1c] = 0;
    plVar34[0x1d] = 0;
    plVar34[0x20] = 0;
    plVar34[0x21] = 0;
    plVar34[0x22] = 0;
    plVar34[0x23] = 0;
    *(byte *)((long)plVar34 + 0xf1) = *(byte *)((long)plVar34 + 0xf1) & 0x80;
    puVar16 = PTR_DAT_047e7148;
    *(undefined1 *)(plVar34 + 0x27) = 0;
    *plVar34 = (long)(puVar16 + 0x10);
    plVar34[1] = (long)(puVar16 + 0x290);
    plVar34[4] = (long)(puVar16 + 0x2d0);
    plVar34[0x25] = 0;
    plVar34[0x26] = 0;
    plVar34[7] = (long)(puVar16 + 0x368);
    plVar34[0x24] = 0;
    iVar18 = FUN_03499a80(plVar34);
    if (iVar18 != 1) {
      (**(code **)(*plVar34 + 0x30))(plVar34);
      iVar18 = 2;
      goto LAB_03467460;
    }
    iVar18 = FUN_03484b2c(plVar34,puVar27,uVar33);
    if (iVar18 != 1) {
      (**(code **)(*plVar34 + 0x30))(plVar34);
      goto LAB_03467460;
    }
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    goto LAB_034666d4;
  default:
    if (*(code **)PTR_DAT_047e7140 == (code *)0x0) {
      iVar18 = 1;
    }
    else {
      iVar18 = (**(code **)PTR_DAT_047e7140)(&local_80,param_2,param_3);
      if (iVar18 != 3) goto LAB_03467614;
      iVar18 = 3;
    }
    uStack_70 = 0;
    FUN_0346cfd4(lVar2,local_7f,&uStack_70);
    if (uStack_70 != local_7f) {
      iVar18 = 7;
    }
    goto LAB_03467614;
  case 0xe:
    lVar19 = *(long *)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 != 0) {
        uVar15 = 0;
        if (uVar30 != 0) {
          uVar15 = 0x20 - uVar30;
        }
        puVar27 = (uint *)(lVar20 + (ulong)uVar15);
        iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
        if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
        if (puVar27 != (uint *)0x0) goto LAB_034668a4;
      }
      goto LAB_03465e6c;
    }
    *puVar27 = uVar30 - local_7f;
    puVar27 = (uint *)*plVar6;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)*plVar3;
      *plVar3 = (long)puVar27 + uVar33;
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *plVar6 = (long)puVar27 + uVar33;
    }
LAB_034668a4:
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x150);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x178);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x170) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) {
          *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar32);
          goto LAB_03466e00;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    iVar18 = 2;
    plVar34 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0xf0);
    if (plVar34 == (long *)0x0) {
LAB_034670a4:
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
      lVar19 = *plVar7;
      goto joined_r0x03467160;
    }
    *(uint *)(plVar34 + 2) = uVar23;
    *(undefined4 *)((long)plVar34 + 0x14) = 1;
    *plVar34 = (long)puVar8;
    plVar34[6] = 0;
    plVar34[7] = 0;
    *(undefined4 *)(plVar34 + 8) = 1;
    plVar34[9] = 0;
    plVar34[10] = 0;
    *(undefined4 *)(plVar34 + 0xb) = 1;
    plVar34[0xc] = 0;
    plVar34[0xd] = 0;
    *(undefined4 *)(plVar34 + 0xe) = 1;
    plVar34[0xf] = 0;
    plVar34[0x10] = 0;
    *(undefined4 *)(plVar34 + 0x11) = 1;
    plVar34[0x12] = 0;
    plVar34[0x13] = 0;
    *(undefined4 *)(plVar34 + 0x14) = 1;
    plVar34[0x15] = 0;
    plVar34[0x16] = 0;
    *(undefined4 *)(plVar34 + 0x17) = 1;
    plVar34[0x18] = 0;
    plVar34[0x19] = 0;
    *(undefined4 *)(plVar34 + 0x1a) = 1;
    plVar34[0x1c] = 0;
    plVar34[0x1d] = 0;
    FUN_0346c320();
    iVar18 = FUN_0346c424(plVar34,puVar27,uVar33);
    if (iVar18 != 1) {
      (**(code **)(*plVar34 + 0x18))(plVar34);
      goto LAB_034670a4;
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
    goto LAB_03466e00;
  case 0xf:
    lVar19 = *(long *)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x034669ac:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + uVar33;
        goto joined_r0x034669ac;
      }
      *plVar6 = (long)puVar27 + uVar33;
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x1f8);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x220);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x218) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) goto LAB_03466d0c;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_03479338(uVar23);
    if (plVar34 == (long *)0x0) goto LAB_03466cf0;
    iVar18 = FUN_03479598(plVar34,puVar27,uVar33);
    goto LAB_03466cd4;
  case 0x10:
    local_64 = local_7f;
    lVar19 = *(long *)PTR_DAT_047e6f28;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 != 0) {
        uVar15 = 0;
        if (uVar30 != 0) {
          uVar15 = 0x20 - uVar30;
        }
        puVar27 = (uint *)(lVar20 + (ulong)uVar15);
        iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
        if ((iVar18 == 1) && (uStack_70 == uVar23)) goto LAB_03466a34;
LAB_03465da0:
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,*plVar7);
        *plVar7 = 0;
      }
LAB_03465dbc:
      uStack_6c = 0;
      goto LAB_03465e6c;
    }
    *puVar27 = uVar30 - local_7f;
    puVar27 = (uint *)*plVar6;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)*plVar3;
      *plVar3 = (long)puVar27 + (ulong)local_7f;
LAB_03466a34:
      uStack_70 = (uint)puVar27;
      uStack_6c = (undefined4)((ulong)puVar27 >> 0x20);
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *plVar6 = (long)puVar27 + (ulong)local_7f;
      uStack_70 = (uint)puVar27;
      uStack_6c = (undefined4)((ulong)puVar27 >> 0x20);
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x230);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 600);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x250) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) goto LAB_03466dec;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_0347f5f0(uVar23);
    goto joined_r0x03466b20;
  case 0x11:
    local_64 = local_7f;
    lVar19 = *(long *)PTR_DAT_047e6f28;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465dbc;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465da0;
LAB_03466ab8:
      uStack_70 = (uint)puVar27;
      uStack_6c = (undefined4)((ulong)puVar27 >> 0x20);
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto LAB_03466ab8;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
      uStack_70 = (uint)puVar27;
      uStack_6c = (undefined4)((ulong)puVar27 >> 0x20);
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x268);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x290);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x288) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) goto LAB_03466dec;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_0347fca8(uVar23);
    goto joined_r0x03466b20;
  case 0x12:
    lVar19 = *(long *)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466b38:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + uVar33;
        goto joined_r0x03466b38;
      }
      *plVar6 = (long)puVar27 + uVar33;
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x38);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x60);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (lVar19 = *(long *)(*(long *)(lVar19 + 0x58) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          lVar19 != 0; lVar19 = *(long *)(lVar19 + 8)) {
        if (*(uint *)(lVar19 + 0x10) == uVar23) {
          plVar34 = (long *)(lVar19 + -8);
          *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar32);
          goto LAB_034672e0;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_0346bdcc(uVar23);
    if (plVar34 == (long *)0x0) goto LAB_03466cf0;
    iVar18 = (**(code **)(*plVar34 + 0x270))(plVar34,puVar27,uVar33);
    if (iVar18 != 1) {
      pcVar26 = *(code **)(*plVar34 + 0x30);
      goto LAB_034670f4;
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
LAB_034672e0:
    uVar23 = *(uint *)(param_2 + 0x58);
    if (uVar23 < *(uint *)(param_2 + 0x5c)) {
      *(uint *)(param_2 + 0x58) = uVar23 + 1;
      if (*(long *)(param_2 + 0x50) != 0) {
        *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34 + 1;
      }
    }
    goto LAB_03467358;
  case 0x13:
    lVar19 = *(long *)PTR_DAT_047e6f28;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466be0:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto joined_r0x03466be0;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
    uVar15 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x188);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x1b0);
    if (uVar30 != 0) {
      uVar14 = 0;
      if (uVar30 != 0) {
        uVar14 = uVar15 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x1a8) + (ulong)(uVar15 - uVar14 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar15) goto LAB_03466d0c;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    uVar24 = 0;
    goto LAB_03466cb4;
  case 0x14:
    lVar19 = *(long *)PTR_DAT_047e6f28;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
joined_r0x03466c54:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto joined_r0x03466c54;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
    }
    uVar15 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x188);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x1b0);
    if (uVar30 != 0) {
      uVar14 = 0;
      if (uVar30 != 0) {
        uVar14 = uVar15 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x1a8) + (ulong)(uVar15 - uVar14 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar15) goto LAB_03466d0c;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    uVar24 = 1;
LAB_03466cb4:
    plVar34 = (long *)FUN_0348b60c(uVar15,uVar24);
    if (plVar34 != (long *)0x0) {
      iVar18 = (**(code **)(*plVar34 + 0x28))(plVar34,puVar27,uVar23);
LAB_03466cd4:
      if (iVar18 != 1) {
        pcVar26 = *(code **)(*plVar34 + 0x18);
LAB_034670f4:
        (*pcVar26)(plVar34);
        goto LAB_034670fc;
      }
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
      goto LAB_03467334;
    }
LAB_03466cf0:
    iVar18 = 2;
LAB_034670fc:
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    goto LAB_03467108;
  case 0x15:
    local_64 = local_7f;
    lVar19 = *(long *)PTR_DAT_047e6f28;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465dbc;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465da0;
LAB_03466d40:
      uStack_70 = (uint)puVar27;
      uStack_6c = (undefined4)((ulong)puVar27 >> 0x20);
      if (puVar27 == (uint *)0x0) goto LAB_03465e6c;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + (ulong)local_7f;
        goto LAB_03466d40;
      }
      *plVar6 = (long)puVar27 + (ulong)local_7f;
      uStack_70 = (uint)puVar27;
      uStack_6c = (undefined4)((ulong)puVar27 >> 0x20);
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x2a0);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x2c8);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x2c0) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) goto LAB_03466dec;
      }
    }
    nn::os::UnlockMutex(pMVar32);
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    plVar34 = (long *)FUN_0347f888(uVar23);
joined_r0x03466b20:
    if (plVar34 != (long *)0x0) {
      iVar18 = (**(code **)(*plVar34 + 0x30))(plVar34,&uStack_70,&local_64);
      if (iVar18 != 1) {
        (**(code **)(*plVar34 + 0x18))(plVar34);
        goto LAB_03466de0;
      }
      goto LAB_03466df8;
    }
    iVar18 = 2;
LAB_03466de0:
LAB_03467108:
    nn::os::UnlockMutex(pMVar32);
    if (*plVar7 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar7 = 0;
    }
    if (iVar18 == 0x5b) {
      iVar18 = 1;
    }
    goto LAB_03467614;
  case 0x16:
    lVar19 = *(long *)PTR_DAT_047e6f28;
    uVar33 = (ulong)local_7f;
    puVar27 = (uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x28) * 4 + 0x20);
    uVar30 = *puVar27;
    if (uVar30 < local_7f) {
      uVar30 = uVar30 & 0x1f;
      uVar15 = local_7f;
      if (uVar30 != 0) {
        uVar15 = local_7f + 0x1f;
      }
      lVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar15,0x20);
      *plVar7 = lVar20;
      if (lVar20 == 0) goto LAB_03465e78;
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = 0x20 - uVar30;
      }
      puVar27 = (uint *)(lVar20 + (ulong)uVar15);
      iVar18 = FUN_0346d17c(lVar2,puVar27,uVar23,&uStack_70);
      if ((iVar18 != 1) || (uStack_70 != uVar23)) goto LAB_03465e50;
LAB_03466e60:
      if (puVar27 == (uint *)0x0) goto LAB_03466fb8;
    }
    else {
      *puVar27 = uVar30 - local_7f;
      puVar27 = (uint *)*plVar6;
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)*plVar3;
        *plVar3 = (long)puVar27 + uVar33;
        goto LAB_03466e60;
      }
      *plVar6 = (long)puVar27 + uVar33;
    }
    uVar23 = *puVar27;
    pMVar32 = (MutexType *)(lVar19 + 0x188);
    nn::os::LockMutex(pMVar32);
    uVar30 = *(uint *)(lVar19 + 0x1b0);
    if (uVar30 != 0) {
      uVar15 = 0;
      if (uVar30 != 0) {
        uVar15 = uVar23 / uVar30;
      }
      for (plVar34 = *(long **)(*(long *)(lVar19 + 0x1a8) + (ulong)(uVar23 - uVar15 * uVar30) * 8);
          plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
        if (*(uint *)(plVar34 + 2) == uVar23) {
          *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
          goto LAB_03467324;
        }
      }
    }
    nn::os::UnlockMutex(pMVar32);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    iVar18 = 2;
    plVar34 = (long *)FUN_0348b60c(uVar23,2);
    if (plVar34 == (long *)0x0) {
LAB_0346714c:
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
      lVar19 = *plVar7;
joined_r0x03467160:
      if (lVar19 != 0) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        *plVar7 = 0;
      }
      if (iVar18 == 0x5b) {
        iVar18 = 1;
      }
      goto LAB_03467614;
    }
    iVar18 = (**(code **)(*plVar34 + 0x28))(plVar34,puVar27,uVar33);
    if (iVar18 != 1) {
      (**(code **)(*plVar34 + 0x18))(plVar34);
      goto LAB_0346714c;
    }
    pMVar32 = (MutexType *)PTR_DAT_047e6d30;
LAB_03467324:
    nn::os::UnlockMutex(pMVar32);
    goto LAB_03467334;
  }
  goto LAB_034675f4;
LAB_03466dec:
  *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
LAB_03466df8:
  nn::os::UnlockMutex(pMVar32);
LAB_03466e00:
  uVar23 = *(uint *)(param_2 + 0x58);
  if (uVar23 < *(uint *)(param_2 + 0x5c)) {
    *(uint *)(param_2 + 0x58) = uVar23 + 1;
    if (*(long *)(param_2 + 0x50) != 0) {
      *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34;
    }
  }
  if (*plVar7 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar7 = 0;
  }
  iVar18 = 1;
LAB_03467614:
  uVar31 = uVar31 + 1;
  if (iVar18 != 1 || local_74 <= uVar31) {
    return iVar18;
  }
  goto LAB_034653e0;
LAB_03466d0c:
  *(int *)((long)plVar34 + 0x14) = *(int *)((long)plVar34 + 0x14) + 1;
  nn::os::UnlockMutex(pMVar32);
LAB_03467334:
  uVar23 = *(uint *)(param_2 + 0x58);
  if (uVar23 < *(uint *)(param_2 + 0x5c)) {
    *(uint *)(param_2 + 0x58) = uVar23 + 1;
    if (*(long *)(param_2 + 0x50) != 0) {
      *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34;
    }
  }
LAB_03467358:
  if (*plVar7 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar7 = 0;
  }
  iVar18 = 1;
  goto LAB_03467614;
  while( true ) {
    puVar28 = puVar29 + 1;
    puVar1 = puVar29 + 1;
    puVar29 = puVar28;
    if ((long *)*puVar1 == plVar22) break;
LAB_03467670:
    lVar19 = lVar19 + -8;
    if (lVar19 == 0) {
      puVar28 = puVar25 + uVar23;
      break;
    }
  }
LAB_034676f4:
  if ((puVar28 == (undefined8 *)0x0) || (puVar25 + uVar23 == puVar28)) {
    uVar30 = *(uint *)(PTR_DAT_047e7138 + 0xc);
    if (uVar23 < uVar30) {
LAB_0346774c:
      if (uVar23 < uVar30) {
        uVar23 = *(uint *)(puVar16 + 8);
        *(uint *)(puVar16 + 8) = uVar23 + 1;
        if (puVar25 != (undefined8 *)0x0) {
          puVar25[uVar23] = plVar22;
          iVar18 = 1;
          goto LAB_03467018;
        }
      }
    }
    else {
      iVar18 = uVar30 + (uVar30 >> 1);
      if (uVar30 == 0) {
        iVar18 = 1;
      }
      uVar30 = iVar18 + uVar30;
      puVar25 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar25,(ulong)uVar30 << 3);
      if (puVar25 != (undefined8 *)0x0) {
        *(undefined8 **)puVar16 = puVar25;
        *(uint *)(puVar16 + 0xc) = uVar30;
        goto LAB_0346774c;
      }
    }
    (**(code **)(*plVar22 + 0x30))(plVar22);
    plVar22 = (long *)0x0;
    iVar18 = 0x34;
  }
  else {
    iVar18 = 1;
  }
LAB_03467018:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  if (iVar18 == 1) {
LAB_034673ac:
    lVar19 = *(long *)(PTR_DAT_047e6f80 + 0x10);
    if (lVar19 == 0) {
      if (plVar34 != (long *)0x0) goto LAB_034673e0;
LAB_034673f4:
      if (*(int *)(PTR_DAT_047e6ce8 + 0x20) == 0) {
        iVar18 = (int)plVar22[0x37];
        if (iVar18 == -1) {
          plVar34 = plVar22;
          do {
            plVar34 = (long *)plVar34[0x14];
            if (plVar34 == (long *)0x0) {
              plVar34 = plVar22;
              goto LAB_034676d4;
            }
            iVar18 = (int)plVar34[0x37];
          } while (iVar18 == -1);
          *(int *)(plVar22 + 0x37) = iVar18;
        }
        if (iVar18 != 0) goto LAB_034674c8;
      }
      FUN_03475440(plVar22);
      goto LAB_034674d4;
    }
    do {
      if (*(char *)(lVar19 + 0x46d) != '\0') break;
      lVar19 = *(long *)(lVar19 + 0x20);
    } while (lVar19 != 0);
    if (plVar34 == (long *)0x0) goto LAB_034673f4;
LAB_034673e0:
    if (((lVar19 != 0) && (plVar22 == plVar34)) && (*(int *)(lVar19 + 0x80) == 0))
    goto LAB_034673f4;
    goto LAB_03467520;
  }
  goto LAB_034675f4;
  while (iVar18 = (int)plVar34[0x37], iVar18 == -1) {
LAB_034676d4:
    plVar34 = (long *)plVar34[0x14];
    if (plVar34 == (long *)0x0) {
      iVar18 = -1;
      goto LAB_034674c8;
    }
  }
  *(int *)(plVar22 + 0x37) = iVar18;
LAB_034674c8:
  *(int *)(PTR_DAT_047e6ce8 + 0x20) = iVar18;
LAB_034674d4:
  lVar20 = *(long *)PTR_DAT_047e2fe8;
  lVar19 = FUN_01065210(lVar20,0x37,0x14);
  uVar24 = *(undefined8 *)(PTR_DAT_047e6ce8 + 0x20);
  *(undefined8 *)(lVar19 + 0xc) = *(undefined8 *)(PTR_DAT_047e6ce8 + 0x28);
  piVar10 = (int *)(lVar20 + 0x9c);
  *(undefined8 *)(lVar19 + 4) = uVar24;
  do {
    cVar12 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar13) {
      *piVar10 = *piVar10 + -1;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
LAB_03467520:
  uVar23 = *(uint *)(param_2 + 0x58);
  plVar34 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    plVar34 = plVar22 + 1;
  }
  if (uVar23 < *(uint *)(param_2 + 0x5c)) {
    *(uint *)(param_2 + 0x58) = uVar23 + 1;
    if (*(long *)(param_2 + 0x50) != 0) {
      *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34;
    }
  }
LAB_034675f0:
  iVar18 = 1;
LAB_034675f4:
  if (*plVar7 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar7 = 0;
  }
  goto LAB_03467614;
LAB_034666c0:
  plVar34 = (long *)(lVar19 + -8);
  *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
LAB_034666d4:
  nn::os::UnlockMutex(pMVar32);
  uVar23 = *(uint *)(param_2 + 0x58);
  if (uVar23 < *(uint *)(param_2 + 0x5c)) {
    *(uint *)(param_2 + 0x58) = uVar23 + 1;
    if (*(long *)(param_2 + 0x50) != 0) {
      *(long **)(*(long *)(param_2 + 0x50) + (ulong)uVar23 * 8) = plVar34 + 1;
    }
  }
  if (*plVar7 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar7 = 0;
  }
  iVar18 = 1;
  goto LAB_03467614;
}


