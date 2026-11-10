/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dadbd8; name: FUN_01dadbd8
 */


void FUN_01dadbd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *__dest;
  
  *param_1 = &PTR___cxa_pure_virtual_04540128;
  plVar6 = (long *)FUN_012a6cd0();
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01dadc18;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar6 + 1));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar6 + 1));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01dadc18;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01dadc18:
  puVar5 = PTR_DAT_047d8bb8;
  lVar7 = *(long *)(PTR_DAT_047d8bb8 + 0x800);
  puVar1 = (undefined8 *)(PTR_DAT_047d8bb8 + lVar7 * 8);
  puVar2 = (undefined8 *)PTR_DAT_047d8bb8;
  if (lVar7 != 0) {
    puVar2 = puVar1;
  }
  __dest = (undefined8 *)PTR_DAT_047d8bb8;
  if (*(undefined8 **)PTR_DAT_047d8bb8 != param_1 && puVar2 != (undefined8 *)PTR_DAT_047d8bb8) {
    do {
      __dest = __dest + 1;
      if (puVar2 == __dest) {
        __dest = puVar2;
        goto LAB_01dadc44;
      }
    } while ((undefined8 *)*__dest != param_1);
  }
LAB_01dadc44:
  if (puVar2 != __dest) {
    puVar2 = __dest + 1;
    if (puVar2 != puVar1) {
      memmove(__dest,puVar2,(long)puVar1 - (long)puVar2);
      lVar7 = *(long *)(puVar5 + 0x800);
    }
    *(long *)(puVar5 + 0x800) = lVar7 + -1;
  }
  *plVar6 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
  return;
}


