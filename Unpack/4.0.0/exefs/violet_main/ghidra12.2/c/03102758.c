/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03102758; name: FUN_03102758
 */


void FUN_03102758(long *param_1,long param_2,long param_3,long *param_4,undefined8 *param_5,
                 long param_6,long *param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  puVar6 = PTR_DAT_047e5218;
  param_1[2] = 1;
  param_1[3] = param_3;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[5] = param_4[1];
  param_1[4] = *param_4;
  uVar15 = (ulong)(param_6 - (long)param_5) >> 4;
  uVar14 = (uint)uVar15;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  if ((int)uVar14 < 1) {
    param_1[6] = 0;
    param_1[7] = -0x8000000000000000;
  }
  else {
    puVar7 = (undefined8 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                       (PTR_PTR_047d1a50,param_6 - (long)param_5 & 0xffffffff0);
    param_1[6] = (long)puVar7;
    *(uint *)(param_1 + 7) = uVar14;
    *(uint *)((long)param_1 + 0x3c) = uVar14;
    if (uVar14 != 1) {
      iVar9 = -(uVar14 & 0xfffffffe);
      puVar8 = puVar7;
      do {
        puVar8[1] = param_5[1];
        *puVar8 = *param_5;
        puVar8[3] = param_5[3];
        puVar2 = param_5 + 2;
        puVar7 = puVar8 + 4;
        param_5 = param_5 + 4;
        iVar9 = iVar9 + 2;
        puVar8[2] = *puVar2;
        puVar8 = puVar7;
      } while (iVar9 != 0);
    }
    if ((uVar15 & 1) != 0) {
      puVar7[1] = param_5[1];
      *puVar7 = *param_5;
    }
  }
  lVar10 = *param_7;
  param_1[8] = lVar10;
  if ((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) {
    plVar3 = (long *)(lVar10 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  iVar9 = *(int *)(param_2 + 0x20);
  if (0 < iVar9) {
    FUN_03086764(param_1 + 9,PTR_PTR_047d1a50);
    iVar9 = *(int *)(param_2 + 0x20);
  }
  if (iVar9 != 0) {
    lVar12 = *(long *)(param_2 + 0x18);
    lVar11 = (long)(int)param_1[10];
    lVar13 = (long)iVar9 * 0x40 + -0x40;
    lVar10 = lVar12;
    if (((uint)lVar13 >> 6 & 1) == 0) {
      *(undefined4 *)(param_1[9] + lVar11 * 4) = *(undefined4 *)(lVar12 + 0x34);
      lVar11 = lVar11 + 1;
      *(int *)(param_1 + 10) = (int)lVar11;
      lVar10 = lVar12 + 0x40;
    }
    if (lVar13 != 0) {
      do {
        *(undefined4 *)(param_1[9] + lVar11 * 4) = *(undefined4 *)(lVar10 + 0x34);
        *(int *)(param_1 + 10) = (int)lVar11 + 1;
        puVar1 = (undefined4 *)(lVar10 + 0x74);
        lVar10 = lVar10 + 0x80;
        lVar13 = lVar11 * 4;
        lVar11 = lVar11 + 2;
        *(undefined4 *)(param_1[9] + lVar13 + 4) = *puVar1;
        *(int *)(param_1 + 10) = (int)lVar11;
      } while (lVar12 + (long)iVar9 * 0x40 != lVar10);
    }
  }
  return;
}


