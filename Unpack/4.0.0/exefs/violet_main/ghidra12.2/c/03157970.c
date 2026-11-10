/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03157970; name: FUN_03157970
 */


void FUN_03157970(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x28);
      puVar5 = PTR_PTR_047d1a50;
      iVar10 = *(int *)(param_1 + 1);
      if (0 < iVar10) {
        puVar11 = (undefined4 *)*param_1;
        puVar13 = puVar6;
        puVar14 = puVar11;
        iVar12 = iVar10;
        do {
          *puVar13 = *puVar14;
          FUN_030daf4c(puVar14 + 2,puVar5);
          *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar14 + 2);
          puVar13[4] = puVar14[4];
          puVar13[5] = puVar14[5];
          *(undefined8 *)(puVar14 + 2) = 0;
          *(undefined8 *)(puVar14 + 4) = 0;
          *(undefined8 *)(puVar13 + 6) = *(undefined8 *)(puVar14 + 6);
          iVar12 = iVar12 + -1;
          puVar13[8] = puVar14[8];
          *(undefined **)(puVar14 + 6) = &DAT_03d7702c;
          puVar14[8] = 0;
          puVar4 = PTR_DAT_047d1a08;
          puVar14 = puVar14 + 10;
          puVar13 = puVar13 + 10;
        } while (iVar12 != 0);
        iVar12 = 0;
        do {
          lVar8 = *(long *)(puVar11 + 6);
          if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
            (**(code **)(puVar4 + 8))(puVar5[8],lVar8,0);
            *(undefined **)(puVar11 + 6) = &DAT_03d7702c;
            puVar11[8] = 0;
          }
          if (puVar11[4] != 0) {
            lVar15 = *(long *)(puVar11 + 2);
            lVar8 = lVar15 + (long)(int)puVar11[4] * 0x10;
            do {
              plVar7 = *(long **)(lVar8 + -8);
              lVar8 = lVar8 + -0x10;
              if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
                plVar1 = plVar7 + 2;
                do {
                  lVar9 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar9 + -1 == 0) {
                  (**(code **)(*plVar7 + 0x18))();
                }
              }
            } while (lVar8 != lVar15);
          }
          puVar11[4] = 0;
          if ((-1 < (int)puVar11[5]) && (*(long *)(puVar11 + 2) != 0)) {
            (**(code **)(*(long *)puVar5 + 0x20))
                      (puVar5,*(long *)(puVar11 + 2),(ulong)(uint)puVar11[5] << 4);
          }
          iVar12 = iVar12 + 1;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar11[5] = 0x80000000;
          puVar11 = puVar11 + 10;
        } while (iVar12 != iVar10);
        iVar10 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar6;
      *(int *)((long)param_1 + 0xc) = iVar10;
    }
  }
  return;
}


