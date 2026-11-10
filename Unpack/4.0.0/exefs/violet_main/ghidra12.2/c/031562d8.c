/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031562d8; name: FUN_031562d8
 */


void FUN_031562d8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar4 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                         (PTR_PTR_047d1a50,(long)*(int *)(param_1 + 1) << 4);
      uVar10 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar10) {
        puVar11 = (undefined4 *)*param_1;
        puVar6 = puVar4;
        puVar7 = puVar11;
        if (uVar10 != 1) {
          iVar9 = -(uVar10 & 0xfffffffe);
          do {
            *puVar6 = *puVar7;
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
            *(undefined8 *)(puVar7 + 2) = 0;
            puVar6[4] = puVar7[4];
            *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)(puVar7 + 6) = 0;
            puVar6 = puVar6 + 8;
            puVar7 = puVar7 + 8;
            iVar9 = iVar9 + 2;
          } while (iVar9 != 0);
        }
        if ((uVar10 & 1) != 0) {
          *puVar6 = *puVar7;
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)(puVar7 + 2) = 0;
        }
        uVar12 = 0;
        do {
          plVar5 = *(long **)(puVar11 + 2);
          if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
            plVar1 = plVar5 + 2;
            do {
              lVar8 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 + -1 == 0) {
              (**(code **)(*plVar5 + 0x18))();
            }
          }
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 4;
        } while (uVar12 != uVar10);
        uVar10 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar4;
      *(uint *)((long)param_1 + 0xc) = uVar10;
    }
  }
  return;
}


