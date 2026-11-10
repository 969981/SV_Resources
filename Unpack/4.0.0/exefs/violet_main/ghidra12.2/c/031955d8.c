/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031955d8; name: FUN_031955d8
 */


long FUN_031955d8(long param_1,long param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  size_t sVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  ulong *puVar20;
  char *pcVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  
  pcVar21 = (char *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffe);
  uVar19 = *(ulong *)(param_1 + 0x18);
  if ((char *)(uVar19 & 0xfffffffffffffffe) != pcVar21) {
    if (pcVar21 == (char *)0x0) {
      uVar12 = 0;
    }
    else {
      sVar7 = strlen(pcVar21);
      sVar7 = (size_t)((int)sVar7 + 1);
      pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar7);
      memcpy(pvVar8,pcVar21,sVar7);
      uVar12 = (ulong)pvVar8 | 1;
    }
    *(ulong *)(param_1 + 0x18) = uVar12;
    if ((uVar19 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar19 - 1,0);
    }
  }
  if (param_2 != param_1) {
    iVar18 = *(int *)(param_2 + 0x28);
    pvVar8 = *(void **)(param_2 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar18) {
      FUN_0319620c(param_1 + 0x20,PTR_PTR_047d1a50,(long)iVar18);
    }
    memcpy(*(void **)(param_1 + 0x20),pvVar8,(long)iVar18 << 1);
    *(int *)(param_1 + 0x28) = iVar18;
    uVar3 = *(uint *)(param_2 + 0x38);
    puVar23 = *(ulong **)(param_2 + 0x30);
    plVar17 = (long *)(param_1 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < (int)uVar3) {
      FUN_031962b8(plVar17,(long)(int)uVar3);
    }
    puVar6 = PTR_DAT_047d1a08;
    uVar11 = *(uint *)(param_1 + 0x38);
    if ((int)uVar3 < (int)uVar11) {
      lVar22 = (long)(int)uVar3 * 0x10 + (long)(int)uVar11 * -0x10;
      puVar24 = (ulong *)(*plVar17 + (long)(int)uVar11 * 0x10);
      do {
        puVar24 = puVar24 + -2;
        if ((*puVar24 & 1) != 0) {
          (**(code **)(puVar6 + 8))(0,*puVar24 - 1,0);
        }
        lVar22 = lVar22 + 0x10;
      } while (lVar22 != 0);
      uVar11 = *(uint *)(param_1 + 0x38);
    }
    puVar6 = PTR_PTR_047d1a50;
    puVar24 = (ulong *)*plVar17;
    if ((int)uVar3 <= (int)uVar11) {
      uVar11 = uVar3;
    }
    uVar19 = (ulong)uVar11;
    if ((puVar24 != puVar23) && (0 < (int)uVar11)) {
      puVar20 = puVar23 + 1;
      do {
        pcVar21 = (char *)(puVar20[-1] & 0xfffffffffffffffe);
        uVar12 = *puVar24;
        if ((char *)(uVar12 & 0xfffffffffffffffe) != pcVar21) {
          if (pcVar21 == (char *)0x0) {
            uVar13 = 0;
          }
          else {
            sVar7 = strlen(pcVar21);
            sVar7 = (size_t)((int)sVar7 + 1);
            pvVar8 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar7);
            memcpy(pvVar8,pcVar21,sVar7);
            uVar13 = (ulong)pvVar8 | 1;
          }
          *puVar24 = uVar13;
          if ((uVar12 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
          }
        }
        *(char *)(puVar24 + 1) = (char)*puVar20;
        puVar24 = puVar24 + 2;
        uVar19 = uVar19 - 1;
        puVar20 = puVar20 + 2;
      } while (uVar19 != 0);
      puVar24 = (ulong *)*plVar17;
    }
    puVar6 = PTR_PTR_047d1a50;
    iVar18 = uVar3 - uVar11;
    if (0 < iVar18) {
      puVar23 = puVar23 + (long)(int)uVar11 * 2;
      puVar24 = puVar24 + (long)(int)uVar11 * 2;
      do {
        *puVar24 = 0;
        if (puVar24 != puVar23) {
          pcVar21 = (char *)(*puVar23 & 0xfffffffffffffffe);
          if (pcVar21 != (char *)0x0) {
            sVar7 = strlen(pcVar21);
            sVar7 = (size_t)((int)sVar7 + 1);
            pvVar8 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar7);
            memcpy(pvVar8,pcVar21,sVar7);
            *puVar24 = (ulong)pvVar8 | 1;
          }
          *(char *)(puVar24 + 1) = (char)puVar23[1];
        }
        iVar18 = iVar18 + -1;
        puVar23 = puVar23 + 2;
        puVar24 = puVar24 + 2;
      } while (iVar18 != 0);
    }
    *(uint *)(param_1 + 0x38) = uVar3;
    iVar18 = *(int *)(param_2 + 0x48);
    pvVar8 = *(void **)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar18) {
      FUN_0319643c(param_1 + 0x40,(long)iVar18);
    }
    memcpy(*(void **)(param_1 + 0x40),pvVar8,(long)iVar18 * 0x30);
    *(int *)(param_1 + 0x48) = iVar18;
    iVar18 = *(int *)(param_2 + 0x58);
    pvVar8 = *(void **)(param_2 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar18) {
      FUN_03041abc(param_1 + 0x50,PTR_PTR_047d1a50,(long)iVar18);
    }
    memcpy(*(void **)(param_1 + 0x50),pvVar8,(long)iVar18 << 2);
    *(int *)(param_1 + 0x58) = iVar18;
    uVar3 = *(uint *)(param_2 + 0x68);
    puVar23 = *(ulong **)(param_2 + 0x60);
    plVar17 = (long *)(param_1 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < (int)uVar3) {
      FUN_030427e4(plVar17,PTR_PTR_047d1a50,(long)(int)uVar3);
    }
    puVar6 = PTR_DAT_047d1a08;
    uVar11 = *(uint *)(param_1 + 0x68);
    if ((int)uVar3 < (int)uVar11) {
      lVar22 = (long)(int)uVar3 * 8 + (long)(int)uVar11 * -8;
      puVar24 = (ulong *)(*plVar17 + (long)(int)uVar11 * 8);
      do {
        puVar24 = puVar24 + -1;
        if ((*puVar24 & 1) != 0) {
          (**(code **)(puVar6 + 8))(0,*puVar24 - 1,0);
        }
        lVar22 = lVar22 + 8;
      } while (lVar22 != 0);
      uVar11 = *(uint *)(param_1 + 0x68);
    }
    puVar6 = PTR_PTR_047d1a50;
    puVar24 = (ulong *)*plVar17;
    if ((int)uVar3 <= (int)uVar11) {
      uVar11 = uVar3;
    }
    uVar19 = (ulong)uVar11;
    if ((puVar24 != puVar23) && (0 < (int)uVar11)) {
      puVar20 = puVar23;
      do {
        pcVar21 = (char *)(*puVar20 & 0xfffffffffffffffe);
        uVar12 = *puVar24;
        if ((char *)(uVar12 & 0xfffffffffffffffe) != pcVar21) {
          if (pcVar21 == (char *)0x0) {
            uVar13 = 0;
          }
          else {
            sVar7 = strlen(pcVar21);
            sVar7 = (size_t)((int)sVar7 + 1);
            pvVar8 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar7);
            memcpy(pvVar8,pcVar21,sVar7);
            uVar13 = (ulong)pvVar8 | 1;
          }
          *puVar24 = uVar13;
          if ((uVar12 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
          }
        }
        puVar24 = puVar24 + 1;
        uVar19 = uVar19 - 1;
        puVar20 = puVar20 + 1;
      } while (uVar19 != 0);
      puVar24 = (ulong *)*plVar17;
    }
    puVar6 = PTR_PTR_047d1a50;
    iVar18 = uVar3 - uVar11;
    if (0 < iVar18) {
      puVar23 = puVar23 + (int)uVar11;
      puVar24 = puVar24 + (int)uVar11;
      do {
        *puVar24 = 0;
        pcVar21 = (char *)(*puVar23 & 0xfffffffffffffffe);
        if (pcVar21 != (char *)0x0) {
          sVar7 = strlen(pcVar21);
          sVar7 = (size_t)((int)sVar7 + 1);
          pvVar8 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar7);
          memcpy(pvVar8,pcVar21,sVar7);
          *puVar24 = (ulong)pvVar8 | 1;
        }
        iVar18 = iVar18 + -1;
        puVar23 = puVar23 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar18 != 0);
    }
    *(uint *)(param_1 + 0x68) = uVar3;
    uVar3 = *(uint *)(param_2 + 0x78);
    lVar22 = *(long *)(param_2 + 0x70);
    plVar17 = (long *)(param_1 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) < (int)uVar3) {
      FUN_031964f4(plVar17,(long)(int)uVar3);
    }
    uVar11 = *(uint *)(param_1 + 0x78);
    if ((int)uVar3 < (int)uVar11) {
      lVar15 = *plVar17;
      plVar14 = (long *)(lVar15 + (long)(int)uVar11 * 0x10);
      do {
        plVar14 = plVar14 + -2;
        plVar9 = (long *)*plVar14;
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar2 = plVar9 + 2;
          do {
            lVar16 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
      } while (plVar14 != (long *)(lVar15 + (long)(int)uVar3 * 0x10));
      uVar11 = *(uint *)(param_1 + 0x78);
    }
    lVar15 = *plVar17;
    if ((int)uVar3 <= (int)uVar11) {
      uVar11 = uVar3;
    }
    if ((lVar15 != lVar22) && (0 < (int)uVar11)) {
      uVar19 = 0;
      do {
        plVar9 = (long *)(lVar22 + uVar19 * 0x10);
        plVar14 = (long *)*plVar9;
        plVar2 = (long *)(lVar15 + uVar19 * 0x10);
        plVar10 = (long *)*plVar2;
        if (plVar10 != plVar14) {
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar14 = plVar14 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = *plVar14 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            plVar10 = (long *)*plVar2;
            plVar14 = (long *)*plVar9;
          }
          *plVar2 = (long)plVar14;
          if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
            plVar14 = plVar10 + 2;
            do {
              lVar16 = *plVar14;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *plVar14 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))();
            }
          }
        }
        uVar19 = uVar19 + 1;
        *(short *)(plVar2 + 1) = (short)plVar9[1];
      } while (uVar19 != uVar11);
      lVar15 = *plVar17;
    }
    if (0 < (int)(uVar3 - uVar11)) {
      iVar18 = 0;
      plVar17 = (long *)(lVar22 + (long)(int)uVar11 * 0x10);
      plVar14 = (long *)(lVar15 + (long)(int)uVar11 * 0x10);
      do {
        lVar22 = *plVar17;
        *plVar14 = lVar22;
        if ((lVar22 != 0) && (*(long *)(lVar22 + 8) != 0)) {
          plVar9 = (long *)(lVar22 + 0x10);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *plVar9 = *plVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iVar18 = iVar18 + 1;
        *(short *)(plVar14 + 1) = (short)plVar17[1];
        plVar17 = plVar17 + 2;
        plVar14 = plVar14 + 2;
      } while (iVar18 != uVar3 - uVar11);
    }
    *(uint *)(param_1 + 0x78) = uVar3;
    uVar3 = *(uint *)(param_2 + 0x88);
    puVar23 = *(ulong **)(param_2 + 0x80);
    plVar17 = (long *)(param_1 + 0x80);
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) < (int)uVar3) {
      FUN_03196668(plVar17,(long)(int)uVar3);
    }
    puVar6 = PTR_DAT_047d1a08;
    uVar11 = *(uint *)(param_1 + 0x88);
    if ((int)uVar3 < (int)uVar11) {
      lVar22 = (long)(int)uVar3 * 0x10 + (long)(int)uVar11 * -0x10;
      puVar24 = (ulong *)(*plVar17 + (long)(int)uVar11 * 0x10);
      do {
        puVar24 = puVar24 + -2;
        if ((*puVar24 & 1) != 0) {
          (**(code **)(puVar6 + 8))(0,*puVar24 - 1,0);
        }
        lVar22 = lVar22 + 0x10;
      } while (lVar22 != 0);
      uVar11 = *(uint *)(param_1 + 0x88);
    }
    puVar6 = PTR_PTR_047d1a50;
    puVar24 = (ulong *)*plVar17;
    if ((int)uVar3 <= (int)uVar11) {
      uVar11 = uVar3;
    }
    uVar19 = (ulong)uVar11;
    if ((puVar24 != puVar23) && (0 < (int)uVar11)) {
      puVar20 = puVar23 + 1;
      do {
        pcVar21 = (char *)(puVar20[-1] & 0xfffffffffffffffe);
        uVar12 = *puVar24;
        if ((char *)(uVar12 & 0xfffffffffffffffe) != pcVar21) {
          if (pcVar21 == (char *)0x0) {
            uVar13 = 0;
          }
          else {
            sVar7 = strlen(pcVar21);
            sVar7 = (size_t)((int)sVar7 + 1);
            pvVar8 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar7);
            memcpy(pvVar8,pcVar21,sVar7);
            uVar13 = (ulong)pvVar8 | 1;
          }
          *puVar24 = uVar13;
          if ((uVar12 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar12 - 1,0);
          }
        }
        *(int *)(puVar24 + 1) = (int)*puVar20;
        puVar24 = puVar24 + 2;
        uVar19 = uVar19 - 1;
        puVar20 = puVar20 + 2;
      } while (uVar19 != 0);
      puVar24 = (ulong *)*plVar17;
    }
    puVar6 = PTR_PTR_047d1a50;
    iVar18 = uVar3 - uVar11;
    if (0 < iVar18) {
      puVar23 = puVar23 + (long)(int)uVar11 * 2;
      puVar24 = puVar24 + (long)(int)uVar11 * 2;
      do {
        *puVar24 = 0;
        pcVar21 = (char *)(*puVar23 & 0xfffffffffffffffe);
        if (pcVar21 != (char *)0x0) {
          sVar7 = strlen(pcVar21);
          sVar7 = (size_t)((int)sVar7 + 1);
          pvVar8 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar7);
          memcpy(pvVar8,pcVar21,sVar7);
          *puVar24 = (ulong)pvVar8 | 1;
        }
        *(short *)(puVar24 + 1) = (short)puVar23[1];
        puVar1 = (undefined2 *)((long)puVar23 + 10);
        iVar18 = iVar18 + -1;
        puVar23 = puVar23 + 2;
        *(undefined2 *)((long)puVar24 + 10) = *puVar1;
        puVar24 = puVar24 + 2;
      } while (iVar18 != 0);
    }
    *(uint *)(param_1 + 0x88) = uVar3;
  }
  return param_1;
}


