/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d9a74; name: FUN_017d9a74
 */


void FUN_017d9a74(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  lVar4 = nn::os::GetCurrentThread();
  puVar3 = PTR_DAT_047dccb0;
  do {
    lVar5 = *(long *)puVar3;
    lVar6 = *(long *)(puVar3 + 8);
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(long *)puVar3 = lVar5;
      *(long *)(puVar3 + 8) = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    while ((lVar5 != 0 && (lVar4 != lVar5))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 0x10));
      do {
        lVar5 = *(long *)puVar3;
        lVar6 = *(long *)(puVar3 + 8);
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar7) {
          *(long *)puVar3 = lVar5;
          *(long *)(puVar3 + 8) = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    do {
      lVar1 = *(long *)puVar3;
      if (lVar1 != lVar5 || *(long *)(puVar3 + 8) != lVar6) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_017d9ae4;
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *(long *)puVar3 = lVar5;
        *(long *)(puVar3 + 4) = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar7 = true;
LAB_017d9ae4:
    lVar5 = lVar1;
    lVar6 = *(long *)(puVar3 + 8);
  } while (!bVar7);
  if (*(long *)(param_1 + 0x460) == *(long *)(*param_2 + 0x460)) {
    FUN_00ee7970(*(long *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x468),
                 *(undefined4 *)(*param_2 + 0x468));
  }
  do {
    lVar4 = *(long *)puVar3;
    lVar5 = *(long *)(puVar3 + 8);
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(long *)puVar3 = lVar4;
      *(long *)(puVar3 + 8) = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    lVar6 = *(long *)puVar3;
    lVar1 = *(long *)(puVar3 + 8);
    if (lVar6 != lVar4 || lVar1 != lVar5) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x017d9b54;
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *(long *)puVar3 = lVar4;
      *(long *)(puVar3 + 4) = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar7 = true;
joined_r0x017d9b54:
  do {
    if (bVar7) {
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 0x10));
      return;
    }
    do {
      lVar4 = *(long *)puVar3;
      lVar5 = *(long *)(puVar3 + 8);
      if (lVar4 != lVar6 || lVar5 != lVar1) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar6 = lVar4;
        lVar1 = lVar5;
        goto joined_r0x017d9b54;
      }
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar7) {
        *(long *)puVar3 = lVar6;
        *(long *)(puVar3 + 4) = lVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar7 = true;
    lVar6 = lVar4;
    lVar1 = lVar5;
  } while( true );
}


