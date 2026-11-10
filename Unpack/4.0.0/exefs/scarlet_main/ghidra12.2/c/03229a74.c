/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03229a74; name: FUN_03229a74
 */


void FUN_03229a74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 local_28;
  
  plVar6 = (long *)FUN_0322a644(param_3);
  puVar4 = PTR_DAT_047d1a08;
  if (plVar6 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = plVar6;
    if ((param_4 & 1) != 0) {
      local_28 = 0x48;
      plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
      pcVar9 = *(code **)(puVar4 + 0x10);
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(plVar7,"hkBufferedStreamReader");
      }
      puVar5 = PTR_DAT_047e5f98;
      plVar7[2] = 1;
      plVar7[3] = (long)plVar6;
      *plVar7 = (long)(puVar5 + 0x10);
      plVar7[1] = 0xffffffff;
      lVar8 = (**(code **)(*plVar6 + 0x40))(plVar6);
      plVar7[4] = lVar8;
      local_28 = 0x10000;
      lVar8 = (**(code **)puVar4)(0,&local_28,0x40);
      plVar7[5] = lVar8;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar7[8] = 0x10000;
      if (*(long *)(plVar7[3] + 8) != 0) {
        plVar1 = (long *)(plVar7[3] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (plVar6[1] != 0) {
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
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
    }
  }
  *param_1 = plVar7;
  return;
}


