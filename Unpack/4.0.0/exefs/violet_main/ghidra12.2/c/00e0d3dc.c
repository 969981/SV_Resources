/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0d3dc; name: FUN_00e0d3dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0d3dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  undefined8 local_38;
  
  lVar4 = DAT_03cab628;
  lVar11 = DAT_03cab620;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar6 = _UNK_03cabe68;
  lVar5 = _DAT_03cabe60;
  *param_1 = (long)(PTR_DAT_047e4f90 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[0xd] = lVar4;
  param_1[0xc] = lVar11;
  param_1[0xf] = lVar6;
  param_1[0xe] = lVar5;
  lVar6 = _UNK_03cabe58;
  lVar5 = _DAT_03cabe50;
  lVar4 = _UNK_03caa5b8;
  lVar11 = _DAT_03caa5b0;
  param_1[0x18] = 0;
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x11] = lVar4;
  param_1[0x10] = lVar11;
  param_1[0x13] = lVar6;
  param_1[0x12] = lVar5;
  puVar7 = PTR_DAT_047d1a08;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_38 = 0x1b0;
  plVar8 = (long *)(**(code **)puVar7)(0,&local_38,0);
  pcVar10 = *(code **)(puVar7 + 0x10);
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(plVar8,"hkaiNavMeshInstanceData");
  }
  FUN_03090e94(plVar8);
  *(undefined1 *)(param_1 + 6) = 1;
  plVar9 = (long *)param_1[4];
  if (plVar9 != plVar8) {
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar9 = (long *)param_1[4];
    }
    param_1[4] = (long)plVar8;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar1 = plVar9 + 2;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar9 = plVar8 + 2;
    do {
      lVar11 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  return;
}


