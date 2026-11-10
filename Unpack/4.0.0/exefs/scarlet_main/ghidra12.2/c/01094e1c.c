/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01094e1c; name: FUN_01094e1c
 */


void FUN_01094e1c(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *local_48;
  
  plVar8 = (long *)(param_1 + 0x620);
  lVar4 = *plVar8;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar4) {
    lVar2 = nn::os::GetCurrentThread();
LAB_01094e58:
    if (*plVar8 == 0) goto code_r0x01094e60;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x628));
          while (*plVar8 == 0) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar7) {
              *plVar8 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01094e68;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01094e68:
    bVar7 = false;
    goto LAB_01094e6c;
  }
  plVar8 = (long *)0x0;
  bVar7 = true;
LAB_01094e6c:
  puVar5 = *(undefined8 **)(param_1 + 0x638);
  puVar9 = *(undefined8 **)(param_1 + 0x640);
  if ((puVar5 != puVar9) && (plVar3 = (long *)FUN_014af4e8(*puVar5), *plVar3 != *param_2)) {
    do {
      puVar6 = puVar5 + 4;
      puVar5 = puVar9;
      if (puVar9 == puVar6) break;
      plVar3 = (long *)FUN_014af4e8(*puVar6);
      puVar5 = puVar6;
    } while (*plVar3 != *param_2);
  }
  if (*(undefined8 **)(param_1 + 0x640) != puVar5) {
    FUN_00cebc38(&local_48,param_1);
    if (local_48 != (long *)0x0) {
      FUN_0109502c(*puVar5,local_48,param_1);
      (**(code **)(*local_48 + 0x60))(local_48);
    }
    FUN_01094fc8((undefined8 *)(param_1 + 0x638),puVar5);
    puVar5 = *(undefined8 **)(param_1 + 0x640);
  }
  if (*(undefined8 **)(param_1 + 0x638) == puVar5) {
    FUN_00e5ad48(param_1);
  }
  if (!bVar7) {
    *plVar8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    return;
  }
  return;
code_r0x01094e60:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar7) {
    *plVar8 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01094e68;
  goto LAB_01094e58;
}


