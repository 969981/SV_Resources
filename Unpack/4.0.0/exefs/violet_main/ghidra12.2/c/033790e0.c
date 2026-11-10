/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033790e0; name: FUN_033790e0
 */


void FUN_033790e0(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) * 0x18);
      iVar13 = *(int *)(param_1 + 1);
      if (0 < iVar13) {
        puVar14 = (undefined8 *)*param_1;
        iVar9 = 0;
        puVar10 = puVar7;
        puVar11 = puVar14;
        do {
          uVar3 = puVar11[1];
          *puVar10 = *puVar11;
          puVar10[1] = uVar3;
          uVar12 = puVar11[2];
          puVar10[2] = uVar12;
          if ((uVar12 & 1) != 0) {
            piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          iVar9 = iVar9 + 1;
          puVar10 = puVar10 + 3;
          puVar11 = puVar11 + 3;
        } while (iVar9 != iVar13);
        iVar9 = 0;
        do {
          if ((puVar14[2] & 1) != 0) {
            plVar8 = (long *)(puVar14[2] & 0xfffffffffffffffe);
            plVar2 = plVar8 + 1;
            do {
              lVar6 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = (int)lVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          iVar9 = iVar9 + 1;
          puVar14 = puVar14 + 3;
        } while (iVar9 != iVar13);
        iVar13 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar7;
      *(int *)((long)param_1 + 0xc) = iVar13;
    }
  }
  return;
}


