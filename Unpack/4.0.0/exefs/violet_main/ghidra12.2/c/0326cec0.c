/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326cec0; name: FUN_0326cec0
 */


void FUN_0326cec0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 local_48;
  
  puVar10 = PTR_DAT_047e6198;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar10 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar15;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
    plVar12 = (long *)(lVar15 + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = *plVar12 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  *param_1 = (long)(PTR_DAT_047e61a0 + 0x10);
  lVar15 = *(long *)(param_2 + 0x20);
  param_1[4] = lVar15;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
    plVar12 = (long *)(lVar15 + 0x10);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = *plVar12 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar14 = param_1 + 5;
  *plVar14 = 0;
  param_1[6] = 0;
  puVar10 = PTR_DAT_047d1a08;
  local_48 = 0xd98;
  plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar12,"hkcdPlanarGeometryPolygonCollection");
  }
  plVar12[1] = 0xffffffff;
  plVar12[2] = 1;
  plVar12[3] = 0;
  puVar11 = PTR_DAT_047e61a8;
  plVar12[4] = -0x8000000000000000;
  *plVar12 = (long)(puVar11 + 0x10);
  FUN_02e9b320(plVar12 + 3,PTR_PTR_047d1a50,8);
  iVar2 = (int)plVar12[4];
  if (iVar2 < 8) {
    *(undefined4 *)(plVar12 + 4) = 8;
    memset((void *)(plVar12[3] + (long)iVar2 * 4),0,(ulong)(7 - iVar2) * 4 + 4);
  }
  else if (iVar2 != 8) {
    *(undefined4 *)(plVar12 + 4) = 8;
  }
  puVar16 = (uint *)plVar12[3];
  puVar16[1] = 0;
  puVar16[2] = 4;
  puVar16[5] = 0;
  puVar16[6] = 4;
  *puVar16 = *puVar16 & 0x60000000;
  puVar16[7] = puVar16[7] & 0x3fffffff | 0x40000000;
  puVar16[3] = puVar16[3] & 0x3fffffff | 0x40000000;
  puVar16[4] = puVar16[4] & 0x60000000;
  memset(plVar12 + 5,0,0xd6c);
  plVar13 = (long *)*plVar14;
  if (((plVar13 != plVar12) && (*plVar14 = (long)plVar12, plVar13 != (long *)0x0)) &&
     (plVar13[1] != 0)) {
    plVar12 = plVar13 + 2;
    do {
      lVar15 = *plVar12;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))();
    }
  }
  local_48 = 0x28;
  plVar12 = (long *)(**(code **)puVar10)(0,&local_48,0);
  if (*(code **)(puVar10 + 0x10) != (code *)0x0) {
    (**(code **)(puVar10 + 0x10))(plVar12,"VertexStorage");
  }
  plVar12[2] = 1;
  plVar12[3] = 0;
  plVar12[4] = -0x8000000000000000;
  *plVar12 = (long)&PTR_LAB_046c82c8;
  plVar12[1] = 0xffffffff;
  plVar14 = (long *)param_1[6];
  if (((plVar14 != plVar12) && (param_1[6] = (long)plVar12, plVar14 != (long *)0x0)) &&
     (plVar14[1] != 0)) {
    plVar12 = plVar14 + 2;
    do {
      lVar15 = *plVar12;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))();
    }
  }
  FUN_0326d234(param_1[5],*(undefined8 *)(param_2 + 0x28));
  lVar15 = param_1[6];
  puVar20 = *(undefined8 **)(*(long *)(param_2 + 0x30) + 0x18);
  iVar7 = *(int *)(*(long *)(param_2 + 0x30) + 0x20);
  iVar3 = *(int *)(lVar15 + 0x20);
  iVar2 = iVar3 + iVar7;
  if ((int)(*(uint *)(lVar15 + 0x24) & 0x7fffffff) < iVar2) {
    FUN_0326e354((long *)(lVar15 + 0x18),(long)iVar2);
  }
  if (iVar7 != 0) {
    puVar17 = (undefined8 *)(*(long *)(lVar15 + 0x18) + (long)iVar3 * 0x20);
    lVar19 = (long)iVar7 * 0x20 + -0x20;
    puVar18 = puVar20;
    if (((uint)lVar19 >> 5 & 1) == 0) {
      uVar4 = puVar20[2];
      uVar5 = puVar20[3];
      puVar17[1] = puVar20[1];
      puVar17[2] = uVar4;
      puVar17[3] = uVar5;
      *puVar17 = *puVar20;
      puVar18 = puVar20 + 4;
      puVar17 = puVar17 + 4;
    }
    if (lVar19 != 0) {
      do {
        uVar4 = puVar18[2];
        uVar5 = puVar18[3];
        puVar17[1] = puVar18[1];
        puVar17[2] = uVar4;
        puVar17[3] = uVar5;
        *puVar17 = *puVar18;
        puVar1 = puVar18 + 6;
        uVar5 = puVar18[7];
        uVar4 = puVar18[4];
        uVar6 = puVar18[5];
        puVar18 = puVar18 + 8;
        puVar17[6] = *puVar1;
        puVar17[7] = uVar5;
        puVar17[4] = uVar4;
        puVar17[5] = uVar6;
        puVar17 = puVar17 + 8;
      } while (puVar18 != puVar20 + (long)iVar7 * 4);
    }
  }
  *(int *)(lVar15 + 0x20) = iVar2;
  return;
}


