/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0d688; name: FUN_00e0d688
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0d688(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047e4f20;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 1;
  puVar1 = PTR_DAT_047d1a08;
  *(undefined1 *)(param_1 + 0x10) = 0;
  local_38 = 0xd0;
  plVar7 = (long *)(**(code **)puVar1)(0,&local_38,0);
  pcVar9 = *(code **)(puVar1 + 0x10);
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(plVar7,"hkaiDirectedGraphInstanceData");
  }
  plVar7[1] = 0xffffffff;
  plVar11 = plVar7 + 2;
  *plVar11 = 1;
  puVar1 = PTR_DAT_047e4f28 + 0x10;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  *plVar7 = (long)puVar1;
  *(undefined8 *)((long)plVar7 + 0x5c) = 0xffffffffffffffff;
  plVar7[0xf] = -0x8000000000000000;
  plVar7[0x10] = 0;
  plVar7[0x19] = -0x8000000000000000;
  plVar7[0x11] = -0x8000000000000000;
  plVar7[0x12] = 0;
  plVar7[0x13] = -0x8000000000000000;
  plVar7[0x14] = 0;
  plVar7[0x15] = -0x8000000000000000;
  plVar7[0x16] = 0;
  plVar7[0x17] = -0x8000000000000000;
  plVar7[0x18] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  plVar8 = (long *)param_1[4];
  if (plVar8 != plVar7) {
    if (plVar7[1] != 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar8 = (long *)param_1[4];
    }
    param_1[4] = (long)plVar7;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar2 = plVar8 + 2;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  if (plVar7[1] != 0) {
    do {
      lVar10 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  lVar6 = _UNK_03cabe68;
  lVar5 = _DAT_03cabe60;
  lVar10 = DAT_03cab620;
  param_1[9] = DAT_03cab628;
  param_1[8] = lVar10;
  param_1[0xb] = lVar6;
  param_1[10] = lVar5;
  lVar6 = _UNK_03cabe58;
  lVar5 = _DAT_03cabe50;
  lVar10 = _DAT_03caa5b0;
  param_1[0xd] = _UNK_03caa5b8;
  param_1[0xc] = lVar10;
  param_1[0xf] = lVar6;
  param_1[0xe] = lVar5;
  return;
}


