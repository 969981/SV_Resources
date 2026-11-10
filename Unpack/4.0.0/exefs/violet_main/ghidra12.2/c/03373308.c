/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03373308; name: FUN_03373308
 */


undefined8 FUN_03373308(long param_1,int *param_2,byte *param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  
  pbVar9 = param_3;
  do {
    if ((*pbVar9 & 1) != 0) {
      if ((pbVar9 != (byte *)0x0) &&
         (iVar8 = (int)((ulong)*(undefined8 *)(pbVar9 + 0x10) >> 8), iVar8 != 0)) goto LAB_03373350;
      break;
    }
    pbVar9 = *(byte **)(pbVar9 + 8);
  } while (pbVar9 != (byte *)0x0);
  iVar8 = *param_2;
  if (iVar8 == 0) {
    uVar17 = param_4[3];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    param_4[3] = 0;
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    plVar7 = (long *)(uVar17 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      iVar8 = (int)*plVar1;
      cVar4 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar19) {
        *(int *)plVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_033735a0;
  }
  puVar16 = (undefined8 *)(**(long **)(param_1 + 0x10) + (long)iVar8 * 0x18);
  uVar3 = *puVar16;
  puVar11 = (ulong *)puVar16[1];
  if (*(char *)(puVar16 + 2) == '\x01') {
    iVar8 = *(int *)(**(long **)(param_1 + 0x10) + (long)iVar8 * 0x18 + 0x14);
  }
  else {
    iVar8 = -1;
  }
  if (puVar11 != (ulong *)0x0) {
    puVar15 = puVar11;
LAB_033733a4:
    uVar17 = *puVar15;
    if (((uint)uVar17 >> 2 & 1) == 0) goto code_r0x033733ac;
    uVar17 = puVar15[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
    if ((uVar17 & 1) != 0) {
      piVar2 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar19) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar19 = false;
      goto LAB_033734a8;
    }
    goto LAB_03373428;
  }
  uVar17 = 0;
  uVar12 = 0;
  uVar18 = 0;
  iVar13 = -iVar8;
  if (-1 < iVar8) {
    iVar13 = iVar8;
  }
  bVar19 = true;
  goto LAB_03373540;
  while (param_3 = *(byte **)(param_3 + 8), param_3 != (byte *)0x0) {
LAB_03373350:
    if ((*param_3 >> 1 & 1) != 0) {
      puVar11 = *(ulong **)(param_3 + 0x18);
      if (puVar11 == (ulong *)0x0) goto LAB_03373454;
      puVar15 = puVar11;
      goto LAB_0337343c;
    }
  }
  puVar11 = (ulong *)0x0;
LAB_03373454:
  uVar17 = 0;
  uVar12 = 0;
  goto LAB_0337345c;
  while (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0) {
LAB_0337343c:
    uVar14 = (uint)*puVar15;
    if ((uVar14 >> 0x14 & 1) != 0) {
      uVar12 = 0;
      if (puVar15 != (ulong *)0x0) {
        uVar17 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
        uVar12 = (uint)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                     POPCOUNT((char)(uVar17 >> 8)) +
                                                    POPCOUNT((char)(uVar17 >> 0x10))) + 2];
      }
      goto LAB_033735f4;
    }
    if ((*puVar15 & 1) != 0) {
      uVar12 = 0;
      goto LAB_033735f4;
    }
  }
  uVar12 = 0;
LAB_033735f4:
  puVar15 = puVar11;
  do {
    uVar17 = *puVar15;
    if (((uint)uVar17 >> 2 & 1) != 0) {
      uVar17 = puVar15[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
      if ((uVar17 & 1) != 0) {
        piVar2 = (int *)((uVar17 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar19) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      goto LAB_0337345c;
    }
    puVar15 = (ulong *)puVar15[1];
  } while (puVar15 != (ulong *)0x0);
  uVar17 = 0;
LAB_0337345c:
  *(int *)(param_4 + 2) = iVar8;
  *(uint *)((long)param_4 + 0x14) = uVar12;
  uVar18 = param_4[3];
  param_4[3] = uVar17;
  *param_4 = param_2;
  param_4[1] = puVar11;
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  plVar7 = (long *)(uVar18 & 0xfffffffffffffffe);
  plVar1 = plVar7 + 1;
  do {
    iVar8 = (int)*plVar1;
    cVar4 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *(int *)plVar1 = iVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_033735a0;
code_r0x033733ac:
  puVar15 = (ulong *)puVar15[1];
  if (puVar15 == (ulong *)0x0) goto code_r0x033733b4;
  goto LAB_033733a4;
code_r0x033733b4:
  uVar17 = 0;
LAB_03373428:
  bVar19 = true;
LAB_033734a8:
  iVar13 = -iVar8;
  if (-1 < iVar8) {
    iVar13 = iVar8;
  }
  puVar15 = puVar11;
  do {
    uVar14 = (uint)*puVar15;
    if ((uVar14 >> 0x14 & 1) != 0) {
      uVar12 = 0;
      if (puVar15 != (ulong *)0x0) {
        uVar18 = CONCAT44(uVar14,uVar14) & 0xfffff000fffff;
        uVar12 = (uint)(ushort)puVar15[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                     POPCOUNT((char)(uVar18 >> 8)) +
                                                    POPCOUNT((char)(uVar18 >> 0x10))) + 2];
      }
      goto LAB_033734f8;
    }
    if ((*puVar15 & 1) != 0) {
      uVar12 = 0;
      goto LAB_033734f8;
    }
    puVar15 = (ulong *)puVar15[1];
  } while (puVar15 != (ulong *)0x0);
  uVar12 = 0;
LAB_033734f8:
  puVar15 = puVar11;
  do {
    uVar18 = *puVar15;
    if (((uint)uVar18 >> 2 & 1) != 0) {
      uVar18 = puVar15[(uVar18 >> 1 & 1) + (uVar18 & 1) + 2];
      if ((uVar18 & 1) != 0) {
        piVar2 = (int *)((uVar18 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      goto LAB_03373540;
    }
    puVar15 = (ulong *)puVar15[1];
  } while (puVar15 != (ulong *)0x0);
  uVar18 = 0;
LAB_03373540:
  *param_4 = uVar3;
  param_4[1] = puVar11;
  uVar10 = param_4[3];
  *(int *)(param_4 + 2) = iVar13;
  *(uint *)((long)param_4 + 0x14) = uVar12;
  param_4[3] = uVar18;
  if ((uVar10 & 1) != 0) {
    plVar7 = (long *)(uVar10 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if (bVar19) {
    return 0;
  }
  plVar7 = (long *)(uVar17 & 0xfffffffffffffffe);
  plVar1 = plVar7 + 1;
  do {
    iVar8 = (int)*plVar1;
    cVar4 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *(int *)plVar1 = iVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_033735a0:
  if ((plVar7 != (long *)0x0) && (iVar8 == 1)) {
    (**(code **)(*plVar7 + 8))();
  }
  return 0;
}


