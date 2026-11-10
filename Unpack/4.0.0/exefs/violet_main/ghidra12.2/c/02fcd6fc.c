/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fcd6fc; name: FUN_02fcd6fc
 */


void FUN_02fcd6fc(long *param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 *puVar18;
  
  iVar7 = (int)param_1[0x21];
  plVar1 = param_1 + 0x20;
  if (param_3 <= iVar7) {
    if (iVar7 <= param_3) {
      return;
    }
    lVar15 = (long)param_3;
    do {
      lVar16 = *plVar1;
      lVar8 = lVar16 + lVar15 * 0x500;
      uVar6 = *(uint *)(lVar8 + 0x118);
      plVar5 = (long *)(lVar8 + 0x110);
      if (*(char *)(lVar8 + 0x10c) != '\0') {
        plVar12 = (long *)*plVar5;
        if ((int)uVar6 < 1) {
          plVar13 = plVar12;
        }
        else {
          uVar3 = uVar6 & 3;
          plVar13 = plVar12;
          if (2 < uVar6 - 1) {
            iVar14 = -(uVar6 & 0xfffffffc);
            do {
              plVar11 = plVar12;
              if (*plVar13 != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = *plVar13;
              }
              plVar12 = plVar11;
              if (plVar13[1] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[1];
              }
              plVar11 = plVar12;
              if (plVar13[2] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar13[2];
              }
              plVar12 = plVar11;
              if (plVar13[3] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[3];
              }
              plVar13 = plVar13 + 4;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            plVar11 = plVar12;
            if (*plVar13 != 0) {
              plVar11 = plVar12 + 1;
              *plVar12 = *plVar13;
            }
            plVar12 = plVar11;
            plVar13 = plVar13 + 1;
          }
          plVar13 = (long *)*plVar5;
        }
        uVar6 = (uint)((ulong)((long)plVar12 - (long)plVar13) >> 3);
        *(undefined1 *)(lVar8 + 0x10c) = 0;
      }
      if (uVar6 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          plVar12 = *(long **)(lVar16 + lVar15 * 0x500 + 0x100);
          (**(code **)(*plVar12 + 0x28))(plVar12,*plVar5);
        }
        else {
          FUN_031c2998(param_2,*plVar5);
        }
      }
      lVar9 = lVar16 + lVar15 * 0x500;
      *(undefined4 *)(lVar8 + 0x118) = 0;
      uVar6 = *(uint *)(lVar9 + 0x218);
      plVar5 = (long *)(lVar9 + 0x210);
      *(undefined4 *)(lVar9 + 0x108) = 0;
      if (*(char *)(lVar9 + 0x20c) != '\0') {
        plVar12 = (long *)*plVar5;
        if ((int)uVar6 < 1) {
          plVar13 = plVar12;
        }
        else {
          uVar3 = uVar6 & 3;
          plVar13 = plVar12;
          if (2 < uVar6 - 1) {
            iVar14 = -(uVar6 & 0xfffffffc);
            do {
              plVar11 = plVar12;
              if (*plVar13 != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = *plVar13;
              }
              plVar12 = plVar11;
              if (plVar13[1] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[1];
              }
              plVar11 = plVar12;
              if (plVar13[2] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar13[2];
              }
              plVar12 = plVar11;
              if (plVar13[3] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[3];
              }
              plVar13 = plVar13 + 4;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            plVar11 = plVar12;
            if (*plVar13 != 0) {
              plVar11 = plVar12 + 1;
              *plVar12 = *plVar13;
            }
            plVar12 = plVar11;
            plVar13 = plVar13 + 1;
          }
          plVar13 = (long *)*plVar5;
        }
        uVar6 = (uint)((ulong)((long)plVar12 - (long)plVar13) >> 3);
        *(undefined1 *)(lVar9 + 0x20c) = 0;
      }
      if (uVar6 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          plVar12 = *(long **)(lVar16 + lVar15 * 0x500 + 0x200);
          (**(code **)(*plVar12 + 0x28))(plVar12,*plVar5);
        }
        else {
          FUN_031c2998(param_2,*plVar5);
        }
      }
      lVar8 = lVar16 + lVar15 * 0x500;
      *(undefined4 *)(lVar9 + 0x218) = 0;
      *(undefined4 *)(lVar8 + 0x208) = 0;
      uVar6 = *(uint *)(lVar8 + 0x18);
      plVar5 = (long *)(lVar8 + 0x10);
      if (*(char *)(lVar8 + 0xc) != '\0') {
        plVar12 = (long *)*plVar5;
        if ((int)uVar6 < 1) {
          plVar13 = plVar12;
        }
        else {
          uVar3 = uVar6 & 3;
          plVar13 = plVar12;
          if (2 < uVar6 - 1) {
            iVar14 = -(uVar6 & 0xfffffffc);
            do {
              plVar11 = plVar12;
              if (*plVar13 != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = *plVar13;
              }
              plVar12 = plVar11;
              if (plVar13[1] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[1];
              }
              plVar11 = plVar12;
              if (plVar13[2] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar13[2];
              }
              plVar12 = plVar11;
              if (plVar13[3] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[3];
              }
              plVar13 = plVar13 + 4;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            plVar11 = plVar12;
            if (*plVar13 != 0) {
              plVar11 = plVar12 + 1;
              *plVar12 = *plVar13;
            }
            plVar12 = plVar11;
            plVar13 = plVar13 + 1;
          }
          plVar13 = (long *)*plVar5;
        }
        uVar6 = (uint)((ulong)((long)plVar12 - (long)plVar13) >> 3);
        *(char *)(lVar8 + 0xc) = '\0';
      }
      if (uVar6 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          plVar12 = *(long **)(lVar16 + lVar15 * 0x500);
          (**(code **)(*plVar12 + 0x28))(plVar12,*plVar5);
        }
        else {
          FUN_031c2998(param_2,*plVar5);
        }
      }
      lVar9 = lVar16 + lVar15 * 0x500;
      *(uint *)(lVar8 + 0x18) = 0;
      uVar6 = *(uint *)(lVar9 + 0x318);
      plVar5 = (long *)(lVar9 + 0x310);
      *(undefined4 *)(lVar9 + 8) = 0;
      if (*(char *)(lVar9 + 0x30c) != '\0') {
        plVar12 = (long *)*plVar5;
        if ((int)uVar6 < 1) {
          plVar13 = plVar12;
        }
        else {
          uVar3 = uVar6 & 3;
          plVar13 = plVar12;
          if (2 < uVar6 - 1) {
            iVar14 = -(uVar6 & 0xfffffffc);
            do {
              plVar11 = plVar12;
              if (*plVar13 != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = *plVar13;
              }
              plVar12 = plVar11;
              if (plVar13[1] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[1];
              }
              plVar11 = plVar12;
              if (plVar13[2] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar13[2];
              }
              plVar12 = plVar11;
              if (plVar13[3] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[3];
              }
              plVar13 = plVar13 + 4;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            plVar11 = plVar12;
            if (*plVar13 != 0) {
              plVar11 = plVar12 + 1;
              *plVar12 = *plVar13;
            }
            plVar12 = plVar11;
            plVar13 = plVar13 + 1;
          }
          plVar13 = (long *)*plVar5;
        }
        uVar6 = (uint)((ulong)((long)plVar12 - (long)plVar13) >> 3);
        *(undefined1 *)(lVar9 + 0x30c) = 0;
      }
      if (uVar6 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          plVar12 = *(long **)(lVar16 + lVar15 * 0x500 + 0x300);
          (**(code **)(*plVar12 + 0x28))(plVar12,*plVar5);
        }
        else {
          FUN_031c2998(param_2,*plVar5);
        }
      }
      lVar8 = lVar16 + lVar15 * 0x500;
      *(undefined4 *)(lVar9 + 0x318) = 0;
      uVar6 = *(uint *)(lVar8 + 0x418);
      plVar5 = (long *)(lVar8 + 0x410);
      *(undefined4 *)(lVar8 + 0x308) = 0;
      if (*(char *)(lVar8 + 0x40c) != '\0') {
        plVar12 = (long *)*plVar5;
        if ((int)uVar6 < 1) {
          plVar13 = plVar12;
        }
        else {
          uVar3 = uVar6 & 3;
          plVar13 = plVar12;
          if (2 < uVar6 - 1) {
            iVar14 = -(uVar6 & 0xfffffffc);
            do {
              plVar11 = plVar12;
              if (*plVar13 != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = *plVar13;
              }
              plVar12 = plVar11;
              if (plVar13[1] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[1];
              }
              plVar11 = plVar12;
              if (plVar13[2] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar13[2];
              }
              plVar12 = plVar11;
              if (plVar13[3] != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = plVar13[3];
              }
              plVar13 = plVar13 + 4;
              iVar14 = iVar14 + 4;
            } while (iVar14 != 0);
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            plVar11 = plVar12;
            if (*plVar13 != 0) {
              plVar11 = plVar12 + 1;
              *plVar12 = *plVar13;
            }
            plVar12 = plVar11;
            plVar13 = plVar13 + 1;
          }
          plVar13 = (long *)*plVar5;
        }
        uVar6 = (uint)((ulong)((long)plVar12 - (long)plVar13) >> 3);
        *(undefined1 *)(lVar8 + 0x40c) = 0;
      }
      if (uVar6 != 0) {
        if (param_2 == (undefined8 *)0x0) {
          plVar12 = *(long **)(lVar16 + lVar15 * 0x500 + 0x400);
          (**(code **)(*plVar12 + 0x28))(plVar12,*plVar5);
        }
        else {
          FUN_031c2998(param_2,*plVar5);
        }
      }
      lVar9 = lVar15 * 0x500;
      lVar15 = lVar15 + 1;
      *(undefined4 *)(lVar8 + 0x418) = 0;
      *(undefined4 *)(lVar16 + lVar9 + 0x408) = 0;
    } while (iVar7 != (int)lVar15);
    return;
  }
  if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x7fffffff) < param_3) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    uVar6 = *(uint *)(param_1 + 0x21);
    if ((int)uVar6 < 0) {
      puVar18 = (undefined8 *)param_1[0x20];
      *(undefined4 *)(param_1 + 0x21) = 0;
      puVar10 = puVar18 + (long)(int)uVar6 * 0xa0;
      do {
        *puVar10 = 0;
        puVar10[2] = puVar10 + 6;
        *(undefined4 *)(puVar10 + 3) = 0;
        *(undefined4 *)((long)puVar10 + 0x1c) = 0x80000018;
        puVar10[0x20] = 0;
        puVar10[0x22] = puVar10 + 0x26;
        *(undefined4 *)(puVar10 + 0x23) = 0;
        *(undefined4 *)((long)puVar10 + 0x11c) = 0x80000018;
        puVar10[0x40] = 0;
        puVar10[0x42] = puVar10 + 0x46;
        *(undefined4 *)(puVar10 + 0x43) = 0;
        *(undefined4 *)((long)puVar10 + 0x21c) = 0x80000018;
        puVar10[0x60] = 0;
        puVar10[0x62] = puVar10 + 0x66;
        *(undefined4 *)(puVar10 + 99) = 0;
        *(undefined4 *)((long)puVar10 + 0x31c) = 0x80000018;
        puVar10[0x80] = 0;
        puVar10[0x82] = puVar10 + 0x86;
        *(undefined4 *)(puVar10 + 0x83) = 0;
        puVar2 = puVar10 + 0xa0;
        *(undefined4 *)((long)puVar10 + 0x41c) = 0x80000018;
        puVar10 = puVar2;
      } while (puVar2 != puVar18);
    }
    else if (uVar6 != 0) {
      lVar8 = param_1[0x20];
      lVar15 = ((ulong)uVar6 * 4 + (ulong)uVar6) * 0x100;
      *(undefined4 *)(param_1 + 0x21) = 0;
      do {
        FUN_02fcf60c(lVar8 + -0x500 + lVar15);
        lVar15 = lVar15 + -0x500;
      } while (lVar15 != 0);
      iVar7 = 0;
      goto LAB_02fcdcec;
    }
    iVar7 = 0;
  }
