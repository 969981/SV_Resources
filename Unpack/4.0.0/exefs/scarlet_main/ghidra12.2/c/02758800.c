/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02758800; name: FUN_02758800
 */


void FUN_02758800(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long local_58;
  undefined1 auStack_38 [8];
  
  uVar2 = FUN_02758970(*param_2 + 0x108,auStack_38);
  FUN_02758a64(param_1 + 0x450,uVar2);
  if (*(long *)(param_1 + 0x450) == 0) {
    lVar7 = *param_2;
    plVar4 = (long *)(lVar7 + 0x110);
    lVar6 = *plVar4;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      lVar3 = nn::os::GetCurrentThread();
LAB_02758888:
      if (*plVar4 == 0) goto code_r0x02758890;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
      do {
        if (*plVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x118));
            while (*plVar4 == 0) {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar5) {
                *plVar4 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_02758898;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar5) {
          *plVar4 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_02758898:
      bVar5 = false;
      goto LAB_0275889c;
    }
    bVar5 = true;
LAB_0275889c:
    plVar4 = (long *)FUN_02758aa0(*(undefined8 *)(lVar7 + 0x128),*(undefined8 *)(lVar7 + 0x130));
    if ((*(long **)(lVar7 + 0x130) == plVar4) || (*plVar4 == 0)) {
      plVar4 = (long *)FUN_02758aa0(*(undefined8 *)(lVar7 + 0x160),*(undefined8 *)(lVar7 + 0x168));
      if (*(long **)(lVar7 + 0x168) == plVar4) {
        lVar3 = 0;
      }
      else {
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = *plVar4 + -0x20;
        }
      }
    }
    else {
      lVar3 = *plVar4 + -0x20;
    }
    if (!bVar5) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x118));
    }
    local_58 = lVar3;
    uVar2 = FUN_02758b78(*param_2,*(undefined8 *)(param_1 + 8),&local_58);
    FUN_02758a64(param_1 + 0x450,uVar2);
  }
  return;
code_r0x02758890:
  cVar1 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar4,0x10);
  if (bVar5) {
    *plVar4 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_02758898;
  goto LAB_02758888;
}


