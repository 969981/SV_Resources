/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03374d10; name: FUN_03374d10
 */


undefined8 FUN_03374d10(long param_1,int *param_2,byte *param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  
  pbVar9 = param_3;
  do {
    if ((*pbVar9 & 1) != 0) {
      if ((pbVar9 != (byte *)0x0) &&
         (iVar8 = (int)((ulong)*(undefined8 *)(pbVar9 + 0x10) >> 8), iVar8 != 0)) goto LAB_03374d58;
      break;
    }
    pbVar9 = *(byte **)(pbVar9 + 8);
  } while (pbVar9 != (byte *)0x0);
  if (*param_2 == 0) {
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
    goto LAB_03374f94;
  }
  puVar3 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + (long)*param_2 * 0x10);
  uVar10 = *puVar3;
  iVar8 = *(int *)((long)puVar3 + 0xc);
  puVar12 = *(ulong **)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (long)*(int *)(puVar3 + 1) * 8);
  if (puVar12 != (ulong *)0x0) {
    puVar16 = puVar12;
LAB_03374da0:
    uVar17 = *puVar16;
    if (((uint)uVar17 >> 2 & 1) == 0) goto code_r0x03374da8;
    uVar17 = puVar16[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
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
      goto LAB_03374e9c;
    }
    goto LAB_03374e1c;
  }
  uVar17 = 0;
  uVar13 = 0;
  uVar18 = 0;
  iVar14 = -iVar8;
  if (-1 < iVar8) {
    iVar14 = iVar8;
  }
  bVar19 = true;
  goto LAB_03374f34;
  while (param_3 = *(byte **)(param_3 + 8), param_3 != (byte *)0x0) {
LAB_03374d58:
    if ((*param_3 >> 1 & 1) != 0) {
      puVar12 = *(ulong **)(param_3 + 0x18);
      if (puVar12 == (ulong *)0x0) goto LAB_03374e48;
      puVar16 = puVar12;
      goto LAB_03374e30;
    }
  }
  puVar12 = (ulong *)0x0;
LAB_03374e48:
  uVar17 = 0;
  uVar13 = 0;
  goto LAB_03374e50;
  while (puVar16 = (ulong *)puVar16[1], puVar16 != (ulong *)0x0) {
LAB_03374e30:
    uVar15 = (uint)*puVar16;
    if ((uVar15 >> 0x14 & 1) != 0) {
      uVar13 = 0;
      if (puVar16 != (ulong *)0x0) {
        uVar17 = CONCAT44(uVar15,uVar15) & 0xfffff000fffff;
        uVar13 = (uint)(ushort)puVar16[(ulong)(byte)(POPCOUNT((char)uVar17) +
                                                     POPCOUNT((char)(uVar17 >> 8)) +
                                                    POPCOUNT((char)(uVar17 >> 0x10))) + 2];
      }
      goto LAB_03374fe8;
    }
    if ((*puVar16 & 1) != 0) {
      uVar13 = 0;
      goto LAB_03374fe8;
    }
  }
  uVar13 = 0;
LAB_03374fe8:
  puVar16 = puVar12;
  do {
    uVar17 = *puVar16;
    if (((uint)uVar17 >> 2 & 1) != 0) {
      uVar17 = puVar16[(uVar17 >> 1 & 1) + (uVar17 & 1) + 2];
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
      goto LAB_03374e50;
    }
    puVar16 = (ulong *)puVar16[1];
  } while (puVar16 != (ulong *)0x0);
  uVar17 = 0;
LAB_03374e50:
  *(int *)(param_4 + 2) = iVar8;
  *(uint *)((long)param_4 + 0x14) = uVar13;
  uVar18 = param_4[3];
  param_4[3] = uVar17;
  *param_4 = param_2;
  param_4[1] = puVar12;
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
  goto LAB_03374f94;
code_r0x03374da8:
  puVar16 = (ulong *)puVar16[1];
  if (puVar16 == (ulong *)0x0) goto code_r0x03374db0;
  goto LAB_03374da0;
code_r0x03374db0:
  uVar17 = 0;
LAB_03374e1c:
  bVar19 = true;
LAB_03374e9c:
  iVar14 = -iVar8;
  if (-1 < iVar8) {
    iVar14 = iVar8;
  }
  puVar16 = puVar12;
  do {
    uVar15 = (uint)*puVar16;
    if ((uVar15 >> 0x14 & 1) != 0) {
      uVar13 = 0;
      if (puVar16 != (ulong *)0x0) {
        uVar18 = CONCAT44(uVar15,uVar15) & 0xfffff000fffff;
        uVar13 = (uint)(ushort)puVar16[(ulong)(byte)(POPCOUNT((char)uVar18) +
                                                     POPCOUNT((char)(uVar18 >> 8)) +
                                                    POPCOUNT((char)(uVar18 >> 0x10))) + 2];
      }
      goto LAB_03374eec;
    }
    if ((*puVar16 & 1) != 0) {
      uVar13 = 0;
      goto LAB_03374eec;
    }
    puVar16 = (ulong *)puVar16[1];
  } while (puVar16 != (ulong *)0x0);
  uVar13 = 0;
LAB_03374eec:
  puVar16 = puVar12;
  do {
    uVar18 = *puVar16;
    if (((uint)uVar18 >> 2 & 1) != 0) {
      uVar18 = puVar16[(uVar18 >> 1 & 1) + (uVar18 & 1) + 2];
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
      goto LAB_03374f34;
    }
    puVar16 = (ulong *)puVar16[1];
  } while (puVar16 != (ulong *)0x0);
  uVar18 = 0;
LAB_03374f34:
  *param_4 = uVar10;
  param_4[1] = puVar12;
  uVar11 = param_4[3];
  *(int *)(param_4 + 2) = iVar14;
  *(uint *)((long)param_4 + 0x14) = uVar13;
  param_4[3] = uVar18;
  if ((uVar11 & 1) != 0) {
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
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
LAB_03374f94:
  if ((plVar7 != (long *)0x0) && (iVar8 == 1)) {
    (**(code **)(*plVar7 + 8))();
  }
  return 0;
}


