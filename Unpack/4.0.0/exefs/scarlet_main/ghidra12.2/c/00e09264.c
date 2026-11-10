/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e09264; name: FUN_00e09264
 */


void FUN_00e09264(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_48 [8];
  undefined8 local_28;
  
  puVar4 = PTR_DAT_047d1a08;
  if (((param_2 < *(int *)(param_1 + 0x98)) &&
      (*(long *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 8) == 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    local_28 = 0xd0;
    lVar8 = (long)param_2;
    uVar5 = (**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(uVar5,"hkaiNavMeshInstance");
    }
    FUN_00e0d3dc(uVar5);
    plVar6 = *(long **)(*(long *)(param_1 + 0xa0) + lVar8 * 8);
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar8 * 8) = uVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
    FUN_00e0d300(*(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar8 * 8),
                 *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar8 * 8),
                 param_2 + *(int *)(param_1 + 0x1e0) * 1000000);
    FUN_00e0d818(auStack_48,*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar8 * 8),0,0,0,0,0);
  }
  return;
}


