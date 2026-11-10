/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d5234; name: FUN_021d5234
 */


bool FUN_021d5234(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_38 [8];
  
  lVar4 = FUN_00efcb90(param_1 + 0x108,auStack_38);
  bVar3 = false;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x148);
    lVar6 = *plVar1;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar6) {
      lVar5 = nn::os::GetCurrentThread();
LAB_021d5278:
      if (*plVar1 == 0) goto code_r0x021d5280;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x150));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x150));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_021d5288;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_021d5288:
      cVar2 = *(char *)(lVar4 + 0x140);
      *(undefined8 *)(lVar4 + 0x148) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x150));
      goto LAB_021d529c;
    }
    cVar2 = *(char *)(lVar4 + 0x140);
LAB_021d529c:
    bVar3 = cVar2 != '\0';
  }
  return bVar3;
code_r0x021d5280:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021d5288;
  goto LAB_021d5278;
}


