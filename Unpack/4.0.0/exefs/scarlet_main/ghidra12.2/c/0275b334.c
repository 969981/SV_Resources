/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275b334; name: FUN_0275b334
 */


void FUN_0275b334(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  
  plVar1 = (long *)(param_1 + 0x70);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x78) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0275b36c:
  while ((lVar5 != 0 && (lVar4 != lVar5))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x78);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x78) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar5 || *(long *)(param_1 + 0x78) != lVar6) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_0275b39c;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x74) = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_0275b39c:
  if (!bVar7) {
    lVar5 = lVar2;
    lVar6 = *(long *)(param_1 + 0x78);
    goto LAB_0275b36c;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(*(long *)(param_1 + 0x38) - lVar4) >> 3) != 0) {
    uVar8 = 0;
    do {
      FUN_00c4b998(*(undefined8 *)(*(long *)(lVar4 + uVar8 * 8) + 200),0x1f,
                   *(undefined4 *)param_2[1],*param_2 + 0x30);
      lVar4 = *(long *)(param_1 + 0x30);
      uVar8 = uVar8 + 1;
    } while (uVar8 < ((ulong)(*(long *)(param_1 + 0x38) - lVar4) >> 3 & 0xffffffff));
  }
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x78);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x78) = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar6 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar6 != lVar4 || lVar2 != lVar5) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto joined_r0x0275b440;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar4;
      *(long *)(param_1 + 0x74) = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
joined_r0x0275b440:
  do {
    if (bVar7) {
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x80));
      return;
    }
    do {
      lVar4 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x78);
      if (lVar4 != lVar6 || lVar5 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        lVar6 = lVar4;
        lVar2 = lVar5;
        goto joined_r0x0275b440;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x74) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
    lVar6 = lVar4;
    lVar2 = lVar5;
  } while( true );
}


