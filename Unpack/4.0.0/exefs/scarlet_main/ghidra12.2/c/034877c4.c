/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034877c4; name: FUN_034877c4
 */


undefined8
FUN_034877c4(long param_1,long param_2,float *param_3,undefined8 *param_4,void *param_5,long param_6
            )

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint local_68;
  int local_64;
  
  fVar17 = param_3[0x20];
  uVar13 = (uint)param_1;
  if ((((uint)fVar17 >> 6 & 1) != 0) && (*(char *)(param_1 + 0x28) < '\0')) {
    lVar6 = *(long *)PTR_DAT_047e6fd8;
    uVar4 = *(uint *)(lVar6 + 0x20);
    fVar16 = 0.0;
    if (uVar4 != 0) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = (uVar13 + 7) / uVar4;
      }
      for (plVar8 = *(long **)(*(long *)(lVar6 + 0x18) + (ulong)((uVar13 + 7) - uVar14 * uVar4) * 8)
          ; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
        if ((*plVar8 == param_1) && ((int)plVar8[1] == 7)) {
          if (*(int *)((long)plVar8 + 0x4c) == 3) {
            fVar16 = (float)FUN_0348209c();
          }
          else {
            fVar16 = (float)FUN_03482338(lVar6,plVar8,param_5);
          }
          break;
        }
      }
    }
    fVar17 = param_3[0x20];
    param_3[5] = param_3[5] + fVar16;
  }
  if ((((uint)fVar17 & 1) != 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    lVar6 = *(long *)PTR_DAT_047e6fd8;
    uVar4 = *(uint *)(lVar6 + 0x20);
    fVar16 = 0.0;
    if (uVar4 != 0) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = uVar13 / uVar4;
      }
      for (plVar8 = *(long **)(*(long *)(lVar6 + 0x18) + (ulong)(uVar13 - uVar14 * uVar4) * 8);
          plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
        if ((*plVar8 == param_1) && ((int)plVar8[1] == 0)) {
          if (*(int *)((long)plVar8 + 0x4c) == 3) {
            fVar16 = (float)FUN_0348209c();
          }
          else {
            fVar16 = (float)FUN_03482338(lVar6,plVar8,param_5);
          }
          break;
        }
      }
    }
    fVar17 = param_3[0x20];
    *param_3 = *param_3 + fVar16;
  }
  if ((((uint)fVar17 >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    lVar6 = *(long *)PTR_DAT_047e6fd8;
    uVar4 = *(uint *)(lVar6 + 0x20);
    fVar16 = 0.0;
    if (uVar4 != 0) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = (uVar13 + 2) / uVar4;
      }
      for (plVar8 = *(long **)(*(long *)(lVar6 + 0x18) + (ulong)((uVar13 + 2) - uVar14 * uVar4) * 8)
          ; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
        if ((*plVar8 == param_1) && ((int)plVar8[1] == 2)) {
          if (*(int *)((long)plVar8 + 0x4c) == 3) {
            fVar16 = (float)FUN_0348209c();
          }
          else {
            fVar16 = (float)FUN_03482338(lVar6,plVar8,param_5);
          }
          break;
        }
      }
    }
    fVar17 = param_3[0x20];
    param_3[1] = param_3[1] + fVar16;
  }
  if ((((uint)fVar17 >> 3 & 1) != 0) && ((*(byte *)(param_1 + 0x28) >> 3 & 1) != 0)) {
    lVar6 = *(long *)PTR_DAT_047e6fd8;
    uVar4 = *(uint *)(lVar6 + 0x20);
    fVar16 = 0.0;
    if (uVar4 != 0) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = (uVar13 + 3) / uVar4;
      }
      for (plVar8 = *(long **)(*(long *)(lVar6 + 0x18) + (ulong)((uVar13 + 3) - uVar14 * uVar4) * 8)
          ; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
        if ((*plVar8 == param_1) && ((int)plVar8[1] == 3)) {
          if (*(int *)((long)plVar8 + 0x4c) == 3) {
            fVar16 = (float)FUN_0348209c();
          }
          else {
            fVar16 = (float)FUN_03482338(lVar6,plVar8,param_5);
          }
          break;
        }
      }
    }
    fVar17 = param_3[0x20];
    param_3[2] = param_3[2] + fVar16;
  }
  if ((((uint)fVar17 >> 4 & 1) != 0) && ((*(byte *)(param_1 + 0x28) >> 4 & 1) != 0)) {
    lVar6 = *(long *)PTR_DAT_047e6fd8;
    uVar4 = *(uint *)(lVar6 + 0x20);
    fVar17 = 0.0;
    if (uVar4 != 0) {
      uVar14 = 0;
      if (uVar4 != 0) {
        uVar14 = (uVar13 + 4) / uVar4;
      }
      for (plVar8 = *(long **)(*(long *)(lVar6 + 0x18) + (ulong)((uVar13 + 4) - uVar14 * uVar4) * 8)
          ; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[2]) {
        if ((*plVar8 == param_1) && ((int)plVar8[1] == 4)) {
          if (*(int *)((long)plVar8 + 0x4c) == 3) {
            fVar17 = (float)FUN_0348209c();
          }
          else {
            fVar17 = (float)FUN_03482338(lVar6,plVar8,param_5);
          }
          break;
        }
      }
    }
    param_3[3] = param_3[3] + fVar17;
  }
  uVar13 = *(uint *)(param_1 + 0x38);
  if (uVar13 == 0) goto LAB_03487ce0;
  piVar10 = *(int **)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x20);
  if ((uVar4 == 0) || (*piVar10 == *(int *)(param_2 + 0x18))) {
    piVar15 = piVar10;
  }
  else {
    lVar6 = (ulong)uVar4 * 0x48;
    piVar12 = piVar10;
    do {
      lVar6 = lVar6 + -0x48;
      if (lVar6 == 0) {
        piVar15 = piVar10 + (ulong)uVar4 * 0x12;
        break;
      }
      piVar15 = piVar12 + 0x12;
      piVar1 = piVar12 + 0x12;
      piVar12 = piVar15;
    } while (*piVar1 != *(int *)(param_2 + 0x18));
  }
  if (*(long *)(piVar15 + 6) == 0) goto LAB_03487ce0;
  memcpy(&local_98,param_5,0x30);
  puVar5 = PTR_DAT_047e6fd8;
  uVar4 = *(uint *)(*(long **)PTR_DAT_047e6fd8 + 1);
  if (uVar4 != 0) {
    uVar14 = 0;
    if (uVar4 != 0) {
      uVar14 = uVar13 / uVar4;
    }
    for (puVar11 = *(uint **)(**(long **)PTR_DAT_047e6fd8 + (ulong)(uVar13 - uVar14 * uVar4) * 8);
        puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
      if (*puVar11 == uVar13) {
        puVar11 = (uint *)FUN_034825d4(puVar11 + 8,&local_98);
        if (puVar11 == (uint *)0x0) goto LAB_03487ae4;
        local_68 = *puVar11;
        goto LAB_03487bc0;
      }
    }
  }
  lVar6 = *(long *)PTR_DAT_047e6f28;
  pMVar2 = (MutexType *)(lVar6 + 0x188);
  nn::os::LockMutex(pMVar2);
  uVar4 = *(uint *)(lVar6 + 0x1b0);
  if (uVar4 == 0) {
LAB_03487adc:
    nn::os::UnlockMutex(pMVar2);
LAB_03487ae4:
    local_68 = 0;
    uVar13 = *(uint *)(*(long **)puVar5 + 1);
    if (uVar13 != 0) {
      uVar4 = *(uint *)(param_1 + 0x38);
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar4 / uVar13;
      }
      for (puVar11 = *(uint **)(**(long **)puVar5 + (ulong)(uVar4 - uVar14 * uVar13) * 8);
          puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 2)) {
        if (*puVar11 == uVar4) {
          local_68 = puVar11[4];
          break;
        }
      }
    }
    uVar13 = 0;
  }
  else {
    uVar14 = 0;
    if (uVar4 != 0) {
      uVar14 = uVar13 / uVar4;
    }
    plVar8 = *(long **)(*(long *)(lVar6 + 0x1a8) + (ulong)(uVar13 - uVar14 * uVar4) * 8);
    if (plVar8 == (long *)0x0) goto LAB_03487adc;
    while (*(uint *)(plVar8 + 2) != uVar13) {
      plVar8 = (long *)plVar8[1];
      if (plVar8 == (long *)0x0) goto LAB_03487adc;
    }
    *(int *)((long)plVar8 + 0x14) = *(int *)((long)plVar8 + 0x14) + 1;
    nn::os::UnlockMutex(pMVar2);
    uVar7 = FUN_0348d8a8(plVar8,&local_98,&local_68);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if ((uVar7 & 1) == 0) goto LAB_03487ae4;
LAB_03487bc0:
    uVar13 = (uint)(local_98 != 0);
  }
  local_64 = piVar15[10];
  fVar17 = (float)FUN_03447dcc(local_68,piVar15 + 6,&local_64);
  piVar15[10] = local_64;
  if ((uVar13 == 0) && (fVar17 == 1.0)) goto LAB_03487ce0;
  plVar9 = (long *)*param_4;
  uVar4 = *(uint *)(param_4 + 1);
  plVar8 = plVar9;
  if (uVar4 == 0) {
LAB_03487c5c:
    if (plVar8 == plVar9 + (ulong)uVar4 * 3) goto LAB_03487c6c;
  }
  else {
    lVar6 = (ulong)uVar4 * 0x18;
    do {
      if ((*plVar8 == param_1) && (uVar13 != (*(byte *)(plVar8 + 1) & 1))) goto LAB_03487c5c;
      lVar6 = lVar6 + -0x18;
      plVar8 = plVar8 + 3;
    } while (lVar6 != 0);
LAB_03487c6c:
    uVar14 = *(uint *)((long)param_4 + 0xc);
    if (uVar14 <= uVar4) {
      iVar3 = uVar14 + (uVar14 >> 1);
      if (uVar14 == 0) {
        iVar3 = 1;
      }
      uVar14 = iVar3 + uVar14;
      plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar9,(ulong)uVar14 * 0x18);
      if (plVar9 == (long *)0x0) goto LAB_03487ce0;
      *param_4 = plVar9;
      *(uint *)((long)param_4 + 0xc) = uVar14;
    }
    if (uVar14 <= uVar4) goto LAB_03487ce0;
    uVar4 = *(uint *)(param_4 + 1);
    *(uint *)(param_4 + 1) = uVar4 + 1;
    if (plVar9 == (long *)0x0) goto LAB_03487ce0;
    plVar8 = plVar9 + (ulong)uVar4 * 3;
    *plVar8 = param_1;
    plVar8[1] = (ulong)(uVar13 ^ 1);
  }
  *(float *)(plVar8 + 2) = fVar17;
LAB_03487ce0:
  if (param_6 != 0) {
    local_88 = 4;
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    local_98 = param_1;
    FUN_03497db4(*(undefined8 *)PTR_DAT_047e7048,&local_98,param_6);
  }
  return 1;
}


