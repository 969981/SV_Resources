/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030af550; name: FUN_030af550
 */


void FUN_030af550(long *param_1,long param_2,long param_3,long *param_4,undefined8 *param_5,
                 long param_6,long *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  puVar8 = PTR_DAT_047e50d8;
  param_1[2] = 1;
  param_1[3] = param_3;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[5] = param_4[1];
  lVar12 = *param_4;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[4] = lVar12;
  uVar16 = (ulong)(param_6 - (long)param_5) >> 5;
  uVar15 = (uint)uVar16;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  if ((int)uVar15 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    puVar9 = (undefined8 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                       (PTR_PTR_047d1a50,param_6 - (long)param_5 & 0x1fffffffe0);
    param_1[7] = (long)puVar9;
    *(uint *)(param_1 + 8) = uVar15;
    *(uint *)((long)param_1 + 0x44) = uVar15;
    if (uVar15 != 1) {
      iVar11 = -(uVar15 & 0xfffffffe);
      puVar10 = puVar9;
      do {
        puVar10[1] = param_5[1];
        *puVar10 = *param_5;
        *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_5 + 2);
        puVar10[5] = param_5[5];
        puVar10[4] = param_5[4];
        puVar2 = param_5 + 6;
        puVar9 = puVar10 + 8;
        param_5 = param_5 + 8;
        iVar11 = iVar11 + 2;
        *(undefined4 *)(puVar10 + 6) = *(undefined4 *)puVar2;
        puVar10 = puVar9;
      } while (iVar11 != 0);
    }
    if ((uVar16 & 1) != 0) {
      puVar9[1] = param_5[1];
      *puVar9 = *param_5;
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_5 + 2);
    }
  }
  lVar12 = *param_7;
  param_1[9] = lVar12;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
    plVar4 = (long *)(lVar12 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = *plVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[0xf] = -0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar11 = *(int *)(param_2 + 0x20);
  if (0 < iVar11) {
    FUN_0305c42c(param_1 + 10,PTR_PTR_047d1a50);
    iVar11 = *(int *)(param_2 + 0x20);
  }
  if (iVar11 != 0) {
    uVar16 = (long)iVar11 * 0x90 - 0x90;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar14 = *(long *)(param_2 + 0x18);
    lVar12 = (long)(int)param_1[0xb];
    if ((SUB164(auVar7 * ZEXT816(0xe38e38e38e38e38f),8) >> 7 & 1) == 0) {
      *(undefined4 *)(param_1[10] + lVar12 * 4) = *(undefined4 *)(lVar14 + 0x70);
      lVar12 = lVar12 + 1;
      *(int *)(param_1 + 0xb) = (int)lVar12;
      lVar13 = lVar14 + 0x90;
    }
    else {
      lVar13 = lVar14;
    }
    if (0x8f < uVar16) {
      do {
        *(undefined4 *)(param_1[10] + lVar12 * 4) = *(undefined4 *)(lVar13 + 0x70);
        *(int *)(param_1 + 0xb) = (int)lVar12 + 1;
        puVar3 = (undefined4 *)(lVar13 + 0x100);
        lVar13 = lVar13 + 0x120;
        lVar1 = lVar12 * 4;
        lVar12 = lVar12 + 2;
        *(undefined4 *)(param_1[10] + lVar1 + 4) = *puVar3;
        *(int *)(param_1 + 0xb) = (int)lVar12;
      } while (lVar14 + (long)iVar11 * 0x90 != lVar13);
    }
  }
  return;
}


