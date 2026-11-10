/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c65afc; name: FUN_00c65afc
 */


void FUN_00c65afc(long param_1)

{
  long *plVar1;
  void *pvVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if ((*(int *)(param_1 + 0x130) != 2) || (*(long *)(param_1 + 0x138) == 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0x140) == 0) || (*(char *)(*(long *)(param_1 + 0x140) + 0x69) == '\0')) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
    puVar6 = (undefined8 *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
    uVar12 = puVar6[1];
    uVar11 = *puVar6;
    uVar14 = puVar6[3];
    uVar13 = puVar6[2];
    uVar16 = puVar6[5];
    uVar15 = puVar6[4];
    uVar17 = puVar6[6];
    *(undefined8 *)(lVar9 + 0x418) = puVar6[7];
    *(undefined8 *)(lVar9 + 0x410) = uVar17;
    *(undefined8 *)(lVar9 + 1000) = uVar12;
    *(undefined8 *)(lVar9 + 0x3e0) = uVar11;
    *(undefined8 *)(lVar9 + 0x3f8) = uVar14;
    *(undefined8 *)(lVar9 + 0x3f0) = uVar13;
    *(undefined8 *)(lVar9 + 0x408) = uVar16;
    *(undefined8 *)(lVar9 + 0x400) = uVar15;
    FUN_00c65cc8(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    cVar10 = '\0';
  }
  else {
    cVar10 = '\n';
  }
  plVar1 = (long *)(param_1 + 0x180);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c65b88;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c65b88;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c65b88:
  pvVar8 = *(void **)(param_1 + 0x148);
  pvVar2 = *(void **)(param_1 + 0x150);
  if (pvVar8 != pvVar2) {
    pvVar7 = (void *)FUN_00c4c40c(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70),
                                  *(undefined2 *)((long)pvVar8 + 0x40));
    memcpy(pvVar8,pvVar7,0x40);
    while (pvVar7 = (void *)((long)pvVar8 + 0x50), pvVar7 != pvVar2) {
      pvVar8 = (void *)FUN_00c4c40c(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70),
                                    *(undefined2 *)((long)pvVar8 + 0x90));
      memcpy(pvVar7,pvVar8,0x40);
      pvVar8 = pvVar7;
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
  if ((*(char *)(param_1 + 0x58) == cVar10) && (*(char *)(param_1 + 0x59) == cVar10)) {
    return;
  }
  uVar3 = *(undefined2 *)(param_1 + 0x58);
  plVar1 = (long *)(param_1 + 0x38);
  *(char *)(param_1 + 0x58) = cVar10;
  *(char *)(param_1 + 0x59) = cVar10;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c65bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
  return;
}


