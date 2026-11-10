/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ead0d0; name: FUN_00ead0d0
 */


void FUN_00ead0d0(long param_1,int param_2,int param_3,char *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int local_28;
  int iStack_24;
  
  plVar1 = (long *)(param_1 + 0x30);
  local_28 = param_2;
  iStack_24 = param_3;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00ead10c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00ead10c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00ead10c:
  piVar6 = *(int **)(param_1 + 0xd8);
  do {
    if (piVar6 == *(int **)(param_1 + 0xe0)) {
      FUN_00ed5784((undefined8 *)(param_1 + 0xd8),&local_28,&iStack_24,param_4);
LAB_00ead180:
      lVar5 = *(long *)(param_1 + 0x208);
      lVar7 = *(long *)(param_1 + 0x210);
      if (((lVar5 != lVar7) && (*(undefined1 *)(lVar5 + 0x10) = 1, lVar5 + 0x18 != lVar7)) &&
         (*(undefined1 *)(lVar5 + 0x28) = 1, lVar5 + 0x30 != lVar7)) {
        *(undefined1 *)(lVar5 + 0x40) = 1;
        for (lVar5 = lVar5 + 0x48; lVar5 != lVar7; lVar5 = lVar5 + 0x18) {
          *(undefined1 *)(lVar5 + 0x10) = 1;
        }
      }
LAB_00ead1c8:
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
      return;
    }
    if ((*piVar6 == local_28) && (piVar6[1] == iStack_24)) {
      cVar3 = (char)piVar6[4];
      if ((cVar3 == '\0') || (*param_4 == '\0')) {
        if (*param_4 == '\0' && cVar3 == '\0') goto LAB_00ead1c8;
      }
      else if (*(long *)(piVar6 + 6) == *(long *)(param_4 + 8)) goto LAB_00ead1c8;
      uVar2 = *(undefined8 *)(param_4 + 8);
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)param_4;
      *(undefined8 *)(piVar6 + 6) = uVar2;
      goto LAB_00ead180;
    }
    piVar6 = piVar6 + 8;
  } while( true );
}


