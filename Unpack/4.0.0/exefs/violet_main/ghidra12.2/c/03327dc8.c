/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03327dc8; name: FUN_03327dc8
 */


void FUN_03327dc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar5 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)(int)param_1[1] * 0x30);
      iVar10 = (int)param_1[1];
      if (0 < iVar10) {
        puVar11 = (undefined8 *)*param_1;
        puVar8 = puVar5;
        puVar9 = puVar11;
        iVar7 = iVar10;
        do {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = 0;
          puVar8[3] = puVar9[3];
          puVar8[4] = puVar9[4];
          iVar7 = iVar7 + -1;
          puVar8[5] = puVar9[5];
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[3] = 0;
          puVar9 = puVar9 + 6;
          puVar8 = puVar8 + 6;
        } while (iVar7 != 0);
        iVar7 = 0;
        do {
          if ((puVar11[5] & 1) != 0) {
            plVar6 = (long *)(puVar11[5] & 0xfffffffffffffffe);
            plVar1 = plVar6 + 1;
            do {
              lVar4 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          if ((puVar11[2] & 1) != 0) {
            plVar6 = (long *)(puVar11[2] & 0xfffffffffffffffe);
            plVar1 = plVar6 + 1;
            do {
              lVar4 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          iVar7 = iVar7 + 1;
          puVar11 = puVar11 + 6;
        } while (iVar7 != iVar10);
        iVar10 = (int)param_1[1];
      }
      *param_1 = (long)puVar5;
      *(int *)((long)param_1 + 0xc) = iVar10;
    }
  }
  return;
}


