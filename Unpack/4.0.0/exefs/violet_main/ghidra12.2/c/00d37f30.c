/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d37f30; name: FUN_00d37f30
 */


void FUN_00d37f30(long param_1,long param_2)

{
  char cVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long local_28;
  
  plVar10 = (long *)(param_2 + 0x508);
  lVar8 = *plVar10;
  local_28 = param_2;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar8) {
    lVar3 = nn::os::GetCurrentThread();
LAB_00d37f6c:
    if (*plVar10 == 0) goto code_r0x00d37f74;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x510));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x510));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar9) {
              *plVar10 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00d37f7c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00d37f7c:
    bVar9 = false;
    goto LAB_00d37f80;
  }
  plVar10 = (long *)0x0;
  bVar9 = true;
LAB_00d37f80:
  if (*(char *)(param_2 + 0x520) == '\0') {
    *(undefined1 *)(param_2 + 0x520) = 1;
    plVar6 = *(long **)(param_1 + 0x100);
    plVar4 = *(long **)(param_1 + 0x108);
    if ((plVar6 != plVar4) && (*plVar6 != local_28)) {
      do {
        plVar6 = plVar6 + 1;
        if (plVar4 == plVar6) {
          plVar6 = plVar4;
          goto LAB_00d38008;
        }
      } while (*plVar6 != local_28);
    }
    if ((plVar6 != plVar4) && (plVar6 + 1 != plVar4)) {
      plVar7 = plVar6 + 2;
      while( true ) {
        plVar5 = plVar6;
        if (plVar7[-1] != local_28) {
          plVar5 = plVar6 + 1;
          *plVar6 = plVar7[-1];
        }
        plVar6 = plVar5;
        if (plVar4 == plVar7) break;
        plVar7 = plVar7 + 1;
      }
      plVar4 = *(long **)(param_1 + 0x108);
    }
LAB_00d38008:
    if (plVar4 != plVar6) {
      sVar2 = (long)plVar4 - (long)(plVar6 + 1);
      if (sVar2 != 0) {
        memmove(plVar6,plVar6 + 1,sVar2);
      }
      *(size_t *)(param_1 + 0x108) = (long)plVar6 + sVar2;
    }
    plVar6 = *(long **)(param_1 + 200);
    plVar4 = *(long **)(param_1 + 0xd0);
    if ((plVar6 != plVar4) && (*plVar6 != local_28)) {
      do {
        plVar6 = plVar6 + 1;
        if (plVar4 == plVar6) {
          plVar6 = plVar4;
          goto LAB_00d38088;
        }
      } while (*plVar6 != local_28);
    }
    if ((plVar6 != plVar4) && (plVar6 + 1 != plVar4)) {
      plVar7 = plVar6 + 2;
      while( true ) {
        plVar5 = plVar6;
        if (plVar7[-1] != local_28) {
          plVar5 = plVar6 + 1;
          *plVar6 = plVar7[-1];
        }
        plVar6 = plVar5;
        if (plVar4 == plVar7) break;
        plVar7 = plVar7 + 1;
      }
      plVar4 = *(long **)(param_1 + 0xd0);
    }
LAB_00d38088:
    if (plVar4 == plVar6) {
      FUN_00da01d0(param_1 + 0x58,&local_28);
      *(undefined1 *)(param_1 + 0x3e4) = 1;
    }
    else {
      sVar2 = (long)plVar4 - (long)(plVar6 + 1);
      if (sVar2 != 0) {
        memmove(plVar6,plVar6 + 1,sVar2);
      }
      *(size_t *)(param_1 + 0xd0) = (long)plVar6 + sVar2;
    }
  }
  if (!bVar9) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    return;
  }
  return;
code_r0x00d37f74:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar9) {
    *plVar10 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d37f7c;
  goto LAB_00d37f6c;
}


