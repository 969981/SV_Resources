/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a85b4; name: FUN_030a85b4
 */


void FUN_030a85b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_047e5038;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  puVar4 = PTR_DAT_047d1a08;
  param_1[0xd] = 0;
  local_38 = 0xa0;
  plVar5 = (long *)(**(code **)puVar4)(0,&local_38,0);
  pcVar7 = *(code **)(puVar4 + 0x10);
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(plVar5,"hkaiNavVolumeInstanceData");
  }
  plVar5[1] = 0xffffffff;
  plVar9 = plVar5 + 2;
  *plVar9 = 1;
  puVar4 = PTR_DAT_047e5040;
  *(undefined4 *)(plVar5 + 0x13) = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  plVar5[9] = -0x8000000000000000;
  plVar5[10] = 0;
  plVar5[0xb] = -0x8000000000000000;
  plVar5[0xc] = 0;
  plVar5[0xd] = -0x8000000000000000;
  plVar5[0xe] = 0;
  plVar5[0xf] = -0x8000000000000000;
  plVar5[0x10] = 0;
  plVar5[0x11] = -0x8000000000000000;
  plVar5[0x12] = -1;
  *(undefined1 *)(param_1 + 6) = 1;
  plVar6 = (long *)param_1[4];
  if (plVar6 != plVar5) {
    if (plVar5[1] != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)param_1[4];
    }
    param_1[4] = (long)plVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
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
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  if (plVar5[1] != 0) {
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


