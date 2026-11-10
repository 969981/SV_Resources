/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea3fc0; name: FUN_01ea3fc0
 */


bool FUN_01ea3fc0(long param_1,byte *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ushort *puVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long local_68 [5];
  
  if (*param_3 == 0) {
    return false;
  }
  if (*(short *)(*param_3 + 0x1a) == 0) {
    return false;
  }
  puVar6 = *(ushort **)(param_1 + 0x4058);
  puVar7 = *(ushort **)(param_1 + 0x4060);
  if (puVar6 == puVar7) {
LAB_01ea4054:
    if ((puVar6 != puVar7) && (lVar3 = *(long *)(puVar6 + 0x38), lVar3 != 0)) goto LAB_01ea407c;
  }
  else {
    do {
      if ((*(int *)(puVar6 + 0x3c) == 0) && ((*puVar6 & 3) == (ushort)*param_2)) goto LAB_01ea4054;
      puVar6 = puVar6 + 0x58;
    } while (puVar7 != puVar6);
  }
  puVar6 = *(ushort **)(param_1 + 0x4090);
  puVar7 = *(ushort **)(param_1 + 0x4098);
  if (puVar6 != puVar7) {
    while ((*(int *)(puVar6 + 0x3c) != 0 || ((*puVar6 & 3) != (ushort)*param_2))) {
      puVar6 = puVar6 + 0xe4;
      if (puVar7 == puVar6) {
        return false;
      }
    }
  }
  if (puVar6 == puVar7) {
    return false;
  }
  lVar3 = *(long *)(puVar6 + 0x38);
  if (lVar3 == 0) {
    return false;
  }
LAB_01ea407c:
  if ((*param_3 != 0) && (lVar9 = *(long *)(*param_3 + 0x10), lVar9 != 0)) {
    plVar5 = (long *)(lVar9 + 0xe8);
    lVar8 = *plVar5;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar8) {
      lVar4 = nn::os::GetCurrentThread();
      bVar10 = false;
LAB_01ea41a4:
      if (*plVar5 == 0) goto code_r0x01ea41ac;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
      bVar10 = false;
      do {
        if (*plVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
            while (*plVar5 == 0) {
              cVar1 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar10) {
                *plVar5 = lVar4;
                cVar1 = ExclusiveMonitorsStatus();
              }
              bVar10 = false;
              if (cVar1 == '\0') goto LAB_01ea40c8;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_01ea40c8;
    }
    bVar10 = true;
LAB_01ea40c8:
    plVar5 = (long *)FUN_01839520(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
    if ((*(long **)(lVar9 + 0x108) == plVar5) || (*plVar5 == 0)) {
      plVar5 = (long *)FUN_01839520(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
      if (*(long **)(lVar9 + 0x140) == plVar5) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*plVar5 != 0) {
          lVar4 = *plVar5 + -0x20;
        }
      }
    }
    else {
      lVar4 = *plVar5 + -0x20;
    }
    if (!bVar10) {
      *(undefined8 *)(lVar9 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
    }
    if (((lVar4 != 0) && (*(long *)(lVar3 + 0x50) != 0)) &&
       (lVar9 = *(long *)(*(long *)(lVar3 + 0x50) + 0x10), lVar9 != 0)) {
      FUN_018b7350(local_68,lVar9 + -0x28,*(undefined8 *)(lVar3 + 8));
      if (local_68[0] != 0) {
        FUN_01896cc0(lVar4);
      }
      FUN_01ea72fc(local_68);
      return local_68[0] != 0;
    }
  }
  return false;
code_r0x01ea41ac:
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar2) {
    *plVar5 = lVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01ea40c8;
  goto LAB_01ea41a4;
}