LAB_02fcdcec:
  if ((int)(*(uint *)((long)param_1 + 0x10c) & 0x7fffffff) < param_3) {
    FUN_02fcfa74(plVar1,(long)param_3);
  }
  iVar14 = (int)param_1[0x21];
  lVar15 = (long)iVar14;
  if (iVar14 < param_3) {
    lVar8 = param_1[0x20];
    *(int *)(param_1 + 0x21) = param_3;
    puVar10 = (undefined8 *)(lVar8 + lVar15 * 0x500);
    do {
      *puVar10 = 0;
      puVar10[2] = puVar10 + 6;
      *(undefined4 *)(puVar10 + 3) = 0;
      *(undefined4 *)((long)puVar10 + 0x1c) = 0x80000018;
      puVar10[0x20] = 0;
      puVar10[0x22] = puVar10 + 0x26;
      *(undefined4 *)(puVar10 + 0x23) = 0;
      *(undefined4 *)((long)puVar10 + 0x11c) = 0x80000018;
      puVar10[0x40] = 0;
      puVar10[0x42] = puVar10 + 0x46;
      *(undefined4 *)(puVar10 + 0x43) = 0;
      *(undefined4 *)((long)puVar10 + 0x21c) = 0x80000018;
      puVar10[0x60] = 0;
      puVar10[0x62] = puVar10 + 0x66;
      *(undefined4 *)(puVar10 + 99) = 0;
      *(undefined4 *)((long)puVar10 + 0x31c) = 0x80000018;
      puVar10[0x80] = 0;
      puVar10[0x82] = puVar10 + 0x86;
      *(undefined4 *)(puVar10 + 0x83) = 0;
      puVar18 = puVar10 + 0xa0;
      *(undefined4 *)((long)puVar10 + 0x41c) = 0x80000018;
      puVar10 = puVar18;
    } while (puVar18 != (undefined8 *)(lVar8 + (long)param_3 * 0x500));
  }
  else if (param_3 < iVar14) {
    *(int *)(param_1 + 0x21) = param_3;
    lVar8 = param_1[0x20] + lVar15 * 0x500;
    lVar15 = (long)param_3 * 0x500 + lVar15 * -0x500;
    do {
      lVar8 = lVar8 + -0x500;
      FUN_02fcf60c(lVar8);
      lVar15 = lVar15 + 0x500;
    } while (lVar15 != 0);
  }
  puVar4 = PTR_PTR_047d1a50;
  if (iVar7 < param_3) {
    param_3 = param_3 - iVar7;
    lVar15 = (long)iVar7 * 0x500 + 0x4f0;
    do {
      puVar10 = (undefined8 *)(*plVar1 + lVar15);
      plVar5 = (long *)*param_2;
      puVar10[-0x7e] = plVar5;
      *(undefined4 *)(puVar10 + -0x7d) = 0;
      *(undefined1 *)((long)puVar10 + -0x3e4) = 0;
      uVar6 = *(int *)(param_2 + 0xb) - 1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar8 = param_2[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar8,6);
        puVar18 = (undefined8 *)(lVar8 + 0x28);
        *(undefined4 *)(param_2 + 0xb) = 5;
      }
      else {
        *(uint *)(param_2 + 0xb) = uVar6;
        puVar18 = (undefined8 *)(param_2[1] + (ulong)uVar6 * 8);
      }
      puVar18 = (undefined8 *)*puVar18;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      piVar17 = (int *)(puVar10 + -0x7b);
      *(int *)((long)puVar18 + 4) = *piVar17;
      iVar7 = *piVar17;
      lVar8 = (long)iVar7;
      if ((int)(*(uint *)((long)puVar10 + -0x3d4) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(puVar10 + -0x7c,puVar4,lVar8 + 1);
        iVar7 = *piVar17;
      }
      *(undefined8 **)(puVar10[-0x7c] + (long)iVar7 * 8) = puVar18;
      *piVar17 = (int)(lVar8 + 1);
      puVar10[-0x60] = "hknpSolverData::ThreadData::m_jacMovingStream";
      plVar5 = (long *)*param_2;
      puVar10[-0x5e] = plVar5;
      *(undefined4 *)(puVar10 + -0x5d) = 0;
      *(undefined1 *)((long)puVar10 + -0x2e4) = 0;
      uVar6 = *(int *)(param_2 + 0xb) - 1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar8 = param_2[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar8,6);
        puVar18 = (undefined8 *)(lVar8 + 0x28);
        *(undefined4 *)(param_2 + 0xb) = 5;
      }
      else {
        *(uint *)(param_2 + 0xb) = uVar6;
        puVar18 = (undefined8 *)(param_2[1] + (ulong)uVar6 * 8);
      }
      puVar18 = (undefined8 *)*puVar18;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      piVar17 = (int *)(puVar10 + -0x5b);
      *(int *)((long)puVar18 + 4) = *piVar17;
      iVar7 = *piVar17;
      lVar8 = (long)iVar7;
      if ((int)(*(uint *)((long)puVar10 + -0x2d4) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(puVar10 + -0x5c,puVar4,lVar8 + 1);
        iVar7 = *piVar17;
      }
      *(undefined8 **)(puVar10[-0x5c] + (long)iVar7 * 8) = puVar18;
      *piVar17 = (int)(lVar8 + 1);
      puVar10[-0x40] = "hknpSolverData::ThreadData::m_jacFixedStream";
      plVar5 = (long *)*param_2;
      puVar10[-0x9e] = plVar5;
      *(undefined4 *)(puVar10 + -0x9d) = 0;
      *(undefined1 *)((long)puVar10 + -0x4e4) = 0;
      uVar6 = *(int *)(param_2 + 0xb) - 1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar8 = param_2[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar8,6);
        puVar18 = (undefined8 *)(lVar8 + 0x28);
        *(undefined4 *)(param_2 + 0xb) = 5;
      }
      else {
        *(uint *)(param_2 + 0xb) = uVar6;
        puVar18 = (undefined8 *)(param_2[1] + (ulong)uVar6 * 8);
      }
      puVar18 = (undefined8 *)*puVar18;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      piVar17 = (int *)(puVar10 + -0x9b);
      *(int *)((long)puVar18 + 4) = *piVar17;
      iVar7 = *piVar17;
      lVar8 = (long)iVar7;
      if ((int)(*(uint *)((long)puVar10 + -0x4d4) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(puVar10 + -0x9c,puVar4,lVar8 + 1);
        iVar7 = *piVar17;
      }
      *(undefined8 **)(puVar10[-0x9c] + (long)iVar7 * 8) = puVar18;
      *piVar17 = (int)(lVar8 + 1);
      puVar10[-0x80] = "hknpSolverData::ThreadData::m_activePairStream";
      plVar5 = (long *)*param_2;
      puVar10[-0x3e] = plVar5;
      *(undefined4 *)(puVar10 + -0x3d) = 0;
      *(undefined1 *)((long)puVar10 + -0x1e4) = 0;
      uVar6 = *(int *)(param_2 + 0xb) - 1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar8 = param_2[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar8,6);
        puVar18 = (undefined8 *)(lVar8 + 0x28);
        *(undefined4 *)(param_2 + 0xb) = 5;
      }
      else {
        *(uint *)(param_2 + 0xb) = uVar6;
        puVar18 = (undefined8 *)(param_2[1] + (ulong)uVar6 * 8);
      }
      puVar18 = (undefined8 *)*puVar18;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      piVar17 = (int *)(puVar10 + -0x3b);
      *(int *)((long)puVar18 + 4) = *piVar17;
      iVar7 = *piVar17;
      lVar8 = (long)iVar7;
      if ((int)(*(uint *)((long)puVar10 + -0x1d4) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(puVar10 + -0x3c,puVar4,lVar8 + 1);
        iVar7 = *piVar17;
      }
      *(undefined8 **)(puVar10[-0x3c] + (long)iVar7 * 8) = puVar18;
      *piVar17 = (int)(lVar8 + 1);
      puVar10[-0x20] = "hknpSolverData::ThreadData::m_jacConstraintsStream";
      plVar5 = (long *)*param_2;
      puVar10[-0x1e] = plVar5;
      *(undefined4 *)(puVar10 + -0x1d) = 0;
      *(undefined1 *)((long)puVar10 + -0xe4) = 0;
      uVar6 = *(int *)(param_2 + 0xb) - 1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar8 = param_2[1];
        (**(code **)(*plVar5 + 0x20))(plVar5,lVar8,6);
        puVar18 = (undefined8 *)(lVar8 + 0x28);
        *(undefined4 *)(param_2 + 0xb) = 5;
      }
      else {
        *(uint *)(param_2 + 0xb) = uVar6;
        puVar18 = (undefined8 *)(param_2[1] + (ulong)uVar6 * 8);
      }
      puVar18 = (undefined8 *)*puVar18;
      puVar18[2] = 0;
      puVar18[3] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      *(undefined4 *)((long)puVar18 + 4) = *(undefined4 *)(puVar10 + -0x1b);
      iVar7 = *(int *)(puVar10 + -0x1b);
      lVar8 = (long)iVar7;
      if ((int)(*(uint *)((long)puVar10 + -0xd4) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(puVar10 + -0x1c,puVar4,lVar8 + 1);
        iVar7 = *(int *)(puVar10 + -0x1b);
      }
      *(undefined8 **)(puVar10[-0x1c] + (long)iVar7 * 8) = puVar18;
      lVar15 = lVar15 + 0x500;
      param_3 = param_3 + -1;
      *(int *)(puVar10 + -0x1b) = (int)(lVar8 + 1);
      *puVar10 = "hknpSolverData::ThreadData::m_solverTempsStream";
    } while (param_3 != 0);
  }
  return;
}


