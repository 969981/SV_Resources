/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030db080; name: FUN_030db080
 */


void FUN_030db080(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  puVar7 = PTR_PTR_047d1a50;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar3 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    puVar17 = (undefined4 *)*param_2;
    puVar8 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar3 << 2);
    uVar13 = uVar3 & 3;
    *param_1 = puVar8;
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (2 < uVar3 - 1) {
      iVar14 = -(uVar3 & 0xfffffffc);
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar17;
        puVar9[1] = puVar17[1];
        puVar9[2] = puVar17[2];
        puVar1 = puVar17 + 3;
        puVar8 = puVar9 + 4;
        puVar17 = puVar17 + 4;
        iVar14 = iVar14 + 4;
        puVar9[3] = *puVar1;
        puVar9 = puVar8;
      } while (iVar14 != 0);
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar8 = *puVar17;
      puVar8 = puVar8 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  if (*(int *)(param_2[2] + 4) == -2) {
    param_1[2] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    pvVar12 = (void *)(**(code **)(*(long *)puVar7 + 0x18))
                                (puVar7,(long)*(int *)(param_2 + 3) * 8 + 8);
    param_1[2] = pvVar12;
    memcpy(pvVar12,(void *)param_2[2],(long)*(int *)(param_2 + 3) * 8 + 8);
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 5);
  if ((int)uVar3 < 1) {
    param_1[4] = 0;
    param_1[5] = 0x8000000000000000;
  }
  else {
    puVar18 = (undefined8 *)param_2[4];
    puVar10 = (undefined8 *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,(ulong)uVar3 * 0xc);
    param_1[4] = puVar10;
    *(uint *)(param_1 + 5) = uVar3;
    *(uint *)((long)param_1 + 0x2c) = uVar3;
    if (uVar3 != 1) {
      iVar14 = -(uVar3 & 0xfffffffe);
      puVar11 = puVar10;
      puVar19 = puVar18;
      do {
        uVar16 = *puVar19;
        puVar10 = puVar11 + 3;
        puVar18 = puVar19 + 3;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar19 + 1);
        *puVar11 = uVar16;
        uVar4 = *(undefined4 *)((long)puVar19 + 0x14);
        iVar14 = iVar14 + 2;
        *(undefined8 *)((long)puVar11 + 0xc) = *(undefined8 *)((long)puVar19 + 0xc);
        *(undefined4 *)((long)puVar11 + 0x14) = uVar4;
        puVar11 = puVar10;
        puVar19 = puVar18;
      } while (iVar14 != 0);
    }
    if ((uVar3 & 1) != 0) {
      uVar16 = *puVar18;
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar18 + 1);
      *puVar10 = uVar16;
    }
  }
  if (*(int *)(param_2[6] + 4) == -2) {
    param_1[6] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    pvVar12 = (void *)(**(code **)(*(long *)puVar7 + 0x18))
                                (puVar7,(long)*(int *)(param_2 + 7) * 8 + 8);
    param_1[6] = pvVar12;
    memcpy(pvVar12,(void *)param_2[6],(long)*(int *)(param_2 + 7) * 8 + 8);
  }
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 9);
  if ((int)uVar3 < 1) {
    param_1[8] = 0;
    param_1[9] = 0x8000000000000000;
  }
  else {
    puVar17 = (undefined4 *)param_2[8];
    puVar8 = (undefined4 *)(**(code **)(*(long *)puVar7 + 0x18))(puVar7,(ulong)uVar3 << 4);
    uVar13 = 0;
    param_1[8] = puVar8;
    *(uint *)(param_1 + 9) = uVar3;
    *(uint *)((long)param_1 + 0x4c) = uVar3;
    do {
      *puVar8 = *puVar17;
      lVar15 = *(long *)(puVar17 + 2);
      *(long *)(puVar8 + 2) = lVar15;
      puVar8 = puVar8 + 4;
      puVar17 = puVar17 + 4;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
        plVar2 = (long *)(lVar15 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  if (*(int *)(param_2[10] + 4) == -2) {
    param_1[10] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xb) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  pvVar12 = (void *)(**(code **)(*(long *)puVar7 + 0x18))
                              (puVar7,(long)*(int *)(param_2 + 0xb) * 8 + 8);
  param_1[10] = pvVar12;
  memcpy(pvVar12,(void *)param_2[10],(long)*(int *)(param_2 + 0xb) * 8 + 8);
  return;
}


