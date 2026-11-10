/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e1628; name: FUN_034e1628
 */


void FUN_034e1628(long *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long local_68;
  
  puVar5 = PTR_DAT_047e6f38;
  plVar12 = (long *)param_1[0x35];
  if (plVar12 == (long *)0x0) {
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    plVar13 = (long *)0x0;
    do {
      if ((param_3 == 0) || (*(int *)((long)plVar12 + 0x1c) == param_3)) {
        plVar16 = (long *)*plVar12;
        plVar14 = param_1 + 0x35;
        if ((long *)param_1[0x35] != plVar12) {
          plVar14 = plVar13;
        }
        *plVar14 = (long)plVar16;
        *(int *)(param_1 + 0x34) = (int)param_1[0x34] + -1;
        if (plVar12[4] != 0) {
          FUN_034c7900(*(undefined8 *)PTR_DAT_047e6cc0,(int)param_1[3]);
        }
        plVar14 = *(long **)puVar5;
        uVar7 = *(uint *)((long)plVar12 + 0x1c);
        nn::os::LockMutex((MutexType *)(plVar14 + 3));
        uVar1 = *(uint *)(plVar14 + 1);
        if (uVar1 != 0) {
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar7 / uVar1;
          }
          for (lVar9 = *(long *)(*plVar14 + (ulong)(uVar7 - uVar3 * uVar1) * 8); lVar9 != 0;
              lVar9 = *(long *)(lVar9 + 0x70)) {
            if (*(uint *)(lVar9 + 0x54) == uVar7) {
              *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
              FUN_034b3448(plVar14,uVar7);
              goto LAB_034e19b8;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar14 + 3));
LAB_034e19b8:
        (**(code **)(*param_1 + 0x130))(param_1,1);
        puVar6 = PTR_DAT_047e70c0;
        lVar9 = param_1[0x12];
        if (((lVar9 != 0) && (bVar8 = *(byte *)(lVar9 + 0x98), (bVar8 >> 1 & 1) != 0)) &&
           (*(short *)(lVar9 + 0x94) == 0)) {
          plVar14 = (long *)(PTR_DAT_047e70c0 + 0x10);
          plVar11 = (long *)0x0;
          do {
            plVar10 = plVar11;
            plVar11 = (long *)*plVar14;
            plVar14 = plVar11 + 10;
          } while (plVar11 != (long *)0x0 && plVar11 != param_1);
          if (plVar11 != (long *)0x0) {
            plVar14 = (long *)(PTR_DAT_047e70c0 + 0x10);
            if (*(long **)(PTR_DAT_047e70c0 + 0x10) != plVar11) {
              plVar14 = plVar10 + 10;
            }
            *plVar14 = plVar11[10];
            if (*(long **)(puVar6 + 8) == plVar11) {
              *(long **)(puVar6 + 8) = plVar10;
            }
            *(int *)puVar6 = *(int *)puVar6 + -1;
            lVar9 = param_1[0x12];
            bVar8 = *(byte *)(lVar9 + 0x98);
          }
          *(byte *)(lVar9 + 0x98) = bVar8 & 0xfd;
        }
        puVar15 = (undefined8 *)plVar12[4];
        iVar2 = *(int *)(puVar15 + 0x10);
        uVar7 = iVar2 - 1;
        *(uint *)(puVar15 + 0x10) = uVar7;
        if (iVar2 == 0 || uVar7 == 0) {
          if (uVar7 == 0) {
LAB_034e1a8c:
            lVar9 = puVar15[5];
            if (lVar9 != 0) {
              uVar7 = ((uint)lVar9 ^ (uint)lVar9 >> 0x10) * -0x7a143595;
              uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
              local_68 = lVar9;
              FUN_034c6294(&DAT_048b02b8,&local_68,uVar7 ^ uVar7 >> 0x10);
              uVar7 = *(uint *)(puVar15 + 0x10);
            }
            goto LAB_034e1ad0;
          }
        }
        else if (uVar7 < 2) {
          if (*(char *)((long)puVar15 + 0x84) != '\0') goto LAB_034e1a8c;
LAB_034e1ad0:
          if (uVar7 == 0) {
            (**(code **)*puVar15)(puVar15);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar15);
          }
        }
        FUN_034e0358(plVar12);
      }
      else {
        plVar16 = (long *)*plVar12;
        plVar13 = plVar12;
      }
      plVar12 = plVar16;
      if (plVar12 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  bVar4 = false;
  plVar13 = (long *)0x0;
  puVar18 = (undefined8 *)PTR_DAT_047e6f38;
  puVar15 = (undefined8 *)PTR_DAT_047e6cc0;
  do {
    plVar14 = plVar12;
    while (((undefined8 *)plVar14[4] != param_2 ||
           ((param_3 != 0 && (*(int *)((long)plVar14 + 0x1c) != param_3))))) {
      plVar12 = (long *)*plVar14;
      plVar13 = plVar14;
      plVar14 = plVar12;
      if (plVar12 == (long *)0x0) {
        if (!bVar4) {
          return;
        }
        goto LAB_034e18e0;
      }
    }
    plVar12 = (long *)*plVar14;
    plVar16 = param_1 + 0x35;
    if ((long *)param_1[0x35] != plVar14) {
      plVar16 = plVar13;
    }
    *plVar16 = (long)plVar12;
    *(int *)(param_1 + 0x34) = (int)param_1[0x34] + -1;
    if (!bVar4) {
      uVar7 = *(uint *)(param_2 + 0x10);
      if (uVar7 < 2) {
        *(uint *)(param_2 + 0x10) = uVar7 + 1;
        if ((uVar7 != 0) && (*(char *)((long)param_2 + 0x84) != '\0')) {
          FUN_034c60b0(*puVar15,param_2);
        }
      }
      else {
        *(uint *)(param_2 + 0x10) = uVar7 + 1;
      }
    }
    plVar16 = (long *)*puVar18;
    uVar7 = *(uint *)((long)plVar14 + 0x1c);
    nn::os::LockMutex((MutexType *)(plVar16 + 3));
    uVar1 = *(uint *)(plVar16 + 1);
    if (uVar1 != 0) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar7 / uVar1;
      }
      for (lVar9 = *(long *)(*plVar16 + (ulong)(uVar7 - uVar3 * uVar1) * 8); lVar9 != 0;
          lVar9 = *(long *)(lVar9 + 0x70)) {
        if (*(uint *)(lVar9 + 0x54) == uVar7) {
          *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
          FUN_034b3448(plVar16,uVar7);
          goto LAB_034e1758;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar16 + 3));
LAB_034e1758:
    puVar18 = (undefined8 *)PTR_DAT_047e6f38;
    puVar15 = (undefined8 *)PTR_DAT_047e6cc0;
    (**(code **)(*param_1 + 0x130))(param_1,1);
    puVar5 = PTR_DAT_047e70c0;
    lVar9 = param_1[0x12];
    if (((lVar9 != 0) && (bVar8 = *(byte *)(lVar9 + 0x98), (bVar8 >> 1 & 1) != 0)) &&
       (*(short *)(lVar9 + 0x94) == 0)) {
      plVar16 = (long *)(PTR_DAT_047e70c0 + 0x10);
      plVar11 = (long *)0x0;
      do {
        plVar10 = plVar11;
        plVar11 = (long *)*plVar16;
        plVar16 = plVar11 + 10;
      } while (plVar11 != (long *)0x0 && plVar11 != param_1);
      if (plVar11 != (long *)0x0) {
        plVar16 = (long *)(PTR_DAT_047e70c0 + 0x10);
        if (*(long **)(PTR_DAT_047e70c0 + 0x10) != plVar11) {
          plVar16 = plVar10 + 10;
        }
        *plVar16 = plVar11[10];
        if (*(long **)(puVar5 + 8) == plVar11) {
          *(long **)(puVar5 + 8) = plVar10;
        }
        *(int *)puVar5 = *(int *)puVar5 + -1;
        lVar9 = param_1[0x12];
        bVar8 = *(byte *)(lVar9 + 0x98);
      }
      *(byte *)(lVar9 + 0x98) = bVar8 & 0xfd;
    }
    puVar17 = (undefined8 *)plVar14[4];
    iVar2 = *(int *)(puVar17 + 0x10);
    uVar7 = iVar2 - 1;
    *(uint *)(puVar17 + 0x10) = uVar7;
    if (iVar2 == 0 || uVar7 == 0) {
      if (uVar7 == 0) {
LAB_034e183c:
        lVar9 = puVar17[5];
        if (lVar9 != 0) {
          uVar7 = ((uint)lVar9 ^ (uint)lVar9 >> 0x10) * -0x7a143595;
          uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
          local_68 = lVar9;
          FUN_034c6294(&DAT_048b02b8,&local_68,uVar7 ^ uVar7 >> 0x10);
          uVar7 = *(uint *)(puVar17 + 0x10);
        }
        goto LAB_034e1880;
      }
    }
    else if (uVar7 < 2) {
      if (*(char *)((long)puVar17 + 0x84) != '\0') goto LAB_034e183c;
LAB_034e1880:
      if (uVar7 == 0) {
        (**(code **)*puVar17)(puVar17);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar17);
      }
    }
    FUN_034e0358(plVar14);
    bVar4 = true;
  } while (plVar12 != (long *)0x0);
LAB_034e18e0:
  FUN_034c7900(*puVar15,(int)param_1[3],param_2);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar7 = iVar2 - 1;
  *(uint *)(param_2 + 0x10) = uVar7;
  if (iVar2 == 0 || uVar7 == 0) {
    if (uVar7 != 0) {
      return;
    }
  }
  else {
    if (1 < uVar7) {
      return;
    }
    if (*(char *)((long)param_2 + 0x84) == '\0') goto LAB_034e1b80;
  }
  lVar9 = param_2[5];
  if (lVar9 != 0) {
    uVar7 = ((uint)lVar9 ^ (uint)lVar9 >> 0x10) * -0x7a143595;
    uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
    local_68 = lVar9;
    FUN_034c6294(&DAT_048b02b8,&local_68,uVar7 ^ uVar7 >> 0x10);
    uVar7 = *(uint *)(param_2 + 0x10);
  }
LAB_034e1b80:
  if (uVar7 == 0) {
    (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x034e1be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,param_2);
    return;
  }
  return;
}


