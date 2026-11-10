/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344ee98; name: FUN_0344ee98
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0344ee98(ulong *param_1)

{
  bool bVar1;
  int *piVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  ulong *puVar16;
  int *piVar17;
  int *piVar18;
  long *plVar19;
  ulong *puVar20;
  ushort *puVar21;
  undefined4 local_a8 [18];
  
  puVar9 = PTR_DAT_047e6f38;
  puVar8 = PTR_DAT_047e2fd0;
  if (*param_1 != param_1[1]) {
    do {
      puVar21 = (ushort *)*param_1;
      uVar6 = puVar21[1];
      if (uVar6 < 0x21) {
        if (uVar6 == 1) {
          plVar10 = *(long **)puVar9;
          uVar12 = *(uint *)(puVar21 + 6);
          nn::os::LockMutex((MutexType *)(plVar10 + 3));
          uVar5 = *(uint *)(plVar10 + 1);
          if (uVar5 != 0) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar12 / uVar5;
            }
            for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar12 - uVar7 * uVar5) * 8); lVar11 != 0;
                lVar11 = *(long *)(lVar11 + 0x70)) {
              if (*(uint *)(lVar11 + 0x54) == uVar12) {
                *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                FUN_034b3448(plVar10,uVar12);
                goto LAB_0344f11c;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_0344f11c:
          (**(code **)(**(long **)(puVar21 + 0x14) + 0x18))();
          piVar14 = *(int **)(puVar21 + 10);
          if ((piVar14 != (int *)0x0) && (iVar4 = *piVar14, *piVar14 = iVar4 + -1, iVar4 + -1 == 0))
          {
            uVar12 = piVar14[1];
            if (uVar12 != 0) {
              uVar13 = 0;
              plVar10 = (long *)(piVar14 + 4);
              do {
                if (*plVar10 != 0) {
                  (**(code **)(puVar8 + 0x30))(0);
                  uVar12 = piVar14[1];
                }
                uVar13 = uVar13 + 1;
                plVar10 = plVar10 + 4;
              } while (uVar13 < uVar12);
            }
            pcVar15 = *(code **)(puVar8 + 0x30);
LAB_0344f1b8:
            (*pcVar15)(0,piVar14);
          }
        }
        else if (uVar6 == 0x12) {
          if (*(long *)(puVar21 + 6) != 0) {
            (**(code **)(puVar8 + 0x30))(0);
            puVar21[6] = 0;
            puVar21[7] = 0;
            puVar21[8] = 0;
            puVar21[9] = 0;
          }
        }
        else if (uVar6 == 0x19) {
          puVar3 = puVar21 + 2;
          if (*(int *)(puVar21 + 6) == 3) {
            plVar10 = *(long **)puVar9;
            uVar12 = *(uint *)(*(long *)puVar3 + 0x6c);
            nn::os::LockMutex((MutexType *)(plVar10 + 3));
            uVar5 = *(uint *)(plVar10 + 1);
            if (uVar5 != 0) {
              uVar7 = 0;
              if (uVar5 != 0) {
                uVar7 = uVar12 / uVar5;
              }
              for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar12 - uVar7 * uVar5) * 8); lVar11 != 0;
                  lVar11 = *(long *)(lVar11 + 0x70)) {
                if (*(uint *)(lVar11 + 0x54) == uVar12) {
                  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                  FUN_034b3448(plVar10,uVar12);
                  goto LAB_0344efe4;
                }
              }
            }
            nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_0344efe4:
            (**(code **)(**(long **)puVar3 + 0x18))();
          }
          plVar10 = *(long **)puVar3;
          goto LAB_0344f02c;
        }
        goto switchD_0344ef14_caseD_24;
      }
      if (uVar6 < 0x30) {
        switch(uVar6) {
        case 0x22:
          plVar10 = *(long **)puVar9;
          uVar12 = *(uint *)(puVar21 + 0xc);
          nn::os::LockMutex((MutexType *)(plVar10 + 3));
          uVar5 = *(uint *)(plVar10 + 1);
          if (uVar5 != 0) {
            uVar7 = 0;
            if (uVar5 != 0) {
              uVar7 = uVar12 / uVar5;
            }
            for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar12 - uVar7 * uVar5) * 8); lVar11 != 0;
                lVar11 = *(long *)(lVar11 + 0x70)) {
              if (*(uint *)(lVar11 + 0x54) == uVar12) {
                *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
                FUN_034b3448(plVar10,uVar12);
                goto switchD_0344ef14_caseD_21;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
        case 0x21:
        case 0x27:
switchD_0344ef14_caseD_21:
          plVar10 = *(long **)(puVar21 + 6);
LAB_0344f02c:
          (**(code **)(*plVar10 + 0x18))();
          break;
        case 0x23:
          plVar10 = *(long **)(puVar21 + 6);
          if (plVar10 == (long *)0x0) break;
          goto LAB_0344f02c;
        case 0x2a:
          (**(code **)(puVar8 + 0x30))(0,*(undefined8 *)(puVar21 + 2));
          puVar21[2] = 0;
          puVar21[3] = 0;
          puVar21[4] = 0;
          puVar21[5] = 0;
        }
switchD_0344ef14_caseD_24:
        uVar13 = (ulong)(*puVar21 + 3) & 0x1fffc;
      }
      else {
        if (uVar6 == 0x30) {
          piVar14 = *(int **)(puVar21 + 2);
          if (piVar14 != (int *)0x0) {
            pcVar15 = *(code **)(puVar8 + 0x30);
            goto LAB_0344f1b8;
          }
          goto switchD_0344ef14_caseD_24;
        }
        if (uVar6 == 0x38) {
          piVar14 = (int *)param_1[0x15];
          uVar12 = (uint)param_1[0x16];
          if ((uVar12 == 0) || (*piVar14 == *(int *)(puVar21 + 2))) {
            piVar17 = piVar14;
          }
          else {
            lVar11 = (ulong)uVar12 * 0x20;
            piVar18 = piVar14;
            do {
              lVar11 = lVar11 + -0x20;
              if (lVar11 == 0) goto switchD_0344ef14_caseD_24;
              piVar17 = piVar18 + 8;
              piVar2 = piVar18 + 8;
              piVar18 = piVar17;
            } while (*piVar2 != *(int *)(puVar21 + 2));
          }
          if (piVar17 != piVar14 + (ulong)uVar12 * 8) {
            (**(code **)(piVar17 + 4))(puVar21 + 4,*puVar21 - 4);
          }
          goto switchD_0344ef14_caseD_24;
        }
        if (uVar6 != 0x3c) goto switchD_0344ef14_caseD_24;
        uVar13 = (ulong)((int)param_1[4] + 3U & 0xfffffffc);
      }
      uVar13 = *param_1 + uVar13;
      if (param_1[3] <= uVar13) {
        uVar13 = param_1[2];
      }
      *param_1 = uVar13;
    } while (*param_1 != param_1[1]);
  }
  puVar16 = (ulong *)param_1[10];
  while (puVar16 != (ulong *)0x0) {
    plVar19 = (long *)puVar16[2];
    local_a8[0] = 0;
    plVar10 = (long *)plVar19[1];
    if ((*(ushort *)((long)plVar10 + 0x34) | 0x100) == 0x503) {
      (**(code **)(*plVar10 + 0x58))(plVar10,local_a8);
    }
    plVar10 = *(long **)puVar9;
    uVar12 = *(uint *)(plVar19 + 6);
    nn::os::LockMutex((MutexType *)(plVar10 + 3));
    uVar5 = *(uint *)(plVar10 + 1);
    if (uVar5 != 0) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar12 / uVar5;
      }
      for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar12 - uVar7 * uVar5) * 8); lVar11 != 0;
          lVar11 = *(long *)(lVar11 + 0x70)) {
        if (*(uint *)(lVar11 + 0x54) == uVar12) {
          *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
          FUN_034b3448(plVar10,uVar12);
          goto LAB_0344f2c0;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_0344f2c0:
    if ((ulong *)param_1[10] != puVar16) {
      halt_baddata();
    }
    puVar20 = (ulong *)*puVar16;
    param_1[10] = (ulong)puVar20;
    if ((ulong *)param_1[0xb] == puVar16) {
      param_1[0xb] = 0;
    }
    *puVar16 = param_1[0xc];
    param_1[0xc] = (ulong)puVar16;
    *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + -1;
    (**(code **)(*(long *)plVar19[1] + 0x18))();
    (**(code **)(*plVar19 + 8))(plVar19);
    (**(code **)(puVar8 + 0x30))(0,plVar19);
    puVar16 = puVar20;
  }
  puVar16 = (ulong *)param_1[5];
  while (puVar16 != (ulong *)0x0) {
    plVar19 = (long *)puVar16[2];
    local_a8[0] = 0;
    plVar10 = (long *)plVar19[1];
    if ((*(ushort *)((long)plVar10 + 0x34) | 0x100) == 0x503) {
      (**(code **)(*plVar10 + 0x58))(plVar10,local_a8);
    }
    plVar10 = *(long **)puVar9;
    uVar12 = *(uint *)(plVar19 + 6);
    nn::os::LockMutex((MutexType *)(plVar10 + 3));
    uVar5 = *(uint *)(plVar10 + 1);
    if (uVar5 != 0) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar12 / uVar5;
      }
      for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar12 - uVar7 * uVar5) * 8); lVar11 != 0;
          lVar11 = *(long *)(lVar11 + 0x70)) {
        if (*(uint *)(lVar11 + 0x54) == uVar12) {
          *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
          FUN_034b3448(plVar10,uVar12);
          goto LAB_0344f3d4;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
LAB_0344f3d4:
    if ((ulong *)param_1[5] != puVar16) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar20 = (ulong *)*puVar16;
    param_1[5] = (ulong)puVar20;
    if ((ulong *)param_1[6] == puVar16) {
      param_1[6] = 0;
    }
    *puVar16 = param_1[7];
    param_1[7] = (ulong)puVar16;
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
    (**(code **)(*(long *)plVar19[1] + 0x18))();
    (**(code **)(*plVar19 + 8))(plVar19);
    (**(code **)(puVar8 + 0x30))(0,plVar19);
    puVar16 = puVar20;
  }
  if (param_1[2] != 0) {
    (**(code **)(puVar8 + 0x30))(0x10,param_1[2]);
    param_1[2] = 0;
  }
  puVar16 = (ulong *)param_1[5];
  if (puVar16 == (ulong *)0x0) {
    puVar20 = (ulong *)param_1[7];
    goto joined_r0x0344f4d4;
  }
  do {
    puVar20 = puVar16;
    param_1[5] = *puVar20;
    if ((ulong *)param_1[6] == puVar20) {
      param_1[6] = 0;
    }
    *puVar20 = param_1[7];
    *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
    param_1[7] = (ulong)puVar20;
    puVar16 = (ulong *)param_1[5];
  } while ((ulong *)param_1[5] != (ulong *)0x0);
  do {
    puVar16 = (ulong *)*puVar20;
    if ((puVar20 < (ulong *)param_1[8]) ||
       (bVar1 = (ulong *)param_1[8] + (ulong)(uint)param_1[9] * 3 <= puVar20, puVar20 = puVar16,
       bVar1)) {
      (**(code **)(puVar8 + 0x30))(0);
      puVar20 = puVar16;
    }
joined_r0x0344f4d4:
  } while (puVar20 != (ulong *)0x0);
  if (param_1[8] != 0) {
    (**(code **)(puVar8 + 0x30))(0);
    param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar16 = (ulong *)param_1[10];
  if (puVar16 == (ulong *)0x0) {
    puVar20 = (ulong *)param_1[0xc];
    if (puVar20 == (ulong *)0x0) goto LAB_0344f5c0;
  }
  else {
    do {
      puVar20 = puVar16;
      param_1[10] = *puVar20;
      if ((ulong *)param_1[0xb] == puVar20) {
        param_1[0xb] = 0;
      }
      *puVar20 = param_1[0xc];
      *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + -1;
      param_1[0xc] = (ulong)puVar20;
      puVar16 = (ulong *)param_1[10];
    } while ((ulong *)param_1[10] != (ulong *)0x0);
  }
  do {
    puVar16 = (ulong *)*puVar20;
    if ((puVar20 < (ulong *)param_1[0xd]) ||
       ((ulong *)param_1[0xd] + (ulong)(uint)param_1[0xe] * 3 <= puVar20)) {
      (**(code **)(puVar8 + 0x30))(0);
    }
    puVar20 = puVar16;
  } while (puVar16 != (ulong *)0x0);
LAB_0344f5c0:
  if (param_1[0xd] != 0) {
    (**(code **)(puVar8 + 0x30))(0);
    param_1[0xd] = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


